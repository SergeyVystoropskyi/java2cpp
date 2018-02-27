from MethodNode import MethodNode

class ClassNode:
    def __init__(self, classInfo, classMapping=None):
        self._classInfo = classInfo
        self._methods = []
        self._classMapping = classMapping
        for n,i in classInfo['methods'].items():
            self._methods.append(MethodNode(n, i, self._classInfo['name'], classMapping))

    def _generateMisc(self):
        return u"#pragma once\n\n"

    def _generateHeaderIncludes(self):
        includeSet = set()
        res = u""
        for m in self._methods:
            includeSet.update(m.headerIncludes())

        for i in includeSet:
            res += u"#include " + i + u"\n"

        res += u"#include <jni.h>\n"
        return res

    def _generateDefaultConstructorDefinition(self):
        return u"    " + self._classInfo['name'] + u"(bool derrivedInstance=false);"

    def headerString(self):
        res = self._generateMisc()
        res += self._generateHeaderIncludes()

        res += u"\nclass " + self._classInfo['name']
        if 'super' in self._classInfo:
            res += u" : public " + self._classInfo['super'] + u" {\n"
        res += u"public:\n"
        res += self._generateDefaultConstructorDefinition() + u"\n"

        for m in self._methods:
            if m.isPublic():
                res += u"    " + m.signature() + u"\n"

        res += u"\nprotected:\n"

        res += u"    static jclass jthis_;\n"
        for m in self._methods:
            if m.isPublic():
                res += u"    static jmethodID " + m.getJNIName() + u";\n"

        res += u"\nprotected:\n"
        res += "    static void jInit(bool shouldRun);\n"
        res += u"};"

        return res

    def _includeCPP(self):
        res = u"#include \"" + self._classInfo['name'] + ".h\""
        return res

    def _generateDefaultConstructorBody(self):
        #TODO
        res = self._classInfo['name'] + u"::" + self._classInfo['name'] + u"(bool derrivedInstance=false) {"


        res += u"}"
        return res

    def _generateStaticInits(self):
        res = u"jclass* " + self._classInfo['name'] + u"::jthis_ = nullptr;\n"
        for m in self._methods:
            if m.isPublic():
                res += u"jmethodID " + self._classInfo['name'] + u"::" + m.getJNIName() + u" = nullptr;\n"
        return res + u"\n"

    def _jCheckForNull(self, varName, intend=4):
        intendStr = u" " * intend
        res = intendStr + "if (" + varName + u" == nullprt) {\n"
        res += intendStr + intendStr + u"throw std::runtime_error(\"" + varName + " should not be null\");\n"
        res += intendStr + u"}\n"
        return res

    def _generateJInit(self):
        res = u"void " + self._classInfo["name"] + u"::jInit(bool shouldRun) {\n"
        res += u"    jthis_ = JNISingleton::env()->FindClass(\"" +self._classInfo["name"] + u"\");\n"
        res += self._jCheckForNull("jthis_")
        res += u"}\n"
        return res

    def cppString(self):
        res = self._includeCPP() + u"\n\n"
        res += self._generateStaticInits()
        res += self._generateJInit()
        res += self._generateDefaultConstructorBody() + u"\n\n"

        for m in self._methods:
            if m.isPublic():
                res += m.bodyAndSignature() + u"\n\n"

        return res