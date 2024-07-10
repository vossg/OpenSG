/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         OSGScanParseSkel_parse
#define yylex           OSGScanParseSkel_lex
#define yyerror         OSGScanParseSkel_error
#define yydebug         OSGScanParseSkel_debug
#define yynerrs         OSGScanParseSkel_nerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "OSGScanParseSkelParser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_HEADER = 3,                 /* TOK_HEADER  */
  YYSYMBOL_TOK_PROFILE = 4,                /* TOK_PROFILE  */
  YYSYMBOL_TOK_COMPONENT = 5,              /* TOK_COMPONENT  */
  YYSYMBOL_TOK_META = 6,                   /* TOK_META  */
  YYSYMBOL_TOK_PROTO = 7,                  /* TOK_PROTO  */
  YYSYMBOL_TOK_EXTERNPROTO = 8,            /* TOK_EXTERNPROTO  */
  YYSYMBOL_TOK_IS = 9,                     /* TOK_IS  */
  YYSYMBOL_TOK_DEF = 10,                   /* TOK_DEF  */
  YYSYMBOL_TOK_USE = 11,                   /* TOK_USE  */
  YYSYMBOL_TOK_ROUTE = 12,                 /* TOK_ROUTE  */
  YYSYMBOL_TOK_TO = 13,                    /* TOK_TO  */
  YYSYMBOL_TOK_IMPORT = 14,                /* TOK_IMPORT  */
  YYSYMBOL_TOK_EXPORT = 15,                /* TOK_EXPORT  */
  YYSYMBOL_TOK_AS = 16,                    /* TOK_AS  */
  YYSYMBOL_TOK_eventIn = 17,               /* TOK_eventIn  */
  YYSYMBOL_TOK_eventOut = 18,              /* TOK_eventOut  */
  YYSYMBOL_TOK_exposedField = 19,          /* TOK_exposedField  */
  YYSYMBOL_TOK_field = 20,                 /* TOK_field  */
  YYSYMBOL_TOK_MFBool = 21,                /* TOK_MFBool  */
  YYSYMBOL_TOK_MFColor = 22,               /* TOK_MFColor  */
  YYSYMBOL_TOK_MFColorRGBA = 23,           /* TOK_MFColorRGBA  */
  YYSYMBOL_TOK_MFDouble = 24,              /* TOK_MFDouble  */
  YYSYMBOL_TOK_MFFloat = 25,               /* TOK_MFFloat  */
  YYSYMBOL_TOK_MFImage = 26,               /* TOK_MFImage  */
  YYSYMBOL_TOK_MFInt32 = 27,               /* TOK_MFInt32  */
  YYSYMBOL_TOK_MFMatrix3d = 28,            /* TOK_MFMatrix3d  */
  YYSYMBOL_TOK_MFMatrix3f = 29,            /* TOK_MFMatrix3f  */
  YYSYMBOL_TOK_MFMatrix4d = 30,            /* TOK_MFMatrix4d  */
  YYSYMBOL_TOK_MFMatrix4f = 31,            /* TOK_MFMatrix4f  */
  YYSYMBOL_TOK_MFNode = 32,                /* TOK_MFNode  */
  YYSYMBOL_TOK_MFRotation = 33,            /* TOK_MFRotation  */
  YYSYMBOL_TOK_MFString = 34,              /* TOK_MFString  */
  YYSYMBOL_TOK_MFTime = 35,                /* TOK_MFTime  */
  YYSYMBOL_TOK_MFVec2d = 36,               /* TOK_MFVec2d  */
  YYSYMBOL_TOK_MFVec2f = 37,               /* TOK_MFVec2f  */
  YYSYMBOL_TOK_MFVec3d = 38,               /* TOK_MFVec3d  */
  YYSYMBOL_TOK_MFVec3f = 39,               /* TOK_MFVec3f  */
  YYSYMBOL_TOK_MFVec4d = 40,               /* TOK_MFVec4d  */
  YYSYMBOL_TOK_MFVec4f = 41,               /* TOK_MFVec4f  */
  YYSYMBOL_TOK_SFBool = 42,                /* TOK_SFBool  */
  YYSYMBOL_TOK_SFColor = 43,               /* TOK_SFColor  */
  YYSYMBOL_TOK_SFColorRGBA = 44,           /* TOK_SFColorRGBA  */
  YYSYMBOL_TOK_SFDouble = 45,              /* TOK_SFDouble  */
  YYSYMBOL_TOK_SFFloat = 46,               /* TOK_SFFloat  */
  YYSYMBOL_TOK_SFImage = 47,               /* TOK_SFImage  */
  YYSYMBOL_TOK_SFInt32 = 48,               /* TOK_SFInt32  */
  YYSYMBOL_TOK_SFMatrix3d = 49,            /* TOK_SFMatrix3d  */
  YYSYMBOL_TOK_SFMatrix3f = 50,            /* TOK_SFMatrix3f  */
  YYSYMBOL_TOK_SFMatrix4d = 51,            /* TOK_SFMatrix4d  */
  YYSYMBOL_TOK_SFMatrix4f = 52,            /* TOK_SFMatrix4f  */
  YYSYMBOL_TOK_SFNode = 53,                /* TOK_SFNode  */
  YYSYMBOL_TOK_SFRotation = 54,            /* TOK_SFRotation  */
  YYSYMBOL_TOK_SFString = 55,              /* TOK_SFString  */
  YYSYMBOL_TOK_SFTime = 56,                /* TOK_SFTime  */
  YYSYMBOL_TOK_SFVec2d = 57,               /* TOK_SFVec2d  */
  YYSYMBOL_TOK_SFVec2f = 58,               /* TOK_SFVec2f  */
  YYSYMBOL_TOK_SFVec3d = 59,               /* TOK_SFVec3d  */
  YYSYMBOL_TOK_SFVec3f = 60,               /* TOK_SFVec3f  */
  YYSYMBOL_TOK_SFVec4d = 61,               /* TOK_SFVec4d  */
  YYSYMBOL_TOK_SFVec4f = 62,               /* TOK_SFVec4f  */
  YYSYMBOL_TOK_MFColor4i = 63,             /* TOK_MFColor4i  */
  YYSYMBOL_TOK_MFPnt2f = 64,               /* TOK_MFPnt2f  */
  YYSYMBOL_TOK_MFPnt3f = 65,               /* TOK_MFPnt3f  */
  YYSYMBOL_TOK_MFPnt4f = 66,               /* TOK_MFPnt4f  */
  YYSYMBOL_TOK_MFPlane = 67,               /* TOK_MFPlane  */
  YYSYMBOL_TOK_SFColor4i = 68,             /* TOK_SFColor4i  */
  YYSYMBOL_TOK_SFPnt2f = 69,               /* TOK_SFPnt2f  */
  YYSYMBOL_TOK_SFPnt3f = 70,               /* TOK_SFPnt3f  */
  YYSYMBOL_TOK_SFPnt4f = 71,               /* TOK_SFPnt4f  */
  YYSYMBOL_TOK_SFPlane = 72,               /* TOK_SFPlane  */
  YYSYMBOL_TOK_SFVolume = 73,              /* TOK_SFVolume  */
  YYSYMBOL_TOK_SFVec2i = 74,               /* TOK_SFVec2i  */
  YYSYMBOL_TOK_SFVec3i = 75,               /* TOK_SFVec3i  */
  YYSYMBOL_TOK_MFVec2i = 76,               /* TOK_MFVec2i  */
  YYSYMBOL_TOK_hex = 77,                   /* TOK_hex  */
  YYSYMBOL_TOK_int32 = 78,                 /* TOK_int32  */
  YYSYMBOL_TOK_double = 79,                /* TOK_double  */
  YYSYMBOL_TOK_string = 80,                /* TOK_string  */
  YYSYMBOL_TOK_bool = 81,                  /* TOK_bool  */
  YYSYMBOL_TOK_NULL = 82,                  /* TOK_NULL  */
  YYSYMBOL_TOK_Id = 83,                    /* TOK_Id  */
  YYSYMBOL_TOK_ImageFinished = 84,         /* TOK_ImageFinished  */
  YYSYMBOL_TOK_Error = 85,                 /* TOK_Error  */
  YYSYMBOL_TOK_ClusterLocal = 86,          /* TOK_ClusterLocal  */
  YYSYMBOL_TOK_ThreadLocal = 87,           /* TOK_ThreadLocal  */
  YYSYMBOL_88_ = 88,                       /* '['  */
  YYSYMBOL_89_ = 89,                       /* ']'  */
  YYSYMBOL_90_ = 90,                       /* '{'  */
  YYSYMBOL_91_ = 91,                       /* '}'  */
  YYSYMBOL_92_ = 92,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_x3dScene = 94,                  /* x3dScene  */
  YYSYMBOL_headerStatement = 95,           /* headerStatement  */
  YYSYMBOL_profileStatement = 96,          /* profileStatement  */
  YYSYMBOL_profileNameId = 97,             /* profileNameId  */
  YYSYMBOL_componentStatements = 98,       /* componentStatements  */
  YYSYMBOL_componentStatement = 99,        /* componentStatement  */
  YYSYMBOL_componentNameId = 100,          /* componentNameId  */
  YYSYMBOL_metaStatements = 101,           /* metaStatements  */
  YYSYMBOL_metaStatement = 102,            /* metaStatement  */
  YYSYMBOL_103_1 = 103,                    /* $@1  */
  YYSYMBOL_metakey = 104,                  /* metakey  */
  YYSYMBOL_metavalue = 105,                /* metavalue  */
  YYSYMBOL_statements = 106,               /* statements  */
  YYSYMBOL_statement = 107,                /* statement  */
  YYSYMBOL_nodeStatement = 108,            /* nodeStatement  */
  YYSYMBOL_109_2 = 109,                    /* $@2  */
  YYSYMBOL_110_3 = 110,                    /* $@3  */
  YYSYMBOL_111_4 = 111,                    /* $@4  */
  YYSYMBOL_112_5 = 112,                    /* $@5  */
  YYSYMBOL_113_6 = 113,                    /* $@6  */
  YYSYMBOL_nodeOptionStatement = 114,      /* nodeOptionStatement  */
  YYSYMBOL_nodeOptions = 115,              /* nodeOptions  */
  YYSYMBOL_nodeOption = 116,               /* nodeOption  */
  YYSYMBOL_protoStatement = 117,           /* protoStatement  */
  YYSYMBOL_proto = 118,                    /* proto  */
  YYSYMBOL_119_7 = 119,                    /* $@7  */
  YYSYMBOL_120_8 = 120,                    /* $@8  */
  YYSYMBOL_interfaceDeclarations = 121,    /* interfaceDeclarations  */
  YYSYMBOL_interfaceDeclaration = 122,     /* interfaceDeclaration  */
  YYSYMBOL_123_9 = 123,                    /* $@9  */
  YYSYMBOL_124_10 = 124,                   /* $@10  */
  YYSYMBOL_125_11 = 125,                   /* $@11  */
  YYSYMBOL_126_12 = 126,                   /* $@12  */
  YYSYMBOL_127_13 = 127,                   /* $@13  */
  YYSYMBOL_128_14 = 128,                   /* $@14  */
  YYSYMBOL_externproto = 129,              /* externproto  */
  YYSYMBOL_130_15 = 130,                   /* $@15  */
  YYSYMBOL_131_16 = 131,                   /* $@16  */
  YYSYMBOL_externInterfaceDeclarations = 132, /* externInterfaceDeclarations  */
  YYSYMBOL_externInterfaceDeclaration = 133, /* externInterfaceDeclaration  */
  YYSYMBOL_134_17 = 134,                   /* $@17  */
  YYSYMBOL_135_18 = 135,                   /* $@18  */
  YYSYMBOL_136_19 = 136,                   /* $@19  */
  YYSYMBOL_137_20 = 137,                   /* $@20  */
  YYSYMBOL_routeStatement = 138,           /* routeStatement  */
  YYSYMBOL_139_21 = 139,                   /* $@21  */
  YYSYMBOL_140_22 = 140,                   /* $@22  */
  YYSYMBOL_141_23 = 141,                   /* $@23  */
  YYSYMBOL_importStatement = 142,          /* importStatement  */
  YYSYMBOL_143_24 = 143,                   /* $@24  */
  YYSYMBOL_144_25 = 144,                   /* $@25  */
  YYSYMBOL_exportStatement = 145,          /* exportStatement  */
  YYSYMBOL_146_26 = 146,                   /* $@26  */
  YYSYMBOL_asStatement = 147,              /* asStatement  */
  YYSYMBOL_URLList = 148,                  /* URLList  */
  YYSYMBOL_node = 149,                     /* node  */
  YYSYMBOL_scriptBody = 150,               /* scriptBody  */
  YYSYMBOL_scriptBodyElement = 151,        /* scriptBodyElement  */
  YYSYMBOL_eventInDeclaration = 152,       /* eventInDeclaration  */
  YYSYMBOL_153_27 = 153,                   /* $@27  */
  YYSYMBOL_154_28 = 154,                   /* $@28  */
  YYSYMBOL_eventOutDeclaration = 155,      /* eventOutDeclaration  */
  YYSYMBOL_156_29 = 156,                   /* $@29  */
  YYSYMBOL_157_30 = 157,                   /* $@30  */
  YYSYMBOL_eventDeclarationEnd = 158,      /* eventDeclarationEnd  */
  YYSYMBOL_fieldDeclaration = 159,         /* fieldDeclaration  */
  YYSYMBOL_160_31 = 160,                   /* $@31  */
  YYSYMBOL_161_32 = 161,                   /* $@32  */
  YYSYMBOL_162_33 = 162,                   /* $@33  */
  YYSYMBOL_163_34 = 163,                   /* $@34  */
  YYSYMBOL_exposedFieldDeclaration = 164,  /* exposedFieldDeclaration  */
  YYSYMBOL_165_35 = 165,                   /* $@35  */
  YYSYMBOL_166_36 = 166,                   /* $@36  */
  YYSYMBOL_fieldDeclarationEnd = 167,      /* fieldDeclarationEnd  */
  YYSYMBOL_nodeBodyElement = 168,          /* nodeBodyElement  */
  YYSYMBOL_169_37 = 169,                   /* $@37  */
  YYSYMBOL_fieldEnd = 170,                 /* fieldEnd  */
  YYSYMBOL_nodeNameId = 171,               /* nodeNameId  */
  YYSYMBOL_nodeTypeId = 172,               /* nodeTypeId  */
  YYSYMBOL_fieldId = 173,                  /* fieldId  */
  YYSYMBOL_eventInId = 174,                /* eventInId  */
  YYSYMBOL_eventOutId = 175,               /* eventOutId  */
  YYSYMBOL_fieldType = 176,                /* fieldType  */
  YYSYMBOL_fieldValue = 177,               /* fieldValue  */
  YYSYMBOL_int32 = 178,                    /* int32  */
  YYSYMBOL_double = 179,                   /* double  */
  YYSYMBOL_float = 180,                    /* float  */
  YYSYMBOL_sfboolValue = 181,              /* sfboolValue  */
  YYSYMBOL_sfcolorValue = 182,             /* sfcolorValue  */
  YYSYMBOL_183_38 = 183,                   /* $@38  */
  YYSYMBOL_184_39 = 184,                   /* $@39  */
  YYSYMBOL_sfcolorRGBAValue = 185,         /* sfcolorRGBAValue  */
  YYSYMBOL_186_40 = 186,                   /* $@40  */
  YYSYMBOL_187_41 = 187,                   /* $@41  */
  YYSYMBOL_188_42 = 188,                   /* $@42  */
  YYSYMBOL_sfdoubleValue = 189,            /* sfdoubleValue  */
  YYSYMBOL_sffloatValue = 190,             /* sffloatValue  */
  YYSYMBOL_sfimageValue = 191,             /* sfimageValue  */
  YYSYMBOL_192_43 = 192,                   /* $@43  */
  YYSYMBOL_193_44 = 193,                   /* $@44  */
  YYSYMBOL_194_45 = 194,                   /* $@45  */
  YYSYMBOL_pixels = 195,                   /* pixels  */
  YYSYMBOL_sfint32Value = 196,             /* sfint32Value  */
  YYSYMBOL_sfmatrix3dValue = 197,          /* sfmatrix3dValue  */
  YYSYMBOL_198_46 = 198,                   /* $@46  */
  YYSYMBOL_199_47 = 199,                   /* $@47  */
  YYSYMBOL_200_48 = 200,                   /* $@48  */
  YYSYMBOL_201_49 = 201,                   /* $@49  */
  YYSYMBOL_202_50 = 202,                   /* $@50  */
  YYSYMBOL_203_51 = 203,                   /* $@51  */
  YYSYMBOL_204_52 = 204,                   /* $@52  */
  YYSYMBOL_205_53 = 205,                   /* $@53  */
  YYSYMBOL_sfmatrix3fValue = 206,          /* sfmatrix3fValue  */
  YYSYMBOL_207_54 = 207,                   /* $@54  */
  YYSYMBOL_208_55 = 208,                   /* $@55  */
  YYSYMBOL_209_56 = 209,                   /* $@56  */
  YYSYMBOL_210_57 = 210,                   /* $@57  */
  YYSYMBOL_211_58 = 211,                   /* $@58  */
  YYSYMBOL_212_59 = 212,                   /* $@59  */
  YYSYMBOL_213_60 = 213,                   /* $@60  */
  YYSYMBOL_214_61 = 214,                   /* $@61  */
  YYSYMBOL_sfmatrix4dValue = 215,          /* sfmatrix4dValue  */
  YYSYMBOL_216_62 = 216,                   /* $@62  */
  YYSYMBOL_217_63 = 217,                   /* $@63  */
  YYSYMBOL_218_64 = 218,                   /* $@64  */
  YYSYMBOL_219_65 = 219,                   /* $@65  */
  YYSYMBOL_220_66 = 220,                   /* $@66  */
  YYSYMBOL_221_67 = 221,                   /* $@67  */
  YYSYMBOL_222_68 = 222,                   /* $@68  */
  YYSYMBOL_223_69 = 223,                   /* $@69  */
  YYSYMBOL_224_70 = 224,                   /* $@70  */
  YYSYMBOL_225_71 = 225,                   /* $@71  */
  YYSYMBOL_226_72 = 226,                   /* $@72  */
  YYSYMBOL_227_73 = 227,                   /* $@73  */
  YYSYMBOL_228_74 = 228,                   /* $@74  */
  YYSYMBOL_229_75 = 229,                   /* $@75  */
  YYSYMBOL_230_76 = 230,                   /* $@76  */
  YYSYMBOL_sfmatrix4fValue = 231,          /* sfmatrix4fValue  */
  YYSYMBOL_232_77 = 232,                   /* $@77  */
  YYSYMBOL_233_78 = 233,                   /* $@78  */
  YYSYMBOL_234_79 = 234,                   /* $@79  */
  YYSYMBOL_235_80 = 235,                   /* $@80  */
  YYSYMBOL_236_81 = 236,                   /* $@81  */
  YYSYMBOL_237_82 = 237,                   /* $@82  */
  YYSYMBOL_238_83 = 238,                   /* $@83  */
  YYSYMBOL_239_84 = 239,                   /* $@84  */
  YYSYMBOL_240_85 = 240,                   /* $@85  */
  YYSYMBOL_241_86 = 241,                   /* $@86  */
  YYSYMBOL_242_87 = 242,                   /* $@87  */
  YYSYMBOL_243_88 = 243,                   /* $@88  */
  YYSYMBOL_244_89 = 244,                   /* $@89  */
  YYSYMBOL_245_90 = 245,                   /* $@90  */
  YYSYMBOL_246_91 = 246,                   /* $@91  */
  YYSYMBOL_sfnodeValue = 247,              /* sfnodeValue  */
  YYSYMBOL_sfrotationValue = 248,          /* sfrotationValue  */
  YYSYMBOL_249_92 = 249,                   /* $@92  */
  YYSYMBOL_250_93 = 250,                   /* $@93  */
  YYSYMBOL_251_94 = 251,                   /* $@94  */
  YYSYMBOL_sfstringValue = 252,            /* sfstringValue  */
  YYSYMBOL_sftimeValue = 253,              /* sftimeValue  */
  YYSYMBOL_sfvec2dValue = 254,             /* sfvec2dValue  */
  YYSYMBOL_255_95 = 255,                   /* $@95  */
  YYSYMBOL_sfvec2fValue = 256,             /* sfvec2fValue  */
  YYSYMBOL_257_96 = 257,                   /* $@96  */
  YYSYMBOL_sfvec3dValue = 258,             /* sfvec3dValue  */
  YYSYMBOL_259_97 = 259,                   /* $@97  */
  YYSYMBOL_260_98 = 260,                   /* $@98  */
  YYSYMBOL_261_99 = 261,                   /* $@99  */
  YYSYMBOL_sfvec3fValue = 262,             /* sfvec3fValue  */
  YYSYMBOL_263_100 = 263,                  /* $@100  */
  YYSYMBOL_264_101 = 264,                  /* $@101  */
  YYSYMBOL_265_102 = 265,                  /* $@102  */
  YYSYMBOL_sfvec4dValue = 266,             /* sfvec4dValue  */
  YYSYMBOL_267_103 = 267,                  /* $@103  */
  YYSYMBOL_268_104 = 268,                  /* $@104  */
  YYSYMBOL_269_105 = 269,                  /* $@105  */
  YYSYMBOL_270_106 = 270,                  /* $@106  */
  YYSYMBOL_sfvec4fValue = 271,             /* sfvec4fValue  */
  YYSYMBOL_272_107 = 272,                  /* $@107  */
  YYSYMBOL_273_108 = 273,                  /* $@108  */
  YYSYMBOL_274_109 = 274,                  /* $@109  */
  YYSYMBOL_275_110 = 275,                  /* $@110  */
  YYSYMBOL_mfboolValue = 276,              /* mfboolValue  */
  YYSYMBOL_sfboolValues = 277,             /* sfboolValues  */
  YYSYMBOL_mfcolorValue = 278,             /* mfcolorValue  */
  YYSYMBOL_sfcolorValues = 279,            /* sfcolorValues  */
  YYSYMBOL_mfcolorRGBAValue = 280,         /* mfcolorRGBAValue  */
  YYSYMBOL_sfcolorRGBAValues = 281,        /* sfcolorRGBAValues  */
  YYSYMBOL_mfdoubleValue = 282,            /* mfdoubleValue  */
  YYSYMBOL_sfdoubleValues = 283,           /* sfdoubleValues  */
  YYSYMBOL_mffloatValue = 284,             /* mffloatValue  */
  YYSYMBOL_sffloatValues = 285,            /* sffloatValues  */
  YYSYMBOL_mfimageValue = 286,             /* mfimageValue  */
  YYSYMBOL_sfimageValues = 287,            /* sfimageValues  */
  YYSYMBOL_mfint32Value = 288,             /* mfint32Value  */
  YYSYMBOL_sfint32Values = 289,            /* sfint32Values  */
  YYSYMBOL_mfmatrix3dValue = 290,          /* mfmatrix3dValue  */
  YYSYMBOL_sfmatrix3dValues = 291,         /* sfmatrix3dValues  */
  YYSYMBOL_mfmatrix3fValue = 292,          /* mfmatrix3fValue  */
  YYSYMBOL_sfmatrix3fValues = 293,         /* sfmatrix3fValues  */
  YYSYMBOL_mfmatrix4dValue = 294,          /* mfmatrix4dValue  */
  YYSYMBOL_sfmatrix4dValues = 295,         /* sfmatrix4dValues  */
  YYSYMBOL_mfmatrix4fValue = 296,          /* mfmatrix4fValue  */
  YYSYMBOL_sfmatrix4fValues = 297,         /* sfmatrix4fValues  */
  YYSYMBOL_mfnodeValue = 298,              /* mfnodeValue  */
  YYSYMBOL_sfnodeValues = 299,             /* sfnodeValues  */
  YYSYMBOL_mfrotationValue = 300,          /* mfrotationValue  */
  YYSYMBOL_sfrotationValues = 301,         /* sfrotationValues  */
  YYSYMBOL_mfstringValue = 302,            /* mfstringValue  */
  YYSYMBOL_sfstringValues = 303,           /* sfstringValues  */
  YYSYMBOL_mftimeValue = 304,              /* mftimeValue  */
  YYSYMBOL_sftimeValues = 305,             /* sftimeValues  */
  YYSYMBOL_mfvec2dValue = 306,             /* mfvec2dValue  */
  YYSYMBOL_sfvec2dValues = 307,            /* sfvec2dValues  */
  YYSYMBOL_mfvec2fValue = 308,             /* mfvec2fValue  */
  YYSYMBOL_sfvec2fValues = 309,            /* sfvec2fValues  */
  YYSYMBOL_mfvec3dValue = 310,             /* mfvec3dValue  */
  YYSYMBOL_sfvec3dValues = 311,            /* sfvec3dValues  */
  YYSYMBOL_mfvec3fValue = 312,             /* mfvec3fValue  */
  YYSYMBOL_sfvec3fValues = 313,            /* sfvec3fValues  */
  YYSYMBOL_mfvec4dValue = 314,             /* mfvec4dValue  */
  YYSYMBOL_sfvec4dValues = 315,            /* sfvec4dValues  */
  YYSYMBOL_mfvec4fValue = 316,             /* mfvec4fValue  */
  YYSYMBOL_sfvec4fValues = 317,            /* sfvec4fValues  */
  YYSYMBOL_sfcolor4iValue = 318,           /* sfcolor4iValue  */
  YYSYMBOL_319_111 = 319,                  /* $@111  */
  YYSYMBOL_320_112 = 320,                  /* $@112  */
  YYSYMBOL_321_113 = 321,                  /* $@113  */
  YYSYMBOL_sfpnt2fValue = 322,             /* sfpnt2fValue  */
  YYSYMBOL_323_114 = 323,                  /* $@114  */
  YYSYMBOL_sfpnt3fValue = 324,             /* sfpnt3fValue  */
  YYSYMBOL_325_115 = 325,                  /* $@115  */
  YYSYMBOL_326_116 = 326,                  /* $@116  */
  YYSYMBOL_sfpnt4fValue = 327,             /* sfpnt4fValue  */
  YYSYMBOL_328_117 = 328,                  /* $@117  */
  YYSYMBOL_329_118 = 329,                  /* $@118  */
  YYSYMBOL_330_119 = 330,                  /* $@119  */
  YYSYMBOL_sfplaneValue = 331,             /* sfplaneValue  */
  YYSYMBOL_332_120 = 332,                  /* $@120  */
  YYSYMBOL_333_121 = 333,                  /* $@121  */
  YYSYMBOL_334_122 = 334,                  /* $@122  */
  YYSYMBOL_sfVolumeValue = 335,            /* sfVolumeValue  */
  YYSYMBOL_336_123 = 336,                  /* $@123  */
  YYSYMBOL_337_124 = 337,                  /* $@124  */
  YYSYMBOL_338_125 = 338,                  /* $@125  */
  YYSYMBOL_339_126 = 339,                  /* $@126  */
  YYSYMBOL_340_127 = 340,                  /* $@127  */
  YYSYMBOL_341_128 = 341,                  /* $@128  */
  YYSYMBOL_sfvec2iValue = 342,             /* sfvec2iValue  */
  YYSYMBOL_343_129 = 343,                  /* $@129  */
  YYSYMBOL_sfvec3iValue = 344,             /* sfvec3iValue  */
  YYSYMBOL_345_130 = 345,                  /* $@130  */
  YYSYMBOL_346_131 = 346,                  /* $@131  */
  YYSYMBOL_mfcolor4iValue = 347,           /* mfcolor4iValue  */
  YYSYMBOL_sfcolor4iValues = 348,          /* sfcolor4iValues  */
  YYSYMBOL_mfpnt2fValue = 349,             /* mfpnt2fValue  */
  YYSYMBOL_sfpnt2fValues = 350,            /* sfpnt2fValues  */
  YYSYMBOL_mfpnt3fValue = 351,             /* mfpnt3fValue  */
  YYSYMBOL_sfpnt3fValues = 352,            /* sfpnt3fValues  */
  YYSYMBOL_mfpnt4fValue = 353,             /* mfpnt4fValue  */
  YYSYMBOL_sfpnt4fValues = 354,            /* sfpnt4fValues  */
  YYSYMBOL_mfplaneValue = 355,             /* mfplaneValue  */
  YYSYMBOL_sfplaneValues = 356,            /* sfplaneValues  */
  YYSYMBOL_mfvec2iValue = 357,             /* mfvec2iValue  */
  YYSYMBOL_sfvec2iValues = 358             /* sfvec2iValues  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 49 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"


#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#endif

//#define YYPARSE_PARAM pSkel
//#define YYLEX_PARAM   pSkel

#define OSGScanParseSkel_error SKEL->handleError

#include "OSGConfig.h"
#include "OSGBaseFunctions.h"
#include "OSGMatrix.h"
#include "OSGScanParseLexer.h"
#include "OSGScanParseSkel.h"

#include <iostream>

#if defined(OSG_LINUX_ICC) || defined(OSG_WIN32_ICL)
#pragma warning( disable : 193 810 177 )
#endif

OSG_USING_NAMESPACE

#ifdef OSG_USE_OSG2_NAMESPACE
#define OSGScanParseSkel_lex OSG2ScanParseSkel_lex
#endif

int OSGScanParseSkel_lex(YYSTYPE *lvalp, void *);

#define SKEL (static_cast<ScanParseSkel *>(pSkel))

#if(!defined(__GNUC__) && defined(__ICL) && __INTEL_COMPILER_VERSION >= 900)
# define alloca(size)   __builtin_alloca (size)
#endif


#line 505 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   988

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  266
/* YYNRULES -- Number of rules.  */
#define YYNRULES  475
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  774

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   342


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    92,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,    91,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   214,   214,   221,   222,   225,   226,   229,   232,   233,
     237,   242,   243,   250,   251,   256,   254,   261,   264,   267,
     268,   271,   272,   273,   274,   275,   290,   293,   290,   298,
     301,   302,   297,   306,   310,   311,   314,   315,   318,   319,
     322,   323,   330,   331,   330,   335,   336,   340,   339,   343,
     342,   346,   347,   345,   350,   351,   349,   355,   356,   355,
     360,   361,   365,   364,   368,   367,   371,   370,   374,   373,
     379,   381,   383,   378,   390,   392,   389,   403,   402,   413,
     415,   418,   421,   424,   425,   428,   429,   430,   431,   432,
     433,   437,   438,   436,   443,   444,   442,   447,   449,   453,
     454,   452,   457,   458,   456,   472,   473,   471,   477,   478,
     482,   481,   490,   491,   492,   493,   496,   497,   500,   503,
     506,   509,   512,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   630,   631,   634,   635,   638,   639,   642,   646,
     649,   650,   649,   658,   659,   660,   658,   668,   674,   680,
     681,   683,   680,   693,   697,   700,   706,   707,   708,   709,
     710,   711,   712,   713,   706,   724,   725,   726,   727,   728,
     729,   730,   731,   724,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   742,
     768,   769,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   768,   794,   795,   798,   799,
     800,   798,   808,   812,   816,   820,   826,   832,   832,   840,
     840,   848,   849,   850,   848,   857,   858,   859,   857,   866,
     867,   868,   869,   866,   876,   877,   878,   879,   876,   886,
     887,   890,   891,   894,   895,   898,   899,   902,   903,   906,
     907,   910,   911,   914,   915,   918,   919,   922,   923,   926,
     927,   930,   931,   934,   935,   938,   939,   942,   943,   946,
     947,   950,   951,   954,   955,   958,   959,   962,   963,   966,
     967,   970,   971,   974,   975,   978,   979,   982,   983,   986,
     987,   990,   991,   994,   995,   998,   999,  1002,  1003,  1006,
    1007,  1010,  1011,  1014,  1015,  1018,  1019,  1022,  1023,  1026,
    1027,  1030,  1031,  1034,  1035,  1038,  1039,  1042,  1043,  1046,
    1047,  1050,  1051,  1056,  1057,  1058,  1056,  1067,  1067,  1075,
    1076,  1075,  1084,  1085,  1086,  1084,  1094,  1095,  1096,  1094,
    1104,  1105,  1106,  1107,  1108,  1109,  1104,  1121,  1121,  1129,
    1131,  1129,  1141,  1142,  1145,  1146,  1149,  1150,  1153,  1154,
    1157,  1158,  1161,  1162,  1165,  1166,  1169,  1170,  1173,  1174,
    1177,  1178,  1181,  1182,  1185,  1186
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_HEADER",
  "TOK_PROFILE", "TOK_COMPONENT", "TOK_META", "TOK_PROTO",
  "TOK_EXTERNPROTO", "TOK_IS", "TOK_DEF", "TOK_USE", "TOK_ROUTE", "TOK_TO",
  "TOK_IMPORT", "TOK_EXPORT", "TOK_AS", "TOK_eventIn", "TOK_eventOut",
  "TOK_exposedField", "TOK_field", "TOK_MFBool", "TOK_MFColor",
  "TOK_MFColorRGBA", "TOK_MFDouble", "TOK_MFFloat", "TOK_MFImage",
  "TOK_MFInt32", "TOK_MFMatrix3d", "TOK_MFMatrix3f", "TOK_MFMatrix4d",
  "TOK_MFMatrix4f", "TOK_MFNode", "TOK_MFRotation", "TOK_MFString",
  "TOK_MFTime", "TOK_MFVec2d", "TOK_MFVec2f", "TOK_MFVec3d", "TOK_MFVec3f",
  "TOK_MFVec4d", "TOK_MFVec4f", "TOK_SFBool", "TOK_SFColor",
  "TOK_SFColorRGBA", "TOK_SFDouble", "TOK_SFFloat", "TOK_SFImage",
  "TOK_SFInt32", "TOK_SFMatrix3d", "TOK_SFMatrix3f", "TOK_SFMatrix4d",
  "TOK_SFMatrix4f", "TOK_SFNode", "TOK_SFRotation", "TOK_SFString",
  "TOK_SFTime", "TOK_SFVec2d", "TOK_SFVec2f", "TOK_SFVec3d", "TOK_SFVec3f",
  "TOK_SFVec4d", "TOK_SFVec4f", "TOK_MFColor4i", "TOK_MFPnt2f",
  "TOK_MFPnt3f", "TOK_MFPnt4f", "TOK_MFPlane", "TOK_SFColor4i",
  "TOK_SFPnt2f", "TOK_SFPnt3f", "TOK_SFPnt4f", "TOK_SFPlane",
  "TOK_SFVolume", "TOK_SFVec2i", "TOK_SFVec3i", "TOK_MFVec2i", "TOK_hex",
  "TOK_int32", "TOK_double", "TOK_string", "TOK_bool", "TOK_NULL",
  "TOK_Id", "TOK_ImageFinished", "TOK_Error", "TOK_ClusterLocal",
  "TOK_ThreadLocal", "'['", "']'", "'{'", "'}'", "'.'", "$accept",
  "x3dScene", "headerStatement", "profileStatement", "profileNameId",
  "componentStatements", "componentStatement", "componentNameId",
  "metaStatements", "metaStatement", "$@1", "metakey", "metavalue",
  "statements", "statement", "nodeStatement", "$@2", "$@3", "$@4", "$@5",
  "$@6", "nodeOptionStatement", "nodeOptions", "nodeOption",
  "protoStatement", "proto", "$@7", "$@8", "interfaceDeclarations",
  "interfaceDeclaration", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14",
  "externproto", "$@15", "$@16", "externInterfaceDeclarations",
  "externInterfaceDeclaration", "$@17", "$@18", "$@19", "$@20",
  "routeStatement", "$@21", "$@22", "$@23", "importStatement", "$@24",
  "$@25", "exportStatement", "$@26", "asStatement", "URLList", "node",
  "scriptBody", "scriptBodyElement", "eventInDeclaration", "$@27", "$@28",
  "eventOutDeclaration", "$@29", "$@30", "eventDeclarationEnd",
  "fieldDeclaration", "$@31", "$@32", "$@33", "$@34",
  "exposedFieldDeclaration", "$@35", "$@36", "fieldDeclarationEnd",
  "nodeBodyElement", "$@37", "fieldEnd", "nodeNameId", "nodeTypeId",
  "fieldId", "eventInId", "eventOutId", "fieldType", "fieldValue", "int32",
  "double", "float", "sfboolValue", "sfcolorValue", "$@38", "$@39",
  "sfcolorRGBAValue", "$@40", "$@41", "$@42", "sfdoubleValue",
  "sffloatValue", "sfimageValue", "$@43", "$@44", "$@45", "pixels",
  "sfint32Value", "sfmatrix3dValue", "$@46", "$@47", "$@48", "$@49",
  "$@50", "$@51", "$@52", "$@53", "sfmatrix3fValue", "$@54", "$@55",
  "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "sfmatrix4dValue",
  "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70",
  "$@71", "$@72", "$@73", "$@74", "$@75", "$@76", "sfmatrix4fValue",
  "$@77", "$@78", "$@79", "$@80", "$@81", "$@82", "$@83", "$@84", "$@85",
  "$@86", "$@87", "$@88", "$@89", "$@90", "$@91", "sfnodeValue",
  "sfrotationValue", "$@92", "$@93", "$@94", "sfstringValue",
  "sftimeValue", "sfvec2dValue", "$@95", "sfvec2fValue", "$@96",
  "sfvec3dValue", "$@97", "$@98", "$@99", "sfvec3fValue", "$@100", "$@101",
  "$@102", "sfvec4dValue", "$@103", "$@104", "$@105", "$@106",
  "sfvec4fValue", "$@107", "$@108", "$@109", "$@110", "mfboolValue",
  "sfboolValues", "mfcolorValue", "sfcolorValues", "mfcolorRGBAValue",
  "sfcolorRGBAValues", "mfdoubleValue", "sfdoubleValues", "mffloatValue",
  "sffloatValues", "mfimageValue", "sfimageValues", "mfint32Value",
  "sfint32Values", "mfmatrix3dValue", "sfmatrix3dValues",
  "mfmatrix3fValue", "sfmatrix3fValues", "mfmatrix4dValue",
  "sfmatrix4dValues", "mfmatrix4fValue", "sfmatrix4fValues", "mfnodeValue",
  "sfnodeValues", "mfrotationValue", "sfrotationValues", "mfstringValue",
  "sfstringValues", "mftimeValue", "sftimeValues", "mfvec2dValue",
  "sfvec2dValues", "mfvec2fValue", "sfvec2fValues", "mfvec3dValue",
  "sfvec3dValues", "mfvec3fValue", "sfvec3fValues", "mfvec4dValue",
  "sfvec4dValues", "mfvec4fValue", "sfvec4fValues", "sfcolor4iValue",
  "$@111", "$@112", "$@113", "sfpnt2fValue", "$@114", "sfpnt3fValue",
  "$@115", "$@116", "sfpnt4fValue", "$@117", "$@118", "$@119",
  "sfplaneValue", "$@120", "$@121", "$@122", "sfVolumeValue", "$@123",
  "$@124", "$@125", "$@126", "$@127", "$@128", "sfvec2iValue", "$@129",
  "sfvec3iValue", "$@130", "$@131", "mfcolor4iValue", "sfcolor4iValues",
  "mfpnt2fValue", "sfpnt2fValues", "mfpnt3fValue", "sfpnt3fValues",
  "mfpnt4fValue", "sfpnt4fValues", "mfplaneValue", "sfplaneValues",
  "mfvec2iValue", "sfvec2iValues", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-286)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,  -286,    36,    48,  -286,   -27,  -286,  -286,  -286,    68,
      18,  -286,    71,  -286,  -286,  -286,   -11,  -286,   177,  -286,
    -286,     6,     6,    14,    14,    14,    14,    14,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,    26,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,    30,  -286,  -286,
      35,    41,     6,    44,    58,   141,  -286,  -286,  -286,  -286,
    -286,    82,    14,    14,  -286,   549,    78,    63,   312,    30,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
     915,   915,   915,   915,  -286,  -286,   915,   915,   915,   915,
    -286,  -286,  -286,   119,   141,   123,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,    88,  -286,  -286,  -286,  -286,   261,    78,
      14,  -286,  -286,   915,   915,   915,   740,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
     100,    82,   103,   103,  -286,   100,    82,   103,   103,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,   803,  -286,  -286,  -286,  -286,  -286,
      64,  -286,  -286,  -286,  -286,    93,   111,   100,    82,   103,
     103,   103,   -30,   300,   324,   450,   454,    84,   116,   458,
     466,   471,   483,    51,   485,   261,   488,   490,   496,   502,
     507,   513,   518,   -55,    32,    32,    49,    32,    86,    86,
      49,    32,    49,    32,    98,    32,   533,    49,    49,    32,
      49,    32,    49,    32,   163,   524,   526,   544,   546,    86,
      32,    32,    32,    32,    86,    86,    86,   277,  -286,   181,
    -286,   859,   859,  -286,  -286,  -286,   100,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,   103,   -30,   300,   324,
     450,   454,    84,   116,   458,   466,   471,   483,    51,   485,
     261,   488,   490,   496,   502,   507,   513,   518,   -55,    32,
      32,    49,    32,    86,    86,    49,    32,    49,    32,    98,
      32,   533,    49,    49,    32,    49,    32,    49,    32,   163,
     524,   526,   544,   546,    86,    32,    32,    32,    32,    86,
    -286,  -286,  -286,   186,   186,   803,   803,   803,   127,   278,
      32,   296,    32,   298,   302,     7,    86,   124,   317,    49,
     320,    32,   326,    49,   354,    32,    77,   373,    32,   381,
     385,    49,   387,    32,   389,    49,   393,    32,   405,    49,
     407,    32,   246,    86,   414,    32,   427,    32,   432,    32,
     435,    32,    32,    86,    86,   259,  -286,   103,  -286,  -286,
    -286,   198,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
     103,    32,    32,    86,    49,    32,    49,    32,    32,    49,
      32,    49,    32,    86,    32,    32,    32,    32,    86,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,    32,  -286,
      49,    32,    49,    32,    32,  -286,  -286,    49,    32,    86,
      32,    32,    32,  -286,    67,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,    49,    32,
      49,    32,  -286,  -286,    32,  -286,  -286,  -286,  -286,  -286,
      49,    32,    49,    32,    32,  -286,  -286,  -286,  -286,  -286,
      49,    32,    49,    32,    32,  -286,  -286,  -286,  -286,  -286,
      49,    32,    49,    32,  -286,  -286,  -286,  -286,    49,    32,
      49,    32,  -286,  -286,  -286,  -286,    49,    32,  -286,  -286,
      49,    32,  -286,  -286,    49,    32,  -286,  -286,    49,    32,
    -286,  -286,    49,    32,  -286,  -286,    49,    32,  -286,  -286,
      49,    32,  -286,  -286
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,     3,     0,     6,     1,     0,     9,     7,     5,    14,
       0,     8,    20,    12,    11,    10,     0,    13,     2,    17,
      15,     0,     0,     0,     0,     0,     0,     0,   119,    19,
      21,    22,    40,    41,    23,    24,    25,    26,     0,    42,
      57,   118,    29,    33,    70,    74,    77,    35,    18,    16,
       0,     0,     0,     0,     0,    80,    37,    27,    46,    61,
      30,     0,     0,     0,    78,     0,     0,     0,     0,    35,
     122,    71,    75,    79,    38,    39,    34,    36,    84,    28,
       0,     0,     0,     0,    43,    45,     0,     0,     0,     0,
      58,    60,    31,     0,    80,     0,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    47,
      49,    54,    51,     0,    62,    64,    68,    66,     0,     0,
       0,    76,    90,     0,     0,     0,     0,   120,    82,   113,
     112,   114,   115,    83,    86,    87,    88,    89,    85,   110,
       0,     0,     0,     0,    20,     0,     0,     0,     0,   314,
     315,   312,   313,   394,    59,   391,    81,    32,    72,    91,
      94,   105,   102,    99,     0,   121,    48,    50,    55,    52,
       0,    63,    65,    69,    67,     0,     0,     0,     0,     0,
       0,     0,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,     0,     0,   111,     0,
     116,     0,     0,    44,   392,   393,     0,    92,    95,   106,
     103,   100,   238,   239,   342,   339,   176,   236,   237,   346,
     240,   343,   177,   350,   243,   347,   178,   234,   235,   354,
     247,   351,   179,   358,   248,   355,   180,   232,   233,   362,
     249,   359,   181,   366,   255,   363,   182,   370,   256,   367,
     183,   374,   265,   371,   184,   378,   274,   375,   185,   382,
     290,   379,   186,   307,   386,   306,   383,   187,   390,   308,
     387,   188,   189,   398,   316,   395,   190,   402,   317,   399,
     191,   406,   319,   403,   192,   410,   321,   407,   193,   414,
     325,   411,   194,   418,   329,   415,   195,   422,   334,   419,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   455,   423,   452,   218,   459,   427,   456,   219,
     463,   429,   460,   220,   467,   432,   464,   221,   471,   436,
     468,   222,   223,   224,   225,   226,   227,   440,   228,   447,
     229,   449,   230,   475,   472,   231,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    53,    73,    97,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,    93,    96,
     107,     0,   108,   104,   101,   340,   341,   344,   345,   241,
     348,   349,   244,   352,   353,   356,   357,   360,   361,   250,
     364,   365,   368,   369,   257,   372,   373,   266,   376,   377,
     275,   380,   381,   291,   384,   385,   388,   389,   309,   396,
     397,   400,   401,   318,   404,   405,   320,   408,   409,   322,
     412,   413,   326,   416,   417,   330,   420,   421,   335,   453,
     454,   424,   457,   458,   428,   461,   462,   430,   465,   466,
     433,   469,   470,   437,   441,   448,   450,   473,   474,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     242,   245,   251,   258,   267,   276,   292,   310,   323,   327,
     331,   336,   425,   431,   434,   438,   442,   451,     0,   254,
       0,     0,     0,     0,     0,   324,   328,     0,     0,     0,
       0,     0,     0,   246,     0,   259,   268,   277,   293,   311,
     332,   337,   426,   435,   439,   443,   252,   253,     0,     0,
       0,     0,   333,   338,     0,   260,   269,   278,   294,   444,
       0,     0,     0,     0,     0,   261,   270,   279,   295,   445,
       0,     0,     0,     0,     0,   262,   271,   280,   296,   446,
       0,     0,     0,     0,   263,   272,   281,   297,     0,     0,
       0,     0,   264,   273,   282,   298,     0,     0,   283,   299,
       0,     0,   284,   300,     0,     0,   285,   301,     0,     0,
     286,   302,     0,     0,   287,   303,     0,     0,   288,   304,
       0,     0,   289,   305
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,    25,  -286,    -5,  -286,  -286,  -286,  -286,
    -286,   159,  -286,  -286,   148,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,   171,  -286,  -286,  -286,   172,
    -286,  -286,   226,  -286,   233,  -286,   174,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -147,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -285,  -286,  -286,  -286,    40,    73,
    -128,  -160,   -69,    33,  -182,    76,   -83,  -224,  -138,  -137,
    -286,  -286,  -155,  -286,  -286,  -286,  -214,  -207,  -162,  -286,
    -286,  -286,  -286,  -181,  -180,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -201,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -240,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -233,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -221,  -225,  -286,  -286,  -286,  -152,
    -223,  -220,  -286,  -254,  -286,  -245,  -286,  -286,  -286,  -244,
    -286,  -286,  -286,  -255,  -286,  -286,  -286,  -286,  -260,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,   176,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -258,  -286,  -286,  -286,  -246,
    -286,  -252,  -286,  -286,  -263,  -286,  -286,  -286,  -269,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -276,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     6,     8,     9,    11,    15,    12,    17,
      38,    20,    49,    18,    29,   345,    47,    66,    52,    69,
     159,    57,    65,    77,    31,    32,    50,   153,    67,    85,
     180,   181,   183,   282,   182,   281,    33,    51,   158,    68,
      91,   185,   186,   188,   187,    34,    53,    93,   216,    35,
      54,    94,    36,    55,    64,   194,    79,    95,   173,   174,
     217,   493,   175,   218,   494,   548,   176,   221,   497,   220,
     496,   177,   219,   495,   550,   178,   204,   278,    42,    37,
     179,   206,    71,   551,   552,   320,   310,   300,   295,   301,
     500,   631,   305,   502,   632,   668,   311,   315,   321,   506,
     633,   669,   684,   325,   329,   509,   634,   670,   698,   710,
     720,   730,   738,   333,   511,   635,   671,   699,   711,   721,
     731,   739,   337,   513,   636,   672,   700,   712,   722,   732,
     740,   746,   750,   754,   758,   762,   766,   770,   341,   515,
     637,   673,   701,   713,   723,   733,   741,   747,   751,   755,
     759,   763,   767,   771,   346,   350,   518,   638,   674,   195,
     355,   359,   521,   363,   523,   367,   525,   639,   675,   371,
     527,   640,   676,   375,   529,   641,   677,   702,   379,   531,
     642,   678,   703,   296,   498,   302,   499,   306,   501,   312,
     503,   316,   504,   322,   505,   326,   507,   330,   508,   334,
     510,   338,   512,   342,   514,   347,   516,   351,   517,   352,
     215,   356,   519,   360,   520,   364,   522,   368,   524,   372,
     526,   376,   528,   380,   530,   404,   533,   643,   679,   408,
     535,   412,   537,   644,   416,   539,   645,   680,   420,   541,
     646,   681,   428,   542,   647,   682,   704,   714,   724,   430,
     543,   432,   544,   648,   405,   532,   409,   534,   413,   536,
     417,   538,   421,   540,   435,   545
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     304,   434,   314,   401,   426,   397,   332,   400,   340,   425,
     349,   422,   390,    30,   362,   398,   370,   399,   378,   424,
     391,   304,   280,   314,   423,   211,   292,   332,   293,   340,
     393,   349,   384,   392,   395,   362,     4,   370,   396,   378,
     385,   407,   411,   415,   419,     1,   407,   411,   415,   419,
     389,   292,     5,   293,   208,   209,     7,   287,   294,   213,
     214,    23,    24,   285,    43,    44,    45,    46,   387,    19,
     388,    21,    22,    10,    23,    24,    25,    16,    26,    27,
      80,    81,    82,    83,   317,   318,   386,    23,    24,    28,
     383,   289,   290,   291,    39,    40,   567,    41,    13,   490,
     491,    14,    72,    73,   394,   381,    48,   382,    23,    24,
     297,   298,   207,   149,   150,   151,   152,   212,    56,   154,
     155,   156,   157,    58,   162,    60,   492,   307,   308,    59,
      21,    22,   160,   343,    28,    25,    61,    26,    27,   344,
     163,   164,   165,   166,   317,   318,   328,    28,   336,   288,
      62,   696,    84,   354,   358,   283,   366,    63,   374,   343,
      28,   317,   318,   317,   318,    70,   584,   328,    78,   336,
     189,   190,   319,   191,   354,   358,   192,   366,   184,   374,
     343,    28,   284,   205,    21,    22,   167,    23,    24,    25,
     436,    26,    27,   317,   318,   547,   199,   200,   201,   203,
     198,   317,   318,   286,   323,    30,   167,   630,   292,   210,
     293,   553,   554,   570,   168,   304,   555,   314,   401,   426,
     397,   332,   400,   340,   425,   349,   422,   390,    92,   362,
     398,   370,   399,   378,   424,   391,   304,   279,   314,   423,
     317,   318,   332,   169,   340,   393,   349,   384,   392,   395,
     362,   402,   370,   396,   378,   385,   407,   411,   415,   419,
      28,   407,   411,   415,   419,   389,   170,   171,   595,   628,
     607,   622,   579,   604,   610,   619,   559,   304,   562,   598,
     314,   582,   601,   387,   616,   388,   332,   577,   613,   564,
     340,   583,   587,   349,   588,   585,   590,   566,   362,   596,
     592,   386,   370,   602,   324,   383,   378,   608,   546,   576,
     407,   614,   411,   617,   415,   620,   419,   623,   624,   394,
     381,   172,   382,   317,   318,   324,   571,   161,   573,    86,
      87,    88,    89,   197,   196,   609,   317,   318,   189,   190,
     403,   191,     0,   568,   192,   403,   561,   549,   627,   193,
     427,   429,   431,   429,   317,   318,   297,   298,     0,     0,
     556,   328,   558,   336,     0,   433,     0,   557,   354,   358,
       0,   366,     0,   374,   297,   298,   307,   308,   297,   298,
     297,   298,   328,     0,   336,   560,     0,   563,   299,   354,
     358,   565,   366,     0,   374,   307,   308,     0,   297,   298,
       0,    90,   297,   298,   307,   308,   572,   650,   651,   575,
       0,   654,   303,   656,   657,   578,   659,     0,   661,   629,
     663,   664,   665,   666,     0,   328,   574,     0,     0,   336,
     580,     0,   297,   298,     0,     0,   354,   358,   593,     0,
       0,   366,   599,   581,   683,   374,   605,   686,     0,   688,
     689,   297,   298,     0,   691,     0,   693,   694,   695,   307,
     308,     0,   586,   307,   308,   297,   298,   307,   308,     0,
     589,   297,   298,     0,   591,   706,   594,   708,   597,     0,
     709,     0,   600,   307,   308,   297,   298,   716,     0,   718,
     719,     0,   297,   298,   603,     0,   606,   726,     0,   728,
     729,     0,   649,   612,     0,   297,   298,   735,     0,   737,
     297,   298,     0,   297,   298,   743,   615,   745,     0,   324,
       0,   618,     0,   749,   621,     0,     0,   753,   307,   308,
       0,   757,   297,   298,     0,   761,   307,   308,   309,   765,
     324,     0,   313,   769,   297,   298,   327,   773,     0,   307,
     308,   653,     0,   655,   331,   403,   658,     0,   660,   335,
     403,   297,   298,   297,   298,   427,   307,   308,   307,   308,
       0,   339,     0,   348,   297,   298,   353,     0,   357,     0,
     307,   308,   569,   324,   361,   297,   298,   685,     0,   687,
     365,   307,   308,     0,   690,   369,   297,   298,     0,     0,
       0,   373,   297,   298,   297,   298,   377,     0,   403,   611,
     189,   190,   406,   191,   410,   705,   192,   707,     0,   625,
     626,   429,   297,   298,   297,   298,     0,   715,     0,   717,
       0,     0,   414,     0,   418,    74,    75,   725,    76,   727,
       0,     0,     0,     0,     0,     0,     0,   734,     0,   736,
       0,     0,     0,     0,     0,   742,     0,   744,     0,     0,
       0,     0,     0,   748,     0,     0,     0,   752,     0,     0,
       0,   756,     0,     0,     0,   760,     0,     0,     0,   764,
       0,     0,     0,   768,     0,     0,     0,   772,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   652,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   662,
       0,     0,     0,     0,   667,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   692,     0,     0,     0,     0,
     697,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   275,   276,   277,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148
};

static const yytype_int16 yycheck[] =
{
     224,   277,   226,   263,   273,   259,   230,   262,   232,   272,
     234,   269,   252,    18,   238,   260,   240,   261,   242,   271,
     253,   245,   204,   247,   270,   185,    81,   251,    83,   253,
     255,   255,   246,   254,   257,   259,     0,   261,   258,   263,
     247,   265,   266,   267,   268,     3,   270,   271,   272,   273,
     251,    81,     4,    83,   182,   183,    83,   217,    88,   187,
     188,    10,    11,   215,    24,    25,    26,    27,   249,    80,
     250,     7,     8,     5,    10,    11,    12,     6,    14,    15,
      17,    18,    19,    20,    77,    78,   248,    10,    11,    83,
     245,   219,   220,   221,    21,    22,    89,    83,    80,   281,
     282,    83,    62,    63,   256,   243,    80,   244,    10,    11,
      78,    79,   181,    80,    81,    82,    83,   186,    88,    86,
      87,    88,    89,    88,     1,    52,   286,    78,    79,    88,
       7,     8,    13,    82,    83,    12,    92,    14,    15,    88,
      17,    18,    19,    20,    77,    78,   229,    83,   231,   218,
      92,    84,    89,   236,   237,    91,   239,    16,   241,    82,
      83,    77,    78,    77,    78,    83,    89,   250,    90,   252,
      77,    78,    88,    80,   257,   258,    83,   260,    90,   262,
      82,    83,    89,    83,     7,     8,    83,    10,    11,    12,
       9,    14,    15,    77,    78,     9,   163,   164,   165,   166,
     160,    77,    78,    92,    88,   210,    83,     9,    81,   184,
      83,   496,   497,    89,    91,   439,    89,   441,   478,   488,
     474,   445,   477,   447,   487,   449,   484,   467,    69,   453,
     475,   455,   476,   457,   486,   468,   460,   204,   462,   485,
      77,    78,   466,    95,   468,   470,   470,   461,   469,   472,
     474,    88,   476,   473,   478,   462,   480,   481,   482,   483,
      83,   485,   486,   487,   488,   466,    95,    95,   522,   545,
     530,   540,   512,   528,   532,   538,   500,   501,   502,   524,
     504,   514,   526,   464,   536,   465,   510,   511,   534,   503,
     514,   515,   517,   517,   518,   516,   519,   504,   522,   523,
     520,   463,   526,   527,   228,   460,   530,   531,   436,   510,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   471,
     458,    95,   459,    77,    78,   249,   507,    94,   508,    17,
      18,    19,    20,   159,   158,    89,    77,    78,    77,    78,
     264,    80,    -1,   505,    83,   269,   501,   494,    89,    88,
     274,   275,   276,   277,    77,    78,    78,    79,    -1,    -1,
     498,   444,   499,   446,    -1,    88,    -1,    89,   451,   452,
      -1,   454,    -1,   456,    78,    79,    78,    79,    78,    79,
      78,    79,   465,    -1,   467,    89,    -1,    89,    88,   472,
     473,    89,   475,    -1,   477,    78,    79,    -1,    78,    79,
      -1,    89,    78,    79,    78,    79,    89,   631,   632,    89,
      -1,   635,    88,   637,   638,    89,   640,    -1,   642,   547,
     644,   645,   646,   647,    -1,   508,   509,    -1,    -1,   512,
     513,    -1,    78,    79,    -1,    -1,   519,   520,   521,    -1,
      -1,   524,   525,    89,   668,   528,   529,   671,    -1,   673,
     674,    78,    79,    -1,   678,    -1,   680,   681,   682,    78,
      79,    -1,    89,    78,    79,    78,    79,    78,    79,    -1,
      89,    78,    79,    -1,    89,   699,    89,   701,    89,    -1,
     704,    -1,    89,    78,    79,    78,    79,   711,    -1,   713,
     714,    -1,    78,    79,    89,    -1,    89,   721,    -1,   723,
     724,    -1,   630,    89,    -1,    78,    79,   731,    -1,   733,
      78,    79,    -1,    78,    79,   739,    89,   741,    -1,   443,
      -1,    89,    -1,   747,    89,    -1,    -1,   751,    78,    79,
      -1,   755,    78,    79,    -1,   759,    78,    79,    88,   763,
     464,    -1,    88,   767,    78,    79,    88,   771,    -1,    78,
      79,   634,    -1,   636,    88,   479,   639,    -1,   641,    88,
     484,    78,    79,    78,    79,   489,    78,    79,    78,    79,
      -1,    88,    -1,    88,    78,    79,    88,    -1,    88,    -1,
      78,    79,   506,   507,    88,    78,    79,   670,    -1,   672,
      88,    78,    79,    -1,   677,    88,    78,    79,    -1,    -1,
      -1,    88,    78,    79,    78,    79,    88,    -1,   532,   533,
      77,    78,    88,    80,    88,   698,    83,   700,    -1,   543,
     544,   545,    78,    79,    78,    79,    -1,   710,    -1,   712,
      -1,    -1,    88,    -1,    88,    86,    87,   720,    89,   722,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   730,    -1,   732,
      -1,    -1,    -1,    -1,    -1,   738,    -1,   740,    -1,    -1,
      -1,    -1,    -1,   746,    -1,    -1,    -1,   750,    -1,    -1,
      -1,   754,    -1,    -1,    -1,   758,    -1,    -1,    -1,   762,
      -1,    -1,    -1,   766,    -1,    -1,    -1,   770,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   633,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   643,
      -1,    -1,    -1,    -1,   648,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   679,    -1,    -1,    -1,    -1,
     684,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,    94,    95,     0,     4,    96,    83,    97,    98,
       5,    99,   101,    80,    83,   100,     6,   102,   106,    80,
     104,     7,     8,    10,    11,    12,    14,    15,    83,   107,
     108,   117,   118,   129,   138,   142,   145,   172,   103,   172,
     172,    83,   171,   171,   171,   171,   171,   109,    80,   105,
     119,   130,   111,   139,   143,   146,    88,   114,    88,    88,
     172,    92,    92,    16,   147,   115,   110,   121,   132,   112,
      83,   175,   171,   171,    86,    87,    89,   116,    90,   149,
      17,    18,    19,    20,    89,   122,    17,    18,    19,    20,
      89,   133,   114,   140,   144,   150,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,   176,
     176,   176,   176,   120,   176,   176,   176,   176,   131,   113,
      13,   147,     1,    17,    18,    19,    20,    83,    91,   117,
     138,   142,   145,   151,   152,   155,   159,   164,   168,   173,
     123,   124,   127,   125,    90,   134,   135,   137,   136,    77,
      78,    80,    83,    88,   148,   252,   302,   149,   171,   176,
     176,   176,    83,   176,   169,    83,   174,   175,   173,   173,
     106,   174,   175,   173,   173,   303,   141,   153,   156,   165,
     162,   160,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,   170,   176,
     177,   128,   126,    91,    89,   252,    92,   174,   175,   173,
     173,   173,    81,    83,    88,   181,   276,    78,    79,    88,
     180,   182,   278,    88,   180,   185,   280,    78,    79,    88,
     179,   189,   282,    88,   180,   190,   284,    77,    78,    88,
     178,   191,   286,    88,   178,   196,   288,    88,   179,   197,
     290,    88,   180,   206,   292,    88,   179,   215,   294,    88,
     180,   231,   296,    82,    88,   108,   247,   298,    88,   180,
     248,   300,   302,    88,   179,   253,   304,    88,   179,   254,
     306,    88,   180,   256,   308,    88,   179,   258,   310,    88,
     180,   262,   312,    88,   179,   266,   314,    88,   180,   271,
     316,   181,   182,   185,   189,   190,   191,   196,   197,   206,
     215,   231,   247,   248,   252,   253,   254,   256,   258,   262,
     266,   271,    88,   178,   318,   347,    88,   180,   322,   349,
      88,   180,   324,   351,    88,   180,   327,   353,    88,   180,
     331,   355,   318,   322,   324,   327,   331,   178,   335,   178,
     342,   178,   344,    88,   342,   357,     9,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
     177,   177,   174,   154,   157,   166,   163,   161,   277,   279,
     183,   281,   186,   283,   285,   287,   192,   289,   291,   198,
     293,   207,   295,   216,   297,   232,   299,   301,   249,   305,
     307,   255,   309,   257,   311,   259,   313,   263,   315,   267,
     317,   272,   348,   319,   350,   323,   352,   325,   354,   328,
     356,   332,   336,   343,   345,   358,   173,     9,   158,   158,
     167,   176,   177,   167,   167,    89,   181,    89,   182,   180,
      89,   185,   180,    89,   189,    89,   190,    89,   191,   178,
      89,   196,    89,   197,   179,    89,   206,   180,    89,   215,
     179,    89,   231,   180,    89,   247,    89,   248,   180,    89,
     253,    89,   254,   179,    89,   256,   180,    89,   258,   179,
      89,   262,   180,    89,   266,   179,    89,   271,   180,    89,
     318,   178,    89,   322,   180,    89,   324,   180,    89,   327,
     180,    89,   331,   180,   180,   178,   178,    89,   342,   173,
       9,   184,   187,   193,   199,   208,   217,   233,   250,   260,
     264,   268,   273,   320,   326,   329,   333,   337,   346,   173,
     180,   180,   178,   179,   180,   179,   180,   180,   179,   180,
     179,   180,   178,   180,   180,   180,   180,   178,   188,   194,
     200,   209,   218,   234,   251,   261,   265,   269,   274,   321,
     330,   334,   338,   180,   195,   179,   180,   179,   180,   180,
     179,   180,   178,   180,   180,   180,    84,   178,   201,   210,
     219,   235,   270,   275,   339,   179,   180,   179,   180,   180,
     202,   211,   220,   236,   340,   179,   180,   179,   180,   180,
     203,   212,   221,   237,   341,   179,   180,   179,   180,   180,
     204,   213,   222,   238,   179,   180,   179,   180,   205,   214,
     223,   239,   179,   180,   179,   180,   224,   240,   179,   180,
     225,   241,   179,   180,   226,   242,   179,   180,   227,   243,
     179,   180,   228,   244,   179,   180,   229,   245,   179,   180,
     230,   246,   179,   180
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    97,    98,    98,
      99,   100,   100,   101,   101,   103,   102,   104,   105,   106,
     106,   107,   107,   107,   107,   107,   109,   110,   108,   111,
     112,   113,   108,   108,   114,   114,   115,   115,   116,   116,
     117,   117,   119,   120,   118,   121,   121,   123,   122,   124,
     122,   125,   126,   122,   127,   128,   122,   130,   131,   129,
     132,   132,   134,   133,   135,   133,   136,   133,   137,   133,
     139,   140,   141,   138,   143,   144,   142,   146,   145,   147,
     147,   148,   149,   150,   150,   151,   151,   151,   151,   151,
     151,   153,   154,   152,   156,   157,   155,   158,   158,   160,
     161,   159,   162,   163,   159,   165,   166,   164,   167,   167,
     169,   168,   168,   168,   168,   168,   170,   170,   171,   172,
     173,   174,   175,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     183,   184,   182,   186,   187,   188,   185,   189,   190,   192,
     193,   194,   191,   195,   195,   196,   198,   199,   200,   201,
     202,   203,   204,   205,   197,   207,   208,   209,   210,   211,
     212,   213,   214,   206,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   215,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   231,   247,   247,   249,   250,
     251,   248,   252,   252,   252,   252,   253,   255,   254,   257,
     256,   259,   260,   261,   258,   263,   264,   265,   262,   267,
     268,   269,   270,   266,   272,   273,   274,   275,   271,   276,
     276,   277,   277,   278,   278,   279,   279,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   287,   288,   288,   289,   289,   290,   290,   291,
     291,   292,   292,   293,   293,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   300,   300,   301,
     301,   302,   302,   303,   303,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   310,   310,   311,
     311,   312,   312,   313,   313,   314,   314,   315,   315,   316,
     316,   317,   317,   319,   320,   321,   318,   323,   322,   325,
     326,   324,   328,   329,   330,   327,   332,   333,   334,   331,
     336,   337,   338,   339,   340,   341,   335,   343,   342,   345,
     346,   344,   347,   347,   348,   348,   349,   349,   350,   350,
     351,   351,   352,   352,   353,   353,   354,   354,   355,   355,
     356,   356,   357,   357,   358,   358
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     1,     0,     2,     0,     1,     2,     0,
       2,     1,     1,     2,     0,     0,     4,     1,     1,     2,
       0,     1,     1,     1,     1,     1,     0,     0,     5,     0,
       0,     0,     8,     2,     3,     0,     2,     0,     1,     1,
       1,     1,     0,     0,    10,     2,     0,     0,     4,     0,
       4,     0,     0,     6,     0,     0,     6,     0,     0,     8,
       2,     0,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     0,     0,    11,     0,     0,     7,     0,     4,     2,
       0,     1,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     0,     6,     0,     0,     6,     0,     2,     0,
       0,     6,     0,     0,     6,     0,     0,     6,     1,     3,
       0,     3,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     5,     0,     0,     0,     7,     1,     1,     0,
       0,     0,     8,     2,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     1,     1,     0,     0,
       0,     7,     1,     1,     1,     1,     1,     0,     3,     0,
       3,     0,     0,     0,     6,     0,     0,     0,     6,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     8,     1,
       3,     2,     0,     1,     3,     2,     0,     1,     3,     2,
       0,     1,     3,     2,     0,     1,     3,     2,     0,     1,
       3,     2,     0,     1,     3,     2,     0,     1,     3,     2,
       0,     1,     3,     2,     0,     1,     3,     2,     0,     1,
       3,     2,     0,     1,     3,     2,     0,     1,     3,     2,
       0,     1,     3,     2,     0,     1,     3,     2,     0,     1,
       3,     2,     0,     1,     3,     2,     0,     1,     3,     2,
       0,     1,     3,     2,     0,     1,     3,     2,     0,     1,
       3,     2,     0,     0,     0,     0,     7,     0,     3,     0,
       0,     5,     0,     0,     0,     7,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,    13,     0,     3,     0,
       0,     5,     1,     3,     2,     0,     1,     3,     2,     0,
       1,     3,     2,     0,     1,     3,     2,     0,     1,     3,
       2,     0,     1,     3,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (pSkel, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, pSkel); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *pSkel)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (pSkel);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *pSkel)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, pSkel);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, void *pSkel)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], pSkel);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, pSkel); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, void *pSkel)
{
  YY_USE (yyvaluep);
  YY_USE (pSkel);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *pSkel)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, pSkel);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* headerStatement: TOK_HEADER  */
#line 221 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { if(SKEL->verifyHeader((yyvsp[0].stringVal)) == false) { YYABORT; } }
#line 2153 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 4: /* headerStatement: %empty  */
#line 222 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { if(SKEL->checkHeader() == true) { YYABORT; } }
#line 2159 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 5: /* profileStatement: TOK_PROFILE profileNameId  */
#line 225 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                              { SKEL->profileElement((yyvsp[0].stringVal)); }
#line 2165 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 10: /* componentStatement: TOK_COMPONENT componentNameId  */
#line 239 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    { SKEL->componentElement((yyvsp[0].stringVal)); }
#line 2171 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 15: /* $@1: %empty  */
#line 256 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    { SKEL->_tmpString1 = (yyvsp[0].stringVal); }
#line 2177 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 16: /* metaStatement: TOK_META metakey $@1 metavalue  */
#line 258 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    { SKEL->metaElement(SKEL->_tmpString1.c_str(), (yyvsp[0].stringVal)); }
#line 2183 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 26: /* $@2: %empty  */
#line 290 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                          { SKEL->_tmpString1 = (yyvsp[0].stringVal); 
                            SKEL->_tmpBitVector1 = 
                                TypeTraits<BitVector>::BitsClear; }
#line 2191 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 27: /* $@3: %empty  */
#line 293 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                          { SKEL->beginNode(SKEL->_tmpString1.c_str(), 
                                            0,
                                            SKEL->_tmpBitVector1     ); }
#line 2199 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 29: /* $@4: %empty  */
#line 298 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                          { SKEL->_tmpString1 = (yyvsp[0].stringVal); 
                            SKEL->_tmpBitVector1 = 
                                TypeTraits<BitVector>::BitsClear; }
#line 2207 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 30: /* $@5: %empty  */
#line 301 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                          { SKEL->_tmpString2 = (yyvsp[0].stringVal); }
#line 2213 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 31: /* $@6: %empty  */
#line 302 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                          { SKEL->beginNode(SKEL->_tmpString2.c_str(), 
                                            SKEL->_tmpString1.c_str(),
                                            SKEL->_tmpBitVector1     ); }
#line 2221 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 33: /* nodeStatement: TOK_USE nodeNameId  */
#line 307 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->use((yyvsp[0].stringVal)); }
#line 2227 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 38: /* nodeOption: TOK_ClusterLocal  */
#line 318 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                       { SKEL->_tmpBitVector1 |= FCLocal::Cluster; }
#line 2233 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 39: /* nodeOption: TOK_ThreadLocal  */
#line 319 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                       { SKEL->_tmpBitVector1 |= FCLocal::MT;      }
#line 2239 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 42: /* $@7: %empty  */
#line 330 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                         { SKEL->beginProto((yyvsp[0].stringVal)); }
#line 2245 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 43: /* $@8: %empty  */
#line 331 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                                  { SKEL->endProtoInterface(); }
#line 2251 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 44: /* proto: TOK_PROTO nodeTypeId $@7 '[' interfaceDeclarations ']' $@8 '{' statements '}'  */
#line 332 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                       { SKEL->endProto(); }
#line 2257 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 47: /* $@9: %empty  */
#line 340 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2263 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 48: /* interfaceDeclaration: TOK_eventIn fieldType $@9 eventInId  */
#line 341 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->beginEventInDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); SKEL->endEventDecl(); }
#line 2269 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 49: /* $@10: %empty  */
#line 343 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2275 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 50: /* interfaceDeclaration: TOK_eventOut fieldType $@10 eventOutId  */
#line 344 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->beginEventOutDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); SKEL->endEventDecl(); }
#line 2281 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 51: /* $@11: %empty  */
#line 346 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2287 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 52: /* $@12: %empty  */
#line 347 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->beginFieldDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); SKEL->getLexer()->expectType((yyvsp[-2].intVal)); }
#line 2293 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 53: /* interfaceDeclaration: TOK_field fieldType $@11 fieldId $@12 fieldValue  */
#line 348 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->endFieldDecl(); }
#line 2299 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 54: /* $@13: %empty  */
#line 350 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2305 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 55: /* $@14: %empty  */
#line 351 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->beginExposedFieldDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); SKEL->getLexer()->expectType((yyvsp[-2].intVal)); }
#line 2311 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 56: /* interfaceDeclaration: TOK_exposedField fieldType $@13 fieldId $@14 fieldValue  */
#line 352 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->endExposedFieldDecl(); }
#line 2317 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 57: /* $@15: %empty  */
#line 355 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                               { SKEL->beginExternProto((yyvsp[0].stringVal)); }
#line 2323 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 58: /* $@16: %empty  */
#line 356 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                                        { SKEL->endExternProtoInterface(); }
#line 2329 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 59: /* externproto: TOK_EXTERNPROTO nodeTypeId $@15 '[' externInterfaceDeclarations ']' $@16 URLList  */
#line 357 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
            { SKEL->endExternProto(); }
#line 2335 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 62: /* $@17: %empty  */
#line 365 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2341 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 63: /* externInterfaceDeclaration: TOK_eventIn fieldType $@17 eventInId  */
#line 366 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->addExternEventInDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); }
#line 2347 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 64: /* $@18: %empty  */
#line 368 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2353 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 65: /* externInterfaceDeclaration: TOK_eventOut fieldType $@18 eventOutId  */
#line 369 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->addExternEventOutDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); }
#line 2359 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 66: /* $@19: %empty  */
#line 371 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2365 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 67: /* externInterfaceDeclaration: TOK_field fieldType $@19 fieldId  */
#line 372 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->addExternFieldDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); }
#line 2371 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 68: /* $@20: %empty  */
#line 374 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2377 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 69: /* externInterfaceDeclaration: TOK_exposedField fieldType $@20 fieldId  */
#line 375 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->addExternExposedFieldDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); }
#line 2383 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 70: /* $@21: %empty  */
#line 379 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->_tmpString1 = (yyvsp[0].stringVal); }
#line 2389 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 71: /* $@22: %empty  */
#line 381 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->_tmpString2 = (yyvsp[0].stringVal); }
#line 2395 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 72: /* $@23: %empty  */
#line 383 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->_tmpString3 = (yyvsp[0].stringVal); }
#line 2401 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 73: /* routeStatement: TOK_ROUTE nodeNameId $@21 '.' eventOutId $@22 TOK_TO nodeNameId $@23 '.' eventInId  */
#line 386 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    { SKEL->addRoute(SKEL->_tmpString1.c_str(), SKEL->_tmpString2.c_str(), SKEL->_tmpString3.c_str(), (yyvsp[0].stringVal)); }
#line 2407 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 74: /* $@24: %empty  */
#line 390 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->_tmpString1 = (yyvsp[0].stringVal); }
#line 2413 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 75: /* $@25: %empty  */
#line 392 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->_tmpString2 = (yyvsp[0].stringVal); }
#line 2419 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 76: /* importStatement: TOK_IMPORT nodeNameId $@24 '.' nodeNameId $@25 asStatement  */
#line 394 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        if ((yyvsp[0].stringVal) != 0)
            SKEL->importElement(SKEL->_tmpString1.c_str(), SKEL->_tmpString2.c_str(), (yyvsp[0].stringVal));
        else
            SKEL->importElement(SKEL->_tmpString1.c_str(), SKEL->_tmpString2.c_str(), 0);
    }
#line 2430 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 77: /* $@26: %empty  */
#line 403 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->_tmpString1 = (yyvsp[0].stringVal); }
#line 2436 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 78: /* exportStatement: TOK_EXPORT nodeNameId $@26 asStatement  */
#line 405 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        if ((yyvsp[0].stringVal) != 0)
            SKEL->exportElement(SKEL->_tmpString1.c_str(), (yyvsp[0].stringVal));
        else
            SKEL->exportElement(SKEL->_tmpString1.c_str(), 0);
    }
#line 2447 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 79: /* asStatement: TOK_AS nodeNameId  */
#line 414 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { (yyval.stringVal) = (yyvsp[0].stringVal); }
#line 2453 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 80: /* asStatement: %empty  */
#line 415 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                  { (yyval.stringVal) = 0; }
#line 2459 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 82: /* node: '{' scriptBody '}'  */
#line 421 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                       { SKEL->endNode(); }
#line 2465 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 91: /* $@27: %empty  */
#line 437 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2471 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 92: /* $@28: %empty  */
#line 438 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->beginEventInDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); }
#line 2477 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 93: /* eventInDeclaration: TOK_eventIn fieldType $@27 eventInId $@28 eventDeclarationEnd  */
#line 439 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                        { SKEL->endEventDecl(); }
#line 2483 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 94: /* $@29: %empty  */
#line 443 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2489 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 95: /* $@30: %empty  */
#line 444 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->beginEventOutDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); }
#line 2495 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 96: /* eventOutDeclaration: TOK_eventOut fieldType $@29 eventOutId $@30 eventDeclarationEnd  */
#line 445 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                        { SKEL->endEventDecl(); }
#line 2501 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 98: /* eventDeclarationEnd: TOK_IS fieldId  */
#line 449 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                     { SKEL->is((yyvsp[0].stringVal)); }
#line 2507 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 99: /* $@31: %empty  */
#line 453 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2513 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 100: /* $@32: %empty  */
#line 454 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
            { SKEL->beginFieldDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); SKEL->getLexer()->expectType((yyvsp[-2].intVal)); }
#line 2519 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 101: /* fieldDeclaration: TOK_field fieldType $@31 fieldId $@32 fieldDeclarationEnd  */
#line 455 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                        { SKEL->endFieldDecl(); }
#line 2525 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 102: /* $@33: %empty  */
#line 457 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
             { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2531 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 103: /* $@34: %empty  */
#line 458 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
             { 
               SKEL->beginFieldDecl(SKEL->_tmpString1.c_str(), 0, (yyvsp[0].stringVal)); 

               Int32 iFieldTypeId = SKEL->getFieldType((yyvsp[0].stringVal));

               if(SKEL->getMapFieldTypes() == true)
                 iFieldTypeId = SKEL->mapExtIntFieldType((yyvsp[0].stringVal), iFieldTypeId);

               SKEL->getLexer()->expectType(iFieldTypeId);
             }
#line 2546 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 104: /* fieldDeclaration: TOK_field TOK_Id $@33 fieldId $@34 fieldDeclarationEnd  */
#line 468 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                         { SKEL->endFieldDecl(); }
#line 2552 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 105: /* $@35: %empty  */
#line 472 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { SKEL->_tmpString1 = SKEL->getLexer()->YYText(); }
#line 2558 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 106: /* $@36: %empty  */
#line 473 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
            { SKEL->beginExposedFieldDecl(SKEL->_tmpString1.c_str(), (yyvsp[-2].intVal), (yyvsp[0].stringVal)); SKEL->getLexer()->expectType((yyvsp[-2].intVal)); }
#line 2564 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 107: /* exposedFieldDeclaration: TOK_exposedField fieldType $@35 fieldId $@36 fieldDeclarationEnd  */
#line 474 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                        { SKEL->endExposedFieldDecl(); }
#line 2570 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 109: /* fieldDeclarationEnd: fieldType TOK_IS fieldId  */
#line 478 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                               { SKEL->is((yyvsp[0].stringVal)); }
#line 2576 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 110: /* $@37: %empty  */
#line 482 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        Int32 iFieldTypeId = SKEL->getFieldType((yyvsp[0].stringVal));
        if (SKEL->getMapFieldTypes() == true)
            iFieldTypeId = SKEL->mapExtIntFieldType((yyvsp[0].stringVal), iFieldTypeId);
        SKEL->getLexer()->expectType(iFieldTypeId);
        SKEL->beginField((yyvsp[0].stringVal), iFieldTypeId);
    }
#line 2588 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 111: /* nodeBodyElement: fieldId $@37 fieldEnd  */
#line 489 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
             { SKEL->endField(); }
#line 2594 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 117: /* fieldEnd: fieldType TOK_IS fieldId  */
#line 497 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                               { SKEL->is((yyvsp[0].stringVal)); }
#line 2600 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 232: /* int32: TOK_hex  */
#line 630 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
            { (yyval.intVal) = (yyvsp[0].intVal); }
#line 2606 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 233: /* int32: TOK_int32  */
#line 631 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                { (yyval.intVal) = (yyvsp[0].intVal); }
#line 2612 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 234: /* double: TOK_int32  */
#line 634 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { (yyval.doubleVal) = (yyvsp[0].intVal); }
#line 2618 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 235: /* double: TOK_double  */
#line 635 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { (yyval.doubleVal) = (yyvsp[0].doubleVal); }
#line 2624 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 236: /* float: TOK_int32  */
#line 638 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
              { (yyval.floatVal) = static_cast<float>((yyvsp[0].intVal)); }
#line 2630 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 237: /* float: TOK_double  */
#line 639 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
                 { (yyval.floatVal) = static_cast<float>((yyvsp[0].doubleVal)); }
#line 2636 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 238: /* sfboolValue: TOK_bool  */
#line 643 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->addBoolValue((yyvsp[0].boolVal));
    }
#line 2644 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 239: /* sfboolValue: TOK_Id  */
#line 646 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
             { SKEL->addFieldValue((yyvsp[0].stringVal)); }
#line 2650 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 240: /* $@38: %empty  */
#line 649 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 2656 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 241: /* $@39: %empty  */
#line 650 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2662 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 242: /* sfcolorValue: float $@38 float $@39 float  */
#line 652 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addColorValue(Color3f((yyvsp[-4].floatVal), (yyvsp[-2].floatVal), (yyvsp[0].floatVal)));
    }
#line 2671 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 243: /* $@40: %empty  */
#line 658 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 2677 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 244: /* $@41: %empty  */
#line 659 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2683 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 245: /* $@42: %empty  */
#line 660 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2689 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 246: /* sfcolorRGBAValue: float $@40 float $@41 float $@42 float  */
#line 662 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addColorRGBAValue(Color4f((yyvsp[-6].floatVal), (yyvsp[-4].floatVal), (yyvsp[-2].floatVal), (yyvsp[0].floatVal)));
    }
#line 2698 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 247: /* sfdoubleValue: double  */
#line 669 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->addDoubleValue((yyvsp[0].doubleVal));
    }
#line 2706 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 248: /* sffloatValue: float  */
#line 675 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->addFloatValue((yyvsp[0].floatVal));
    }
#line 2714 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 249: /* $@43: %empty  */
#line 680 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 2720 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 250: /* $@44: %empty  */
#line 681 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2726 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 251: /* $@45: %empty  */
#line 683 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->beginImage((yyvsp[-4].intVal), (yyvsp[-2].intVal), (yyvsp[0].intVal));
    }
#line 2735 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 252: /* sfimageValue: int32 $@43 int32 $@44 int32 $@45 pixels TOK_ImageFinished  */
#line 688 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->endImage();
    }
#line 2743 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 253: /* pixels: pixels int32  */
#line 694 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->addImagePixel((yyvsp[0].intVal));
    }
#line 2751 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 255: /* sfint32Value: int32  */
#line 701 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->addInt32Value((yyvsp[0].intVal));
    }
#line 2759 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 256: /* $@46: %empty  */
#line 706 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->beginValue(); }
#line 2765 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 257: /* $@47: %empty  */
#line 707 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2771 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 258: /* $@48: %empty  */
#line 708 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2777 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 259: /* $@49: %empty  */
#line 709 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2783 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 260: /* $@50: %empty  */
#line 710 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2789 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 261: /* $@51: %empty  */
#line 711 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2795 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 262: /* $@52: %empty  */
#line 712 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2801 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 263: /* $@53: %empty  */
#line 713 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2807 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 264: /* sfmatrix3dValue: double $@46 double $@47 double $@48 double $@49 double $@50 double $@51 double $@52 double $@53 double  */
#line 715 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addMatrix3dValue(
            (yyvsp[-16].doubleVal),  (yyvsp[-10].doubleVal), (yyvsp[-4].doubleVal),
            (yyvsp[-14].doubleVal),  (yyvsp[-8].doubleVal), (yyvsp[-2].doubleVal),
            (yyvsp[-12].doubleVal), (yyvsp[-6].doubleVal), (yyvsp[0].doubleVal));
    }
#line 2819 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 265: /* $@54: %empty  */
#line 724 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 2825 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 266: /* $@55: %empty  */
#line 725 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2831 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 267: /* $@56: %empty  */
#line 726 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2837 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 268: /* $@57: %empty  */
#line 727 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2843 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 269: /* $@58: %empty  */
#line 728 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2849 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 270: /* $@59: %empty  */
#line 729 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2855 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 271: /* $@60: %empty  */
#line 730 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2861 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 272: /* $@61: %empty  */
#line 731 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2867 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 273: /* sfmatrix3fValue: float $@54 float $@55 float $@56 float $@57 float $@58 float $@59 float $@60 float $@61 float  */
#line 733 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addMatrix3fValue(
            (yyvsp[-16].floatVal),  (yyvsp[-10].floatVal), (yyvsp[-4].floatVal),
            (yyvsp[-14].floatVal),  (yyvsp[-8].floatVal), (yyvsp[-2].floatVal),
            (yyvsp[-12].floatVal), (yyvsp[-6].floatVal), (yyvsp[0].floatVal));
    }
#line 2879 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 274: /* $@62: %empty  */
#line 742 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->beginValue(); }
#line 2885 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 275: /* $@63: %empty  */
#line 743 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2891 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 276: /* $@64: %empty  */
#line 744 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2897 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 277: /* $@65: %empty  */
#line 745 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2903 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 278: /* $@66: %empty  */
#line 746 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2909 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 279: /* $@67: %empty  */
#line 747 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2915 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 280: /* $@68: %empty  */
#line 748 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2921 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 281: /* $@69: %empty  */
#line 749 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2927 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 282: /* $@70: %empty  */
#line 750 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2933 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 283: /* $@71: %empty  */
#line 751 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2939 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 284: /* $@72: %empty  */
#line 752 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2945 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 285: /* $@73: %empty  */
#line 753 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2951 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 286: /* $@74: %empty  */
#line 754 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2957 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 287: /* $@75: %empty  */
#line 755 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2963 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 288: /* $@76: %empty  */
#line 756 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 2969 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 289: /* sfmatrix4dValue: double $@62 double $@63 double $@64 double $@65 double $@66 double $@67 double $@68 double $@69 double $@70 double $@71 double $@72 double $@73 double $@74 double $@75 double $@76 double  */
#line 758 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addMatrix4dValue(Matrix4d(
            (yyvsp[-30].doubleVal),  (yyvsp[-22].doubleVal), (yyvsp[-14].doubleVal), (yyvsp[-6].doubleVal),
            (yyvsp[-28].doubleVal), (yyvsp[-20].doubleVal), (yyvsp[-12].doubleVal), (yyvsp[-4].doubleVal),
            (yyvsp[-26].doubleVal), (yyvsp[-18].doubleVal), (yyvsp[-10].doubleVal), (yyvsp[-2].doubleVal),
            (yyvsp[-24].doubleVal), (yyvsp[-16].doubleVal), (yyvsp[-8].doubleVal), (yyvsp[0].doubleVal)));
    }
#line 2982 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 290: /* $@77: %empty  */
#line 768 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 2988 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 291: /* $@78: %empty  */
#line 769 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 2994 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 292: /* $@79: %empty  */
#line 770 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3000 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 293: /* $@80: %empty  */
#line 771 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3006 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 294: /* $@81: %empty  */
#line 772 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3012 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 295: /* $@82: %empty  */
#line 773 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3018 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 296: /* $@83: %empty  */
#line 774 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3024 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 297: /* $@84: %empty  */
#line 775 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3030 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 298: /* $@85: %empty  */
#line 776 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3036 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 299: /* $@86: %empty  */
#line 777 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3042 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 300: /* $@87: %empty  */
#line 778 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3048 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 301: /* $@88: %empty  */
#line 779 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3054 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 302: /* $@89: %empty  */
#line 780 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3060 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 303: /* $@90: %empty  */
#line 781 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3066 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 304: /* $@91: %empty  */
#line 782 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3072 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 305: /* sfmatrix4fValue: float $@77 float $@78 float $@79 float $@80 float $@81 float $@82 float $@83 float $@84 float $@85 float $@86 float $@87 float $@88 float $@89 float $@90 float $@91 float  */
#line 784 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addMatrix4fValue(Matrix4f(
            (yyvsp[-30].floatVal),  (yyvsp[-22].floatVal), (yyvsp[-14].floatVal), (yyvsp[-6].floatVal),
            (yyvsp[-28].floatVal), (yyvsp[-20].floatVal), (yyvsp[-12].floatVal), (yyvsp[-4].floatVal),
            (yyvsp[-26].floatVal), (yyvsp[-18].floatVal), (yyvsp[-10].floatVal), (yyvsp[-2].floatVal),
            (yyvsp[-24].floatVal), (yyvsp[-16].floatVal), (yyvsp[-8].floatVal), (yyvsp[0].floatVal)));
    }
#line 3085 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 307: /* sfnodeValue: TOK_NULL  */
#line 795 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
               { SKEL->nullNode(); }
#line 3091 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 308: /* $@92: %empty  */
#line 798 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3097 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 309: /* $@93: %empty  */
#line 799 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3103 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 310: /* $@94: %empty  */
#line 800 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3109 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 311: /* sfrotationValue: float $@92 float $@93 float $@94 float  */
#line 802 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addRotationValue(Vec3f((yyvsp[-6].floatVal), (yyvsp[-4].floatVal), (yyvsp[-2].floatVal)), (yyvsp[0].floatVal));
    }
#line 3118 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 312: /* sfstringValue: TOK_string  */
#line 809 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->addStringValue((yyvsp[0].stringVal));
    }
#line 3126 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 313: /* sfstringValue: TOK_Id  */
#line 813 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    { /* Not VRML conformant */
        SKEL->addStringValue((yyvsp[0].stringVal));
    }
#line 3134 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 314: /* sfstringValue: TOK_hex  */
#line 817 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    { /* Not VRML conformant */
        SKEL->addBufferAsStringValue();
    }
#line 3142 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 315: /* sfstringValue: TOK_int32  */
#line 821 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    { /* Not VRML conformant */
        SKEL->addBufferAsStringValue();
    }
#line 3150 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 316: /* sftimeValue: double  */
#line 827 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->addTimeValue((yyvsp[0].doubleVal));
    }
#line 3158 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 317: /* $@95: %empty  */
#line 832 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->beginValue(); }
#line 3164 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 318: /* sfvec2dValue: double $@95 double  */
#line 834 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec2dValue(Vec2d((yyvsp[-2].doubleVal), (yyvsp[0].doubleVal)));
    }
#line 3173 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 319: /* $@96: %empty  */
#line 840 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3179 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 320: /* sfvec2fValue: float $@96 float  */
#line 842 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec2fValue(Vec2f((yyvsp[-2].floatVal), (yyvsp[0].floatVal)));
    }
#line 3188 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 321: /* $@97: %empty  */
#line 848 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->beginValue(); }
#line 3194 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 322: /* $@98: %empty  */
#line 849 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 3200 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 323: /* $@99: %empty  */
#line 850 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 3206 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 324: /* sfvec3dValue: double $@97 double $@98 double $@99  */
#line 851 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec3dValue(Vec3d((yyvsp[-5].doubleVal), (yyvsp[-3].doubleVal), (yyvsp[-1].doubleVal)));
    }
#line 3215 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 325: /* $@100: %empty  */
#line 857 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3221 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 326: /* $@101: %empty  */
#line 858 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3227 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 327: /* $@102: %empty  */
#line 859 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3233 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 328: /* sfvec3fValue: float $@100 float $@101 float $@102  */
#line 860 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec3fValue(Vec3f((yyvsp[-5].floatVal), (yyvsp[-3].floatVal), (yyvsp[-1].floatVal)));
    }
#line 3242 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 329: /* $@103: %empty  */
#line 866 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->beginValue(); }
#line 3248 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 330: /* $@104: %empty  */
#line 867 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 3254 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 331: /* $@105: %empty  */
#line 868 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 3260 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 332: /* $@106: %empty  */
#line 869 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
           { SKEL->appendValue(); }
#line 3266 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 333: /* sfvec4dValue: double $@103 double $@104 double $@105 double $@106  */
#line 870 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec4dValue(Vec4d((yyvsp[-7].doubleVal), (yyvsp[-5].doubleVal), (yyvsp[-3].doubleVal), (yyvsp[-1].doubleVal)));
    }
#line 3275 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 334: /* $@107: %empty  */
#line 876 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3281 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 335: /* $@108: %empty  */
#line 877 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3287 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 336: /* $@109: %empty  */
#line 878 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3293 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 337: /* $@110: %empty  */
#line 879 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3299 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 338: /* sfvec4fValue: float $@107 float $@108 float $@109 float $@110  */
#line 880 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec4fValue(Vec4f((yyvsp[-7].floatVal), (yyvsp[-5].floatVal), (yyvsp[-3].floatVal), (yyvsp[-1].floatVal)));
    }
#line 3308 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 423: /* $@111: %empty  */
#line 1056 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3314 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 424: /* $@112: %empty  */
#line 1057 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3320 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 425: /* $@113: %empty  */
#line 1058 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3326 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 426: /* sfcolor4iValue: int32 $@111 int32 $@112 int32 $@113 int32  */
#line 1060 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addColor4iValue(Color4ub(static_cast<UInt8>((yyvsp[-6].intVal)), static_cast<UInt8>((yyvsp[-4].intVal)),
                                       static_cast<UInt8>((yyvsp[-2].intVal)), static_cast<UInt8>((yyvsp[0].intVal))));
    }
#line 3336 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 427: /* $@114: %empty  */
#line 1067 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3342 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 428: /* sfpnt2fValue: float $@114 float  */
#line 1069 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addPnt2fValue(Pnt2f((yyvsp[-2].floatVal), (yyvsp[0].floatVal)));
    }
#line 3351 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 429: /* $@115: %empty  */
#line 1075 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3357 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 430: /* $@116: %empty  */
#line 1076 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3363 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 431: /* sfpnt3fValue: float $@115 float $@116 float  */
#line 1078 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addPnt3fValue(Pnt3f((yyvsp[-4].floatVal), (yyvsp[-2].floatVal), (yyvsp[0].floatVal)));
    }
#line 3372 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 432: /* $@117: %empty  */
#line 1084 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3378 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 433: /* $@118: %empty  */
#line 1085 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3384 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 434: /* $@119: %empty  */
#line 1086 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3390 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 435: /* sfpnt4fValue: float $@117 float $@118 float $@119 float  */
#line 1088 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addPnt4fValue(Pnt4f((yyvsp[-6].floatVal), (yyvsp[-4].floatVal), (yyvsp[-2].floatVal), (yyvsp[0].floatVal)));
    }
#line 3399 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 436: /* $@120: %empty  */
#line 1094 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3405 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 437: /* $@121: %empty  */
#line 1095 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3411 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 438: /* $@122: %empty  */
#line 1096 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3417 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 439: /* sfplaneValue: float $@120 float $@121 float $@122 float  */
#line 1098 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addPlaneValue(Plane(Vec3f((yyvsp[-6].floatVal), (yyvsp[-4].floatVal), (yyvsp[-2].floatVal)), (yyvsp[0].floatVal)));
    }
#line 3426 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 440: /* $@123: %empty  */
#line 1104 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue();  }
#line 3432 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 441: /* $@124: %empty  */
#line 1105 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3438 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 442: /* $@125: %empty  */
#line 1106 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3444 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 443: /* $@126: %empty  */
#line 1107 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3450 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 444: /* $@127: %empty  */
#line 1108 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3456 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 445: /* $@128: %empty  */
#line 1109 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->appendValue(); }
#line 3462 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 446: /* sfVolumeValue: int32 $@123 float $@124 float $@125 float $@126 float $@127 float $@128 float  */
#line 1111 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        BoxVolume bv((yyvsp[-10].floatVal), (yyvsp[-8].floatVal), (yyvsp[-6].floatVal), (yyvsp[-4].floatVal), (yyvsp[-2].floatVal), (yyvsp[0].floatVal));
        
        bv.setState((yyvsp[-12].intVal));

        SKEL->addVolumeValue(bv);
    }
#line 3475 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 447: /* $@129: %empty  */
#line 1121 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3481 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 448: /* sfvec2iValue: int32 $@129 int32  */
#line 1123 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec2iValue(Vec2i((yyvsp[-2].intVal), (yyvsp[0].intVal)));
    }
#line 3490 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 449: /* $@130: %empty  */
#line 1129 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
          { SKEL->beginValue(); }
#line 3496 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 450: /* $@131: %empty  */
#line 1131 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
    }
#line 3504 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;

  case 451: /* sfvec3iValue: int32 $@130 int32 $@131 int32  */
#line 1135 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"
    {
        SKEL->appendValue();
        SKEL->addVec3iValue(Vec3i((yyvsp[-4].intVal), (yyvsp[-2].intVal), (yyvsp[0].intVal)));
    }
#line 3513 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"
    break;


#line 3517 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/SenLin.build/Build/OSGSystem/OSGScanParseSkelParser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (pSkel, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, pSkel);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, pSkel);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (pSkel, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, pSkel);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, pSkel);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1188 "/home/gerrit/Projects/OpenSG/SenLin.OpenSG/OpenSG/Source/System/FileIO/ScanParseSkel/OSGScanParseSkelParser.yy"


int OSGScanParseSkel_lex(YYSTYPE *lvalp, void *pSkel)
{
    return SKEL->lex(lvalp);
}
