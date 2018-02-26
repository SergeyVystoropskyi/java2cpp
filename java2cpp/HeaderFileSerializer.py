from ClassNode import ClassNode

class GenerateHeader:
    def __init__(self, classInfo, classNode, path, override):
        self._classInfo = classInfo
        self._classNode = classNode
        self._path = path
        self._override = override