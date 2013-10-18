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

#
# Doxygen documentation
#

include aminclude.am

upload-doc: doxygen-doc
	rsync -rauvz doc/html dreamhost:tream.dreamhosters.com/cblapack/

install-doxygen-doc: doxygen-doc
	$(MKDIR_P) $(DESTDIR)$(docdir)/{html,html/search}
	for i in doc/html/*.{html,js,css,png}; do \
		$(INSTALL_DATA) $$i $(DESTDIR)$(docdir)/html/; \
	done
	for i in doc/html/search/*.{js,html,png,css}; do \
		$(INSTALL_DATA) $$i $(DESTDIR)$(docdir)/html/search/; \
	done

uninstall-doxygen-doc:
	rm $(DESTDIR)$(docdir)/html/search/*
	rm $(DESTDIR)$(docdir)/html/*
	-rmdir $(DESTDIR)$(docdir)/html/search
	-rmdir $(DESTDIR)$(docdir)/html
