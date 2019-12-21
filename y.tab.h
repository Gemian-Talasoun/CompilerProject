/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OR = 258,
     AND = 259,
     NE = 260,
     EQ = 261,
     GE = 262,
     LE = 263,
     L = 264,
     G = 265,
     NOT = 266,
     Num = 267,
     VARIABLE = 268,
     GT = 269,
     LT = 270,
     Exit = 271,
     Print = 272,
     If = 273,
     Else = 274,
     Switch = 275,
     Case = 276,
     Default = 277,
     Break = 278,
     For = 279,
     Do = 280,
     While = 281,
     IntVar = 282,
     FloatVar = 283,
     CharVar = 284,
     StringVar = 285,
     VoidVar = 286,
     SinQ = 287,
     DoubQ = 288,
     Return = 289,
     Minus = 290
   };
#endif
/* Tokens.  */
#define OR 258
#define AND 259
#define NE 260
#define EQ 261
#define GE 262
#define LE 263
#define L 264
#define G 265
#define NOT 266
#define Num 267
#define VARIABLE 268
#define GT 269
#define LT 270
#define Exit 271
#define Print 272
#define If 273
#define Else 274
#define Switch 275
#define Case 276
#define Default 277
#define Break 278
#define For 279
#define Do 280
#define While 281
#define IntVar 282
#define FloatVar 283
#define CharVar 284
#define StringVar 285
#define VoidVar 286
#define SinQ 287
#define DoubQ 288
#define Return 289
#define Minus 290



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 24 "YaccCode.y"

	int inttype;
	float floattype;
	char chartype;
	char *stringtype;
	int indextype;


/* Line 2058 of yacc.c  */
#line 136 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
