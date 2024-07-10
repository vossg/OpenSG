/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_OSGSCANPARSESKEL_HOME_GERRIT_PROJECTS_OPENSG_SENLIN_OPENSG_SENLIN_BUILD_BUILD_OSGSYSTEM_OSGSCANPARSESKELPARSER_HPP_INCLUDED
# define YY_OSGSCANPARSESKEL_HOME_GERRIT_PROJECTS_OPENSG_SENLIN_OPENSG_SENLIN_BUILD_BUILD_OSGSYSTEM_OSGSCANPARSESKELPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int OSGScanParseSkel_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_HEADER = 258,              /* TOK_HEADER  */
    TOK_PROFILE = 259,             /* TOK_PROFILE  */
    TOK_COMPONENT = 260,           /* TOK_COMPONENT  */
    TOK_META = 261,                /* TOK_META  */
    TOK_PROTO = 262,               /* TOK_PROTO  */
    TOK_EXTERNPROTO = 263,         /* TOK_EXTERNPROTO  */
    TOK_IS = 264,                  /* TOK_IS  */
    TOK_DEF = 265,                 /* TOK_DEF  */
    TOK_USE = 266,                 /* TOK_USE  */
    TOK_ROUTE = 267,               /* TOK_ROUTE  */
    TOK_TO = 268,                  /* TOK_TO  */
    TOK_IMPORT = 269,              /* TOK_IMPORT  */
    TOK_EXPORT = 270,              /* TOK_EXPORT  */
    TOK_AS = 271,                  /* TOK_AS  */
    TOK_eventIn = 272,             /* TOK_eventIn  */
    TOK_eventOut = 273,            /* TOK_eventOut  */
    TOK_exposedField = 274,        /* TOK_exposedField  */
    TOK_field = 275,               /* TOK_field  */
    TOK_MFBool = 276,              /* TOK_MFBool  */
    TOK_MFColor = 277,             /* TOK_MFColor  */
    TOK_MFColorRGBA = 278,         /* TOK_MFColorRGBA  */
    TOK_MFDouble = 279,            /* TOK_MFDouble  */
    TOK_MFFloat = 280,             /* TOK_MFFloat  */
    TOK_MFImage = 281,             /* TOK_MFImage  */
    TOK_MFInt32 = 282,             /* TOK_MFInt32  */
    TOK_MFMatrix3d = 283,          /* TOK_MFMatrix3d  */
    TOK_MFMatrix3f = 284,          /* TOK_MFMatrix3f  */
    TOK_MFMatrix4d = 285,          /* TOK_MFMatrix4d  */
    TOK_MFMatrix4f = 286,          /* TOK_MFMatrix4f  */
    TOK_MFNode = 287,              /* TOK_MFNode  */
    TOK_MFRotation = 288,          /* TOK_MFRotation  */
    TOK_MFString = 289,            /* TOK_MFString  */
    TOK_MFTime = 290,              /* TOK_MFTime  */
    TOK_MFVec2d = 291,             /* TOK_MFVec2d  */
    TOK_MFVec2f = 292,             /* TOK_MFVec2f  */
    TOK_MFVec3d = 293,             /* TOK_MFVec3d  */
    TOK_MFVec3f = 294,             /* TOK_MFVec3f  */
    TOK_MFVec4d = 295,             /* TOK_MFVec4d  */
    TOK_MFVec4f = 296,             /* TOK_MFVec4f  */
    TOK_SFBool = 297,              /* TOK_SFBool  */
    TOK_SFColor = 298,             /* TOK_SFColor  */
    TOK_SFColorRGBA = 299,         /* TOK_SFColorRGBA  */
    TOK_SFDouble = 300,            /* TOK_SFDouble  */
    TOK_SFFloat = 301,             /* TOK_SFFloat  */
    TOK_SFImage = 302,             /* TOK_SFImage  */
    TOK_SFInt32 = 303,             /* TOK_SFInt32  */
    TOK_SFMatrix3d = 304,          /* TOK_SFMatrix3d  */
    TOK_SFMatrix3f = 305,          /* TOK_SFMatrix3f  */
    TOK_SFMatrix4d = 306,          /* TOK_SFMatrix4d  */
    TOK_SFMatrix4f = 307,          /* TOK_SFMatrix4f  */
    TOK_SFNode = 308,              /* TOK_SFNode  */
    TOK_SFRotation = 309,          /* TOK_SFRotation  */
    TOK_SFString = 310,            /* TOK_SFString  */
    TOK_SFTime = 311,              /* TOK_SFTime  */
    TOK_SFVec2d = 312,             /* TOK_SFVec2d  */
    TOK_SFVec2f = 313,             /* TOK_SFVec2f  */
    TOK_SFVec3d = 314,             /* TOK_SFVec3d  */
    TOK_SFVec3f = 315,             /* TOK_SFVec3f  */
    TOK_SFVec4d = 316,             /* TOK_SFVec4d  */
    TOK_SFVec4f = 317,             /* TOK_SFVec4f  */
    TOK_MFColor4i = 318,           /* TOK_MFColor4i  */
    TOK_MFPnt2f = 319,             /* TOK_MFPnt2f  */
    TOK_MFPnt3f = 320,             /* TOK_MFPnt3f  */
    TOK_MFPnt4f = 321,             /* TOK_MFPnt4f  */
    TOK_MFPlane = 322,             /* TOK_MFPlane  */
    TOK_SFColor4i = 323,           /* TOK_SFColor4i  */
    TOK_SFPnt2f = 324,             /* TOK_SFPnt2f  */
    TOK_SFPnt3f = 325,             /* TOK_SFPnt3f  */
    TOK_SFPnt4f = 326,             /* TOK_SFPnt4f  */
    TOK_SFPlane = 327,             /* TOK_SFPlane  */
    TOK_SFVolume = 328,            /* TOK_SFVolume  */
    TOK_SFVec2i = 329,             /* TOK_SFVec2i  */
    TOK_SFVec3i = 330,             /* TOK_SFVec3i  */
    TOK_MFVec2i = 331,             /* TOK_MFVec2i  */
    TOK_hex = 332,                 /* TOK_hex  */
    TOK_int32 = 333,               /* TOK_int32  */
    TOK_double = 334,              /* TOK_double  */
    TOK_string = 335,              /* TOK_string  */
    TOK_bool = 336,                /* TOK_bool  */
    TOK_NULL = 337,                /* TOK_NULL  */
    TOK_Id = 338,                  /* TOK_Id  */
    TOK_ImageFinished = 339,       /* TOK_ImageFinished  */
    TOK_Error = 340,               /* TOK_Error  */
    TOK_ClusterLocal = 341,        /* TOK_ClusterLocal  */
    TOK_ThreadLocal = 342          /* TOK_ThreadLocal  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"

    long intVal;
    double doubleVal;
    float floatVal;
    const char *stringVal;
    bool boolVal;

#line 159 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int OSGScanParseSkel_parse (void *pSkel);


#endif /* !YY_OSGSCANPARSESKEL_HOME_GERRIT_PROJECTS_OPENSG_SENLIN_OPENSG_SENLIN_BUILD_BUILD_OSGSYSTEM_OSGSCANPARSESKELPARSER_HPP_INCLUDED  */
