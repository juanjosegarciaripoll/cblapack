# We define the global AM_CPPFLAGS as everything we compile includes from these
# directories.
AM_CPPFLAGS = -I$(top_srcdir)/include

# The scripts need to locate the input data
AM_TESTS_ENVIRONMENT = \
	export CBLAPACKDIR=$(top_srcdir);

#
# BLAS TESTS
#

TESTS = test_blas1 test_blas2 test_blas3

check_PROGRAMS = test_blas1s test_blas1d test_blas1c test_blas1z	\
	test_blas2s test_blas2d test_blas2c test_blas2z test_blas3s	\
	test_blas3d test_blas3c test_blas3z

test_blas1s_SOURCES = BLAS/main.c BLAS/sblat1.c
test_blas1s_LDADD = ../libcblapack.la -lf2c

test_blas1d_SOURCES = BLAS/main.c BLAS/dblat1.c
test_blas1d_LDADD = ../libcblapack.la -lf2c

test_blas1c_SOURCES = BLAS/main.c BLAS/cblat1.c
test_blas1c_LDADD = ../libcblapack.la -lf2c

test_blas1z_SOURCES = BLAS/main.c BLAS/zblat1.c
test_blas1z_LDADD = ../libcblapack.la -lf2c

test_blas2s_SOURCES = BLAS/main.c BLAS/sblat2.c
test_blas2s_LDADD = ../libcblapack.la -lf2c

test_blas2d_SOURCES = BLAS/main.c BLAS/dblat2.c
test_blas2d_LDADD = ../libcblapack.la -lf2c

test_blas2c_SOURCES = BLAS/main.c BLAS/cblat2.c
test_blas2c_LDADD = ../libcblapack.la -lf2c

test_blas2z_SOURCES = BLAS/main.c BLAS/zblat2.c
test_blas2z_LDADD = ../libcblapack.la -lf2c

test_blas3s_SOURCES = BLAS/main.c BLAS/sblat3.c
test_blas3s_LDADD = ../libcblapack.la -lf2c

test_blas3d_SOURCES = BLAS/main.c BLAS/dblat3.c
test_blas3d_LDADD = ../libcblapack.la -lf2c

test_blas3c_SOURCES = BLAS/main.c BLAS/cblat3.c
test_blas3c_LDADD = ../libcblapack.la -lf2c

test_blas3z_SOURCES = BLAS/main.c BLAS/zblat3.c
test_blas3z_LDADD = ../libcblapack.la -lf2c

#
# MATGEN library for generating test matrices
#

SCATGEN = MATGEN/slatm1.c MATGEN/slaran.c MATGEN/slarnd.c

SMATGEN = MATGEN/slatms.c MATGEN/slatme.c MATGEN/slatmr.c		\
   MATGEN/slatmt.c MATGEN/slagge.c MATGEN/slagsy.c MATGEN/slakf2.c	\
   MATGEN/slarge.c MATGEN/slaror.c MATGEN/slarot.c MATGEN/slatm2.c	\
   MATGEN/slatm3.c MATGEN/slatm5.c MATGEN/slatm6.c MATGEN/slatm7.c	\
   MATGEN/slahilb.c

CMATGEN = MATGEN/clatms.c MATGEN/clatme.c MATGEN/clatmr.c		\
   MATGEN/clatmt.c MATGEN/clagge.c MATGEN/claghe.c MATGEN/clagsy.c	\
   MATGEN/clakf2.c MATGEN/clarge.c MATGEN/claror.c MATGEN/clarot.c	\
   MATGEN/clatm1.c MATGEN/clarnd.c MATGEN/clatm2.c MATGEN/clatm3.c	\
   MATGEN/clatm5.c MATGEN/clatm6.c MATGEN/clahilb.c

DZATGEN = MATGEN/dlatm1.c MATGEN/dlaran.c MATGEN/dlarnd.c

DMATGEN = MATGEN/dlatms.c MATGEN/dlatme.c MATGEN/dlatmr.c		\
   MATGEN/dlatmt.c MATGEN/dlagge.c MATGEN/dlagsy.c MATGEN/dlakf2.c	\
   MATGEN/dlarge.c MATGEN/dlaror.c MATGEN/dlarot.c MATGEN/dlatm2.c	\
   MATGEN/dlatm3.c MATGEN/dlatm5.c MATGEN/dlatm6.c MATGEN/dlatm7.c	\
   MATGEN/dlahilb.c

ZMATGEN = MATGEN/zlatms.c MATGEN/zlatme.c MATGEN/zlatmr.c		\
   MATGEN/zlatmt.c MATGEN/zlagge.c MATGEN/zlaghe.c MATGEN/zlagsy.c	\
   MATGEN/zlakf2.c MATGEN/zlarge.c MATGEN/zlaror.c MATGEN/zlarot.c	\
   MATGEN/zlatm1.c MATGEN/zlarnd.c MATGEN/zlatm2.c MATGEN/zlatm3.c	\
   MATGEN/zlatm5.c MATGEN/zlatm6.c MATGEN/zlahilb.c

noinst_LIBRARIES = libtmglib.a
libtmglib_a_SOURCES = $(SMATGEN) $(CMATGEN) $(SCATGEN) $(DMATGEN)	\
	$(ZMATGEN) $(DZATGEN)

CLEANFILES = out/*.out
