#
# BLAS components
#

ALLBLAS = src/blas/lsame.c src/blas/xerbla.c src/blas/xerbla_array.c

BLAS1 = src/blas/isamax.c src/blas/sasum.c src/blas/saxpy.c	\
	src/blas/scopy.c src/blas/sdot.c src/blas/snrm2.c	\
	src/blas/srot.c src/blas/srotg.c src/blas/sscal.c	\
	src/blas/sswap.c src/blas/sdsdot.c src/blas/srotmg.c	\
	src/blas/srotm.c src/blas/scabs1.c src/blas/scasum.c	\
	src/blas/scnrm2.c src/blas/icamax.c src/blas/caxpy.c	\
	src/blas/ccopy.c src/blas/cdotc.c src/blas/cdotu.c	\
	src/blas/csscal.c src/blas/crotg.c src/blas/cscal.c	\
	src/blas/cswap.c src/blas/csrot.c src/blas/idamax.c	\
	src/blas/dasum.c src/blas/daxpy.c src/blas/dcopy.c	\
	src/blas/ddot.c src/blas/dnrm2.c src/blas/drot.c	\
	src/blas/drotg.c src/blas/dscal.c src/blas/dsdot.c	\
	src/blas/dswap.c src/blas/drotmg.c src/blas/drotm.c	\
	src/blas/dcabs1.c src/blas/dzasum.c src/blas/dznrm2.c	\
	src/blas/izamax.c src/blas/zaxpy.c src/blas/zcopy.c	\
	src/blas/zdotc.c src/blas/zdotu.c src/blas/zdscal.c	\
	src/blas/zrotg.c src/blas/zscal.c src/blas/zswap.c	\
	src/blas/zdrot.c src/blas/isamax.c src/blas/sasum.c	\
	src/blas/saxpy.c src/blas/scopy.c src/blas/snrm2.c	\
	src/blas/sscal.c src/blas/idamax.c src/blas/dasum.c	\
	src/blas/daxpy.c src/blas/dcopy.c src/blas/dnrm2.c	\
	src/blas/dscal.c

BLAS2 = src/blas/sgemv.c src/blas/sgbmv.c src/blas/ssymv.c		\
	src/blas/ssbmv.c src/blas/sspmv.c src/blas/strmv.c		\
	src/blas/stbmv.c src/blas/stpmv.c src/blas/strsv.c		\
	src/blas/stbsv.c src/blas/stpsv.c src/blas/sger.c		\
	src/blas/ssyr.c src/blas/sspr.c src/blas/ssyr2.c		\
	src/blas/sspr2.c src/blas/cgemv.c src/blas/cgbmv.c		\
	src/blas/chemv.c src/blas/chbmv.c src/blas/chpmv.c		\
	src/blas/ctrmv.c src/blas/ctbmv.c src/blas/ctpmv.c		\
	src/blas/ctrsv.c src/blas/ctbsv.c src/blas/ctpsv.c		\
	src/blas/cgerc.c src/blas/cgeru.c src/blas/cher.c		\
	src/blas/chpr.c src/blas/cher2.c src/blas/chpr2.c		\
	src/blas/dgemv.c src/blas/dgbmv.c src/blas/dsymv.c		\
	src/blas/dsbmv.c src/blas/dspmv.c src/blas/dtrmv.c		\
	src/blas/dtbmv.c src/blas/dtpmv.c src/blas/dtrsv.c		\
	src/blas/dtbsv.c src/blas/dtpsv.c src/blas/dger.c		\
	src/blas/dsyr.c src/blas/dspr.c src/blas/dsyr2.c		\
	src/blas/dspr2.c src/blas/zgemv.c src/blas/zgbmv.c		\
	src/blas/zhemv.c src/blas/zhbmv.c src/blas/zhpmv.c		\
	src/blas/ztrmv.c src/blas/ztbmv.c src/blas/ztpmv.c		\
	src/blas/ztrsv.c src/blas/ztbsv.c src/blas/ztpsv.c		\
	src/blas/zgerc.c src/blas/zgeru.c src/blas/zher.c		\
	src/blas/zhpr.c src/blas/zher2.c src/blas/zhpr2.c

BLAS3 = src/blas/sgemm.c src/blas/ssymm.c src/blas/ssyrk.c	\
	src/blas/ssyr2k.c src/blas/strmm.c src/blas/strsm.c	\
	src/blas/cgemm.c src/blas/csymm.c src/blas/csyrk.c	\
	src/blas/csyr2k.c src/blas/ctrmm.c src/blas/ctrsm.c	\
	src/blas/chemm.c src/blas/cherk.c src/blas/cher2k.c	\
	src/blas/dgemm.c src/blas/dsymm.c src/blas/dsyrk.c	\
	src/blas/dsyr2k.c src/blas/dtrmm.c src/blas/dtrsm.c	\
	src/blas/zgemm.c src/blas/zsymm.c src/blas/zsyrk.c	\
	src/blas/zsyr2k.c src/blas/ztrmm.c src/blas/ztrsm.c	\
	src/blas/zhemm.c src/blas/zherk.c src/blas/zher2k.c

BLAS = $(ALLBLAS) $(BLAS1) $(BLAS2) $(BLAS3)
