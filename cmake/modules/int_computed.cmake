# This file communicates top-level CMake configuration results to
#   export stage (in a very minor way that could be worked around) and to
#   library stage (in a major way). If the superbuild was run continuously
#   (generator->export->library), these would be more properly passed
#   through the ExternalProject_Add commands. However, since library is
#   commonly built separately from tarball, this file is better storage.

# <<<  Build Version  >>>

set(LIBINT_MAJOR_VERSION "2")
set(LIBINT_MINOR_VERSION "7")
set(LIBINT_MICRO_VERSION "2")
set(LIBINT_VERSION ${LIBINT_MAJOR_VERSION}.${LIBINT_MINOR_VERSION}.${LIBINT_MICRO_VERSION})


# <<<  Dev Version  >>>

set(LIBINT_BUILDID "post1")
set(LIBINT_EXT_VERSION "2.7.2-post1")
message(STATUS "Version: Full ${LIBINT_EXT_VERSION} Numeric ${LIBINT_VERSION}")


# <<<  ABI Version  >>>

set(LIBINT_CURRENT_SOVERSION "2")
set(LIBINT_REVISION_SOVERSION "3")
set(LIBINT_AGE_SOVERSION "0")

set(LIBINT_SOVERSION ${LIBINT_CURRENT_SOVERSION}:${LIBINT_REVISION_SOVERSION}:${LIBINT_AGE_SOVERSION})
math(EXPR LIBINT_MAJOR_SOVERSION "${LIBINT_CURRENT_SOVERSION} - ${LIBINT_AGE_SOVERSION}")
message(STATUS "SO Version: Full ${LIBINT_SOVERSION} Major ${LIBINT_MAJOR_SOVERSION}")


# <<<  Fixed Orderings  >>>

set(LIBINT2_SHGAUSS_ORDERING "standard")  # added Jan 2023
set(LIBINT2_CARTGAUSS_ORDERING "gamess")
set(LIBINT2_SHELL_SET "standard")
set(ERI3_PURE_SH "0")
set(ERI2_PURE_SH "0")


# <<<  AM Components  >>>

set(Libint2_ERI_COMPONENTS "eri_c4_d0_l2;eri_c4_d0_l3;eri_c4_d0_l4;eri_c4_d0_l5;eri_c4_d0_l6;eri_c4_d0_l7;eri_c4_d0_l8;eri_c4_d0_l9;eri_c4_d0_l10;eri_c3_d0_l2;eri_c3_d0_l3;eri_c3_d0_l4;eri_c3_d0_l5;eri_c3_d0_l6;eri_c3_d0_l7;eri_c3_d0_l8;eri_c3_d0_l9;eri_c3_d0_l10;eri_c2_d0_l2;eri_c2_d0_l3;eri_c2_d0_l4;eri_c2_d0_l5;eri_c2_d0_l6;eri_c2_d0_l7;eri_c2_d0_l8;eri_c2_d0_l9;eri_c2_d0_l10;onebody_d0_l2;onebody_d0_l3;onebody_d0_l4;onebody_d0_l5;onebody_d0_l6;onebody_d0_l7;onebody_d0_l8;onebody_d0_l9;onebody_d0_l10")  # for CMake config file
set(Libint2_MAX_AM_ERI "10")  # for CMake config file
set(Libint2_ERI_MAX_AM "10")  # for features file


# <<<  Features List  >>>

set(Libint2_CONFIG_COMPONENTS "eri_c4_d0_l2;eri_c4_d0_l3;eri_c4_d0_l4;eri_c4_d0_l5;eri_c4_d0_l6;eri_c4_d0_l7;eri_c4_d0_l8;eri_c4_d0_l9;eri_c4_d0_l10;eri_c3_d0_l2;eri_c3_d0_l3;eri_c3_d0_l4;eri_c3_d0_l5;eri_c3_d0_l6;eri_c3_d0_l7;eri_c3_d0_l8;eri_c3_d0_l9;eri_c3_d0_l10;eri_c2_d0_l2;eri_c2_d0_l3;eri_c2_d0_l4;eri_c2_d0_l5;eri_c2_d0_l6;eri_c2_d0_l7;eri_c2_d0_l8;eri_c2_d0_l9;eri_c2_d0_l10;onebody_d0_l2;onebody_d0_l3;onebody_d0_l4;onebody_d0_l5;onebody_d0_l6;onebody_d0_l7;onebody_d0_l8;onebody_d0_l9;onebody_d0_l10")  # for configuration.h file
if((0 EQUAL 0) AND (0 EQUAL 0))
    list(APPEND Libint2_CONFIG_COMPONENTS "impure_sh")
endif()

if    ((1 EQUAL 1) AND (3 EQUAL 1) AND (1 EQUAL 1))
    set(_ordering "sss")
elseif((1 EQUAL 1) AND (3 EQUAL 1) AND (1 EQUAL 2))
    set(_ordering "sso")
elseif((1 EQUAL 1) AND (3 EQUAL 2) AND (1 EQUAL 1))
    set(_ordering "sis")
elseif((1 EQUAL 1) AND (3 EQUAL 2) AND (1 EQUAL 2))
    set(_ordering "sio")
elseif((1 EQUAL 1) AND (3 EQUAL 3) AND (1 EQUAL 1))
    set(_ordering "sgs")
elseif((1 EQUAL 1) AND (3 EQUAL 3) AND (1 EQUAL 2))
    set(_ordering "sgo")
elseif((1 EQUAL 1) AND (3 EQUAL 4) AND (1 EQUAL 1))
    set(_ordering "sos")
elseif((1 EQUAL 1) AND (3 EQUAL 4) AND (1 EQUAL 2))
    set(_ordering "soo")
elseif((1 EQUAL 1) AND (3 EQUAL 5) AND (1 EQUAL 1))
    set(_ordering "sbs")
elseif((1 EQUAL 1) AND (3 EQUAL 5) AND (1 EQUAL 2))
    set(_ordering "sbo")
elseif((1 EQUAL 2) AND (3 EQUAL 1) AND (1 EQUAL 1))
    set(_ordering "gss")
elseif((1 EQUAL 2) AND (3 EQUAL 1) AND (1 EQUAL 2))
    set(_ordering "gso")
elseif((1 EQUAL 2) AND (3 EQUAL 2) AND (1 EQUAL 1))
    set(_ordering "gis")
elseif((1 EQUAL 2) AND (3 EQUAL 2) AND (1 EQUAL 2))
    set(_ordering "gio")
elseif((1 EQUAL 2) AND (3 EQUAL 3) AND (1 EQUAL 1))
    set(_ordering "ggs")
elseif((1 EQUAL 2) AND (3 EQUAL 3) AND (1 EQUAL 2))
    set(_ordering "ggo")
elseif((1 EQUAL 2) AND (3 EQUAL 4) AND (1 EQUAL 1))
    set(_ordering "gos")
elseif((1 EQUAL 2) AND (3 EQUAL 4) AND (1 EQUAL 2))
    set(_ordering "goo")
elseif((1 EQUAL 2) AND (3 EQUAL 5) AND (1 EQUAL 1))
    set(_ordering "gbs")
elseif((1 EQUAL 2) AND (3 EQUAL 5) AND (1 EQUAL 2))
    set(_ordering "gbo")
else()
    message(STATUS "int_computed.cmake: indeterminate orderings")
endif()

list(APPEND Libint2_CONFIG_COMPONENTS "${_ordering}")
set(Libint2_ORDERINGS_CODE "${_ordering}")  # for CMake config file
list(SORT Libint2_CONFIG_COMPONENTS)
