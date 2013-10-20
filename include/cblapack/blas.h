#ifndef CBBLAS_BLAS_H
#define CBBLAS_BLAS_H

#include <f2c.h>
#ifndef F2CSUB
#define F2CSUB int
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* caxpy.c */
F2CSUB caxpy_(integer *n, complex *ca, complex *cx, integer *
	incx, complex *cy, integer *incy);

/* ccopy.c */
F2CSUB ccopy_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy);

/* cdotc.c */
void cdotc_(complex * ret_val, integer *n, complex *cx, integer 
	*incx, complex *cy, integer *incy);

/* cdotu.c */
void cdotu_(complex * ret_val, integer *n, complex *cx, integer 
	*incx, complex *cy, integer *incy);

/* cgbmv.c */
F2CSUB cgbmv_(const char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, complex *alpha, complex *a, integer *lda, complex *x, 
	integer *incx, complex *beta, complex *y, integer *incy);

/* cgemm.c */
F2CSUB cgemm_(const char *transa, const char *transb, integer *m, integer *
	n, integer *k, complex *alpha, complex *a, integer *lda, complex *b, 
	integer *ldb, complex *beta, complex *c__, integer *ldc);

/* cgemv.c */
F2CSUB cgemv_(const char *trans, integer *m, integer *n, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);

/* cgerc.c */
F2CSUB cgerc_(integer *m, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda);

/* cgeru.c */
F2CSUB cgeru_(integer *m, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda);

/* chbmv.c */
F2CSUB chbmv_(const char *uplo, integer *n, integer *k, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);

/* chemm.c */
F2CSUB chemm_(const char *side, const char *uplo, integer *m, integer *n, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *beta, complex *c__, integer *ldc);

/* chemv.c */
F2CSUB chemv_(const char *uplo, integer *n, complex *alpha, complex *
	a, integer *lda, complex *x, integer *incx, complex *beta, complex *y, 
	 integer *incy);

/* cher.c */
F2CSUB cher_(const char *uplo, integer *n, real *alpha, complex *x, 
	integer *incx, complex *a, integer *lda);

/* cher2.c */
F2CSUB cher2_(const char *uplo, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda);

/* cher2k.c */
F2CSUB cher2k_(const char *uplo, const char *trans, integer *n, integer *k, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	real *beta, complex *c__, integer *ldc);

/* cherk.c */
F2CSUB cherk_(const char *uplo, const char *trans, integer *n, integer *k, 
	real *alpha, complex *a, integer *lda, real *beta, complex *c__, 
	integer *ldc);

/* chpmv.c */
F2CSUB chpmv_(const char *uplo, integer *n, complex *alpha, complex *
	ap, complex *x, integer *incx, complex *beta, complex *y, integer *
	incy);

/* chpr.c */
F2CSUB chpr_(const char *uplo, integer *n, real *alpha, complex *x, 
	integer *incx, complex *ap);

/* chpr2.c */
F2CSUB chpr2_(const char *uplo, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *ap);

/* crotg.c */
F2CSUB crotg_(complex *ca, complex *cb, real *c__, complex *s);

/* cscal.c */
F2CSUB cscal_(integer *n, complex *ca, complex *cx, integer *
	incx);

/* csrot.c */
F2CSUB csrot_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy, real *c__, real *s);

/* csscal.c */
F2CSUB csscal_(integer *n, real *sa, complex *cx, integer *incx);

/* cswap.c */
F2CSUB cswap_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy);

/* csymm.c */
F2CSUB csymm_(const char *side, const char *uplo, integer *m, integer *n, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *beta, complex *c__, integer *ldc);

/* csyr2k.c */
F2CSUB csyr2k_(const char *uplo, const char *trans, integer *n, integer *k, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *beta, complex *c__, integer *ldc);

/* csyrk.c */
F2CSUB csyrk_(const char *uplo, const char *trans, integer *n, integer *k, 
	complex *alpha, complex *a, integer *lda, complex *beta, complex *c__, 
	 integer *ldc);

/* ctbmv.c */
F2CSUB ctbmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, complex *a, integer *lda, complex *x, integer *incx);

/* ctbsv.c */
F2CSUB ctbsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, complex *a, integer *lda, complex *x, integer *incx);

/* ctpmv.c */
F2CSUB ctpmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	complex *ap, complex *x, integer *incx);

/* ctpsv.c */
F2CSUB ctpsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	complex *ap, complex *x, integer *incx);

/* ctrmm.c */
F2CSUB ctrmm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, complex *alpha, complex *a, integer *lda, 
	complex *b, integer *ldb);

/* ctrmv.c */
F2CSUB ctrmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	complex *a, integer *lda, complex *x, integer *incx);

/* ctrsm.c */
F2CSUB ctrsm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, complex *alpha, complex *a, integer *lda, 
	complex *b, integer *ldb);

/* ctrsv.c */
F2CSUB ctrsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	complex *a, integer *lda, complex *x, integer *incx);

/* dasum.c */
doublereal dasum_(integer *n, doublereal *dx, integer *incx);

/* daxpy.c */
F2CSUB daxpy_(integer *n, doublereal *da, doublereal *dx, 
	integer *incx, doublereal *dy, integer *incy);

/* dcabs1.c */
doublereal dcabs1_(doublecomplex *z__);

/* dcopy.c */
F2CSUB dcopy_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy);

/* ddot.c */
doublereal ddot_(integer *n, doublereal *dx, integer *incx, doublereal *dy, 
	integer *incy);

/* dgbmv.c */
F2CSUB dgbmv_(const char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, doublereal *alpha, doublereal *a, integer *lda, 
	doublereal *x, integer *incx, doublereal *beta, doublereal *y, 
	integer *incy);

/* dgemm.c */
F2CSUB dgemm_(const char *transa, const char *transb, integer *m, integer *
	n, integer *k, doublereal *alpha, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, doublereal *beta, doublereal *c__, 
	integer *ldc);

/* dgemv.c */
F2CSUB dgemv_(const char *trans, integer *m, integer *n, doublereal *
	alpha, doublereal *a, integer *lda, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* dger.c */
F2CSUB dger_(integer *m, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *y, integer *incy, 
	doublereal *a, integer *lda);

/* dnrm2.c */
doublereal dnrm2_(integer *n, doublereal *x, integer *incx);

/* drot.c */
F2CSUB drot_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy, doublereal *c__, doublereal *s);

/* drotg.c */
F2CSUB drotg_(doublereal *da, doublereal *db, doublereal *c__, 
	doublereal *s);

/* drotm.c */
F2CSUB drotm_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy, doublereal *dparam);

/* drotmg.c */
F2CSUB drotmg_(doublereal *dd1, doublereal *dd2, doublereal *
	dx1, doublereal *dy1, doublereal *dparam);

/* dsbmv.c */
F2CSUB dsbmv_(const char *uplo, integer *n, integer *k, doublereal *
	alpha, doublereal *a, integer *lda, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* dscal.c */
F2CSUB dscal_(integer *n, doublereal *da, doublereal *dx, 
	integer *incx);

/* dsdot.c */
doublereal dsdot_(integer *n, real *sx, integer *incx, real *sy, integer *
	incy);

/* dspmv.c */
F2CSUB dspmv_(const char *uplo, integer *n, doublereal *alpha, 
	doublereal *ap, doublereal *x, integer *incx, doublereal *beta, 
	doublereal *y, integer *incy);

/* dspr.c */
F2CSUB dspr_(const char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *ap);

/* dspr2.c */
F2CSUB dspr2_(const char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *y, integer *incy, 
	doublereal *ap);

/* dswap.c */
F2CSUB dswap_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy);

/* dsymm.c */
F2CSUB dsymm_(const char *side, const char *uplo, integer *m, integer *n, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *beta, doublereal *c__, integer *ldc);

/* dsymv.c */
F2CSUB dsymv_(const char *uplo, integer *n, doublereal *alpha, 
	doublereal *a, integer *lda, doublereal *x, integer *incx, doublereal 
	*beta, doublereal *y, integer *incy);

/* dsyr.c */
F2CSUB dsyr_(const char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *a, integer *lda);

/* dsyr2.c */
F2CSUB dsyr2_(const char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *y, integer *incy, 
	doublereal *a, integer *lda);

/* dsyr2k.c */
F2CSUB dsyr2k_(const char *uplo, const char *trans, integer *n, integer *k, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *beta, doublereal *c__, integer *ldc);

/* dsyrk.c */
F2CSUB dsyrk_(const char *uplo, const char *trans, integer *n, integer *k, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *beta, 
	doublereal *c__, integer *ldc);

/* dtbmv.c */
F2CSUB dtbmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dtbsv.c */
F2CSUB dtbsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dtpmv.c */
F2CSUB dtpmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublereal *ap, doublereal *x, integer *incx);

/* dtpsv.c */
F2CSUB dtpsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublereal *ap, doublereal *x, integer *incx);

/* dtrmm.c */
F2CSUB dtrmm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, doublereal *alpha, doublereal *a, integer *
	lda, doublereal *b, integer *ldb);

/* dtrmv.c */
F2CSUB dtrmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dtrsm.c */
F2CSUB dtrsm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, doublereal *alpha, doublereal *a, integer *
	lda, doublereal *b, integer *ldb);

/* dtrsv.c */
F2CSUB dtrsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dzasum.c */
doublereal dzasum_(integer *n, doublecomplex *zx, integer *incx);

/* dznrm2.c */
doublereal dznrm2_(integer *n, doublecomplex *x, integer *incx);

/* icamax.c */
integer icamax_(const integer *n, const complex *cx, const integer *incx);

/* idamax.c */
integer idamax_(const integer *n, const doublereal *dx, const integer *incx);

/* isamax.c */
integer isamax_(const integer *n, const real *sx, const integer *incx);

/* izamax.c */
integer izamax_(const integer *n, const doublecomplex *zx, const integer *incx);

/* lsame.c */
logical lsame_(const char *ca, const char *cb);

/* sasum.c */
doublereal sasum_(integer *n, real *sx, integer *incx);

/* saxpy.c */
F2CSUB saxpy_(integer *n, real *sa, real *sx, integer *incx, 
	real *sy, integer *incy);

/* scabs1.c */
doublereal scabs1_(complex *z__);

/* scasum.c */
doublereal scasum_(integer *n, complex *cx, integer *incx);

/* scnrm2.c */
doublereal scnrm2_(integer *n, complex *x, integer *incx);

/* scopy.c */
F2CSUB scopy_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy);

/* sdot.c */
doublereal sdot_(integer *n, real *sx, integer *incx, real *sy, integer *incy);

/* sdsdot.c */
doublereal sdsdot_(integer *n, real *sb, real *sx, integer *incx, real *sy, 
	integer *incy);

/* sgbmv.c */
F2CSUB sgbmv_(const char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, real *alpha, real *a, integer *lda, real *x, integer *
	incx, real *beta, real *y, integer *incy);

/* sgemm.c */
F2CSUB sgemm_(const char *transa, const char *transb, integer *m, integer *
	n, integer *k, real *alpha, real *a, integer *lda, real *b, integer *
	ldb, real *beta, real *c__, integer *ldc);

/* sgemv.c */
F2CSUB sgemv_(const char *trans, integer *m, integer *n, real *alpha, 
	real *a, integer *lda, real *x, integer *incx, real *beta, real *y, 
	integer *incy);

/* sger.c */
F2CSUB sger_(integer *m, integer *n, real *alpha, real *x, 
	integer *incx, real *y, integer *incy, real *a, integer *lda);

/* snrm2.c */
doublereal snrm2_(integer *n, real *x, integer *incx);

/* srot.c */
F2CSUB srot_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy, real *c__, real *s);

/* srotg.c */
F2CSUB srotg_(real *sa, real *sb, real *c__, real *s);

/* srotm.c */
F2CSUB srotm_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy, real *sparam);

/* srotmg.c */
F2CSUB srotmg_(real *sd1, real *sd2, real *sx1, real *sy1, real 
	*sparam);

/* ssbmv.c */
F2CSUB ssbmv_(const char *uplo, integer *n, integer *k, real *alpha, 
	real *a, integer *lda, real *x, integer *incx, real *beta, real *y, 
	integer *incy);

/* sscal.c */
F2CSUB sscal_(integer *n, real *sa, real *sx, integer *incx);

/* sspmv.c */
F2CSUB sspmv_(const char *uplo, integer *n, real *alpha, real *ap, 
	real *x, integer *incx, real *beta, real *y, integer *incy);

/* sspr.c */
F2CSUB sspr_(const char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *ap);

/* sspr2.c */
F2CSUB sspr2_(const char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *y, integer *incy, real *ap);

/* sswap.c */
F2CSUB sswap_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy);

/* ssymm.c */
F2CSUB ssymm_(const char *side, const char *uplo, integer *m, integer *n, 
	real *alpha, real *a, integer *lda, real *b, integer *ldb, real *beta, 
	 real *c__, integer *ldc);

/* ssymv.c */
F2CSUB ssymv_(const char *uplo, integer *n, real *alpha, real *a, 
	integer *lda, real *x, integer *incx, real *beta, real *y, integer *
	incy);

/* ssyr.c */
F2CSUB ssyr_(const char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *a, integer *lda);

/* ssyr2.c */
F2CSUB ssyr2_(const char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *y, integer *incy, real *a, integer *lda);

/* ssyr2k.c */
F2CSUB ssyr2k_(const char *uplo, const char *trans, integer *n, integer *k, 
	real *alpha, real *a, integer *lda, real *b, integer *ldb, real *beta, 
	 real *c__, integer *ldc);

/* ssyrk.c */
F2CSUB ssyrk_(const char *uplo, const char *trans, integer *n, integer *k, 
	real *alpha, real *a, integer *lda, real *beta, real *c__, integer *
	ldc);

/* stbmv.c */
F2CSUB stbmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, real *a, integer *lda, real *x, integer *incx);

/* stbsv.c */
F2CSUB stbsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, real *a, integer *lda, real *x, integer *incx);

/* stpmv.c */
F2CSUB stpmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	real *ap, real *x, integer *incx);

/* stpsv.c */
F2CSUB stpsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	real *ap, real *x, integer *incx);

/* strmm.c */
F2CSUB strmm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, real *alpha, real *a, integer *lda, real *b, 
	integer *ldb);

/* strmv.c */
F2CSUB strmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	real *a, integer *lda, real *x, integer *incx);

/* strsm.c */
F2CSUB strsm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, real *alpha, real *a, integer *lda, real *b, 
	integer *ldb);

/* strsv.c */
F2CSUB strsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	real *a, integer *lda, real *x, integer *incx);

/* zaxpy.c */
F2CSUB zaxpy_(integer *n, doublecomplex *za, doublecomplex *zx, 
	integer *incx, doublecomplex *zy, integer *incy);

/* zcopy.c */
F2CSUB zcopy_(integer *n, doublecomplex *zx, integer *incx, 
	doublecomplex *zy, integer *incy);

/* zdotc.c */
/* Double Complex */ void zdotc_(doublecomplex * ret_val, integer *n, 
	doublecomplex *zx, integer *incx, doublecomplex *zy, integer *incy);

/* zdotu.c */
/* Double Complex */ void zdotu_(doublecomplex * ret_val, integer *n, 
	doublecomplex *zx, integer *incx, doublecomplex *zy, integer *incy);

/* zdrot.c */
F2CSUB zdrot_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublereal *s);

/* zdscal.c */
F2CSUB zdscal_(integer *n, doublereal *da, doublecomplex *zx, 
	integer *incx);

/* zgbmv.c */
F2CSUB zgbmv_(const char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, doublecomplex *alpha, doublecomplex *a, integer *lda, 
	doublecomplex *x, integer *incx, doublecomplex *beta, doublecomplex *
	y, integer *incy);

/* zgemm.c */
F2CSUB zgemm_(const char *transa, const char *transb, integer *m, integer *
	n, integer *k, doublecomplex *alpha, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *beta, doublecomplex *
	c__, integer *ldc);

/* zgemv.c */
F2CSUB zgemv_(const char *trans, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	x, integer *incx, doublecomplex *beta, doublecomplex *y, integer *
	incy);

/* zgerc.c */
F2CSUB zgerc_(integer *m, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *a, integer *lda);

/* zgeru.c */
F2CSUB zgeru_(integer *m, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *a, integer *lda);

/* zhbmv.c */
int zhbmv_(const const char *uplo, const integer *n, const integer *k, const doublecomplex *alpha, const doublecomplex *a, const integer *lda, const doublecomplex *x, const integer *incx, const doublecomplex *beta, doublecomplex *y, const integer *incy);

/* zhemm.c */
F2CSUB zhemm_(const char *side, const char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublecomplex *beta, doublecomplex *c__, integer *
	ldc);

/* zhemv.c */
F2CSUB zhemv_(const char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublecomplex *beta, doublecomplex *y, integer *incy);

/* zher.c */
F2CSUB zher_(const char *uplo, integer *n, doublereal *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda);

/* zher2.c */
F2CSUB zher2_(const char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *a, integer *lda);

/* zher2k.c */
F2CSUB zher2k_(const char *uplo, const char *trans, integer *n, integer *k, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublereal *beta, doublecomplex *c__, integer *ldc);

/* zherk.c */
F2CSUB zherk_(const char *uplo, const char *trans, integer *n, integer *k, 
	doublereal *alpha, doublecomplex *a, integer *lda, doublereal *beta, 
	doublecomplex *c__, integer *ldc);

/* zhpmv.c */
F2CSUB zhpmv_(const char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *ap, doublecomplex *x, integer *incx, doublecomplex *
	beta, doublecomplex *y, integer *incy);

/* zhpr.c */
F2CSUB zhpr_(const char *uplo, integer *n, doublereal *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *ap);

/* zhpr2.c */
F2CSUB zhpr2_(const char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *ap);

/* zrotg.c */
F2CSUB zrotg_(doublecomplex *ca, doublecomplex *cb, doublereal *
	c__, doublecomplex *s);

/* zscal.c */
F2CSUB zscal_(integer *n, doublecomplex *za, doublecomplex *zx, 
	integer *incx);

/* zswap.c */
F2CSUB zswap_(integer *n, doublecomplex *zx, integer *incx, 
	doublecomplex *zy, integer *incy);

/* zsymm.c */
F2CSUB zsymm_(const char *side, const char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublecomplex *beta, doublecomplex *c__, integer *
	ldc);

/* zsyr2k.c */
F2CSUB zsyr2k_(const char *uplo, const char *trans, integer *n, integer *k, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublecomplex *beta, doublecomplex *c__, integer *
	ldc);

/* zsyrk.c */
F2CSUB zsyrk_(const char *uplo, const char *trans, integer *n, integer *k, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	beta, doublecomplex *c__, integer *ldc);

/* ztbmv.c */
F2CSUB ztbmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *x, integer 
	*incx);

/* ztbsv.c */
F2CSUB ztbsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *x, integer 
	*incx);

/* ztpmv.c */
F2CSUB ztpmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublecomplex *ap, doublecomplex *x, integer *incx);

/* ztpsv.c */
F2CSUB ztpsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublecomplex *ap, doublecomplex *x, integer *incx);

/* ztrmm.c */
F2CSUB ztrmm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, doublecomplex *alpha, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb);

/* ztrmv.c */
F2CSUB ztrmv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx);

/* ztrsm.c */
F2CSUB ztrsm_(const char *side, const char *uplo, const char *transa, const char *diag, 
	integer *m, integer *n, doublecomplex *alpha, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb);

/* ztrsv.c */
F2CSUB ztrsv_(const char *uplo, const char *trans, const char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx);

#ifdef __cplusplus
}
#endif

#endif /* CBBLAS_BLAS_H */
