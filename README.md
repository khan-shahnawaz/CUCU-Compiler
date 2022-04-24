# CUCU-Compiler
A dummy compiler which is a subset of C programming language written in Lex and Yacc
How to compile and run:
    1). Use the command flex cucu.l
    2). Then run the command bison -d cucu.y
    3). Then make the executable by the command gcc lex.yy.c cucu.tab.c -lfl -o cucu
    4). An executable with name cucu will be formed.
    5). After the excutable is formed, then parse the cucu files(.cu) with the command ./cucu <filename>.cu

Assumptions and instructions:
    1). The compiler is a subset of C language. All functionablility is not implemented as a part of this assignement.
    2). The comment is recognised by /**/ (Multiline) and // (For single line). The syntax analyser completetly ignores comment and do not print anything in the parser.txt
    3). The files can be compiled using only gcc compiler(as it was made using c syntax), flex and bison. If we use g++, it may give an warning but the files will run correctly 
    4). The compiler will not show complete error analysis of the cause of the error.
    5). When an unrecognised token is received, the lexical error is printed in the end of the lexer.txt file and parser will show syntax error. The lexer.txt may contain previously recognised tokens.
    6). In case of any syntax error, only error message will be printed in the parser.txt file.
