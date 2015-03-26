/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OPERAND = 262,
    INC_OPERAND = 263,
    DEC_OPERAND = 264,
    LEFT_OPERAND = 265,
    RIGHT_OPERAND = 266,
    LE_OPERAND = 267,
    GE_OPERAND = 268,
    EQ_OPERAND = 269,
    NE_OPERAND = 270,
    AND_OPERAND = 271,
    OR_OPERAND = 272,
    MUL_ASSIGNMENT = 273,
    DIV_ASSIGNMENT = 274,
    MOD_ASSIGNMENT = 275,
    ADD_ASSIGNMENT = 276,
    SUB_ASSIGNMENT = 277,
    LEFT_ASSIGNMENT = 278,
    RIGHT_ASSIGNMENT = 279,
    AND_ASSIGNMENT = 280,
    XOR_ASSIGNMENT = 281,
    OR_ASSIGNMENT = 282,
    TYPEDEF = 283,
    EXTERN = 284,
    STATIC = 285,
    AUTO = 286,
    REGISTER = 287,
    CHAR = 288,
    SHORT = 289,
    INT = 290,
    LONG = 291,
    SIGNED = 292,
    UNSIGNED = 293,
    FLOAT = 294,
    DOUBLE = 295,
    CONST = 296,
    VOLATILE = 297,
    VOID = 298,
    STRUCT = 299,
    UNION = 300,
    ENUM = 301,
    CASE = 302,
    DEFAULT = 303,
    IF = 304,
    ELSE = 305,
    SWITCH = 306,
    WHILE = 307,
    DO = 308,
    FOR = 309,
    GOTO = 310,
    CONTINUE = 311,
    BREAK = 312,
    RETURN = 313
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OPERAND 262
#define INC_OPERAND 263
#define DEC_OPERAND 264
#define LEFT_OPERAND 265
#define RIGHT_OPERAND 266
#define LE_OPERAND 267
#define GE_OPERAND 268
#define EQ_OPERAND 269
#define NE_OPERAND 270
#define AND_OPERAND 271
#define OR_OPERAND 272
#define MUL_ASSIGNMENT 273
#define DIV_ASSIGNMENT 274
#define MOD_ASSIGNMENT 275
#define ADD_ASSIGNMENT 276
#define SUB_ASSIGNMENT 277
#define LEFT_ASSIGNMENT 278
#define RIGHT_ASSIGNMENT 279
#define AND_ASSIGNMENT 280
#define XOR_ASSIGNMENT 281
#define OR_ASSIGNMENT 282
#define TYPEDEF 283
#define EXTERN 284
#define STATIC 285
#define AUTO 286
#define REGISTER 287
#define CHAR 288
#define SHORT 289
#define INT 290
#define LONG 291
#define SIGNED 292
#define UNSIGNED 293
#define FLOAT 294
#define DOUBLE 295
#define CONST 296
#define VOLATILE 297
#define VOID 298
#define STRUCT 299
#define UNION 300
#define ENUM 301
#define CASE 302
#define DEFAULT 303
#define IF 304
#define ELSE 305
#define SWITCH 306
#define WHILE 307
#define DO 308
#define FOR 309
#define GOTO 310
#define CONTINUE 311
#define BREAK 312
#define RETURN 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
