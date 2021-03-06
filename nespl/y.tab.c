/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20190617

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "splparser.y"
#include "data.h"
#include "spl.h"
#include "file.h"
#include "node.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 12 "splparser.y"
typedef union
{
    struct tree *n;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 42 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ALIAS 257
#define DEFINE 258
#define DO 259
#define ELSE 260
#define ENDIF 261
#define ENDWHILE 262
#define IF 263
#define RETURN 264
#define IRETURN 265
#define LOAD 266
#define STORE 267
#define THEN 268
#define WHILE 269
#define HALT 270
#define REG 271
#define NUM 272
#define ASSIGNOP 273
#define ARITHOP1 274
#define ARITHOP2 275
#define RELOP 276
#define LOGOP 277
#define NOTOP 278
#define ID 279
#define BREAK 280
#define CONTINUE 281
#define CHKPT 282
#define READ 283
#define READI 284
#define PRINT 285
#define STRING 286
#define INLINE 287
#define BACKUP 288
#define RESTORE 289
#define LOADI 290
#define GOTO 291
#define CALL 292
#define ENCRYPT 293
#define PORT 294
#define MULTIPUSH 295
#define MULTIPOP 296
#define START 297
#define RESET 298
#define TSL 299
#define UMIN 300
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    8,    9,    9,   10,   10,    1,    1,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    5,
   11,    6,    7,    7,    4,    4,
};
static const YYINT yylen[] = {                            2,
    2,    1,    2,    0,    4,    5,    2,    1,    4,    4,
    6,    8,    6,    4,    7,    7,    7,    2,    2,    2,
    2,    2,    3,    2,    2,    3,    3,    2,    2,    3,
    3,    3,    2,    5,    5,    2,    2,    3,    3,    3,
    3,    2,    2,    4,    3,    3,    1,    1,    1,    1,
    1,    1,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         4,
    0,    0,    0,    0,   50,    0,    0,    0,    0,   52,
    0,   56,   47,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   49,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    8,    0,
   48,    0,    0,    0,    3,    0,   18,   19,    0,    0,
   22,   42,   55,   43,   33,   20,   21,   24,   25,    0,
    0,    0,   28,   29,    0,    0,    0,    0,    0,    0,
   36,   37,    0,    0,    0,    7,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   26,   27,   23,
    0,   31,   32,   30,    0,    0,    0,    0,   46,   45,
    0,    0,    0,   39,    0,    0,    0,    0,    0,    0,
   14,    0,    0,    0,    0,    0,    0,   44,   10,    9,
    0,    0,    5,    0,    0,    0,    0,   53,   34,   35,
   51,    0,    0,    0,    6,    0,    0,    0,   11,    0,
   13,   15,   16,   17,    0,   12,
};
static const YYINT yydgoto[] = {                          1,
   38,   39,   40,   41,   42,   43,   96,    2,    3,   45,
  133,
};
static const YYINT yysindex[] = {                         0,
    0,   83, -250, -267,    0,  -26,  -25,   -5,   -2,    0,
  -17,    0,    0, -228,  172,  -12,  -14,   -9,   -1,    2,
 -239,  172,    0, -237,    4,   15,    7, -217, -203, -239,
   19,   35,   18,   20,   38,  172,  172,   83,    0, -220,
    0,  172,  172, -199,    0, -190,    0,    0,  172,  172,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   23,
  203,   24,    0,    0,  172,   25,   26,   30, -181, -181,
    0,    0,  172,  152,  -92,    0,  163,  172,  172,  172,
  172, -261, -249, -233,   32,  217,  234,    0,    0,    0,
  253,    0,    0,    0,   48,   52,   54,  156,    0,    0,
   37,  245, -178,    0, -253, -257,   83,   83,   39, -170,
    0,  172,  172,  172, -181,   44,   45,    0,    0,    0,
  -40,    3,    0,   49,  178,  192,  230,    0,    0,    0,
    0,   50,   83,   51,    0,   53,   55,   56,    0,   46,
    0,    0,    0,    0,   57,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,  120,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -204,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  105,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   66,    0,    0,    0,    0,    0,
    0,    0,  379,    0,  381,  404,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
 -102,  -34,  -13,  -10,    0,    0,  -67,    0,    0,    0,
    0,
};
#define YYTABLESIZE 681
static const YYINT yytable[] = {                         36,
  100,   54,   97,   76,  121,  122,  107,   44,   61,  108,
   60,   46,   78,   79,   80,   81,   78,   79,   80,   68,
   78,   79,   74,   75,   78,   79,   80,   81,   82,   83,
  140,   12,   47,   48,   49,   86,   87,   50,  109,   53,
  110,   51,   36,   52,   56,   55,   65,  128,   62,   57,
   37,   91,   77,   78,   79,   80,   81,   58,   69,   98,
   59,   66,   63,  102,  103,  104,  105,  106,   55,   55,
   55,   55,   55,   64,   70,   67,   71,   73,   72,   84,
   85,   88,   90,   92,   93,   36,   76,   76,   94,   95,
  111,  115,  116,   37,  117,  119,   79,  123,  125,  126,
  127,  124,  129,  130,    1,   76,   54,  135,  139,  141,
    0,  142,    0,  143,  144,  146,    0,    0,    0,    0,
    0,    0,   36,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   37,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   37,    0,    0,    0,    0,    0,    0,
    0,   78,   79,   80,   81,    0,    0,    0,    0,    0,
    0,    0,   99,    0,    0,    0,  118,    0,    0,    0,
    0,    0,   36,    0,    0,    0,    0,    0,    0,    0,
    2,   36,    0,    0,    0,    0,    4,    0,  136,  131,
  132,    0,    5,    6,    7,    8,    9,    0,   10,   11,
   12,   13,  137,   14,    0,    0,    0,   15,   16,   17,
   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,
   28,   29,   30,   37,   31,   32,   33,   34,   35,    4,
  112,   89,   37,    0,  134,    5,    6,    7,    8,    9,
  138,   10,   11,   12,   13,    0,   14,  113,    0,    0,
   15,   16,   17,   18,   19,   20,   21,   22,   23,   24,
   25,   26,   27,   28,   29,   30,  114,   31,   32,   33,
   34,   35,    4,  120,    0,    0,  145,    0,    5,    6,
    7,    8,    9,    0,   10,   11,   12,   13,    0,   14,
    0,    0,    0,   15,   16,   17,   18,   19,   20,   21,
   22,   23,   24,   25,   26,   27,   28,   29,   30,    4,
   31,   32,   33,   34,   35,    5,    6,    7,    8,    9,
    0,   10,   11,   12,   13,    0,   14,    0,    0,    0,
   15,   16,   17,   18,   19,   20,   21,   22,   23,   24,
   25,   26,   27,   28,   29,   30,    2,   31,   32,   33,
   34,   35,    2,    2,    2,    2,    2,    0,    2,    2,
    2,    2,    0,    2,    0,    0,    0,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    0,    2,    2,    2,    2,    2,   38,
    0,   40,   38,    0,   40,   78,   79,   80,   81,   78,
   79,   80,   81,   12,   13,    0,   14,   38,    0,   40,
   15,   53,   12,   13,   41,   14,    0,   41,   23,   15,
   53,   78,   79,   80,   81,    0,  101,   23,    0,    0,
    0,   35,   41,    0,    0,   78,   79,   80,   81,    0,
   35,   38,    0,   40,    0,    0,   78,   79,   80,   81,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   78,   79,   80,   81,    0,    0,   41,    0,    0,    0,
    0,    0,    0,   78,   79,   80,   81,   78,   79,   80,
   81,    0,    0,    0,    0,    0,    0,    0,   78,   79,
   80,   81,    0,    0,    0,    0,   78,   79,   80,   81,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   38,    0,   40,
    0,    0,    0,    0,    0,    0,   38,    0,   40,    0,
    0,   38,   38,   40,   38,   38,   40,   40,    0,    0,
    0,    0,   41,    0,    0,    0,    0,    0,    0,    0,
    0,   41,    0,    0,    0,    0,   41,    0,    0,    0,
   41,
};
static const YYINT yycheck[] = {                         40,
   93,   15,   70,   38,  107,  108,  268,  258,   22,  259,
   21,  279,  274,  275,  276,  277,  274,  275,  276,   30,
  274,  275,   36,   37,  274,  275,  276,  277,   42,   43,
  133,  271,   59,   59,   40,   49,   50,   40,  272,  279,
  274,   59,   40,  272,   59,   58,   40,  115,  286,   59,
   91,   65,  273,  274,  275,  276,  277,   59,   40,   73,
   59,  279,   59,   77,   78,   79,   80,   81,  273,  274,
  275,  276,  277,   59,   40,  279,   59,   40,   59,  279,
  271,   59,   59,   59,   59,   40,  121,  122,   59,  271,
   59,   44,   41,   91,   41,   59,  275,   59,  112,  113,
  114,  272,   59,   59,    0,  140,   41,   59,   59,   59,
   -1,   59,   -1,   59,   59,   59,   -1,   -1,   -1,   -1,
   -1,   -1,   40,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   91,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   40,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   91,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  274,  275,  276,  277,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   41,   -1,   -1,   -1,   41,   -1,   -1,   -1,
   -1,   -1,   40,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   91,   40,   -1,   -1,   -1,   -1,  257,   -1,   41,  260,
  261,   -1,  263,  264,  265,  266,  267,   -1,  269,  270,
  271,  272,   41,  274,   -1,   -1,   -1,  278,  279,  280,
  281,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  292,  293,   91,  295,  296,  297,  298,  299,  257,
   44,   59,   91,   -1,  262,  263,  264,  265,  266,  267,
   41,  269,  270,  271,  272,   -1,  274,   44,   -1,   -1,
  278,  279,  280,  281,  282,  283,  284,  285,  286,  287,
  288,  289,  290,  291,  292,  293,   44,  295,  296,  297,
  298,  299,  257,   59,   -1,   -1,  261,   -1,  263,  264,
  265,  266,  267,   -1,  269,  270,  271,  272,   -1,  274,
   -1,   -1,   -1,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  287,  288,  289,  290,  291,  292,  293,  257,
  295,  296,  297,  298,  299,  263,  264,  265,  266,  267,
   -1,  269,  270,  271,  272,   -1,  274,   -1,   -1,   -1,
  278,  279,  280,  281,  282,  283,  284,  285,  286,  287,
  288,  289,  290,  291,  292,  293,  257,  295,  296,  297,
  298,  299,  263,  264,  265,  266,  267,   -1,  269,  270,
  271,  272,   -1,  274,   -1,   -1,   -1,  278,  279,  280,
  281,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  292,  293,   -1,  295,  296,  297,  298,  299,   41,
   -1,   41,   44,   -1,   44,  274,  275,  276,  277,  274,
  275,  276,  277,  271,  272,   -1,  274,   59,   -1,   59,
  278,  279,  271,  272,   41,  274,   -1,   44,  286,  278,
  279,  274,  275,  276,  277,   -1,  294,  286,   -1,   -1,
   -1,  299,   59,   -1,   -1,  274,  275,  276,  277,   -1,
  299,   93,   -1,   93,   -1,   -1,  274,  275,  276,  277,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  274,  275,  276,  277,   -1,   -1,   93,   -1,   -1,   -1,
   -1,   -1,   -1,  274,  275,  276,  277,  274,  275,  276,
  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  274,  275,
  276,  277,   -1,   -1,   -1,   -1,  274,  275,  276,  277,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  259,   -1,  259,
   -1,   -1,   -1,   -1,   -1,   -1,  268,   -1,  268,   -1,
   -1,  273,  274,  273,  276,  277,  276,  277,   -1,   -1,
   -1,   -1,  259,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  268,   -1,   -1,   -1,   -1,  273,   -1,   -1,   -1,
  277,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 300
#define YYUNDFTOKEN 314
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,"':'","';'",0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"ALIAS","DEFINE","DO","ELSE","ENDIF","ENDWHILE","IF","RETURN","IRETURN","LOAD",
"STORE","THEN","WHILE","HALT","REG","NUM","ASSIGNOP","ARITHOP1","ARITHOP2",
"RELOP","LOGOP","NOTOP","ID","BREAK","CONTINUE","CHKPT","READ","READI","PRINT",
"STRING","INLINE","BACKUP","RESTORE","LOADI","GOTO","CALL","ENCRYPT","PORT",
"MULTIPUSH","MULTIPOP","START","RESET","TSL","UMIN",0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : body",
"body : definelistpad stmtlist",
"definelistpad : definelist",
"definelist : definelist definestmt",
"definelist :",
"definestmt : DEFINE ID NUM ';'",
"definestmt : DEFINE ID ARITHOP1 NUM ';'",
"stmtlist : stmtlist stmt",
"stmtlist : stmt",
"stmt : expr ASSIGNOP expr ';'",
"stmt : expr ASSIGNOP PORT ';'",
"stmt : ifpad expr THEN stmtlist ENDIF ';'",
"stmt : ifpad expr THEN stmtlist elsepad stmtlist ENDIF ';'",
"stmt : whilepad expr DO stmtlist ENDWHILE ';'",
"stmt : ALIAS ID REG ';'",
"stmt : LOAD '(' expr ',' expr ')' ';'",
"stmt : STORE '(' expr ',' expr ')' ';'",
"stmt : LOADI '(' expr ',' expr ')' ';'",
"stmt : RETURN ';'",
"stmt : IRETURN ';'",
"stmt : BREAK ';'",
"stmt : CONTINUE ';'",
"stmt : HALT ';'",
"stmt : INLINE STRING ';'",
"stmt : CHKPT ';'",
"stmt : READ ';'",
"stmt : READI ids ';'",
"stmt : PRINT expr ';'",
"stmt : BACKUP ';'",
"stmt : RESTORE ';'",
"stmt : ENCRYPT ids ';'",
"stmt : GOTO ID ';'",
"stmt : CALL ID ';'",
"stmt : ID ':'",
"stmt : MULTIPUSH '(' reglist ')' ';'",
"stmt : MULTIPOP '(' reglist ')' ';'",
"stmt : START ';'",
"stmt : RESET ';'",
"expr : expr ARITHOP1 expr",
"expr : expr ARITHOP2 expr",
"expr : expr RELOP expr",
"expr : expr LOGOP expr",
"expr : ARITHOP1 NUM",
"expr : NOTOP expr",
"expr : TSL '(' expr ')'",
"expr : '[' expr ']'",
"expr : '(' expr ')'",
"expr : NUM",
"expr : ids",
"expr : STRING",
"ifpad : IF",
"elsepad : ELSE",
"whilepad : WHILE",
"reglist : REG ',' reglist",
"reglist : REG",
"ids : ID",
"ids : REG",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 287 "splparser.y"

int yyerror (char *msg)
{
    return fprintf (stderr, "%d: %s\n", linecount, msg);
}
#line 470 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 29 "splparser.y"
	{
                                    codegen(yystack.l_mark[0].n);
                                    out_linecount++;
                                    fprintf(fp, "HALT");
                                }
break;
case 2:
#line 36 "splparser.y"
	{
                                    add_predefined_constants();
                                }
break;
case 5:
#line 45 "splparser.y"
	{
                                                    insert_constant(yystack.l_mark[-2].n->name, yystack.l_mark[-1].n->value);
                                                }
break;
case 6:
#line 48 "splparser.y"
	{
                                                    if (node_getType(yystack.l_mark[-2].n) == NODE_SUB)
                                                        insert_constant(yystack.l_mark[-3].n->name, -1 * yystack.l_mark[-1].n->value);
                                                    else
                                                        insert_constant(yystack.l_mark[-3].n->name, yystack.l_mark[-1].n->value);
                                                }
break;
case 7:
#line 56 "splparser.y"
	{
                                                    yyval.n = create_nontermNode(NODE_STMTLIST, yystack.l_mark[-1].n, yystack.l_mark[0].n);
                                                }
break;
case 8:
#line 59 "splparser.y"
	{
                                                    yyval.n = yystack.l_mark[0].n;
                                                }
break;
case 9:
#line 64 "splparser.y"
	{
                                                    if (node_getType(yystack.l_mark[-3].n) == NODE_REG || node_getType(yystack.l_mark[-3].n) == NODE_ADDR_EXPR)
                                                    {
                                                        yystack.l_mark[-2].n->value = 2;
                                                        yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-3].n, yystack.l_mark[-1].n, NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n", linecount);
                                                        exit(0);
                                                    }
                                                }
break;
case 10:
#line 76 "splparser.y"
	{
                                                    if (node_getType(yystack.l_mark[-3].n) == NODE_REG || node_getType(yystack.l_mark[-3].n) == NODE_ADDR_EXPR)
                                                    {
                                                        yystack.l_mark[-2].n->value = 2;
                                                        yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-3].n, yystack.l_mark[-1].n, NULL);
                                                    }
                                                    else
                                                    {
                                                        printf("\n%d: Invalid operands in assignment!!\n",  linecount);
                                                        exit(0);
                                                    }
                                                }
break;
case 11:
#line 88 "splparser.y"
	{
                                                            yyval.n = create_tree(yystack.l_mark[-5].n, yystack.l_mark[-4].n, yystack.l_mark[-2].n, NULL);
                                                            pop_alias();
                                                            depth--;
                                                        }
break;
case 12:
#line 94 "splparser.y"
	{
                                                            yyval.n = create_tree(yystack.l_mark[-7].n, yystack.l_mark[-6].n, yystack.l_mark[-4].n, yystack.l_mark[-2].n);
                                                            pop_alias();
                                                            depth--;
                                                        }
break;
case 13:
#line 99 "splparser.y"
	{
                                                            yyval.n = create_tree(yystack.l_mark[-5].n, yystack.l_mark[-4].n, yystack.l_mark[-2].n, NULL);
                                                            pop_alias();
                                                            depth--;
                                                            flag_break--;
                                                        }
break;
case 14:
#line 105 "splparser.y"
	{
                                                            push_alias(yystack.l_mark[-2].n->name, yystack.l_mark[-1].n->value);
                                                            yyval.n = NULL;
                                                        }
break;
case 15:
#line 109 "splparser.y"
	{
                                                            yyval.n = create_tree(yystack.l_mark[-6].n, yystack.l_mark[-4].n, yystack.l_mark[-2].n, NULL);
                                                        }
break;
case 16:
#line 112 "splparser.y"
	{
                                                            yyval.n = create_tree(yystack.l_mark[-6].n, yystack.l_mark[-4].n, yystack.l_mark[-2].n, NULL);
                                                        }
break;
case 17:
#line 115 "splparser.y"
	{
                                                            yyval.n = create_tree(yystack.l_mark[-6].n, yystack.l_mark[-4].n, yystack.l_mark[-2].n, NULL);
                                                        }
break;
case 18:
#line 118 "splparser.y"
	{
                                                            yyval.n = yystack.l_mark[-1].n;
                                                        }
break;
case 19:
#line 121 "splparser.y"
	{
                                                            yyval.n = yystack.l_mark[-1].n;
                                                        }
break;
case 20:
#line 124 "splparser.y"
	{
                                                            if (flag_break == 0)
                                                            {
                                                                printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                                exit(0);
                                                            }
                                                            yyval.n=yystack.l_mark[-1].n;
                                                        }
break;
case 21:
#line 132 "splparser.y"
	{
                                                if (flag_break==0)
                                                {
                                                    printf("\n%d: break or continue should be used inside while!!\n", linecount);
                                                    exit(0);
                                                }
                                                yyval.n = yystack.l_mark[-1].n;
                                            }
break;
case 22:
#line 140 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[-1].n;
                                            }
break;
case 23:
#line 143 "splparser.y"
	{
                                                int temp;
                                                yystack.l_mark[-1].n->name++;
                                                temp = strlen(yystack.l_mark[-1].n->name);
                                                yystack.l_mark[-1].n->name[temp - 1] = '\0';
                                                yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-1].n, NULL, NULL);
                                            }
break;
case 24:
#line 150 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[-1].n;
                                            }
break;
case 25:
#line 153 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[-1].n;
                                            }
break;
case 26:
#line 156 "splparser.y"
	{
                                                if (node_getType(yystack.l_mark[-1].n) != NODE_REG || !isAllowedRegister(yystack.l_mark[-1].n->value))
                                                {
                                                    printf("\n%d: Invalid operand in read!!\n", linecount);
                                                    exit(0);
                                                }
                                                yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-1].n, NULL, NULL);
                                            }
break;
case 27:
#line 164 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-1].n, NULL, NULL);
                                            }
break;
case 28:
#line 167 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-1].n, NULL, NULL, NULL);
                                            }
break;
case 29:
#line 170 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-1].n, NULL, NULL, NULL);
                                            }
break;
case 30:
#line 173 "splparser.y"
	{
                                                if (node_getType(yystack.l_mark[-1].n) != NODE_REG || !isAllowedRegister(yystack.l_mark[-1].n->value))
                                                {
                                                    printf("\n%d: Invalid operand in encrypt!!\n", linecount);
                                                    exit(0);
                                                }
                                                yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-1].n, NULL, NULL);
                                            }
break;
case 31:
#line 181 "splparser.y"
	{
                                                if (lookup_constant(node_getName(yystack.l_mark[-1].n)) != NULL) /* if the address to jump to is a predefined value in constants file*/
                                                    yyval.n = create_tree(yystack.l_mark[-2].n, substitute_id(yystack.l_mark[-1].n), NULL, NULL);
                                                else
                                                    yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-1].n, NULL, NULL);
                                                yyval.n->value = linecount; /* Hack to show line numbers in case of syntax errors*/
                                            }
break;
case 32:
#line 188 "splparser.y"
	{
                                                if(lookup_constant(node_getName(yystack.l_mark[-1].n)) != NULL) /* if the address to jump to is a predefined value in constants file*/
                                                    yyval.n = create_tree(yystack.l_mark[-2].n, substitute_id(yystack.l_mark[-1].n), NULL, NULL);
                                                else
                                                    yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[-1].n, NULL, NULL);
                                                yyval.n->value = linecount; /* Hack to show line numbers in case of syntax errors*/
                                            }
break;
case 33:
#line 195 "splparser.y"
	{
                                                label_add(node_getName(yystack.l_mark[-1].n));
                                                yyval.n = create_nontermNode(NODE_LABEL_DEF, yystack.l_mark[-1].n, NULL);
                                            }
break;
case 34:
#line 199 "splparser.y"
	{
                                                    yyval.n = create_tree(yystack.l_mark[-4].n, yystack.l_mark[-2].n, NULL, NULL);
                                                }
break;
case 35:
#line 202 "splparser.y"
	{
                                                    yyval.n = create_tree(yystack.l_mark[-4].n, yystack.l_mark[-2].n, NULL, NULL);
                                                }
break;
case 36:
#line 205 "splparser.y"
	{
                                                    yyval.n = create_tree(yystack.l_mark[-1].n, NULL, NULL, NULL);
                                                }
break;
case 37:
#line 208 "splparser.y"
	{
                                                    yyval.n = create_tree(yystack.l_mark[-1].n, NULL, NULL, NULL);
                                                }
break;
case 38:
#line 213 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-1].n, yystack.l_mark[-2].n, yystack.l_mark[0].n, NULL);
                                            }
break;
case 39:
#line 216 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-1].n, yystack.l_mark[-2].n, yystack.l_mark[0].n, NULL);
                                            }
break;
case 40:
#line 219 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-1].n, yystack.l_mark[-2].n, yystack.l_mark[0].n, NULL);
                                            }
break;
case 41:
#line 222 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-1].n, yystack.l_mark[-2].n, yystack.l_mark[0].n, NULL);
                                            }
break;
case 42:
#line 225 "splparser.y"
	{
                                                if (node_getType(yystack.l_mark[-1].n) == NODE_SUB)
                                                    yystack.l_mark[0].n->value = yystack.l_mark[0].n->value * -1;
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
case 43:
#line 230 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-1].n, yystack.l_mark[0].n, NULL, NULL);
                                            }
break;
case 44:
#line 233 "splparser.y"
	{
                                                
                                                yyval.n = create_tree(yystack.l_mark[-3].n, yystack.l_mark[-1].n, NULL, NULL);
                                            }
break;
case 45:
#line 237 "splparser.y"
	{
                                                yyval.n = create_nontermNode(NODE_ADDR_EXPR, yystack.l_mark[-1].n, NULL);
                                            }
break;
case 46:
#line 240 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[-1].n;
                                            }
break;
case 47:
#line 243 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
case 48:
#line 246 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
case 49:
#line 249 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
case 50:
#line 254 "splparser.y"
	{
                                                depth++;
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
case 51:
#line 259 "splparser.y"
	{
                                                pop_alias();
                                            }
break;
case 52:
#line 264 "splparser.y"
	{
                                                depth++;
                                                flag_break++;
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
case 53:
#line 271 "splparser.y"
	{
                                                yyval.n = create_tree(yystack.l_mark[-2].n, yystack.l_mark[0].n, NULL, NULL);
                                            }
break;
case 54:
#line 274 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
case 55:
#line 279 "splparser.y"
	{
                                                yyval.n = substitute_id(yystack.l_mark[0].n);
                                            }
break;
case 56:
#line 282 "splparser.y"
	{
                                                yyval.n = yystack.l_mark[0].n;
                                            }
break;
#line 1063 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
