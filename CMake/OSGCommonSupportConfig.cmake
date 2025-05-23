
MACRO(OSG_COMMONSUPP_SETUP)

  ##############
  # Compiler
  ##############

  SET(BUILD_SHARED_LIBS ON CACHE INTERNAL 
                        "Set to ON to build dynamic libraries" FORCE)
  SET(BUILD_STATIC_LIBS ON CACHE INTERNAL 
                        "Set to ON to build static libraries"  FORCE)

  IF(WIN32)
    OPTION(OSG_DISABLE_MICROSOFT_SECURE_CXXX "" OFF)

    IF(OSG_DISABLE_MICROSOFT_SECURE_CXXX)
      OPTION(OSG_DISABLE_MS_ITERATOR_DEBUGGING "" ON)
    ELSE(OSG_DISABLE_MICROSOFT_SECURE_CXXX)
      OPTION(OSG_DISABLE_MS_ITERATOR_DEBUGGING "" OFF)
    ENDIF(OSG_DISABLE_MICROSOFT_SECURE_CXXX)
  ENDIF(WIN32)

  SET(OSG_PLATFORM_64 0)
  SET(OSG_PLATFORM_32 0)
  SET(OSG_LIBDIR_SUFFIX "")

  SET(OSG_ENABLE_C++11 OFF  )
  SET(OSG_ENABLE_C++14 OFF  )
  SET(OSG_ENABLE_C++17 ON   )
  SET(OSG_ENABLE_SSE2  OFF  )
  SET(OSG_ENABLE_SSE4  ON   )
  SET(OSG_SSE4_VARIANT "4.2")
  SET(OSG_ENABLE_AVX   OFF  )
  SET(OSG_AVX_VARIANT  ""   )
  SET(OSG_ENABLE_ABI6  OFF  )

  IF(CMAKE_SIZEOF_VOID_P EQUAL 8)
    SET(OSG_PLATFORM_64 1)
    SET(OSG_LIBDIR_SUFFIX "64")

    IF(NOT WIN32)
      SET(OSG_LIBDIR_BASE_SUFFIX "64")
    ENDIF(NOT WIN32)
  ELSE()
    SET(OSG_PLATFORM_32 1)
  ENDIF()

  IF(CMAKE_BUILD_TYPE STREQUAL "Debug")
    SET(OSG_LIBDIR_SUFFIX "${OSG_LIBDIR_SUFFIX}/debug")
    SET(OSG_LIBDIR_BUILD_TYPE_SUFFIX "debug")
  ENDIF()

  IF(${CMAKE_CXX_PLATFORM_ID} STREQUAL "Linux")
    SET(LINUX 1)
  ENDIF()

  SET(CMAKE_CONFIGURATION_TYPES "Debug;Release" 
                                CACHE STRING "OpenSGSupport Build Types" FORCE )

  IF(NOT WIN32 AND NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE Debug CACHE STRING
        "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
        FORCE)
  ENDIF(NOT WIN32 AND NOT CMAKE_BUILD_TYPE)


  IF(NOT OSG_COMPILER_DEFAULTS)
    INCLUDE(OSGSetupCompiler)
     SET( OSG_COMPILER_DEFAULTS 1 CACHE INTERNAL "Defaults written" FORCE )
  ENDIF(NOT OSG_COMPILER_DEFAULTS)

  INCLUDE(OSGUpdateCompiler)
  INCLUDE(OSGBuildFunctions)
  INCLUDE(OSGConfigurePackages)

  SET(CMAKE_VERBOSE_MAKEFILE ON CACHE BOOL "" FORCE)

  IF(NOT WIN32)
    SET(OSG_SUPPORT_INC_SUBDIR "/OpenSG")
  ENDIF()

  FIND_PACKAGE(OpenGL)

  SET(Boost_NO_BOOST_CMAKE TRUE CACHE INTERNAL "" FORCE)
  OSG_CONFIGURE_BOOST()

  ADD_CUSTOM_TARGET(ALL_CUDA_BUILD)
  ADD_CUSTOM_TARGET(ALL_STANDARD_BUILD)

  IF(OSGGlutSrcDir AND OSGFreeGlutSrcDir)
    MESSAGE(FATAL_ERROR "choose either glut or freeglut")
  ENDIF(OSGGlutSrcDir AND OSGFreeGlutSrcDir)

ENDMACRO()

MACRO(OSG_COMMON_SUPP_WRITE_CONFIG _OSG_CFG_FILENAME)

  SET(CMAKE_CONFIGURATION_TYPES "Debug;Release" 
                                CACHE STRING "OpenSGSupport Build Types" FORCE )

  FILE(WRITE  "${CMAKE_BINARY_DIR}/${_OSG_CFG_FILENAME}" 
              "SET(OSG_SUPPORT_DISABLE_MICROSOFT_SECURE_CXXX "
              "${OSG_DISABLE_MICROSOFT_SECURE_CXXX} CACHE INTERNAL \"\")\n\n")

  FILE(APPEND  "${CMAKE_BINARY_DIR}/${_OSG_CFG_FILENAME}" 
               "SET(OSG_SUPPORT_DISABLE_MS_ITERATOR_DEBUGGING "
               "${OSG_DISABLE_MS_ITERATOR_DEBUGGING} CACHE INTERNAL \"\")\n\n")

  INSTALL(FILES ${CMAKE_BINARY_DIR}/${_OSG_CFG_FILENAME}
          DESTINATION include${OSG_SUPPORT_INC_SUBDIR}
          PERMISSIONS OWNER_WRITE OWNER_READ
                      GROUP_READ
                      WORLD_READ)

ENDMACRO()

MACRO(OSG_COMMON_SUPP_EXTERNAL)

  SET(OSG_EXTRA_EXTERNAL_SUPPORT "" CACHE STRING 
      "Extra modules that OpenSG will try to compile.")

  FOREACH(EXTERNAL ${OSG_EXTRA_EXTERNAL_SUPPORT})

    IF(NOT DEFINED OSG_${EXTERNAL}_SUPP_SOURCE_DIR)
      SET(OSG_${EXTERNAL}_SUPP_SOURCE_DIR 
            "OSG_${EXTERNAL}_SUPP_SOURCE_DIR-NOTFOUND" CACHE PATH "")
    ENDIF()
    
    IF(OSG_${EXTERNAL}_SUPP_SOURCE_DIR AND
       EXISTS ${OSG_${EXTERNAL}_SUPP_SOURCE_DIR}/CMakeLists.txt)
       ADD_SUBDIRECTORY(${OSG_${EXTERNAL}_SUPP_SOURCE_DIR} External/${EXTERNAL})
    ENDIF()

  ENDFOREACH(EXTERNAL)

ENDMACRO()
