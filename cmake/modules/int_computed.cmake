# This file communicates top-level CMake configuration results to
#   export stage (in a very minor way that could be worked around) and to
#   library stage (in a major way). If the superbuild was run continuously
#   (generator->export->library), these would be more properly passed
#   through the ExternalProject_Add commands. However, since library is
#   commonly built separately from tarball, this file is better storage.
# To contrast, config.h transmits CMake data to C++, while this file transmits
#   CMake data to (discontinuous) CMake.


# <<<  Sortable Version  >>>

# for configuration.cc and `project(Libint2 VERSION` in CMakeLists.txt.export files
set(LIBINT_DESCRIPTION "A library for the evaluation of molecular integrals of many-body operators over Gaussian functions")

# for configuration.cc file
set(LIBINT_DOI "10.5281/zenodo.10369117")
set(LIBINT_GIT_COMMIT "")
set(LIBINT_VERSION_YEAR "2024")
set(LIBINT_SORTABLE_VERSION "2.9.0.post25")


# <<<  Build Version  >>>

# for libint2-config.cmake and `project(Libint2 VERSION` in CMakeLists.txt.export files
set(LIBINT_MAJOR_VERSION "2")
set(LIBINT_MINOR_VERSION "9")
set(LIBINT_MICRO_VERSION "0")
set(LIBINT_VERSION ${LIBINT_MAJOR_VERSION}.${LIBINT_MINOR_VERSION}.${LIBINT_MICRO_VERSION})

# for macros.tex
set(LIBINT_MMM_VERSION "${LIBINT_VERSION}")

# <<<  Dev Version  >>>

# for libint2-config.cmake
set(LIBINT_EXT_VERSION "2.9.0-post999")
message(STATUS "Version: Full ${LIBINT_EXT_VERSION} Numeric ${LIBINT_VERSION} Sortable ${LIBINT_SORTABLE_VERSION}")


# <<<  ABI Version  >>>

# for SOVERSION in CMakeLists.txt.export
set(LIBINT_SO_VERSION "2:3:0")
set(LIBINT_MAJOR_SO_VERSION "2")
message(STATUS "SO Version: Full ${LIBINT_SO_VERSION} Major ${LIBINT_MAJOR_SO_VERSION}")


# <<<  Fixed Orderings  >>>

# for CMakeLists.txt.export and libint2-config.cmake
set(LIBINT2_SHGAUSS_ORDERING "standard")  # added Jan 2023
set(LIBINT2_CARTGAUSS_ORDERING "gamess")
set(LIBINT2_SHELL_SET "standard")


# <<<  Features List  >>>

if    (3 EQUAL 1)
    set(_o1st "s")
elseif(3 EQUAL 2)
    set(_o1st "i")
elseif(3 EQUAL 3)
    set(_o1st "g")
elseif(3 EQUAL 4)
    set(_o1st "o")
elseif(3 EQUAL 5)
    set(_o1st "b")
else()
    message(STATUS "int_computed.cmake: indeterminate orderings: cgshell")
endif()

if    (1 EQUAL 1)
    set(_o2nd "s")
elseif(1 EQUAL 2)
    set(_o2nd "o")
else()
    message(STATUS "int_computed.cmake: indeterminate orderings: shell_set")
endif()

# for configuration.cc and libint2-config.cmake files
set(Libint2_CONFIG_COMPONENTS "multipole_gg_d0;multipole_ff_d0;multipole_dd_d0;onebody_kk_d0;onebody_ii_d0;onebody_hh_d0;onebody_gg_d0;onebody_ff_d0;onebody_dd_d0;eri_kkkk_d0;eri_iiii_d0;eri_hhhh_d0;eri_gggg_d0;eri_ffff_d0;eri_dddd_d0;eri_kkK_d0;eri_iiK_d0;eri_iiI_d0;eri_hhK_d0;eri_hhI_d0;eri_hhH_d0;eri_ggK_d0;eri_ggI_d0;eri_ggH_d0;eri_ggG_d0;eri_ffK_d0;eri_ffI_d0;eri_ffH_d0;eri_ffG_d0;eri_ffF_d0;eri_ddK_d0;eri_ddI_d0;eri_ddH_d0;eri_ddG_d0;eri_ddF_d0;eri_ddD_d0;eri_kkk_d0;eri_iik_d0;eri_iii_d0;eri_hhk_d0;eri_hhi_d0;eri_hhh_d0;eri_ggk_d0;eri_ggi_d0;eri_ggh_d0;eri_ggg_d0;eri_ffk_d0;eri_ffi_d0;eri_ffh_d0;eri_ffg_d0;eri_fff_d0;eri_ddk_d0;eri_ddi_d0;eri_ddh_d0;eri_ddg_d0;eri_ddf_d0;eri_ddd_d0;eri_KK_d0;eri_II_d0;eri_HH_d0;eri_GG_d0;eri_FF_d0;eri_DD_d0;eri_kk_d0;eri_ii_d0;eri_hh_d0;eri_gg_d0;eri_ff_d0;eri_dd_d0")
list(PREPEND Libint2_CONFIG_COMPONENTS "${_o1st}${_o2nd}")


# <<<  AM Components  >>>

# for features and libint2-config.cmake files
set(Libint2_MAX_AM_ERI "7")
