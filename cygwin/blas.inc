#
# BLAS components
#

BLAS1 = blas/isamax.o blas/sasum.o blas/saxpy.o	\
	blas/scopy.o blas/sdot.o blas/snrm2.o	\
	blas/srot.o blas/srotg.o blas/sscal.o	\
	blas/sswap.o blas/sdsdot.o blas/srotmg.o	\
	blas/srotm.o blas/scabs1.o blas/scasum.o	\
	blas/scnrm2.o blas/icamax.o blas/caxpy.o	\
	blas/ccopy.o blas/cdotc.o blas/cdotu.o	\
	blas/csscal.o blas/crotg.o blas/cscal.o	\
	blas/cswap.o blas/csrot.o blas/idamax.o	\
	blas/dasum.o blas/daxpy.o blas/dcopy.o	\
	blas/ddot.o blas/dnrm2.o blas/drot.o	\
	blas/drotg.o blas/dscal.o blas/dsdot.o	\
	blas/dswap.o blas/drotmg.o blas/drotm.o	\
	blas/dcabs1.o blas/dzasum.o blas/dznrm2.o	\
	blas/izamax.o blas/zaxpy.o blas/zcopy.o	\
	blas/zdotc.o blas/zdotu.o blas/zdscal.o	\
	blas/zrotg.o blas/zscal.o blas/zswap.o	\
	blas/zdrot.o blas/isamax.o blas/sasum.o	\
	blas/saxpy.o blas/scopy.o blas/snrm2.o	\
	blas/sscal.o blas/idamax.o blas/dasum.o	\
	blas/daxpy.o blas/dcopy.o blas/dnrm2.o	\
	blas/dscal.o

BLAS2 = blas/sgemv.o blas/sgbmv.o blas/ssymv.o	\
	blas/ssbmv.o blas/sspmv.o blas/strmv.o	\
	blas/stbmv.o blas/stpmv.o blas/strsv.o	\
	blas/stbsv.o blas/stpsv.o blas/sger.o	\
	blas/ssyr.o blas/sspr.o blas/ssyr2.o	\
	blas/sspr2.o blas/cgemv.o blas/cgbmv.o	\
	blas/chemv.o blas/chbmv.o blas/chpmv.o	\
	blas/ctrmv.o blas/ctbmv.o blas/ctpmv.o	\
	blas/ctrsv.o blas/ctbsv.o blas/ctpsv.o	\
	blas/cgerc.o blas/cgeru.o blas/cher.o	\
	blas/chpr.o blas/cher2.o blas/chpr2.o	\
	blas/dgemv.o blas/dgbmv.o blas/dsymv.o	\
	blas/dsbmv.o blas/dspmv.o blas/dtrmv.o	\
	blas/dtbmv.o blas/dtpmv.o blas/dtrsv.o	\
	blas/dtbsv.o blas/dtpsv.o blas/dger.o	\
	blas/dsyr.o blas/dspr.o blas/dsyr2.o	\
	blas/dspr2.o blas/zgemv.o blas/zgbmv.o	\
	blas/zhemv.o blas/zhbmv.o blas/zhpmv.o	\
	blas/ztrmv.o blas/ztbmv.o blas/ztpmv.o	\
	blas/ztrsv.o blas/ztbsv.o blas/ztpsv.o	\
	blas/zgerc.o blas/zgeru.o blas/zher.o	\
	blas/zhpr.o blas/zher2.o blas/zhpr2.o

BLAS3 = blas/sgemm.o blas/ssymm.o blas/ssyrk.o	\
	blas/ssyr2k.o blas/strmm.o blas/strsm.o	\
	blas/cgemm.o blas/csymm.o blas/csyrk.o	\
	blas/csyr2k.o blas/ctrmm.o blas/ctrsm.o	\
	blas/chemm.o blas/cherk.o blas/cher2k.o	\
	blas/dgemm.o blas/dsymm.o blas/dsyrk.o	\
	blas/dsyr2k.o blas/dtrmm.o blas/dtrsm.o	\
	blas/zgemm.o blas/zsymm.o blas/zsyrk.o	\
	blas/zsyr2k.o blas/ztrmm.o blas/ztrsm.o	\
	blas/zhemm.o blas/zherk.o blas/zher2k.o

BLAS = $(BLAS1) $(BLAS2) $(BLAS3)
