dnl#                                               -*- Autoconf -*-
dnl# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.70])
AC_INIT([Pyramid],[0.0.1],[https://github.com/cooljeanius/Pyramid/issues])
AC_CONFIG_SRCDIR([main_pyramid.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_CC

# Checks for header files.
AC_CHECK_HEADERS_ONCE([stdio.h])dnl

# Checks for library functions.
AC_CHECK_FUNCS([printf scanf])dnl

# Output.
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
