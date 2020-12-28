%{
    #include <string.h>
    #include <stdlib.h>
    #include "y.tab.h"
    void extern yyerror(char*);
    int bracket=0;
    int ancestor=0;

%}
whitespace      [ \t\r\v\f]
linefeed        \n
%%

"real" {yylval.dataType = strdup(yytext);return REAL;}
"int" {yylval.dataType = strdup(yytext);return INT;}
"boolean" {yylval.dataType = strdup(yytext);return BOOL;}
"struct"  {yylval.dataType = strdup(yytext);return STRUCT;}
"string"   {yylval.dataType = strdup(yytext);return STRING;}

"{" 			{yylval.intval=yylineno;if(bracket==0)ancestor++; bracket++; return BGIN;}
"}" 			{yylval.intval=yylineno; bracket--; return END;}


"=" 			{ return ASSIGN;}
"!="            { return NEQ;}
"=="            { return EQ;}
"<"             { return LE;}
"<="            { return LEQ;}
">"             { return GE;}
">="            { return GEQ;}
"&&"            { return AND;}
"||"            { return OR;}
"adevarat" 		{ return TRUE;}
"fals"			{ return FALSE;}
"concateneaza"     { return STCT;}
"copiaza"     { return STCPY;}


"if"			{ return IF;}
"while"			{ return WHILE;}
"for"			{ return FOR;}
"else"			{ return ELSE;}
"return" 		{ return RETURN;}
"const" 		{ return CONST;}

"prt"			{ return PRINT;}


[\'][a-zA-Z0-9][\']      {yylval.varValue = strdup(yytext);   return CHARACTER_VALUE;}
[-+]?[1-9][0-9]*             {yylval.varValue = strdup(yytext);  return INTEGER_VALUE;}
[-+]?[1-9][0-9]*\.?[0-9]+     {yylval.varValue = strdup(yytext);   return FLOAT_VALUE;}
\"(\\.|[^"])*\"     { yytext[yyleng-1] = 0;  yytext+=1; yylval.varValue = strdup(yytext); return STRING_VALUE;}

[a-zA-Z][_a-zA-Z0-9]*(\[[0-9]+\])+   {yylval.varValue = strdup(yytext); return ARRAY_IDENTIFIER;}
[a-zA-Z][_a-zA-Z0-9]*                {yylval.varName = strdup(yytext); return IDENTIFIER;}



{linefeed}                                      {yylineno++;}
{whitespace}                                    ;
. {return yytext[0];}

%%

int yywrap(void){
    return 1;
}

void yyerror(char *s) {
    fprintf(stderr, "\nERROR ON LINE %d : \n %s\n", yylineno, s);
    exit(0);
}

void InvalidToken(){
    printf("ERROR ON LINE %d : \n Invalid Token %s\n", yylineno,yytext);
    exit(0);
}
