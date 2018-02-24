import Java8Listener
from Java8Parser import Java8Parser

class Listener(Java8Listener.Java8Listener):
    def __init__(self):
        self._currentClass = []
        self._classInfo = {}
        self._methodModifiers = []

    def enterNormalClassDeclaration(self, ctx):
        CLASS_NAME_IDX = len(ctx.children) - 2

        self._classInfo[ctx.children[CLASS_NAME_IDX].symbol.text] = \
            { 'name' : ctx.children[CLASS_NAME_IDX].symbol.text}

        self._currentClass.append(ctx.children[CLASS_NAME_IDX].symbol.text)

    def exitNormalClassDeclaration(self, ctx):
        self._currentClass.pop()

    def enterMethodDeclaration(self, ctx):
        modifiers = []
        methodInfo = {}
        for c in ctx.children:
            if isinstance(c, Java8Parser.MethodModifierContext):
                modifier = c.children[0].symbol.text

                if modifier == u'private' or modifier == u'protected':
                    return

                modifiers.append(modifier)
            elif isinstance(c, Java8Parser.MethodHeaderContext):
                for cc in c.children:
                    if isinstance(cc, Java8Parser.ResultContext):
                        methodInfo['result'] = cc.children[0].symbol.text
                    elif isinstance(cc, Java8Parser.MethodDeclaratorContext):
                        methodInfo['name'] = cc.children[0].symbol.text
        print "tmp"