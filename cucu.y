%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define YYSTYPE char *
    int yylex();
    int yyerror(char *msg);
    int yywrap();
    int lineNumber;
    char *yytext;
    FILE *lexer,*parser;
    char *concatenate(char *a,char *b)
    {
        int lena =strlen(a);
        int lenb = strlen(b);
        char *out = malloc((lena+lenb+1)*sizeof(char));
        int p=0;
        for (int i=0;i<lena;i++)
        {
            out[p]=a[i];
            p++;
        }
        for (int i=0;i<lenb;i++)
        {
            out[p]=b[i];
            p++;
        }
        out[p]='\0';
        return out;
    }
    
%}

%token whileKeyword ifKeyword elseKeyword Type ID Number DivideOP MultiplyOP MinusOP PlusOP LeftCurlyBrace RightCurlyBrace LeftParen RightParen EqualSign EqualityChecker InequalityChecker ComparisonOP Semicolon String Comma And LeftSquareBracket RightSquareBracket returnKeyword OrOp AndOp LogicalAnd LogicalOr Comment


%%
Program:

statementList 
{
    printf("Parsed Successfully! No errors found.");
    fprintf(parser,"%s",$$);
}


statementList: 

statement statementList
{
    $$= concatenate($1,$2);
}
| Block statementList
{
    $$= concatenate($1,$2);
}
| Comment statementList
{
    $$=$2;
}
|
{
    $$="";
}

Block:
whileLoop
{
    $$ = $1;
}
| ifElse
{
    $$ = $1;
}
| functionDeclaration
{
    $$ = $1;
    
    
}

whileLoop: 
whileKeyword LeftParen expression RightParen LeftCurlyBrace statementList RightCurlyBrace
{
    $$="While Loop with expression: ";
    $$ = concatenate($$,$3);
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$6);
}
| whileKeyword LeftParen expression RightParen statement
{
    $$="While Loop with expression: ";
    $$ = concatenate($$,$3);
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$5);
}

ifElse: ifElseUnmatched elseKeyword ifElse
{
    $$="if statement with expression: ";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"else ");
    $$ = concatenate($$,$3);
}
| ifElseUnmatched elseBlock
{
    $$="if statement with expression: ";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"else ");
    $$ = concatenate($$,$2);
}

ifElseUnmatched: 
ifKeyword LeftParen expression RightParen statement 
{
    $$ = concatenate("",$3);
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$5);
}
| ifKeyword LeftParen expression RightParen LeftCurlyBrace statementList RightCurlyBrace 
{
    $$ = concatenate("",$3);
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$6);
}

functionDeclaration: 
functionDefinition LeftCurlyBrace statementList RightCurlyBrace 
{
    $$ = "";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$3);
    
}
| functionDefinition statement
{
    $$ = "";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$2);
}

elseBlock: 
elseKeyword LeftCurlyBrace statementList RightCurlyBrace
{
    $$ = "";
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$3);
}
| elseKeyword statement
{
    $$ = "";
    $$ = concatenate($$,"\n");
    $$ = concatenate($$,$2);
}

functionDefinition: 
Type ID LeftParen Arguments RightParen
{
    $$ = "";
    $$ = concatenate($$,"Function name: ");
    $$ = concatenate($$,$2);
    $$ = concatenate($$,", Return Type: " );
    $$ = concatenate($$,$1);
    $$ = concatenate($$,", Argument(s): " );
    $$ = concatenate($$,$4);
   
}
| Type ID LeftParen RightParen
{
    $$ = "";
    $$ = concatenate($$,"Function name: ");
    $$ = concatenate($$,$2);
    $$ = concatenate($$,", Return Type: " );
    $$ = concatenate($$,$1);
    $$ = concatenate($$," [No Arguments]" );
    
}


Arguments: 
Type ID Comma Arguments
{
    $$="";
     $$ = concatenate($$, $2);
     $$ = concatenate($$, " of type:");
     $$ = concatenate($$,$1);
     $$ = concatenate($$, ", ");
     $$ = concatenate($$, $4);

}

|Type ID
{
    $$="";
     $$ = concatenate($$, $2);
     $$ = concatenate($$, " of type:");
     $$ = concatenate($$,$1);
} 
statement: 

VariableDeclaration Semicolon
{
    $$="";
    
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"statement End\n");
    
}
| Assignment Semicolon
{
    $$="";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"statement End\n");
}
| functionDefinition Semicolon 
{
    $$="";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"statement End\n");
}
| functionCall Semicolon
{
    $$="";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"statement End\n");
} 
| Return Semicolon
{
    $$="";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,"statement End\n");
}


functionCall: 
ID LeftParen Parameters RightParen
{
    $$ = "";
    $$ = concatenate($$,"Function Call with name: ");
    $$ = concatenate($$,$1);
    $$ = concatenate($$,", Parameter(s): " );
    $$ = concatenate($$,concatenate($3," "));

}
| ID LeftParen RightParen
{
    $$ = "";
    $$ = concatenate($$,"Function Call with name: ");
    $$ = concatenate($$,$1);
    $$ = concatenate($$,", [No Parameters] " );
    $$ = concatenate($$," ");
}


Parameters: 
expression Comma Parameters
{
    $$ ="";
    $$ = concatenate($$,$1);
    $$ = concatenate($$," , ");
    $$ = concatenate($$,$3);
}
| expression 
{
      $$ =$1;   
}


ArrayAccess: 
ID LeftSquareBracket expression RightSquareBracket
{
    $$="";
    $$ = concatenate($$,"Array Name: ");
    $$ = concatenate($$,$1);
    $$ = concatenate($$," at index: ");
    $$ = concatenate($$,$3);
} 

VariableDeclaration: 
Type Variables
{
    $$="";
    $$ = concatenate($$,"declaration of type ");
    $$ = concatenate($$,concatenate(concatenate($1,": "),concatenate($2," ")));

} 

expression: 
precedence1
{
    $$= $1;
}
| Assignment
{
    $$= $1;
}

precedence1:  
precedence2  
{
    $$= $1;
}
| precedence1 EqualityChecker precedence2 
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
    $$ = concatenate($$,"== ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
} 
| precedence1 InequalityChecker precedence2
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
    $$ = concatenate($$,"!= ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}
precedence2: 
precedence3 
| precedence2 PlusOP precedence3 
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
    $$ = concatenate($$,"+ ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}
| precedence2 MinusOP precedence3
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
    $$ = concatenate($$,"- ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}


precedence3:
precedence4
| precedence3 MultiplyOP precedence4
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
     $$ = concatenate($$,"* ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}
| precedence3 DivideOP precedence4
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
    $$ = concatenate($$,"/ ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}

precedence4: 
precedence5

| precedence4 AndOp precedence5
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
    $$ = concatenate($$,"& ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}

precedence5: 
precedence6
| precedence5 OrOp precedence6
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
    $$ = concatenate($$,"| ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}

precedence6: 
precedence7
| precedence6 LogicalAnd precedence7
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
     $$ = concatenate($$,"And ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}

precedence7: 
precedence8
| precedence7 LogicalOr precedence8
{
    $$="";
    $$ = concatenate($$,$1);$$ = concatenate($$," ");
     $$ = concatenate($$,"Or ");
    $$ = concatenate($$,$3);$$ = concatenate($$," ");
}

precedence8: 
ID
{
    $$ = $1;
} 
| Number 
{
    $$ = $1;
}
| ArrayAccess
{
    $$ = $1;
} 
| LeftParen expression RightParen
{
    $$="";
    $$ = concatenate($$,$1);
     $$ = concatenate($$,$2);
    $$ = concatenate($$,$3);
} 
| functionCall 
{
    $$ = $1;
}
| String
{
    $$ = $1;
}
Assignment: 
ID EqualSign expression
{
    $$="";
    $$ = concatenate($$,"Assignment of ID: ");
    $$ = concatenate($$,concatenate($1," "));
    $$ = concatenate($$,"to ");
    $$ = concatenate($$,concatenate($3," "));
} 
| ArrayAccess EqualSign expression
{
    $$="";
    $$ = concatenate($$,"Assignment of ID: ");
    $$ = concatenate($$,concatenate($1," "));
    $$ = concatenate($$,"to ");
    $$ = concatenate($$,concatenate($3," "));
} 
Return: 
returnKeyword expression
{
    $$ = "";
    $$ = concatenate($$,"Return expression: ");
    $$ = concatenate($$,$2);
} 
|
returnKeyword
{
    $$ = "Return";
}
Variables: Assignment Comma Variables
{
    $$ = "";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,", ");
    $$ = concatenate($$,$3);
} 
| Assignment
{
    $$ = "";
    $$ = concatenate($$,$1);
} 
 | ArrayAccess Comma Variables
 {
    $$ = "";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,", ");
    $$ = concatenate($$,$3);
} 
 | ID Comma Variables
 {
    $$ = "";
    $$ = concatenate($$,$1);
    $$ = concatenate($$,", ");
    $$ = concatenate($$,$3);
}  
 | ID
 {
    $$= $1;
}  
 | ArrayAccess
{
    $$ = $1;
} 
%%


int yyerror(char *msg)
 {
     fprintf(parser,"Error at line %d: Unexpected token: %s\n",lineNumber,yytext);
  printf("%s",msg);
  printf("\n Compilation Terminated");
  exit(1);
 }
 int yywrap()
 {
     return 1;
 }
int main(int argc, char **argv)
{
    freopen(argv[1],"r",stdin);
    lexer = fopen("Lexer.txt","w");
    parser = fopen("Parser.txt","w");
    lineNumber=1;
    yyparse();
}