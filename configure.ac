dnl -*- Autoconf -*-
AC_INIT([CBLAPACK - BLAS and LAPACK in C],
	[12.02.01],
	[jjgarcia@users.sourceforge.net],
	[cblapack])

#
# Initialize Autoconf. Note that all files in config_aux are created by
# the automatic tools.
#
AC_PREREQ(2.59)
AC_CONFIG_SRCDIR([./README.md])		dnl Unique file where sources are
AC_CONFIG_MACRO_DIR([m4])		dnl Additional macro directories
AC_CONFIG_FILES([Makefile])
AC_CONFIG_AUX_DIR([config_aux])

#
# Initialize Automake, minimal version 1.9, with options to make it less
# pedantic, various distribution targets and placing object files together
# inside source dirs.
#
AM_INIT_AUTOMAKE([1.9 foreign dist-bzip2 dist-zip subdir-objects])

# Programs used to build the library
AC_PROG_CC
AC_LANG([C])
AC_PROG_LIBTOOL

# libf2c must be available
AC_CHECK_HEADER([f2c.h],[],[AC_MSG_ERROR([Unable to find f2c.h])])

AC_OUTPUT
