
class TypeNode:
    def __init__(self, type, templateArgs=None, isArray=False):
        self._type = type
        if not templateArgs:
            templateArgs = []
        self._templateArgs = templateArgs
        self._isArray = isArray

    def toString(self, typeMapping):
        res = self._type

        if self._type in typeMapping.keys():
            res = typeMapping[self._type]

        if not self._templateArgs:
            res = res + "<" + self._templateArgs[0].toString(typeMapping)
            for arg in self._templateArgs[1:]:
                res = res + ", " + arg.toString(typeMapping)
            res = res + ">"

        if self._isArray:
            res = "std::vector<" + res + ">"

        return res

    def addTemplateArg(self, node):
        self._templateArgs.append(node)

    def addTeplateArgs(self, args):
        self._templateArgs.extend(args)

    def setIsArray(self, isArray):
        self._isArray = isArray