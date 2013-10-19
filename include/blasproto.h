#ifndef CBLAPACK_BLASPROTO_H
#define CBLAPACK_BLASPROTO_H

/* caxpy.c */
extern int caxpy_(integer *n, complex *ca, complex *cx, integer *
	incx, complex *cy, integer *incy);

/* ccopy.c */
extern int ccopy_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy);

/* cdotc.c */
extern void cdotc_(complex * ret_val, integer *n, complex *cx, integer 
	*incx, complex *cy, integer *incy);

/* cdotu.c */
extern void cdotu_(complex * ret_val, integer *n, complex *cx, integer 
	*incx, complex *cy, integer *incy);

/* cgbmv.c */
extern int cgbmv_(char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, complex *alpha, complex *a, integer *lda, complex *x, 
	integer *incx, complex *beta, complex *y, integer *incy);

/* cgemm.c */
extern int cgemm_(char *transa, char *transb, integer *m, integer *
	n, integer *k, complex *alpha, complex *a, integer *lda, complex *b, 
	integer *ldb, complex *beta, complex *c__, integer *ldc);

/* cgemv.c */
extern int cgemv_(char *trans, integer *m, integer *n, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);

/* cgerc.c */
extern int cgerc_(integer *m, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda);

/* cgeru.c */
extern int cgeru_(integer *m, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda);

/* chbmv.c */
extern int chbmv_(char *uplo, integer *n, integer *k, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);

/* chemm.c */
extern int chemm_(char *side, char *uplo, integer *m, integer *n, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *beta, complex *c__, integer *ldc);

/* chemv.c */
extern int chemv_(char *uplo, integer *n, complex *alpha, complex *
	a, integer *lda, complex *x, integer *incx, complex *beta, complex *y, 
	 integer *incy);

/* cher.c */
extern int cher_(char *uplo, integer *n, real *alpha, complex *x, 
	integer *incx, complex *a, integer *lda);

/* cher2.c */
extern int cher2_(char *uplo, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *a, integer *lda);

/* cher2k.c */
extern int cher2k_(char *uplo, char *trans, integer *n, integer *k, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	real *beta, complex *c__, integer *ldc);

/* cherk.c */
extern int cherk_(char *uplo, char *trans, integer *n, integer *k, 
	real *alpha, complex *a, integer *lda, real *beta, complex *c__, 
	integer *ldc);

/* chpmv.c */
extern int chpmv_(char *uplo, integer *n, complex *alpha, complex *
	ap, complex *x, integer *incx, complex *beta, complex *y, integer *
	incy);

/* chpr.c */
extern int chpr_(char *uplo, integer *n, real *alpha, complex *x, 
	integer *incx, complex *ap);

/* chpr2.c */
extern int chpr2_(char *uplo, integer *n, complex *alpha, complex *
	x, integer *incx, complex *y, integer *incy, complex *ap);

/* crotg.c */
extern int crotg_(complex *ca, complex *cb, real *c__, complex *s);

/* cscal.c */
extern int cscal_(integer *n, complex *ca, complex *cx, integer *
	incx);

/* csrot.c */
extern int csrot_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy, real *c__, real *s);

/* csscal.c */
extern int csscal_(integer *n, real *sa, complex *cx, integer *incx);

/* cswap.c */
extern int cswap_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy);

/* csymm.c */
extern int csymm_(char *side, char *uplo, integer *m, integer *n, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *beta, complex *c__, integer *ldc);

/* csyr2k.c */
extern int csyr2k_(char *uplo, char *trans, integer *n, integer *k, 
	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *beta, complex *c__, integer *ldc);

/* csyrk.c */
extern int csyrk_(char *uplo, char *trans, integer *n, integer *k, 
	complex *alpha, complex *a, integer *lda, complex *beta, complex *c__, 
	 integer *ldc);

/* ctbmv.c */
extern int ctbmv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, complex *a, integer *lda, complex *x, integer *incx);

/* ctbsv.c */
extern int ctbsv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, complex *a, integer *lda, complex *x, integer *incx);

/* ctpmv.c */
extern int ctpmv_(char *uplo, char *trans, char *diag, integer *n, 
	complex *ap, complex *x, integer *incx);

/* ctpsv.c */
extern int ctpsv_(char *uplo, char *trans, char *diag, integer *n, 
	complex *ap, complex *x, integer *incx);

/* ctrmm.c */
extern int ctrmm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, complex *alpha, complex *a, integer *lda, 
	complex *b, integer *ldb);

/* ctrmv.c */
extern int ctrmv_(char *uplo, char *trans, char *diag, integer *n, 
	complex *a, integer *lda, complex *x, integer *incx);

/* ctrsm.c */
extern int ctrsm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, complex *alpha, complex *a, integer *lda, 
	complex *b, integer *ldb);

/* ctrsv.c */
extern int ctrsv_(char *uplo, char *trans, char *diag, integer *n, 
	complex *a, integer *lda, complex *x, integer *incx);

/* dasum.c */
extern doublereal dasum_(integer *n, doublereal *dx, integer *incx);

/* daxpy.c */
extern int daxpy_(integer *n, doublereal *da, doublereal *dx, 
	integer *incx, doublereal *dy, integer *incy);

/* dcabs1.c */
extern doublereal dcabs1_(doublecomplex *z__);

/* dcopy.c */
extern int dcopy_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy);

/* ddot.c */
extern doublereal ddot_(integer *n, doublereal *dx, integer *incx, doublereal *dy, 
	integer *incy);

/* dgbmv.c */
extern int dgbmv_(char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, doublereal *alpha, doublereal *a, integer *lda, 
	doublereal *x, integer *incx, doublereal *beta, doublereal *y, 
	integer *incy);

/* dgemm.c */
extern int dgemm_(char *transa, char *transb, integer *m, integer *
	n, integer *k, doublereal *alpha, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, doublereal *beta, doublereal *c__, 
	integer *ldc);

/* dgemv.c */
extern int dgemv_(char *trans, integer *m, integer *n, doublereal *
	alpha, doublereal *a, integer *lda, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* dger.c */
extern int dger_(integer *m, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *y, integer *incy, 
	doublereal *a, integer *lda);

/* dnrm2.c */
extern doublereal dnrm2_(integer *n, doublereal *x, integer *incx);

/* drot.c */
extern int drot_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy, doublereal *c__, doublereal *s);

/* drotg.c */
extern int drotg_(doublereal *da, doublereal *db, doublereal *c__, 
	doublereal *s);

/* drotm.c */
extern int drotm_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy, doublereal *dparam);

/* drotmg.c */
extern int drotmg_(doublereal *dd1, doublereal *dd2, doublereal *
	dx1, doublereal *dy1, doublereal *dparam);

/* dsbmv.c */
extern int dsbmv_(char *uplo, integer *n, integer *k, doublereal *
	alpha, doublereal *a, integer *lda, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* dscal.c */
extern int dscal_(integer *n, doublereal *da, doublereal *dx, 
	integer *incx);

/* dsdot.c */
extern doublereal dsdot_(integer *n, real *sx, integer *incx, real *sy, integer *
	incy);

/* dspmv.c */
extern int dspmv_(char *uplo, integer *n, doublereal *alpha, 
	doublereal *ap, doublereal *x, integer *incx, doublereal *beta, 
	doublereal *y, integer *incy);

/* dspr.c */
extern int dspr_(char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *ap);

/* dspr2.c */
extern int dspr2_(char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *y, integer *incy, 
	doublereal *ap);

/* dswap.c */
extern int dswap_(integer *n, doublereal *dx, integer *incx, 
	doublereal *dy, integer *incy);

/* dsymm.c */
extern int dsymm_(char *side, char *uplo, integer *m, integer *n, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *beta, doublereal *c__, integer *ldc);

/* dsymv.c */
extern int dsymv_(char *uplo, integer *n, doublereal *alpha, 
	doublereal *a, integer *lda, doublereal *x, integer *incx, doublereal 
	*beta, doublereal *y, integer *incy);

/* dsyr.c */
extern int dsyr_(char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *a, integer *lda);

/* dsyr2.c */
extern int dsyr2_(char *uplo, integer *n, doublereal *alpha, 
	doublereal *x, integer *incx, doublereal *y, integer *incy, 
	doublereal *a, integer *lda);

/* dsyr2k.c */
extern int dsyr2k_(char *uplo, char *trans, integer *n, integer *k, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *beta, doublereal *c__, integer *ldc);

/* dsyrk.c */
extern int dsyrk_(char *uplo, char *trans, integer *n, integer *k, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *beta, 
	doublereal *c__, integer *ldc);

/* dtbmv.c */
extern int dtbmv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dtbsv.c */
extern int dtbsv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dtpmv.c */
extern int dtpmv_(char *uplo, char *trans, char *diag, integer *n, 
	doublereal *ap, doublereal *x, integer *incx);

/* dtpsv.c */
extern int dtpsv_(char *uplo, char *trans, char *diag, integer *n, 
	doublereal *ap, doublereal *x, integer *incx);

/* dtrmm.c */
extern int dtrmm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, doublereal *alpha, doublereal *a, integer *
	lda, doublereal *b, integer *ldb);

/* dtrmv.c */
extern int dtrmv_(char *uplo, char *trans, char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dtrsm.c */
extern int dtrsm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, doublereal *alpha, doublereal *a, integer *
	lda, doublereal *b, integer *ldb);

/* dtrsv.c */
extern int dtrsv_(char *uplo, char *trans, char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *x, integer *incx);

/* dzasum.c */
extern doublereal dzasum_(integer *n, doublecomplex *zx, integer *incx);

/* dznrm2.c */
extern doublereal dznrm2_(integer *n, doublecomplex *x, integer *incx);

/* icamax.c */
extern integer icamax_(const integer *n, const complex *cx, const integer *incx);

/* idamax.c */
extern integer idamax_(const integer *n, const doublereal *dx, const integer *incx);

/* isamax.c */
extern integer isamax_(const integer *n, const real *sx, const integer *incx);

/* izamax.c */
extern integer izamax_(const integer *n, const doublecomplex *zx, const integer *incx);

/* lsame.c */
extern logical lsame_(char *ca, char *cb);

/* sasum.c */
extern doublereal sasum_(integer *n, real *sx, integer *incx);

/* saxpy.c */
extern int saxpy_(integer *n, real *sa, real *sx, integer *incx, 
	real *sy, integer *incy);

/* scabs1.c */
extern doublereal scabs1_(complex *z__);

/* scasum.c */
extern doublereal scasum_(integer *n, complex *cx, integer *incx);

/* scnrm2.c */
extern doublereal scnrm2_(integer *n, complex *x, integer *incx);

/* scopy.c */
extern int scopy_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy);

/* sdot.c */
extern doublereal sdot_(integer *n, real *sx, integer *incx, real *sy, integer *incy);

/* sdsdot.c */
extern doublereal sdsdot_(integer *n, real *sb, real *sx, integer *incx, real *sy, 
	integer *incy);

/* sgbmv.c */
extern int sgbmv_(char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, real *alpha, real *a, integer *lda, real *x, integer *
	incx, real *beta, real *y, integer *incy);

/* sgemm.c */
extern int sgemm_(char *transa, char *transb, integer *m, integer *
	n, integer *k, real *alpha, real *a, integer *lda, real *b, integer *
	ldb, real *beta, real *c__, integer *ldc);

/* sgemv.c */
extern int sgemv_(char *trans, integer *m, integer *n, real *alpha, 
	real *a, integer *lda, real *x, integer *incx, real *beta, real *y, 
	integer *incy);

/* sger.c */
extern int sger_(integer *m, integer *n, real *alpha, real *x, 
	integer *incx, real *y, integer *incy, real *a, integer *lda);

/* snrm2.c */
extern doublereal snrm2_(integer *n, real *x, integer *incx);

/* srot.c */
extern int srot_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy, real *c__, real *s);

/* srotg.c */
extern int srotg_(real *sa, real *sb, real *c__, real *s);

/* srotm.c */
extern int srotm_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy, real *sparam);

/* srotmg.c */
extern int srotmg_(real *sd1, real *sd2, real *sx1, real *sy1, real 
	*sparam);

/* ssbmv.c */
extern int ssbmv_(char *uplo, integer *n, integer *k, real *alpha, 
	real *a, integer *lda, real *x, integer *incx, real *beta, real *y, 
	integer *incy);

/* sscal.c */
extern int sscal_(integer *n, real *sa, real *sx, integer *incx);

/* sspmv.c */
extern int sspmv_(char *uplo, integer *n, real *alpha, real *ap, 
	real *x, integer *incx, real *beta, real *y, integer *incy);

/* sspr.c */
extern int sspr_(char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *ap);

/* sspr2.c */
extern int sspr2_(char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *y, integer *incy, real *ap);

/* sswap.c */
extern int sswap_(integer *n, real *sx, integer *incx, real *sy, 
	integer *incy);

/* ssymm.c */
extern int ssymm_(char *side, char *uplo, integer *m, integer *n, 
	real *alpha, real *a, integer *lda, real *b, integer *ldb, real *beta, 
	 real *c__, integer *ldc);

/* ssymv.c */
extern int ssymv_(char *uplo, integer *n, real *alpha, real *a, 
	integer *lda, real *x, integer *incx, real *beta, real *y, integer *
	incy);

/* ssyr.c */
extern int ssyr_(char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *a, integer *lda);

/* ssyr2.c */
extern int ssyr2_(char *uplo, integer *n, real *alpha, real *x, 
	integer *incx, real *y, integer *incy, real *a, integer *lda);

/* ssyr2k.c */
extern int ssyr2k_(char *uplo, char *trans, integer *n, integer *k, 
	real *alpha, real *a, integer *lda, real *b, integer *ldb, real *beta, 
	 real *c__, integer *ldc);

/* ssyrk.c */
extern int ssyrk_(char *uplo, char *trans, integer *n, integer *k, 
	real *alpha, real *a, integer *lda, real *beta, real *c__, integer *
	ldc);

/* stbmv.c */
extern int stbmv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, real *a, integer *lda, real *x, integer *incx);

/* stbsv.c */
extern int stbsv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, real *a, integer *lda, real *x, integer *incx);

/* stpmv.c */
extern int stpmv_(char *uplo, char *trans, char *diag, integer *n, 
	real *ap, real *x, integer *incx);

/* stpsv.c */
extern int stpsv_(char *uplo, char *trans, char *diag, integer *n, 
	real *ap, real *x, integer *incx);

/* strmm.c */
extern int strmm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, real *alpha, real *a, integer *lda, real *b, 
	integer *ldb);

/* strmv.c */
extern int strmv_(char *uplo, char *trans, char *diag, integer *n, 
	real *a, integer *lda, real *x, integer *incx);

/* strsm.c */
extern int strsm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, real *alpha, real *a, integer *lda, real *b, 
	integer *ldb);

/* strsv.c */
extern int strsv_(char *uplo, char *trans, char *diag, integer *n, 
	real *a, integer *lda, real *x, integer *incx);

/* xerbla.c */
extern int xerbla_(const char *srname, const integer *info);

/* xerbla_array.c */
extern int xerbla_array__(char *srname_array__, integer *
	srname_len__, integer *info, ftnlen srname_array_len);

/* zaxpy.c */
extern int zaxpy_(integer *n, doublecomplex *za, doublecomplex *zx, 
	integer *incx, doublecomplex *zy, integer *incy);

/* zcopy.c */
extern int zcopy_(integer *n, doublecomplex *zx, integer *incx, 
	doublecomplex *zy, integer *incy);

/* zdotc.c */
extern void zdotc_(doublecomplex * ret_val, integer *n, 
	doublecomplex *zx, integer *incx, doublecomplex *zy, integer *incy);

/* zdotu.c */
extern void zdotu_(doublecomplex * ret_val, integer *n, 
	doublecomplex *zx, integer *incx, doublecomplex *zy, integer *incy);

/* zdrot.c */
extern int zdrot_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublereal *s);

/* zdscal.c */
extern int zdscal_(integer *n, doublereal *da, doublecomplex *zx, 
	integer *incx);

/* zgbmv.c */
extern int zgbmv_(char *trans, integer *m, integer *n, integer *kl, 
	integer *ku, doublecomplex *alpha, doublecomplex *a, integer *lda, 
	doublecomplex *x, integer *incx, doublecomplex *beta, doublecomplex *
	y, integer *incy);

/* zgemm.c */
extern int zgemm_(char *transa, char *transb, integer *m, integer *
	n, integer *k, doublecomplex *alpha, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *beta, doublecomplex *
	c__, integer *ldc);

/* zgemv.c */
extern int zgemv_(char *trans, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	x, integer *incx, doublecomplex *beta, doublecomplex *y, integer *
	incy);

/* zgerc.c */
extern int zgerc_(integer *m, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *a, integer *lda);

/* zgeru.c */
extern int zgeru_(integer *m, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *a, integer *lda);

/* zhbmv.c */
extern int zhbmv_(const char *uplo, const integer *n, const integer *k,
		  const doublecomplex *alpha, const doublecomplex *a,
		  const integer *lda, const doublecomplex *x,
		  const integer *incx, const doublecomplex *beta,
		  doublecomplex *y, const integer *incy);

/* zhemm.c */
extern int zhemm_(char *side, char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublecomplex *beta, doublecomplex *c__, integer *
	ldc);

/* zhemv.c */
extern int zhemv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublecomplex *beta, doublecomplex *y, integer *incy);

/* zher.c */
extern int zher_(char *uplo, integer *n, doublereal *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda);

/* zher2.c */
extern int zher2_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *a, integer *lda);

/* zher2k.c */
extern int zher2k_(char *uplo, char *trans, integer *n, integer *k, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublereal *beta, doublecomplex *c__, integer *ldc);

/* zherk.c */
extern int zherk_(char *uplo, char *trans, integer *n, integer *k, 
	doublereal *alpha, doublecomplex *a, integer *lda, doublereal *beta, 
	doublecomplex *c__, integer *ldc);

/* zhpmv.c */
extern int zhpmv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *ap, doublecomplex *x, integer *incx, doublecomplex *
	beta, doublecomplex *y, integer *incy);

/* zhpr.c */
extern int zhpr_(char *uplo, integer *n, doublereal *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *ap);

/* zhpr2.c */
extern int zhpr2_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
	doublecomplex *ap);

/* zrotg.c */
extern int zrotg_(doublecomplex *ca, doublecomplex *cb, doublereal *
	c__, doublecomplex *s);

/* zscal.c */
extern int zscal_(integer *n, doublecomplex *za, doublecomplex *zx, 
	integer *incx);

/* zswap.c */
extern int zswap_(integer *n, doublecomplex *zx, integer *incx, 
	doublecomplex *zy, integer *incy);

/* zsymm.c */
extern int zsymm_(char *side, char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublecomplex *beta, doublecomplex *c__, integer *
	ldc);

/* zsyr2k.c */
extern int zsyr2k_(char *uplo, char *trans, integer *n, integer *k, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	b, integer *ldb, doublecomplex *beta, doublecomplex *c__, integer *
	ldc);

/* zsyrk.c */
extern int zsyrk_(char *uplo, char *trans, integer *n, integer *k, 
	doublecomplex *alpha, doublecomplex *a, integer *lda, doublecomplex *
	beta, doublecomplex *c__, integer *ldc);

/* ztbmv.c */
extern int ztbmv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *x, integer 
	*incx);

/* ztbsv.c */
extern int ztbsv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *x, integer 
	*incx);

/* ztpmv.c */
extern int ztpmv_(char *uplo, char *trans, char *diag, integer *n, 
	doublecomplex *ap, doublecomplex *x, integer *incx);

/* ztpsv.c */
extern int ztpsv_(char *uplo, char *trans, char *diag, integer *n, 
	doublecomplex *ap, doublecomplex *x, integer *incx);

/* ztrmm.c */
extern int ztrmm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, doublecomplex *alpha, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb);

/* ztrmv.c */
extern int ztrmv_(char *uplo, char *trans, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx);

/* ztrsm.c */
extern int ztrsm_(char *side, char *uplo, char *transa, char *diag, 
	integer *m, integer *n, doublecomplex *alpha, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb);

/* ztrsv.c */
extern int ztrsv_(char *uplo, char *trans, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx);

#endif
