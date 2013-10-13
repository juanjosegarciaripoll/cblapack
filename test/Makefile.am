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

CLEANFILES = out/*.out
