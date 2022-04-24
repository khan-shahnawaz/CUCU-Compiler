%{
    #include <stdio.h>
    #include <string.h>
    #define YYSTYPE char *
     #include "cucu.tab.h"
     int lineNumber;
     int yyerror();
     char errorMessage[] = "Unrecognised character for a token: ";
     FILE *lexer;
%}

%%

\n lineNumber++;
[ ]
\/\*(.|\n)*\*\/ { yylval = strdup(yytext); fprintf(lexer, "Comment: %s\n",yytext); }
\/\/.+ {   yylval = strdup(yytext); fprintf(lexer, "Comment: %s\n",yytext); }
(while) {   yylval = strdup(yytext); fprintf(lexer, "whileKeyword: %s\n",yytext); return whileKeyword; }
(if) {   yylval = strdup(yytext); fprintf(lexer, "ifKeyword: %s\n",yytext); return ifKeyword; }
(else) {   yylval = strdup(yytext); fprintf(lexer, "elseKeyword: %s\n",yytext); return elseKeyword; }
(return) {   yylval = strdup(yytext); fprintf(lexer, "returnKeyword: %s\n",yytext); return returnKeyword; }
(int)|(char[ ]+\*+) {   yylval = strdup(yytext); fprintf(lexer, "Type: %s\n",yytext); return Type; }
[a-zA-Z][a-zA-Z0-9_]* { yylval =strdup(yytext);   fprintf(lexer, "ID: %s\n",yytext); return ID; }
\-?[0-9]+ {  yylval = strdup(yytext); fprintf(lexer, "Number: %s\n",yytext); return Number; }
\/ {   yylval = strdup(yytext); fprintf(lexer, "DivideOP: %s\n",yytext); return DivideOP; }
\* {   yylval = strdup(yytext); fprintf(lexer, "MultiplyOP: %s\n",yytext); return MultiplyOP; }
- {   yylval = strdup(yytext); fprintf(lexer, "MinusOP: %s\n",yytext); return MinusOP; } 
\+ {   yylval = strdup(yytext); fprintf(lexer, "PlusOP: %s\n",yytext); return PlusOP; } 
\[ {   yylval = strdup(yytext); fprintf(lexer, "LeftSquareBracket: %s\n",yytext); return LeftSquareBracket; }
\] {   yylval = strdup(yytext); fprintf(lexer, "RightSquareBracket: %s\n",yytext); return RightSquareBracket; }
\{ {   yylval = strdup(yytext); fprintf(lexer, "LeftCurlyBrace: %s\n",yytext); return LeftCurlyBrace; }
\} {   yylval = strdup(yytext); fprintf(lexer, "RightCurlyBrace: %s\n",yytext); return RightCurlyBrace; } 
\( {   yylval = strdup(yytext); fprintf(lexer, "LeftParen: %s\n",yytext); return LeftParen; }
\) {   yylval = strdup(yytext); fprintf(lexer, "RightParen: %s\n",yytext); return RightParen; }
\= {   yylval = strdup(yytext); fprintf(lexer, "EqualSign: %s\n",yytext); return EqualSign; }
== {   yylval = strdup(yytext); fprintf(lexer, "EqualityChecker: %s\n",yytext); return EqualityChecker; }
!= {   yylval = strdup(yytext); fprintf(lexer, "InequalityChecker: %s\n",yytext); return InequalityChecker; }
(\>=)|(\<=)|(\>)|(\<) {   yylval = strdup(yytext); fprintf(lexer, "ComparisonOP: %s\n",yytext); return ComparisonOP; }
\; {   yylval = strdup(yytext); fprintf(lexer, "Semicolon: %s\n",yytext); return Semicolon; }
\& {   yylval = strdup(yytext); fprintf(lexer, "And: %s\n",yytext); return AndOp; } 
\| {   yylval = strdup(yytext); fprintf(lexer, "OrOp: %s\n",yytext); return OrOp; } 
\&\& {   yylval = strdup(yytext); fprintf(lexer, "Logical And: %s\n",yytext); return LogicalAnd; } 
\|\| {   yylval = strdup(yytext); fprintf(lexer, "Logical Or: %s\n",yytext); return LogicalOr; } 
\"[^"\n]*\" { yylval = strdup(yytext); fprintf(lexer, "String: %s\n",yytext); return String; }
\, {   yylval = strdup(yytext); fprintf(lexer, "Comma: %s\n",yytext); return Comma; }

. {fprintf(lexer, "Character not matching with any vaild Token %s\n",yytext);strcat(errorMessage,yytext);yyerror(errorMessage);}
%%