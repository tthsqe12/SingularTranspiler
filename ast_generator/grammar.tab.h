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

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
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
    DOTDOT = 258,
    EQUAL_EQUAL = 259,
    GE = 260,
    LE = 261,
    MINUSMINUS = 262,
    NOT = 263,
    NOTEQUAL = 264,
    PLUSPLUS = 265,
    COLONCOLON = 266,
    ARROW = 267,
    GRING_CMD = 268,
    BIGINTMAT_CMD = 269,
    INTMAT_CMD = 270,
    PROC_CMD = 271,
    RING_CMD = 272,
    BEGIN_RING = 273,
    BUCKET_CMD = 274,
    IDEAL_CMD = 275,
    MAP_CMD = 276,
    MATRIX_CMD = 277,
    MODUL_CMD = 278,
    NUMBER_CMD = 279,
    POLY_CMD = 280,
    RESOLUTION_CMD = 281,
    SMATRIX_CMD = 282,
    VECTOR_CMD = 283,
    BETTI_CMD = 284,
    E_CMD = 285,
    FETCH_CMD = 286,
    FREEMODULE_CMD = 287,
    KEEPRING_CMD = 288,
    IMAP_CMD = 289,
    KOSZUL_CMD = 290,
    MAXID_CMD = 291,
    MONOM_CMD = 292,
    PAR_CMD = 293,
    PREIMAGE_CMD = 294,
    VAR_CMD = 295,
    VALTVARS = 296,
    VMAXDEG = 297,
    VMAXMULT = 298,
    VNOETHER = 299,
    VMINPOLY = 300,
    END_RING = 301,
    CMD_1 = 302,
    CMD_2 = 303,
    CMD_3 = 304,
    CMD_12 = 305,
    CMD_13 = 306,
    CMD_23 = 307,
    CMD_123 = 308,
    CMD_M = 309,
    ROOT_DECL = 310,
    ROOT_DECL_LIST = 311,
    RING_DECL = 312,
    RING_DECL_LIST = 313,
    EXAMPLE_CMD = 314,
    EXPORT_CMD = 315,
    HELP_CMD = 316,
    KILL_CMD = 317,
    LIB_CMD = 318,
    LISTVAR_CMD = 319,
    SETRING_CMD = 320,
    TYPE_CMD = 321,
    STRINGTOK = 322,
    INT_CONST = 323,
    UNKNOWN_IDENT = 324,
    RINGVAR = 325,
    PROC_DEF = 326,
    APPLY = 327,
    ASSUME_CMD = 328,
    BREAK_CMD = 329,
    CONTINUE_CMD = 330,
    ELSE_CMD = 331,
    EVAL = 332,
    QUOTE = 333,
    FOR_CMD = 334,
    IF_CMD = 335,
    SYS_BREAK = 336,
    WHILE_CMD = 337,
    RETURN = 338,
    PARAMETER = 339,
    QUIT_CMD = 340,
    SYSVAR = 341,
    UMINUS = 342
  };
#endif

/* Value type.  */



int yyparse (astree ** retv);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
