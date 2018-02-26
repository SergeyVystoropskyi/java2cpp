from MethodNode import MethodNode

class ClassNode:
    def __init__(self, classInfo, classMapping=None):
        self._classInfo = classInfo
        self._methods = []
        self._classMapping = classMapping
        for n,i in classInfo['methods'].items():
            self._methods.append(MethodNode(n, i, self._classInfo['name'], classMapping))

    def _generateMisc(self):
        return u"#pragma once\n\n"

    def _generateHeaderIncludes(self):
        includeSet = set()
        res = u""
        for m in self._methods:
            includeSet.update(m.headerIncludes())

        for i in includeSet:
            res += u"#include " + i + u"\n"
        return res

    def _generateDefaultConstructorDefinition(self):
        return u"    " + self._classInfo['name'] + u"(bool derrivedInstance=false);"

    def headerString(self):
        res = self._generateMisc()
        res += self._generateHeaderIncludes()

        res += u"\nclass " + self._classInfo['name']
        if 'super' in self._classInfo:
            res += u" : public " + self._classInfo['super'] + u" {\n"
        res += "public:\n"
        res += self._generateDefaultConstructorDefinition() + u"\n"

        for m in self._methods:
            if m.isPublic():
                res += u"    " + m.signature() + u"\n"

        res += u"};"

        return res

    def _includeCorrespondingHeader(self):
        return u"#include \"" + self._classInfo['name'] + ".h\""

    def _generateDefaultConstructorBody(self):
        #TODO
        return self._classInfo['name'] + u"::" + self._classInfo['name'] + u"(bool derrivedInstance=false) {}"

    def cppString(self):
        res = self._includeCorrespondingHeader() + u"\n\n"
        res += self._generateDefaultConstructorBody() + u"\n\n"

        for m in self._methods:
            if m.isPublic():
                res += m.bodyAndSignature() + u"\n\n"

        return res