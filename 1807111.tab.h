
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ENDIF = 261,
     ELSE = 262,
     ENDELSE = 263,
     MAIN = 264,
     ENDMAIN = 265,
     INT = 266,
     ENDINT = 267,
     FLOAT = 268,
     ENDFLOAT = 269,
     CHAR = 270,
     ENDCHAR = 271,
     DOUBLE = 272,
     ENDDOUBLE = 273,
     START = 274,
     END = 275,
     EQUAL = 276,
     ADD = 277,
     SUB = 278,
     MULT = 279,
     DIV = 280,
     MOD = 281,
     POW = 282,
     LESS = 283,
     GREATER = 284,
     FOR = 285,
     ENDFOR = 286,
     COUNT = 287,
     ENDCOUNT = 288,
     CONDITION = 289,
     ENDCONDITION = 290,
     PRINT = 291,
     ENDPRINT = 292,
     ROOT = 293,
     ENDROOT = 294,
     SIN = 295,
     ENDSIN = 296,
     COS = 297,
     ENDCOS = 298,
     TAN = 299,
     ENDTAN = 300,
     FIB = 301,
     ENDFIB = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


