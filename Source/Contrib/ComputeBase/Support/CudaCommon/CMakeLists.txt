CMAKE_MINIMUM_REQUIRED(VERSION 3.15)

INCLUDE(OSGContribComputeBase.SetupHelper)

SET(OSG_CUDA_COMMON_BUILD FALSE CACHE INTERNAL "" FORCE)

IF(OSGNVidiaSDKSrcDir)

  MESSAGE(STATUS "adding CudaCommon from : ${OSGNVidiaSDKSrcDir}")

  PROJECT(OSGCudaCommon)

  IF(WIN32)
    SET(${PROJECT_NAME}StaticTarget    libosgcudacommon)
  ELSE(WIN32)
    SET(${PROJECT_NAME}StaticTarget    osgcudacommon)
  ENDIF(WIN32)

#  SET(OSG_CUDACOMMON_SRC_INPUT param.cpp
#                               paramgl.cpp)

  SET(OSG_CUDACOMMON_HDR_INPUT helper_cuda.h
                               helper_cuda_gl.h)

  SetupFiles(OSG_CUDACOMMON_SRC_INPUT 
             OSG_CUDACOMMON_SRCS 
             "${OSGNVidiaSDKSrcDir}/C/common/src"
             "${OSG_SUPP_CC_BBASE}/CudaCommon/src")

  SetupFiles(OSG_CUDACOMMON_HDR_INPUT 
             OSG_CUDACOMMON_HDR 
             "${OSGNVidiaSDKSrcDir}/common/inc"
             "${OSG_SUPP_CC_BBASE}/CudaCommon/src")

  IF(NOT WIN32)
    IF(NOT EXISTS ${_OSGSUPP_DST_DIR}/GL/glew.h)
      FILE(MAKE_DIRECTORY ${_OSGSUPP_DST_DIR}/GL)
      FILE(WRITE ${_OSGSUPP_DST_DIR}/GL/glew.h "/* dummy on unix */\n#include <GL/gl.h>")
    ENDIF(NOT EXISTS ${_OSGSUPP_DST_DIR}/GL/glew.h)
  ENDIF(NOT WIN32)


  IF(WIN32)
#    INCLUDE_DIRECTORIES("${OSG_GLUT_INCLUDE_DIR}")
#    INCLUDE_DIRECTORIES("${OSG_GLEW_INCLUDE_DIR}")
  ENDIF(WIN32)

  IF(BUILD_STATIC_LIBS)

    ## device lib

#    ADD_LIBRARY(${${PROJECT_NAME}StaticTarget} STATIC ${OSG_CUDACOMMON_SRCS})

#    ADD_DEPENDENCIES(ALL_STANDARD_BUILD ${${PROJECT_NAME}StaticTarget})

#    IF(WIN32)
#      SET_TARGET_PROPERTIES(${${PROJECT_NAME}StaticTarget} PROPERTIES
#                            DEBUG_POSTFIX "D")
#    ENDIF(WIN32)

    SET(OSGCUDACOMLIB_DEF_STATIC ${OSGCUDACOMLIB_DEF})

#    SET_TARGET_PROPERTIES(${${PROJECT_NAME}StaticTarget} PROPERTIES
#                          COMPILE_DEFINITIONS "${OSGCUDACOMLIB_DEF_STATIC}")


    IF(WIN32)
#      INSTALL(TARGETS ${${PROJECT_NAME}StaticTarget}
#                  CONFIGURATIONS ${_OSG_INSTALL_CONFIGS}
#                  RUNTIME DESTINATION bin COMPONENT libraries 
#                  LIBRARY DESTINATION lib COMPONENT libraries 
#                  ARCHIVE DESTINATION lib COMPONENT libraries )
    ELSE(WIN32)
#      INSTALL(TARGETS ${${PROJECT_NAME}StaticTarget}
#                  RUNTIME DESTINATION lib${OSG_LIBDIR_SUFFIX} COMPONENT static_libraries 
#                  LIBRARY DESTINATION lib${OSG_LIBDIR_SUFFIX} COMPONENT static_libraries 
#                  ARCHIVE DESTINATION lib${OSG_LIBDIR_SUFFIX} COMPONENT static_libraries)
    ENDIF(WIN32)

  ENDIF(BUILD_STATIC_LIBS)

  INSTALL(FILES ${OSG_CUDACOMMON_HDR} 
          DESTINATION include${OSG_SUPPORT_INC_SUBDIR}/cuda
          COMPONENT code_headers
          PERMISSIONS OWNER_WRITE OWNER_READ
                      GROUP_READ
                      WORLD_READ)

  IF(NOT WIN32)
    INSTALL(FILES ${_OSGSUPP_DST_DIR}/GL/glew.h
            DESTINATION include${OSG_SUPPORT_INC_SUBDIR}/cuda/GL
            COMPONENT code_headers
            PERMISSIONS OWNER_WRITE OWNER_READ
                        GROUP_READ
                        WORLD_READ)
  ENDIF(NOT WIN32)

  SET(OSG_WITH_CUDACOMMON TRUE CACHE INTERNAL "" FORCE)
  SET(OSG_CUDACOMMON_INCLUDE_DIR "${CMAKE_BINARY_DIR}/${OSG_SUPP_CC_BBASE}/CudaCommon/src" CACHE PATH "")

ELSE(OSGNVidiaSDKSrcDir)
  MESSAGE(STATUS "ignoring CudaCommon")

  SET(OSGNVidiaSDKSrcDir "" CACHE PATH "")
ENDIF(OSGNVidiaSDKSrcDir)
