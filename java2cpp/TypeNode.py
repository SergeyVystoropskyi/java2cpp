
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

        if self._type in self._typeMapping["classes"].keys():
            res = self._typeMapping["classes"][self._type]

        if self._templateArgs:
            res = res + u"<" + self._templateArgs[0].toString()
            for arg in self._templateArgs[1:]:
                res = res + ", " + arg.toString()
            res = res + u">"

        if self._isArray:
            res = u"std::vector<" + res + u">"

        return res

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

    def isSimpleType(self):
        return self._type in ["boolean", "byte", "char", "short", "int", "long", "float", "double"]

    def isVoid(self):
        return self._type == "void"