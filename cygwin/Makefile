CC=gcc -O3 -W

BLASDIR=../src/blas
LAPACKDIR=../src/lapack

include ../blas.inc
include ../lapack.inc

BLAS_O=$(subst .c,.o,$(subst $(BLASDIR),blas,$(BLAS)))
LAPACK_O=$(subst .c,.o,$(subst $(BLASDIR),blas,$(subst $(LAPACKDIR),lapack,$(LAPACK))))

all: libcblapack.a

blas/%.o: ../src/blas/%.c
	$(CC) $(CPPFLAGS) -I../include -o $@ -c $<
lapack/%.o: ../src/lapack/%.c
	$(CC) $(CPPFLAGS) -I../include -o $@ -c $<

libcblapack.a: $(BLAS_O) $(LAPACK_O)
	ar cr $@ $(BLAS_O) $(LAPACK_O)
	ranlib $@

clean:
	rm -f $(BLAS_O) $(LAPACK_O) libcblapack.a
