#
# BLAS components
#

BLAS1 = $(BLASDIR)/isamax.c $(BLASDIR)/sasum.c $(BLASDIR)/saxpy.c	\
	$(BLASDIR)/scopy.c $(BLASDIR)/sdot.c $(BLASDIR)/snrm2.c		\
	$(BLASDIR)/srot.c $(BLASDIR)/srotg.c $(BLASDIR)/sscal.c		\
	$(BLASDIR)/sswap.c $(BLASDIR)/sdsdot.c $(BLASDIR)/srotmg.c	\
	$(BLASDIR)/srotm.c $(BLASDIR)/scabs1.c $(BLASDIR)/scasum.c	\
	$(BLASDIR)/scnrm2.c $(BLASDIR)/icamax.c $(BLASDIR)/caxpy.c	\
	$(BLASDIR)/ccopy.c $(BLASDIR)/cdotc.c $(BLASDIR)/cdotu.c	\
	$(BLASDIR)/csscal.c $(BLASDIR)/crotg.c $(BLASDIR)/cscal.c	\
	$(BLASDIR)/cswap.c $(BLASDIR)/csrot.c $(BLASDIR)/idamax.c	\
	$(BLASDIR)/dasum.c $(BLASDIR)/daxpy.c $(BLASDIR)/dcopy.c	\
	$(BLASDIR)/ddot.c $(BLASDIR)/dnrm2.c $(BLASDIR)/drot.c		\
	$(BLASDIR)/drotg.c $(BLASDIR)/dscal.c $(BLASDIR)/dsdot.c	\
	$(BLASDIR)/dswap.c $(BLASDIR)/drotmg.c $(BLASDIR)/drotm.c	\
	$(BLASDIR)/dcabs1.c $(BLASDIR)/dzasum.c $(BLASDIR)/dznrm2.c	\
	$(BLASDIR)/izamax.c $(BLASDIR)/zaxpy.c $(BLASDIR)/zcopy.c	\
	$(BLASDIR)/zdotc.c $(BLASDIR)/zdotu.c $(BLASDIR)/zdscal.c	\
	$(BLASDIR)/zrotg.c $(BLASDIR)/zscal.c $(BLASDIR)/zswap.c	\
	$(BLASDIR)/zdrot.c $(BLASDIR)/isamax.c $(BLASDIR)/sasum.c	\
	$(BLASDIR)/saxpy.c $(BLASDIR)/scopy.c $(BLASDIR)/snrm2.c	\
	$(BLASDIR)/sscal.c $(BLASDIR)/idamax.c $(BLASDIR)/dasum.c	\
	$(BLASDIR)/daxpy.c $(BLASDIR)/dcopy.c $(BLASDIR)/dnrm2.c	\
	$(BLASDIR)/dscal.c

BLAS2 = $(BLASDIR)/sgemv.c $(BLASDIR)/sgbmv.c $(BLASDIR)/ssymv.c	\
	$(BLASDIR)/ssbmv.c $(BLASDIR)/sspmv.c $(BLASDIR)/strmv.c	\
	$(BLASDIR)/stbmv.c $(BLASDIR)/stpmv.c $(BLASDIR)/strsv.c	\
	$(BLASDIR)/stbsv.c $(BLASDIR)/stpsv.c $(BLASDIR)/sger.c		\
	$(BLASDIR)/ssyr.c $(BLASDIR)/sspr.c $(BLASDIR)/ssyr2.c		\
	$(BLASDIR)/sspr2.c $(BLASDIR)/cgemv.c $(BLASDIR)/cgbmv.c	\
	$(BLASDIR)/chemv.c $(BLASDIR)/chbmv.c $(BLASDIR)/chpmv.c	\
	$(BLASDIR)/ctrmv.c $(BLASDIR)/ctbmv.c $(BLASDIR)/ctpmv.c	\
	$(BLASDIR)/ctrsv.c $(BLASDIR)/ctbsv.c $(BLASDIR)/ctpsv.c	\
	$(BLASDIR)/cgerc.c $(BLASDIR)/cgeru.c $(BLASDIR)/cher.c		\
	$(BLASDIR)/chpr.c $(BLASDIR)/cher2.c $(BLASDIR)/chpr2.c		\
	$(BLASDIR)/dgemv.c $(BLASDIR)/dgbmv.c $(BLASDIR)/dsymv.c	\
	$(BLASDIR)/dsbmv.c $(BLASDIR)/dspmv.c $(BLASDIR)/dtrmv.c	\
	$(BLASDIR)/dtbmv.c $(BLASDIR)/dtpmv.c $(BLASDIR)/dtrsv.c	\
	$(BLASDIR)/dtbsv.c $(BLASDIR)/dtpsv.c $(BLASDIR)/dger.c		\
	$(BLASDIR)/dsyr.c $(BLASDIR)/dspr.c $(BLASDIR)/dsyr2.c		\
	$(BLASDIR)/dspr2.c $(BLASDIR)/zgemv.c $(BLASDIR)/zgbmv.c	\
	$(BLASDIR)/zhemv.c $(BLASDIR)/zhbmv.c $(BLASDIR)/zhpmv.c	\
	$(BLASDIR)/ztrmv.c $(BLASDIR)/ztbmv.c $(BLASDIR)/ztpmv.c	\
	$(BLASDIR)/ztrsv.c $(BLASDIR)/ztbsv.c $(BLASDIR)/ztpsv.c	\
	$(BLASDIR)/zgerc.c $(BLASDIR)/zgeru.c $(BLASDIR)/zher.c		\
	$(BLASDIR)/zhpr.c $(BLASDIR)/zher2.c $(BLASDIR)/zhpr2.c

BLAS3 = $(BLASDIR)/sgemm.c $(BLASDIR)/ssymm.c $(BLASDIR)/ssyrk.c	\
	$(BLASDIR)/ssyr2k.c $(BLASDIR)/strmm.c $(BLASDIR)/strsm.c	\
	$(BLASDIR)/cgemm.c $(BLASDIR)/csymm.c $(BLASDIR)/csyrk.c	\
	$(BLASDIR)/csyr2k.c $(BLASDIR)/ctrmm.c $(BLASDIR)/ctrsm.c	\
	$(BLASDIR)/chemm.c $(BLASDIR)/cherk.c $(BLASDIR)/cher2k.c	\
	$(BLASDIR)/dgemm.c $(BLASDIR)/dsymm.c $(BLASDIR)/dsyrk.c	\
	$(BLASDIR)/dsyr2k.c $(BLASDIR)/dtrmm.c $(BLASDIR)/dtrsm.c	\
	$(BLASDIR)/zgemm.c $(BLASDIR)/zsymm.c $(BLASDIR)/zsyrk.c	\
	$(BLASDIR)/zsyr2k.c $(BLASDIR)/ztrmm.c $(BLASDIR)/ztrsm.c	\
	$(BLASDIR)/zhemm.c $(BLASDIR)/zherk.c $(BLASDIR)/zher2k.c

BLAS = $(BLAS1) $(BLAS2) $(BLAS3)
