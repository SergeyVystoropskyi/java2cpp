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

    def signature(self):
        res = self._methodInfo['result'].toString()

        if "static" in self._methodInfo['modifiers']:
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

    def bodyAndSignature(self):
        res = self._methodInfo['result'].toString()
        res += u" " + self._className + u"::" + self._name + u"("

        assert len(self._methodInfo['params']) == len(self._methodInfo['paramsType'])

        for i in range(len(self._methodInfo['params'])):
            res += self._methodInfo['paramsType'][i].toString() + u" " + self._methodInfo['params'][i]
            if i < len(self._methodInfo['params']) - 1:
                res += u", "

        res += u") {\n"

        #TODO: generate method body

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
