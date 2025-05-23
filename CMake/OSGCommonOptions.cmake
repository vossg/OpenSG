
IF(NOT WIN32)
  IF(OSG_BUILD_DEPENDEND)
    # Hide it from further manipulation
    SET(OSG_BUILD_DEPENDEND ${OSG_BUILD_DEPENDEND} CACHE INTERNAL "")
  ENDIF(OSG_BUILD_DEPENDEND)
ENDIF(NOT WIN32)

MACRO(OSG_COMMON_OPTIONS)

  SET(BUILD_SHARED_LIBS ON CACHE INTERNAL 
                        "Set to OFF to build static libraries")

  OPTION(OSGBUILD_TESTS   "Build test programs" ON   )

  OPTION(OSG_ENABLE_SSE2                    ""    OFF            )
  OPTION(OSG_ENABLE_SSE4                    ""    ON             )
  SET   (OSG_SSE4_VARIANT                   "4.2" CACHE STRING "")
  OPTION(OSG_ENABLE_AVX                     ""    OFF            )
  SET   (OSG_AVX_VARIANT                    ""    CACHE STRING "")
  OPTION(OSG_ENABLE_FMA                     ""    OFF            )
  OPTION(OSG_ENABLE_ABI6                    ""    OFF            )
  OPTION(OSG_ENABLE_C++17                   ""    ON             )
  OPTION(OSG_ENABLE_C++20                   ""    OFF            )
  OPTION(OSG_ENABLE_BOOST_C++11_STD_ATOMICS ""    ON             )

ENDMACRO()

MACRO(OSG_COMMON_OPTIONS_CONFIGURED)

  OPTION(OSG_ENABLE_CUDA "Build OpenSG with CUDA support" OFF)

ENDMACRO()

MACRO(OSG_COMMON_OPTIONS_DEPRECATED)

ENDMACRO()

MACRO(OSG_CONFIGURE_SUPPORT)

  FILE(STRINGS ${OpenSG_DIR}/include/OpenSG/OSGConfigured.h 
               _OSG_INC_GLEW
               REGEX "^#define OSG_GL_INCLUDE_GLEW 1")

  IF(_OSG_INC_GLEW)

    IF(WIN32 OR _OSG_INC_GLEW)
      OSG_CONFIGURE_GLEW()

      IF(_OSG_INC_GLEW AND GLEW_FOUND)
        LIST(APPEND OSG_GLOBAL_DEP_INCDIR GLEW_INCLUDE_DIR)
      ENDIF()

    ENDIF(WIN32 OR _OSG_INC_GLEW)
  ENDIF()

ENDMACRO()
