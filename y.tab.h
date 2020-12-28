/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASSIGN = 258,
    NEQ = 259,
    EQ = 260,
    LE = 261,
    LEQ = 262,
    GE = 263,
    GEQ = 264,
    AND = 265,
    OR = 266,
    TRUE = 267,
    FALSE = 268,
    STCP = 269,
    STCT = 270,
    STPT = 271,
    STCPY = 272,
    IF = 273,
    WHILE = 274,
    FOR = 275,
    ELSE = 276,
    RETURN = 277,
    CONST = 278,
    PRINT = 279,
    BGIN = 280,
    END = 281,
    REAL = 282,
    INT = 283,
    BOOL = 284,
    STRUCT = 285,
    STRING = 286,
    CHARACTER_VALUE = 287,
    INTEGER_VALUE = 288,
    FLOAT_VALUE = 289,
    STRING_VALUE = 290,
    ARRAY_IDENTIFIER = 291,
    IDENTIFIER = 292
  };
#endif
/* Tokens.  */
#define ASSIGN 258
#define NEQ 259
#define EQ 260
#define LE 261
#define LEQ 262
#define GE 263
#define GEQ 264
#define AND 265
#define OR 266
#define TRUE 267
#define FALSE 268
#define STCP 269
#define STCT 270
#define STPT 271
#define STCPY 272
#define IF 273
#define WHILE 274
#define FOR 275
#define ELSE 276
#define RETURN 277
#define CONST 278
#define PRINT 279
#define BGIN 280
#define END 281
#define REAL 282
#define INT 283
#define BOOL 284
#define STRUCT 285
#define STRING 286
#define CHARACTER_VALUE 287
#define INTEGER_VALUE 288
#define FLOAT_VALUE 289
#define STRING_VALUE 290
#define ARRAY_IDENTIFIER 291
#define IDENTIFIER 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "proiect.y" /* yacc.c:1909  */

  struct IdentifierStructure * is;
  char * dataType;
  char * varName;
  char * varValue;
  int expVal;
  int intval;

#line 137 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
