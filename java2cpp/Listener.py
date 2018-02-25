import Java8Listener
from Java8Parser import Java8Parser
from antlr4.tree.Tree import TerminalNodeImpl

class Listener(Java8Listener.Java8Listener):
    def __init__(self):
        self._currentClass = []
        self._classInfo = {}
        self._currentMethod = []
        self._inFolmalParamList = False
        self._inResult = False

    def enterNormalClassDeclaration(self, ctx):
        CLASS_NAME_IDX = len(ctx.children) - 2

        self._classInfo[ctx.children[CLASS_NAME_IDX].symbol.text] = \
            { 'name' : ctx.children[CLASS_NAME_IDX].symbol.text,
              'methods' : {}}

        self._currentClass.append(ctx.children[CLASS_NAME_IDX].symbol.text)

    def exitNormalClassDeclaration(self, ctx):
        self._currentClass.pop()

    def enterMethodDeclaration(self, ctx):
        name = None
        for c in ctx.children:
            if isinstance(c, Java8Parser.MethodHeaderContext):
                for cc in c.children:
                    if isinstance(cc, Java8Parser.MethodDeclaratorContext):
                        name = cc.children[0].symbol.text

        className = self._currentClass[-1]
        self._currentMethod.append(name)
        self._classInfo[className]['methods'][name] = {}

    def exitMethodDeclaration(self, ctx):
        self._currentMethod.pop()

    def enterMethodModifier(self, ctx):
        currentMethod = self._currentMethod[-1]
        currentClassName = self._currentClass[-1]
        if 'modifiers' not in self._classInfo[currentClassName]['methods'][currentMethod]:
            self._classInfo[currentClassName]['methods'][currentMethod]['modifiers'] = []
        self._classInfo[currentClassName]['methods'][currentMethod]['modifiers'].append(ctx.children[0].symbol.text)

    def enterResult(self, ctx):
        self._inResult = True
        if isinstance(ctx.children[0], TerminalNodeImpl):
            currentMethod = self._currentMethod[-1]
            currentClassName = self._currentClass[-1]
            self._classInfo[currentClassName]['methods'][currentMethod]['result'] = ctx.children[0].symbol.text

    def exitResult(self, ctx):
        self._inResult = False

    def enterFormalParameterList(self, ctx):
        self._inFolmalParamList = True

    def exitFormalParameterList(self, ctx):
        self._inFolmalParamList = False

    def enterVariableDeclaratorId(self, ctx):
        currentMethod = self._currentMethod[-1]
        currentClassName = self._currentClass[-1]

        if 'params' not in self._classInfo[currentClassName]['methods'][currentMethod]:
            self._classInfo[currentClassName]['methods'][currentMethod]['params'] = []

        self._classInfo[currentClassName]['methods'][currentMethod]['params'].append(ctx.children[0].symbol.text)