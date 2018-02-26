from MethodNode import MethodNode

class ClassNode:
    def __init__(self, classInfo, classMapping=None):
        self._classInfo = classInfo
        self._methods = []
        self._classMapping = classMapping
        for n,i in classInfo['methods'].items():
            self._methods.append(MethodNode(n, i))

    def _generateHeaderIncludes(self):
        #TODO
        return u""

    def headerString(self):
        res = self._generateHeaderIncludes()

        res += u"class " + self._classInfo['name']
        if 'super' in self._classInfo:
            res += u" : public " + self._classInfo['super'] + u" {\n"
        res += "public:\n"

        for m in self._methods:
            if m.isPublic():
                res += u"    " + m.signature() + u"\n"

        res += u"};"

        return res

    def cppString(self):
        #TODO
        return u""