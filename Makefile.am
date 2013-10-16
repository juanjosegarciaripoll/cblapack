## Makefile.am

ACLOCAL_AMFLAGS = -I m4

SUBDIRS = test

# We define the global AM_CPPFLAGS as everything we compile includes from these
# directories.
AM_CPPFLAGS = -I$(top_srcdir)/include

include blas.inc
include lapack.inc

#
# Main library
#
lib_LTLIBRARIES = libcblapack.la

libcblapack_la_SOURCES = $(BLAS) $(LAPACK)
