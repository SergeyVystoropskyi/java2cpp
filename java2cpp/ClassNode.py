from MethodNode import MethodNode

class ClassNode:
    def __init__(self, classInfo):
        self._classInfo = classInfo
        self._methods = []
        for m in classInfo['methods']:
            self._methods.append(MethodNode(m))

    def headerString(self, classMapping):
        res = ""
        return res