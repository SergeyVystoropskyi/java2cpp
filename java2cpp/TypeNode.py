
class TypeNode:
    def __init__(self, type, templateArgs=[], isArray=False):
        self._type = type
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