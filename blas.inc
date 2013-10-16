#
# BLAS components
#

ALLBLAS = BLAS/SRC/lsame.c BLAS/SRC/xerbla.c BLAS/SRC/xerbla_array.c

BLAS1 = BLAS/SRC/isamax.c BLAS/SRC/sasum.c BLAS/SRC/saxpy.c	\
	BLAS/SRC/scopy.c BLAS/SRC/sdot.c BLAS/SRC/snrm2.c	\
	BLAS/SRC/srot.c BLAS/SRC/srotg.c BLAS/SRC/sscal.c	\
	BLAS/SRC/sswap.c BLAS/SRC/sdsdot.c BLAS/SRC/srotmg.c	\
	BLAS/SRC/srotm.c BLAS/SRC/scabs1.c BLAS/SRC/scasum.c	\
	BLAS/SRC/scnrm2.c BLAS/SRC/icamax.c BLAS/SRC/caxpy.c	\
	BLAS/SRC/ccopy.c BLAS/SRC/cdotc.c BLAS/SRC/cdotu.c	\
	BLAS/SRC/csscal.c BLAS/SRC/crotg.c BLAS/SRC/cscal.c	\
	BLAS/SRC/cswap.c BLAS/SRC/csrot.c BLAS/SRC/idamax.c	\
	BLAS/SRC/dasum.c BLAS/SRC/daxpy.c BLAS/SRC/dcopy.c	\
	BLAS/SRC/ddot.c BLAS/SRC/dnrm2.c BLAS/SRC/drot.c	\
	BLAS/SRC/drotg.c BLAS/SRC/dscal.c BLAS/SRC/dsdot.c	\
	BLAS/SRC/dswap.c BLAS/SRC/drotmg.c BLAS/SRC/drotm.c	\
	BLAS/SRC/dcabs1.c BLAS/SRC/dzasum.c BLAS/SRC/dznrm2.c	\
	BLAS/SRC/izamax.c BLAS/SRC/zaxpy.c BLAS/SRC/zcopy.c	\
	BLAS/SRC/zdotc.c BLAS/SRC/zdotu.c BLAS/SRC/zdscal.c	\
	BLAS/SRC/zrotg.c BLAS/SRC/zscal.c BLAS/SRC/zswap.c	\
	BLAS/SRC/zdrot.c BLAS/SRC/isamax.c BLAS/SRC/sasum.c	\
	BLAS/SRC/saxpy.c BLAS/SRC/scopy.c BLAS/SRC/snrm2.c	\
	BLAS/SRC/sscal.c BLAS/SRC/idamax.c BLAS/SRC/dasum.c	\
	BLAS/SRC/daxpy.c BLAS/SRC/dcopy.c BLAS/SRC/dnrm2.c	\
	BLAS/SRC/dscal.c

BLAS2 = BLAS/SRC/sgemv.c BLAS/SRC/sgbmv.c BLAS/SRC/ssymv.c		\
	BLAS/SRC/ssbmv.c BLAS/SRC/sspmv.c BLAS/SRC/strmv.c		\
	BLAS/SRC/stbmv.c BLAS/SRC/stpmv.c BLAS/SRC/strsv.c		\
	BLAS/SRC/stbsv.c BLAS/SRC/stpsv.c BLAS/SRC/sger.c		\
	BLAS/SRC/ssyr.c BLAS/SRC/sspr.c BLAS/SRC/ssyr2.c		\
	BLAS/SRC/sspr2.c BLAS/SRC/cgemv.c BLAS/SRC/cgbmv.c		\
	BLAS/SRC/chemv.c BLAS/SRC/chbmv.c BLAS/SRC/chpmv.c		\
	BLAS/SRC/ctrmv.c BLAS/SRC/ctbmv.c BLAS/SRC/ctpmv.c		\
	BLAS/SRC/ctrsv.c BLAS/SRC/ctbsv.c BLAS/SRC/ctpsv.c		\
	BLAS/SRC/cgerc.c BLAS/SRC/cgeru.c BLAS/SRC/cher.c		\
	BLAS/SRC/chpr.c BLAS/SRC/cher2.c BLAS/SRC/chpr2.c		\
	BLAS/SRC/dgemv.c BLAS/SRC/dgbmv.c BLAS/SRC/dsymv.c		\
	BLAS/SRC/dsbmv.c BLAS/SRC/dspmv.c BLAS/SRC/dtrmv.c		\
	BLAS/SRC/dtbmv.c BLAS/SRC/dtpmv.c BLAS/SRC/dtrsv.c		\
	BLAS/SRC/dtbsv.c BLAS/SRC/dtpsv.c BLAS/SRC/dger.c		\
	BLAS/SRC/dsyr.c BLAS/SRC/dspr.c BLAS/SRC/dsyr2.c		\
	BLAS/SRC/dspr2.c BLAS/SRC/zgemv.c BLAS/SRC/zgbmv.c		\
	BLAS/SRC/zhemv.c BLAS/SRC/zhbmv.c BLAS/SRC/zhpmv.c		\
	BLAS/SRC/ztrmv.c BLAS/SRC/ztbmv.c BLAS/SRC/ztpmv.c		\
	BLAS/SRC/ztrsv.c BLAS/SRC/ztbsv.c BLAS/SRC/ztpsv.c		\
	BLAS/SRC/zgerc.c BLAS/SRC/zgeru.c BLAS/SRC/zher.c		\
	BLAS/SRC/zhpr.c BLAS/SRC/zher2.c BLAS/SRC/zhpr2.c

BLAS3 = BLAS/SRC/sgemm.c BLAS/SRC/ssymm.c BLAS/SRC/ssyrk.c	\
	BLAS/SRC/ssyr2k.c BLAS/SRC/strmm.c BLAS/SRC/strsm.c	\
	BLAS/SRC/cgemm.c BLAS/SRC/csymm.c BLAS/SRC/csyrk.c	\
	BLAS/SRC/csyr2k.c BLAS/SRC/ctrmm.c BLAS/SRC/ctrsm.c	\
	BLAS/SRC/chemm.c BLAS/SRC/cherk.c BLAS/SRC/cher2k.c	\
	BLAS/SRC/dgemm.c BLAS/SRC/dsymm.c BLAS/SRC/dsyrk.c	\
	BLAS/SRC/dsyr2k.c BLAS/SRC/dtrmm.c BLAS/SRC/dtrsm.c	\
	BLAS/SRC/zgemm.c BLAS/SRC/zsymm.c BLAS/SRC/zsyrk.c	\
	BLAS/SRC/zsyr2k.c BLAS/SRC/ztrmm.c BLAS/SRC/ztrsm.c	\
	BLAS/SRC/zhemm.c BLAS/SRC/zherk.c BLAS/SRC/zher2k.c

BLAS = $(ALLBLAS) $(BLAS1) $(BLAS2) $(BLAS3)
