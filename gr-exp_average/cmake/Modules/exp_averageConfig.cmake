INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_EXP_AVERAGE exp_average)

FIND_PATH(
    EXP_AVERAGE_INCLUDE_DIRS
    NAMES exp_average/api.h
    HINTS $ENV{EXP_AVERAGE_DIR}/include
        ${PC_EXP_AVERAGE_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    EXP_AVERAGE_LIBRARIES
    NAMES gnuradio-exp_average
    HINTS $ENV{EXP_AVERAGE_DIR}/lib
        ${PC_EXP_AVERAGE_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(EXP_AVERAGE DEFAULT_MSG EXP_AVERAGE_LIBRARIES EXP_AVERAGE_INCLUDE_DIRS)
MARK_AS_ADVANCED(EXP_AVERAGE_LIBRARIES EXP_AVERAGE_INCLUDE_DIRS)

