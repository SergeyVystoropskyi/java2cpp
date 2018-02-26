class MethodNode:
    def __init__(self, name, methodInfo, classMapping=None):
        self._name = name
        self._methodInfo = methodInfo
        self._classMapping = classMapping

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

    def bodyAndSignature(self):
        pass