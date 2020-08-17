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
    INT = 258,
    ID = 259,
    OSQB = 260,
    OPAREN = 261,
    CPAREN = 262,
    CSQB = 263,
    OBR = 264,
    CBR = 265,
    EQ = 266,
    NE = 267,
    GT = 268,
    GE = 269,
    LT = 270,
    LE = 271,
    PLUS = 272,
    MINUS = 273,
    STAR = 274,
    SLASH = 275,
    EQUAL = 276,
    COM = 277,
    AND = 278,
    OR = 279,
    SC = 280,
    IF = 281,
    DOUBLE = 282,
    NUM = 283,
    ELSE = 284,
    WHILE = 285,
    DO = 286,
    RETURN = 287,
    BREAK = 288,
    CONT = 289,
    HASH = 290,
    INC = 291,
    HEADER = 292,
    ST = 293,
    FOR = 294,
    COUT = 295,
    LSHIFT = 296,
    CIN = 297,
    RSHIFT = 298
  };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define OSQB 260
#define OPAREN 261
#define CPAREN 262
#define CSQB 263
#define OBR 264
#define CBR 265
#define EQ 266
#define NE 267
#define GT 268
#define GE 269
#define LT 270
#define LE 271
#define PLUS 272
#define MINUS 273
#define STAR 274
#define SLASH 275
#define EQUAL 276
#define COM 277
#define AND 278
#define OR 279
#define SC 280
#define IF 281
#define DOUBLE 282
#define NUM 283
#define ELSE 284
#define WHILE 285
#define DO 286
#define RETURN 287
#define BREAK 288
#define CONT 289
#define HASH 290
#define INC 291
#define HEADER 292
#define ST 293
#define FOR 294
#define COUT 295
#define LSHIFT 296
#define CIN 297
#define RSHIFT 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "yaccfile.y" /* yacc.c:1909  */

	int	int_val;
	double 	double_val;
	char* str_val;

#line 146 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
