import Java8Listener
from Java8Parser import Java8Parser
from antlr4.tree.Tree import TerminalNodeImpl
from TypeNode import TypeNode

class Listener(Java8Listener.Java8Listener):
    def __init__(self):
        self._currentClass = []
        self._classInfo = {}
        self._currentMethod = []
        self._type = []

    def enterSuperclass(self, ctx):
        currentClassName = self._currentClass[-1]
        parent = ctx.children[1].children[0].symbol.text
        self._classInfo[currentClassName]["super"] = parent

    def enterSuperinterfaces(self, ctx):
        currentClassName = self._currentClass[-1]
        parent = ctx.children[1].children[0].children[0].children[0].symbol.text
        self._classInfo[currentClassName]["super"] = parent

    def enterUnannPrimitiveType(self, ctx):
        if isinstance(ctx.children[0], TerminalNodeImpl):
            self._type.append(TypeNode(ctx.children[0].symbol.text))

    def enterIntegralType(self, ctx):
        if isinstance(ctx.children[0], TerminalNodeImpl):
            self._type.append(TypeNode(ctx.children[0].symbol.text))

    def enterFloatingPointType(self, ctx):
        if isinstance(ctx.children[0], TerminalNodeImpl):
            self._type.append(TypeNode(ctx.children[0].symbol.text))

    def enterUnannClassType_lfno_unannClassOrInterfaceType(self, ctx):
        if isinstance(ctx.children[0], TerminalNodeImpl):
            self._type.append(TypeNode(ctx.children[0].symbol.text))

    def enterClassType_lfno_classOrInterfaceType(self, ctx):
        if isinstance(ctx.children[0], TerminalNodeImpl):
            self._type.append(TypeNode(ctx.children[0].symbol.text))

    def exitUnannArrayType(self, ctx):
        self._type[-1].setIsArray(True)

    def exitArrayType(self, ctx):
        self._type[-1].setIsArray(True)

    def exitTypeArgumentList(self, ctx):
        toPop = (len(ctx.children) + 1) / 2
        popIndex = len(self._type) - toPop
        typeArgs = self._type[popIndex:]
        self._type = self._type[:popIndex]
        self._type[-1].addTeplateArgs(typeArgs)

    def exitResult(self, ctx):
        currentMethod = self._currentMethod[-1]
        currentClassName = self._currentClass[-1]
        if isinstance(ctx.children[0], TerminalNodeImpl):
            self._classInfo[currentClassName]['methods'][currentMethod]["result"] = TypeNode(ctx.children[0].symbol.text)
        else:
            self._classInfo[currentClassName]['methods'][currentMethod]["result"] = self._type.pop()

    def enterNormalClassDeclaration(self, ctx):
        for i in reversed(ctx.children):
            if isinstance(i, TerminalNodeImpl):
                name = i.symbol.text
                self._classInfo[name] = \
                    {'name' : name,
                     'methods' : {}}
                self._currentClass.append(name)
                break

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
        self._classInfo[className]['methods'][name] = {'params':[], 'paramsType':[], 'modifiers': []}

    def exitMethodDeclaration(self, ctx):
        self._currentMethod.pop()

    def enterMethodModifier(self, ctx):
        currentMethod = self._currentMethod[-1]
        currentClassName = self._currentClass[-1]
        self._classInfo[currentClassName]['methods'][currentMethod]['modifiers'].append(ctx.children[0].symbol.text)

    def enterVariableDeclaratorId(self, ctx):
        currentMethod = self._currentMethod[-1]
        currentClassName = self._currentClass[-1]

        self._classInfo[currentClassName]['methods'][currentMethod]['paramsType'].append(self._type.pop())
        self._classInfo[currentClassName]['methods'][currentMethod]['params'].append(ctx.children[0].symbol.text)

    def getClassInfo(self):
        return self._classInfo