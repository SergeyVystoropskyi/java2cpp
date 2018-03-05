class MethodNode:
    def __init__(self, name, methodInfo, className, classMapping=None):
        self._name = name
        self._methodInfo = methodInfo
        self._className = className
        self._classMapping = classMapping

    def getJNIName(self):
        return u"j" + self._name + "_"

    def isPublic(self):
        return "public" in self._methodInfo['modifiers']

    def isStatic(self):
        return "static" in self._methodInfo['modifiers']

    def signature(self):
        res = self._methodInfo['result'].toString()

        if self.isStatic():
            res = u"static " + res

        res += u" " + self._name + u"("

        assert len(self._methodInfo['params']) == len(self._methodInfo['paramsType'])

        for i in range(len(self._methodInfo['params'])):
            res += self._methodInfo['paramsType'][i].toString() + u" " + self._methodInfo['params'][i]
            if i < len(self._methodInfo['params']) - 1:
                res += u", "

        res += u");"
        return res

    def headerIncludes(self):
        res = self._methodInfo['result'].getHeaders()

        for t in self._methodInfo['paramsType']:
            res.update(t.getHeaders())

        return res

    def isVoid(self):
        return self._methodInfo['result'].isVoid()

    def bodyAndSignature(self):
        res = self._methodInfo['result'].toString()
        res += u" " + self._className + u"::" + self._name + u"("

        assert len(self._methodInfo['params']) == len(self._methodInfo['paramsType'])

        for i in range(len(self._methodInfo['params'])):
            res += self._methodInfo['paramsType'][i].toString() + u" " + self._methodInfo['params'][i]
            if i < len(self._methodInfo['params']) - 1:
                res += u", "

        res += u") {\n"

        res += self.getJNIPackArgs()

        if not self.isVoid():
            res += u"    " + self._methodInfo['result'].toCPPJType()
            res += " jres = "
        else:
            res += u"    "

        res += u"JNISingleton::env()->" + self.getJNIMethodCaller() + u"("
        if self.isStatic():
            res += u"jclass_"
        else:
            res += u"jthis_"


        for a in self._methodInfo['params']:
            res += ', ' + self.argToJ(a)

        res += u");\n"
        if not self.isVoid():
            res += self.getJNIUnpackResult()
        res += u"}"
        return res

    def getJNIMethodFindFunction(self):
        if "static" in  self._methodInfo['modifiers']:
            return "GetStaticMethodID"
        else:
            return "GetMethodID"

    def getJNIMethodSignature(self):
        res = u"("
        for arg in self._methodInfo["paramsType"]:
            res+= arg.typeJNISignature() + u";"
        res += u")"
        res += self._methodInfo["result"].typeJNISignature()
        return res

    def getJNIMethodFindLine(self, intend=4):
        res = u" " * intend
        res += self.getJNIName() + u" = JNISingleton::env()->"
        res += self.getJNIMethodFindFunction() + u"("
        res += u"jclass_, \"" + self._name + u"\", "
        res += u"\"" + self.getJNIMethodSignature() + u"\");\n"
        return res

    def getJNIUnpackResult(self, intend=4):
        res = u" " * intend + self._methodInfo['result'].toString() + u" res;\n"
        res += self._methodInfo['result'].typeUnpack(u"jres", "res")
        res += u" " * intend + u"return res;\n"
        return res

    def argToJ(self, argName):
        return u"j" + argName

    def getJNIPackArgs(self, intend=4):
        res = u""
        intendStr = u" " * intend
        for i in range(len(self._methodInfo["paramsType"])):
            res += intendStr + self._methodInfo["paramsType"][i].toCPPJType() + u" "
            res += intendStr + self.argToJ(self._methodInfo["params"][i]) + u";\n"
            res +=  self._methodInfo["paramsType"][i].typePack(self.argToJ(self._methodInfo["params"][i]),
                                                              self._methodInfo["params"][i])
            res += u"\n"

        if self._methodInfo["paramsType"]:
            res += u"\n"

        return res

    def getJNIMethodCaller(self):
        res = u"Call"

        if self.isStatic():
            res += u"Static"

        res += self._methodInfo['result'].getJNIMethodReturnType()
        res += u"Call"

        return res