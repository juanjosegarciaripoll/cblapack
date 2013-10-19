CC=gcc -O3 -W

BLASDIR=../src/blas
LAPACKDIR=../src/lapack

include blas.inc
include lapack.inc

all: libcblapack.a

blas/%.o: ../src/blas/%.c
	$(CC) $(CPPFLAGS) -I../include -o $@ -c $<
lapack/%.o: ../src/lapack/%.c
	$(CC) $(CPPFLAGS) -I../include -o $@ -c $<

libcblapack.a: $(BLAS) $(LAPACK)
	ar cr $@ $(BLAS) $(LAPACK)
	ranlib $@

lapack.inc: ../lapack.inc Makefile
	sed -e 's,src/,,g' -e 's,\.c,.o,g' $< > $@
blas.inc: ../blas.inc Makefile
	sed -e 's,src/,,g' -e 's,\.c,.o,g' $< > $@

clean:
	rm -f $(BLAS) $(LAPACK) libcblapack.a
