import argparse

from antlr4 import *
from Java8Lexer import Java8Lexer
from Java8Parser import Java8Parser
from Listener import Listener


def main():
    parser = argparse.ArgumentParser(
        description="Java2CPP is a tool for generating C++ which will code java code from Java sources")
    parser.add_argument('-i', '--input', help="input java file or directory", required=True)
    parser.add_argument('-o', '--output', help="directory to output c++ code", required=True)
    parser.add_argument('-f', '--force', help="override existing c++ files",
                        default=False, action='store_true')

    args = parser.parse_args()

    lexer = Java8Lexer(FileStream(args.input))
    stream = CommonTokenStream(lexer)
    parser = Java8Parser(stream)
    tree = parser.compilationUnit()
    listener = Listener()
    walker = ParseTreeWalker()
    walker.walk(listener, tree)




if __name__ == '__main__':
    main()