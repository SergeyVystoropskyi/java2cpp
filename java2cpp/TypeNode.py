
class TypeNode:
    def __init__(self, type, typeMapping={}, templateArgs=None, isArray=False):
        self._type = type
        if not templateArgs:
            templateArgs = []
        self._typeMapping = typeMapping
        self._templateArgs = templateArgs
        self._isArray = isArray

    def toString(self):
        res = self._type

        if self._type in self._typeMapping.keys():
            res = self._typeMapping[self._type]

        if self._templateArgs:
            res = res + u"<" + self._templateArgs[0].toString()
            for arg in self._templateArgs[1:]:
                res = res + ", " + arg.toString()
            res = res + u">"

        if self._isArray:
            res = u"std::vector<" + res + u">"

        return res

    def addTemplateArg(self, node):
        self._templateArgs.append(node)

    def addTeplateArgs(self, args):
        self._templateArgs.extend(args)

    def setIsArray(self, isArray):
        self._isArray = isArray