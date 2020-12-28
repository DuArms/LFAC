%{
 #include <stdio.h>
  #include <string.h>
  #include "helplib.h"
  extern FILE* yyin;
  extern void yyerror();
  extern int yylex();
  extern char* yytext;
  extern int yylineno;

  void updateIdentifier(char* ,char*,char *);
  void storeDataType(char*);
  int isDuplicate(char*);
  void storeIdentifier(char*,char*,char*);
  void DuplicateIdentifierError(char*);
  char* retrieveDataType();
  void clearBuffers();
  int isValidAssignment(char*);
  void AssignmentError(char*);
  char* extractIdentifier(char[]);
  void evalueaza(char *, char *, char , char *);
  int getIdentifierVal(char *,char *);
  void getIdentifierType(char *);
  void updateStringsCat(char *nume, char *nume2);
  void updateStringsCpy(char *nume, char *nume2);
%}



%define parse.lac full
%define parse.error verbose


%union {
  struct IdentifierStructure * is;
  char * dataType;
  char * varName;
  char * varValue;
  int expVal;
  int intval;
};

%token ASSIGN NEQ EQ LE LEQ GE GEQ AND OR TRUE FALSE STCP STCT STPT STCPY

%token IF WHILE FOR ELSE RETURN CONST PRINT BGIN END

%token<dataType> REAL INT BOOL STRUCT STRING

%token<varValue> CHARACTER_VALUE INTEGER_VALUE FLOAT_VALUE STRING_VALUE

%token<varName> ARRAY_IDENTIFIER  IDENTIFIER
%type<is> DEF_LOCALE 
%type<dataType> VARTYPE 
%type<varValue> VALOARE EXPRESIE STATEMENT
%type<expVal> condition bools
%left '+' '-'
%left '*' '/'

%start START
%%

START : DEF_GLOBAL
      | START DEF_GLOBAL
      ;

DEF_GLOBAL : VARTYPE IDENTIFIER';' {handelAsignare($2,$1,"NULL");}
| VARTYPE IDENTIFIER ASSIGN VALOARE ';' { handelAsignare($2,$1,$4); }
| VARTYPE IDENTIFIER ASSIGN EXPRESIE ';' { handelAsignare($2,$1,$4);  }
| VARTYPE IDENTIFIER '(' ')' BGIN  BLOC  END  
| VARTYPE IDENTIFIER '(' LISTA_PARAMETRII ')' BGIN  BLOC  END { handelAsignare($2,$1,"FUNCTIE");  }
| VARTYPE ARRAY_IDENTIFIER ';'
| STRUCT  IDENTIFIER BGIN BLOC END ';' 
| STRUCT  IDENTIFIER BGIN BLOC END  IDENTIFIER';' 
|';'
;

BLOC : STATEMENT
| STRUCT  IDENTIFIER BGIN BLOC END ';' 
| STRUCT  IDENTIFIER BGIN BLOC END  IDENTIFIER';'
| DEF_LOCALE
| STRUCTURA_DE_CONTROL
| APEL_FUNCTIE
| BLOC APEL_FUNCTIE
| BLOC  STATEMENT
| BLOC  DEF_LOCALE
| BLOC  STRUCTURA_DE_CONTROL
;

APEL_FUNCTIE : IDENTIFIER '(' ')' ';'
| IDENTIFIER '('PAREM_LIST')' ';'
| PRINT IDENTIFIER {char ras[250]; getIdentifierVal(ras,$2); printf("%s\n",ras);}
;

PAREM_LIST : IDENTIFIER
| PAREM_LIST ','IDENTIFIER
;

BLOC2 :STATEMENT
| DEF_LOCALE
| STRUCTURA_DE_CONTROL
;

DEF_LOCALE : VARTYPE IDENTIFIER ';' {handelAsignare($2,$1,"NULL");}
| VARTYPE IDENTIFIER ASSIGN VALOARE ';' { handelAsignare($2,$1,$4); }
| VARTYPE IDENTIFIER ASSIGN EXPRESIE ';' { handelAsignare($2,$1,$4);  }
| VARTYPE ARRAY_IDENTIFIER ';'
| ';'
;

STATEMENT :  IDENTIFIER ASSIGN EXPRESIE ';' { updateIdentifier($$,$1,$3); }
|STCT IDENTIFIER  ',' IDENTIFIER ';' {  updateStringsCat($2,$4);}
|STCPY IDENTIFIER ',' IDENTIFIER ';' {  updateStringsCpy($2,$4);}
;

LISTA_PARAMETRII : VARTYPE IDENTIFIER  {handelAsignare($2,$1,"NULL");}
| LISTA_PARAMETRII ',' VARTYPE IDENTIFIER 
;
 
STRUCTURA_DE_CONTROL :  IF_CAZURI
| WHILE_CAZURI
| FOR_CAZURI
;

IF_CAZURI : IF '(' condition ')' BGIN BLOC END ELSE BGIN BLOC END 
| IF '(' condition ')' BGIN BLOC END ELSE BLOC2
| IF '(' condition ')' BGIN BLOC END 
| IF '(' condition ')' BLOC2 
| IF '(' condition ')' BLOC2  ELSE BGIN BLOC END
| IF '(' condition ')' BLOC2  ELSE BLOC2
;

WHILE_CAZURI : WHILE '('condition ')' BGIN BLOC END 
|  WHILE '('condition ')' BLOC2
; 

FOR_CAZURI : FOR '('STATEMENT condition ';' STATEMENT  ')' BLOC2
| FOR '('STATEMENT condition ';' STATEMENT  ')' BGIN BLOC END
;


condition: bools          {if($1 > 0) $$ = $1;else $$ = 0;}
         | condition LEQ bools  {if ($1 <= $3) $$ = 1;else $$ = 0;}
         | condition LE  bools {if ($1 < $3) $$ = 1;else $$ = 0;}
         | condition GE  bools {if ($1 > $3) $$ = 1;else $$ = 0;}
         | condition GEQ bools {if ($1 >= $3) $$ = 1;else $$ = 0;}
         | condition EQ  bools {if ($1 == $3) $$ = 1; else $$ = 0; }
         | condition NEQ  bools{if ($1 != $3) $$ = 1;else $$ = 0;}
         | condition AND bools {if ($1>0 && $3>0) $$ = 1;else $$ = 0;}
         | condition OR  bools {if ($1>0 || $3>0) $$ = 1;else $$ = 0;}
         | '(' condition ')' { $$ = $2;}
         ;

bools: TRUE {$$ = 1;}
    | FALSE {$$ = 0;}
    | EXPRESIE {$$ = atoi($1); }
    ;

EXPRESIE : INTEGER_VALUE { $$ = yyval.varValue ;}
| IDENTIFIER  {getIdentifierType($1);  getIdentifierVal($$,$1); }
| EXPRESIE '+' EXPRESIE { evalueaza($$,$1,'+',$3); }
| EXPRESIE '-' EXPRESIE { evalueaza($$,$1,'-',$3);}
| EXPRESIE '*' EXPRESIE { evalueaza($$,$1,'*',$3);}
| EXPRESIE '/' EXPRESIE { evalueaza($$,$1,'/',$3);}
| '(' EXPRESIE ')' { $$ = $2;}
;


VARTYPE : INT { $$ = yyval.dataType ;}
| REAL { $$ = yyval.dataType ;}
| BOOL { $$ = yyval.dataType ;}
| STRUCT { $$ = yyval.dataType ;}
| STRING {$$ = yyval.dataType ; }
; 
VALOARE :  FLOAT_VALUE { $$ = yyval.varValue ; }
| STRING_VALUE { $$ = yyval.varValue ;}
| CHARACTER_VALUE { $$ = yyval.varValue ; } 
;

%%

int main(int argc , char ** argv){
yyin=fopen(argv[1],"r");
  yyparse();
  showIdentifiers();
  printf("\n\nNo Errors!!\n");
  return 0;
}