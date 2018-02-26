import argparse
import os

from antlr4 import *
from Java8Lexer import Java8Lexer
from Java8Parser import Java8Parser
from Listener import Listener
from ClassNode import ClassNode
from ClassMapping import typeMapping

from contextlib import closing

def generateFile(classInfo, dstPath, override):
    assert len(classInfo.keys()) == 1, "Only one class is currently supported"
    className = classInfo[classInfo.keys()[0]]['name']
    cNode = ClassNode(classInfo[classInfo.keys()[0]], typeMapping)
    headerPath = os.path.join(dstPath, className + ".h")
    cppPath = os.path.join(dstPath, className + ".cpp")
    if not os.path.isfile(headerPath) or override:
        header = cNode.headerString()
        with closing(open(headerPath, "w")) as f:
            f.write(header)

    if not os.path.isfile(cppPath) or override:
        cpp = cNode.cppString()
        with closing(open(cppPath, "w")) as f:
            f.write(cpp)

def ProcessFile(srcPath, dstPath, override):
    lexer = Java8Lexer(FileStream(srcPath))
    stream = CommonTokenStream(lexer)
    parser = Java8Parser(stream)
    tree = parser.compilationUnit()
    listener = Listener(typeMapping)
    walker = ParseTreeWalker()
    walker.walk(listener, tree)
    generateFile(listener.getClassInfo(), dstPath, override)

def ProcessDirectory(srcPath, dstPath, override):
    for path, subdirs, files in os.walk(srcPath):
        for name in files:
            src = os.path.join(path, name)
            dst = os.path.join(dstPath, name)
            ProcessFile(src, dst, override)

def ProcessFiles(srcPath, dstPath, override):
    if (os.path.isdir(srcPath)):
        ProcessDirectory(srcPath, dstPath, override)
    else:
        ProcessFile(srcPath, dstPath, override)

def main():
    parser = argparse.ArgumentParser(
        description="Java2CPP is a tool for generating C++ which will code java code from Java sources")
    parser.add_argument('-i', '--input', help="input java file or directory", required=True)
    parser.add_argument('-o', '--output', help="directory to output c++ code", required=True)
    parser.add_argument('-f', '--force', help="override existing c++ files",
                        default=False, action='store_true')

    args = parser.parse_args()

    ProcessFiles(args.input, args.output, args.force)

if __name__ == '__main__':
    main()