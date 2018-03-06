
class TypeNode:
    def __init__(self, type, typeMapping={}, templateArgs=None, isArray=False):
        self._type = type
        if not templateArgs:
            templateArgs = []
        self._typeMapping = typeMapping
        self._templateArgs = templateArgs
        self._isArray = isArray

    def toString(self, skipArray=False):
        res = self._type

        if self._type in self._typeMapping["classes"].keys():
            res = self._typeMapping["classes"][self._type]

        if self._templateArgs:
            res = res + u"<" + self._templateArgs[0].toString()
            for arg in self._templateArgs[1:]:
                res = res + ", " + arg.toString()
            res = res + u">"

        if not skipArray and self._isArray:
            res = u"std::vector<" + res + u">"

        return res

    def isArray(self):
        return self._isArray

    def getHeaders(self):
        res = set()
        if self._isArray:
            res.add("<vector>")

        if self._type in self._typeMapping["headers"].keys():
            res.add(self._typeMapping["headers"][self._type])

        if self._templateArgs:
            for arg in self._templateArgs:
                res.update(arg.getHeaders())

        return res

    def addTemplateArg(self, node):
        self._templateArgs.append(node)

    def addTeplateArgs(self, args):
        self._templateArgs.extend(args)

    def setIsArray(self, isArray):
        self._isArray = isArray

    def isPackedSimpleType(self):
        return self._type in ["Boolean", "Byte", "Char", "Short", "Integer", "Long", "Float", "Double"]

    def isSimpleType(self):
        return self._type in ["boolean", "byte", "char", "short", "int", "long", "float", "double"]

    def toCPPJType(self, skipArray=False):
        assert not self.isVoid()
        if not skipArray and self._isArray:
            if self.isSimpleType():
                tr = {"boolean": "jboolean",
                      "byte": "jbyte",
                      "char": "jchar",
                      "short": "jshort",
                      "int": "jint",
                      "long": "jlong",
                      "float": "jfloat",
                      "double": "jdouble",
                 }
                return tr[self._type] + u"Array"
            return "jobjectArray"

        if self.isSimpleType():
            tr = {"boolean":"jboolean",
                  "byte":"jbyte",
                  "char":"jchar",
                  "short":"jshort",
                  "int":"jint",
                  "long":"jlong",
                  "float":"jfloat",
                  "double":"jdouble",
             }
            return tr[self._type]
        if self._type == "String":
            return "jstring"
        return "jobject"

    def isVoid(self):
        return self._type == "void"

    def getJNIMethodReturnType(self):
        if self._isArray:
            return "Object"
        if self.isVoid() or self.isSimpleType():
            return self._type.title()

        return "Object"

    def typeJNISignature(self, skipArray=False):
        res = ""

        if not skipArray and self._isArray:
            res += u"["

        if self._type in self._typeMapping['jni']:
            res += self._typeMapping['jni'][self._type]
        else:
            res += self._type

        return res

    def _getArraySetFunction(self):
        tr = {"boolean":"SetBooleanArrayRegion",
                "byte":"SetByteArrayRegion",
                "char":"SetCharArrayRegion",
                "short":"SetShortArrayRegion",
                "int":"SetIntArrayRegion",
                "long":"SetLongArrayRegion",
                "float":"SetFloatArrayRegion",
                "double":"SetDoubleArrayRegion"}

        if self._type in tr.keys():
            return tr[self._type]
        return "SetObjectArrayElement"

    def _getArrayCreateJNIFunction(self):
        tr = {
        "boolean":"NewBooleanArray",
        "byte":"NewByteArray",
        "char":"NewCharArray",
        "short":"NewShortArray",
        "int":"NewIntArray",
        "long":"NewLongArray",
        "float":"NewFloatArray",
        "double":"NewDoubleArray",
        }
        if self._type in tr.keys():
            return tr[self._type]
        return "NewObjectArray"

    def typePack(self, jVarName, varName, intend=4, depth=0, skipAray=False):
        assert not self.isVoid()

        intendStr = u" " * intend
        loopIntend = u" " * 4 + intendStr

        tr = {"boolean": "jboolean",
              "byte": "jbyte",
              "char": "jchar",
              "short": "jshort",
              "int": "jint",
              "long": "jlong",
              "float": "jfloat",
              "double": "jdouble",
              }

        if not skipAray and self._isArray:
            res = intendStr + jVarName + u" = JNISingleton::env()->" + self._getArrayCreateJNIFunction() + u"(" + varName + u".size()"
            if self._getArrayCreateJNIFunction() == "NewObjectArray":
                res += u", JNISingleton::env()->FindClass(\"" + self.typeJNISignature(True) + u"\"), nullptr"
            res += u");\n"
            res += intendStr + u"for (int i = 0; i < " + varName + u".size(); ++i) {\n"
            res += loopIntend + self.toString(True) + u" jtmpArrayFillerCpp" + str(depth) + u" = " + varName + u"[i];\n"
            res += loopIntend + self.toCPPJType(True) + u" jtmpArrayFillerJava" + str(depth) + u";\n"
            res += self.typePack(jVarName=u"jtmpArrayFillerJava" + str(depth), varName=u"jtmpArrayFillerCpp" + str(depth),
                                 intend=intend+4, depth=depth+1, skipAray=True)
            res += loopIntend + u"JNISingleton::env()->" + self._getArraySetFunction() + u"(" + jVarName + u", i, "
            if not(self._getArraySetFunction() == "SetObjectArrayElement"):
                res += u" 1, &"
            res += u"jtmpArrayFillerJava" + str(depth) + u");\n"
            res += intendStr + u"}"
            return res

        if self.isSimpleType():
            return intendStr + jVarName + u" = (" + tr[self._type] + u")" + varName + u";\n"

        if self.isPackedSimpleType():
            tr2 = {
                "Boolean": "boolean",
                "Byte": "byte",
                "Char": "char",
                "Short": "short",
                "Integer": "int",
                "Long": "long",
                "Float": "float",
                "Double": "double",
            }
            clsVarName = u"clsName" + self._type + str(depth)
            valueOfname = u"valueofMethod" + self._type + str(depth)
            res = intendStr + u"jclass " +clsVarName + u" = JNISingleton::env()->FindClass(\"" + self.typeJNISignature(True) + "\");\n"
            res += intendStr + u"if (" + clsVarName + u" == nullptr) throw std::runtime_error(\"Can not find "\
                   + self.typeJNISignature(True) + u"\");\n"
            res += intendStr + u"jmethodID " + valueOfname + u" = JNISingleton::env()->GetStaticMethodID(" +\
                   clsVarName + ", \"valueOf\", \"(" + self._typeMapping['jni'][tr2[self._type]] + u")L"\
                   + self.typeJNISignature(True) + u";\");\n"
            res += intendStr + u"if (" + valueOfname + u" == nullptr) throw std::runtime_error(\"Can not find "\
                   + self.typeJNISignature(True) + u" valueOf\");\n"
            res += intendStr + jVarName + u" = JNISingleton::env()->CallStaticObjectMethod(" + clsVarName + u", " \
                   + valueOfname + u", " + varName + ");\n"
            return res

        if self._type == "List":
            res = intendStr + u"jclass tmpJListClass" + str(depth) + u" = JNISingleton::env()->FindClass(\"java/util/ArrayList\");\n"
            res += intendStr + u"if (tmpJListClass" + str(depth) + u" == nullptr) throw std::runtime_error(\"Cannot find Java.util.List\");\n"
            res += intendStr + u"jmethodID jListCtor_" + str(depth) + u" = JNISingleton::env()->GetMethodID(tmpJListClass" + str(depth) + u", \"<init>\", \"()V\");\n"
            res += intendStr + u"if (jListCtor_" + str(depth) + u" == nullptr) throw std::runtime_error(\"Cannot find Java.util.List constructor\");\n"
            res += intendStr + jVarName + u" = JNISingleton::env()->NewObject(tmpJListClass" + str(depth) + u", jListCtor_"+ str(depth) + u");\n"
            res += intendStr + u"jmethodID jListAdd" + str(depth) + u" = JNISingleton::env()->GetMethodID(tmpJListClass"+ str(depth) +\
                   u", \"add\", \"(Ljava/lang/Object;)Z\");\n"

            res += intendStr + u"if (jListAdd" + str(depth) + u" == nullptr) throw std::runtime_error(\"Cannot find Java.util.List add method\");\n"


            res += intendStr + u"for (int i = 0; i < " + varName + u".size(); ++i) {\n"
            res += loopIntend + self._templateArgs[0].toCPPJType() + u" jargtmp" + str(depth) + u";\n"
            res += self._templateArgs[0].typePack(u"jargtmp"+str(depth), varName + u"[i]", intend+4, depth+1)
            res += loopIntend + u"JNISingleton::env()->CallBooleanMethod(" + jVarName + u", jListAdd" + str(depth) + u", jargtmp" + str(depth) + u");\n"
            res += intendStr + "}\n"
            return res

        if self._type == "String":
            res = intendStr + jVarName + u" = JNISingleton::env()->NewStringUTF(" + varName + u".c_str());\n"
            return res

        if self._type == "Map":
            res = intendStr + u"jclass tmpJMapClass" + str(depth) + u" = JNISingleton::env()->FindClass(\"java/util/HashMap\");\n"
            res += intendStr + u"if (tmpJMapClass" + str(depth) + u" == nullptr) throw std::runtime_error(\"Cannot find Java.util.HashMap\");\n"
            res += intendStr + u"jmethodID jMapCtor_" + str(depth) + u" = JNISingleton::env()->GetMethodID(tmpJMapClass" + str(depth) + u", \"<init>\", \"()V\");\n"
            res += intendStr + u"if (jMapCtor_" + str(depth) + u" == nullptr) throw std::runtime_error(\"Cannot find Java.util.Map constructor\");\n"
            res += intendStr + jVarName + u" = JNISingleton::env()->NewObject(tmpJListClass" + str(depth) + u", jListCtor_"+ str(depth) + u");\n"
            res += intendStr + u"jmethodID jMapPut" + str(depth) + u" = JNISingleton::env()->GetMethodID(tmpJMapClass"+ str(depth) +\
                   u", \"put\", \"(" + self._templateArgs[0].typeJNISignature() + u";"+ self._templateArgs[1].typeJNISignature() + u";)"\
                   + self._templateArgs[1].typeJNISignature() + u"\");\n"
            res += intendStr + u"for (int i = 0; i < " + varName + u".size(); ++i) {\n"
            res += intendStr + "}\n"
            return res

        return u"DATATYPE PACKING IS NOT IMPLEMENTED\n"

    def typeUnpack(self, jVarName, varName, intend=4, depth=0):
        assert not self.isVoid()
        intendStr = u" " * intend
        if self.isSimpleType():
            tr = {"boolean":"jboolean",
                  "byte":"jbyte",
                  "char":"jchar",
                  "short":"jshort",
                  "int":"jint",
                  "long":"jlong",
                  "float":"jfloat",
                  "double":"jdouble",
                   }
            rev_tr = {v:k for k,v in tr.items()}
            return intendStr + varName + u" = (" + rev_tr[tr[self._type]] + u")" + jVarName + u";\n"

        if self._type == "String":
            res = intendStr + u"jstring tmpres" + str(depth) + u" = (jstring)" + jVarName + ";\n"
            res += intendStr + u"jboolean isCopy" + str(depth) + u" = JNI_TRUE;\n"
            res += intendStr + varName + u" = std::string((char*)JNISingleton::env()->GetStringChars(tmpres" + str(depth) + u", &isCopy" + str(depth) + u"));\n"
            return res

        # if self._type == "List":
        #     res = intendStr + u"jclass tmpJListClass" + str(depth) + u" = JNISingleton::env()->FindClass(\"Ljava/util/List\");\n"
        #     res += intendStr + u"if (tmpJListClass == nullptr) throw std::runtime_error(\"Cannot find Java.util.List\");\n"
        #     res += intendStr + u"jmethodID tmpJListSizeMethod" + str(depth) + u" = JNISingleton::env()->GetMethodID(tmpJListClass, \"size\", \"()I\");\n"
        #     res += intendStr + u"if (tmpJListSizeMethod == nullptr) throw std::runtime_error(\"Cannot find Java.util.List size method\");\n"
        #     res += intendStr + u"jmethodID tmpJListGetMethod" + str(depth) + u" = JNISingleton::env()->GetMethodID(tmpJListClass, \"get\", \"(I)\");\n"

        return u"THIS SHOULD NOT COMPILE AS TYPE IS UNKNOWN\n"