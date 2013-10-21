#ifndef CBLAPACK_LAPACK_H
#define CBLAPACK_LAPACK_H

#include <f2c_types.h>
#ifndef F2CSUB
#define F2CSUB int
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* cbdsqr.c */
F2CSUB cbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real *d__, real *e, complex *vt, integer *ldvt, 
	complex *u, integer *ldu, complex *c__, integer *ldc, real *rwork, 
	integer *info);

/* cgbbrd.c */
F2CSUB cgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, complex *ab, integer *ldab, real *d__, 
	real *e, complex *q, integer *ldq, complex *pt, integer *ldpt, 
	complex *c__, integer *ldc, complex *work, real *rwork, integer *info);

/* cgbcon.c */
F2CSUB cgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, integer *ipiv, real *anorm, real *rcond, 
	complex *work, real *rwork, integer *info);

/* cgbequ.c */
F2CSUB cgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real 
	*colcnd, real *amax, integer *info);

/* cgbequb.c */
F2CSUB cgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, complex *ab, integer *ldab, real *r__, real *c__, real *rowcnd, 
	real *colcnd, real *amax, integer *info);

/* cgbrfs.c */
F2CSUB cgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex *ab, integer *ldab, complex *afb, integer *
	ldafb, integer *ipiv, complex *b, integer *ldb, complex *x, integer *
	ldx, real *ferr, real *berr, complex *work, real *rwork, integer *
	info);

/* cgbrfsx.c */
F2CSUB cgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, complex *ab, integer *ldab, complex *
	afb, integer *ldafb, integer *ipiv, real *r__, real *c__, complex *b, 
	integer *ldb, complex *x, integer *ldx, real *rcond, real *berr, 
	integer *n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, 
	integer *nparams, real *params, complex *work, real *rwork, integer *
	info);

/* cgbsv.c */
F2CSUB cgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, complex *ab, integer *ldab, integer *ipiv, complex *b, integer *
	ldb, integer *info);

/* cgbsvx.c */
F2CSUB cgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, complex *ab, integer *ldab, complex *afb, 
	 integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, real 
	*ferr, real *berr, complex *work, real *rwork, integer *info);

/* cgbsvxx.c */
F2CSUB cgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, complex *ab, integer *ldab, complex *
	afb, integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	 complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, 
	real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, complex *work, real *rwork, integer *info);

/* cgbtf2.c */
F2CSUB cgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, integer *ipiv, integer *info);

/* cgbtrf.c */
F2CSUB cgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, integer *ipiv, integer *info);

/* cgbtrs.c */
F2CSUB cgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex *ab, integer *ldab, integer *ipiv, complex 
	*b, integer *ldb, integer *info);

/* cgebak.c */
F2CSUB cgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *scale, integer *m, complex *v, integer *ldv, 
	integer *info);

/* cgebal.c */
F2CSUB cgebal_(char *job, integer *n, complex *a, integer *lda, 
	integer *ilo, integer *ihi, real *scale, integer *info);

/* cgebd2.c */
F2CSUB cgebd2_(integer *m, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tauq, complex *taup, complex *work, 
	integer *info);

/* cgebrd.c */
F2CSUB cgebrd_(integer *m, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tauq, complex *taup, complex *work, 
	integer *lwork, integer *info);

/* cgecon.c */
F2CSUB cgecon_(char *norm, integer *n, complex *a, integer *lda, 
	 real *anorm, real *rcond, complex *work, real *rwork, integer *info);

/* cgeequ.c */
F2CSUB cgeequ_(integer *m, integer *n, complex *a, integer *lda, 
	 real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, 
	integer *info);

/* cgeequb.c */
F2CSUB cgeequb_(integer *m, integer *n, complex *a, integer *
	lda, real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, 
	integer *info);

/* cgees.c */
F2CSUB cgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	complex *a, integer *lda, integer *sdim, complex *w, complex *vs, 
	integer *ldvs, complex *work, integer *lwork, real *rwork, logical *
	bwork, integer *info);

/* cgeesx.c */
F2CSUB cgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, complex *a, integer *lda, integer *sdim, complex *
	w, complex *vs, integer *ldvs, real *rconde, real *rcondv, complex *
	work, integer *lwork, real *rwork, logical *bwork, integer *info);

/* cgeev.c */
F2CSUB cgeev_(char *jobvl, char *jobvr, integer *n, complex *a, 
	integer *lda, complex *w, complex *vl, integer *ldvl, complex *vr, 
	integer *ldvr, complex *work, integer *lwork, real *rwork, integer *
	info);

/* cgeevx.c */
F2CSUB cgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex *a, integer *lda, complex *w, complex *vl, 
	integer *ldvl, complex *vr, integer *ldvr, integer *ilo, integer *ihi, 
	 real *scale, real *abnrm, real *rconde, real *rcondv, complex *work, 
	integer *lwork, real *rwork, integer *info);

/* cgegs.c */
F2CSUB cgegs_(char *jobvsl, char *jobvsr, integer *n, complex *
	a, integer *lda, complex *b, integer *ldb, complex *alpha, complex *
	beta, complex *vsl, integer *ldvsl, complex *vsr, integer *ldvsr, 
	complex *work, integer *lwork, real *rwork, integer *info);

/* cgegv.c */
F2CSUB cgegv_(char *jobvl, char *jobvr, integer *n, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *alpha, complex *beta, 
	 complex *vl, integer *ldvl, complex *vr, integer *ldvr, complex *
	work, integer *lwork, real *rwork, integer *info);

/* cgehd2.c */
F2CSUB cgehd2_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *tau, complex *work, integer *info);

/* cgehrd.c */
F2CSUB cgehrd_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *tau, complex *work, integer *lwork, integer 
	*info);

/* cgelq2.c */
F2CSUB cgelq2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgelqf.c */
F2CSUB cgelqf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgels.c */
F2CSUB cgels_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);

/* cgelsd.c */
F2CSUB cgelsd_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, real *s, real *rcond, 
	integer *rank, complex *work, integer *lwork, real *rwork, integer *
	iwork, integer *info);

/* cgelss.c */
F2CSUB cgelss_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, real *s, real *rcond, 
	integer *rank, complex *work, integer *lwork, real *rwork, integer *
	info);

/* cgelsx.c */
F2CSUB cgelsx_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, integer *jpvt, real *rcond, 
	 integer *rank, complex *work, real *rwork, integer *info);

/* cgelsy.c */
F2CSUB cgelsy_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, integer *jpvt, real *rcond, 
	 integer *rank, complex *work, integer *lwork, real *rwork, integer *
	info);

/* cgeql2.c */
F2CSUB cgeql2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgeqlf.c */
F2CSUB cgeqlf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgeqp3.c */
F2CSUB cgeqp3_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *jpvt, complex *tau, complex *work, integer *lwork, real *
	rwork, integer *info);

/* cgeqpf.c */
F2CSUB cgeqpf_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *jpvt, complex *tau, complex *work, real *rwork, integer *
	info);

/* cgeqr2.c */
F2CSUB cgeqr2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgeqrf.c */
F2CSUB cgeqrf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgerfs.c */
F2CSUB cgerfs_(char *trans, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, integer *ipiv, complex *
	b, integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cgerfsx.c */
F2CSUB cgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, real *r__, real *c__, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, complex *work, real *rwork, integer *info);

/* cgerq2.c */
F2CSUB cgerq2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgerqf.c */
F2CSUB cgerqf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgesc2.c */
F2CSUB cgesc2_(integer *n, complex *a, integer *lda, complex *
	rhs, integer *ipiv, integer *jpiv, real *scale);

/* cgesdd.c */
F2CSUB cgesdd_(char *jobz, integer *m, integer *n, complex *a, 
	integer *lda, real *s, complex *u, integer *ldu, complex *vt, integer 
	*ldvt, complex *work, integer *lwork, real *rwork, integer *iwork, 
	integer *info);

/* cgesv.c */
F2CSUB cgesv_(integer *n, integer *nrhs, complex *a, integer *
	lda, integer *ipiv, complex *b, integer *ldb, integer *info);

/* cgesvd.c */
F2CSUB cgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	complex *a, integer *lda, real *s, complex *u, integer *ldu, complex *
	vt, integer *ldvt, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* cgesvx.c */
F2CSUB cgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *r__, real *c__, complex *b, integer *ldb, 
	complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cgesvxx.c */
F2CSUB cgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *r__, real *c__, complex *b, integer *ldb, 
	complex *x, integer *ldx, real *rcond, real *rpvgrw, real *berr, 
	integer *n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, 
	integer *nparams, real *params, complex *work, real *rwork, integer *
	info);

/* cgetc2.c */
F2CSUB cgetc2_(integer *n, complex *a, integer *lda, integer *
	ipiv, integer *jpiv, integer *info);

/* cgetf2.c */
F2CSUB cgetf2_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* cgetrf.c */
F2CSUB cgetrf_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* cgetri.c */
F2CSUB cgetri_(integer *n, complex *a, integer *lda, integer *
	ipiv, complex *work, integer *lwork, integer *info);

/* cgetrs.c */
F2CSUB cgetrs_(char *trans, integer *n, integer *nrhs, complex *
	a, integer *lda, integer *ipiv, complex *b, integer *ldb, integer *
	info);

/* cggbak.c */
F2CSUB cggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *lscale, real *rscale, integer *m, complex *v, 
	integer *ldv, integer *info);

/* cggbal.c */
F2CSUB cggbal_(char *job, integer *n, complex *a, integer *lda, 
	complex *b, integer *ldb, integer *ilo, integer *ihi, real *lscale, 
	real *rscale, real *work, integer *info);

/* cgges.c */
F2CSUB cgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, complex *a, integer *lda, complex *b, integer *
	ldb, integer *sdim, complex *alpha, complex *beta, complex *vsl, 
	integer *ldvsl, complex *vsr, integer *ldvsr, complex *work, integer *
	lwork, real *rwork, logical *bwork, integer *info);

/* cggesx.c */
F2CSUB cggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, complex *a, integer *lda, complex *b, 
	 integer *ldb, integer *sdim, complex *alpha, complex *beta, complex *
	vsl, integer *ldvsl, complex *vsr, integer *ldvsr, real *rconde, real 
	*rcondv, complex *work, integer *lwork, real *rwork, integer *iwork, 
	integer *liwork, logical *bwork, integer *info);

/* cggev.c */
F2CSUB cggev_(char *jobvl, char *jobvr, integer *n, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *alpha, complex *beta, 
	 complex *vl, integer *ldvl, complex *vr, integer *ldvr, complex *
	work, integer *lwork, real *rwork, integer *info);

/* cggevx.c */
F2CSUB cggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	 complex *alpha, complex *beta, complex *vl, integer *ldvl, complex *
	vr, integer *ldvr, integer *ilo, integer *ihi, real *lscale, real *
	rscale, real *abnrm, real *bbnrm, real *rconde, real *rcondv, complex 
	*work, integer *lwork, real *rwork, integer *iwork, logical *bwork, 
	integer *info);

/* cggglm.c */
F2CSUB cggglm_(integer *n, integer *m, integer *p, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *d__, complex *x, 
	complex *y, complex *work, integer *lwork, integer *info);

/* cgghrd.c */
F2CSUB cgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, complex *a, integer *lda, complex *b, integer *ldb, 
	 complex *q, integer *ldq, complex *z__, integer *ldz, integer *info);

/* cgglse.c */
F2CSUB cgglse_(integer *m, integer *n, integer *p, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *c__, complex *d__, 
	complex *x, complex *work, integer *lwork, integer *info);

/* cggqrf.c */
F2CSUB cggqrf_(integer *n, integer *m, integer *p, complex *a, 
	integer *lda, complex *taua, complex *b, integer *ldb, complex *taub, 
	complex *work, integer *lwork, integer *info);

/* cggrqf.c */
F2CSUB cggrqf_(integer *m, integer *p, integer *n, complex *a, 
	integer *lda, complex *taua, complex *b, integer *ldb, complex *taub, 
	complex *work, integer *lwork, integer *info);

/* cggsvd.c */
F2CSUB cggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, complex *a, integer *
	lda, complex *b, integer *ldb, real *alpha, real *beta, complex *u, 
	integer *ldu, complex *v, integer *ldv, complex *q, integer *ldq, 
	complex *work, real *rwork, integer *iwork, integer *info);

/* cggsvp.c */
F2CSUB cggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, complex *a, integer *lda, complex *b, integer 
	*ldb, real *tola, real *tolb, integer *k, integer *l, complex *u, 
	integer *ldu, complex *v, integer *ldv, complex *q, integer *ldq, 
	integer *iwork, real *rwork, complex *tau, complex *work, integer *
	info);

/* cgtcon.c */
F2CSUB cgtcon_(char *norm, integer *n, complex *dl, complex *
	d__, complex *du, complex *du2, integer *ipiv, real *anorm, real *
	rcond, complex *work, integer *info);

/* cgtrfs.c */
F2CSUB cgtrfs_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *dlf, complex *df, complex *
	duf, complex *du2, integer *ipiv, complex *b, integer *ldb, complex *
	x, integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cgtsv.c */
F2CSUB cgtsv_(integer *n, integer *nrhs, complex *dl, complex *
	d__, complex *du, complex *b, integer *ldb, integer *info);

/* cgtsvx.c */
F2CSUB cgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex *dl, complex *d__, complex *du, complex *dlf, complex *
	df, complex *duf, complex *du2, integer *ipiv, complex *b, integer *
	ldb, complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cgttrf.c */
F2CSUB cgttrf_(integer *n, complex *dl, complex *d__, complex *
	du, complex *du2, integer *ipiv, integer *info);

/* cgttrs.c */
F2CSUB cgttrs_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *du2, integer *ipiv, complex *
	b, integer *ldb, integer *info);

/* cgtts2.c */
F2CSUB cgtts2_(integer *itrans, integer *n, integer *nrhs, 
	complex *dl, complex *d__, complex *du, complex *du2, integer *ipiv, 
	complex *b, integer *ldb);

/* chbev.c */
F2CSUB chbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	complex *ab, integer *ldab, real *w, complex *z__, integer *ldz, 
	complex *work, real *rwork, integer *info);

/* chbevd.c */
F2CSUB chbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	complex *ab, integer *ldab, real *w, complex *z__, integer *ldz, 
	complex *work, integer *lwork, real *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* chbevx.c */
F2CSUB chbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, complex *ab, integer *ldab, complex *q, integer *ldq, 
	real *vl, real *vu, integer *il, integer *iu, real *abstol, integer *
	m, real *w, complex *z__, integer *ldz, complex *work, real *rwork, 
	integer *iwork, integer *ifail, integer *info);

/* chbgst.c */
F2CSUB chbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, complex *ab, integer *ldab, complex *bb, integer *ldbb, 
	complex *x, integer *ldx, complex *work, real *rwork, integer *info);

/* chbgv.c */
F2CSUB chbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, complex *ab, integer *ldab, complex *bb, integer *ldbb, 
	real *w, complex *z__, integer *ldz, complex *work, real *rwork, 
	integer *info);

/* chbgvd.c */
F2CSUB chbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, complex *ab, integer *ldab, complex *bb, integer *ldbb, 
	real *w, complex *z__, integer *ldz, complex *work, integer *lwork, 
	real *rwork, integer *lrwork, integer *iwork, integer *liwork, 
	integer *info);

/* chbgvx.c */
F2CSUB chbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, complex *ab, integer *ldab, complex *bb, 
	integer *ldbb, complex *q, integer *ldq, real *vl, real *vu, integer *
	il, integer *iu, real *abstol, integer *m, real *w, complex *z__, 
	integer *ldz, complex *work, real *rwork, integer *iwork, integer *
	ifail, integer *info);

/* chbtrd.c */
F2CSUB chbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	complex *ab, integer *ldab, real *d__, real *e, complex *q, integer *
	ldq, complex *work, integer *info);

/* checon.c */
F2CSUB checon_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, real *anorm, real *rcond, complex *work, integer *
	info);

/* cheequb.c */
F2CSUB cheequb_(char *uplo, integer *n, complex *a, integer *
	lda, real *s, real *scond, real *amax, complex *work, integer *info);

/* cheev.c */
F2CSUB cheev_(char *jobz, char *uplo, integer *n, complex *a, 
	integer *lda, real *w, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* cheevd.c */
F2CSUB cheevd_(char *jobz, char *uplo, integer *n, complex *a, 
	integer *lda, real *w, complex *work, integer *lwork, real *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);

/* cheevr.c */
F2CSUB cheevr_(char *jobz, char *range, char *uplo, integer *n, 
	complex *a, integer *lda, real *vl, real *vu, integer *il, integer *
	iu, real *abstol, integer *m, real *w, complex *z__, integer *ldz, 
	integer *isuppz, complex *work, integer *lwork, real *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);

/* cheevx.c */
F2CSUB cheevx_(char *jobz, char *range, char *uplo, integer *n, 
	complex *a, integer *lda, real *vl, real *vu, integer *il, integer *
	iu, real *abstol, integer *m, real *w, complex *z__, integer *ldz, 
	complex *work, integer *lwork, real *rwork, integer *iwork, integer *
	ifail, integer *info);

/* chegs2.c */
F2CSUB chegs2_(integer *itype, char *uplo, integer *n, complex *
	a, integer *lda, complex *b, integer *ldb, integer *info);

/* chegst.c */
F2CSUB chegst_(integer *itype, char *uplo, integer *n, complex *
	a, integer *lda, complex *b, integer *ldb, integer *info);

/* chegv.c */
F2CSUB chegv_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, real *w, 
	complex *work, integer *lwork, real *rwork, integer *info);

/* chegvd.c */
F2CSUB chegvd_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, real *w, 
	complex *work, integer *lwork, real *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* chegvx.c */
F2CSUB chegvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	real *vl, real *vu, integer *il, integer *iu, real *abstol, integer *
	m, real *w, complex *z__, integer *ldz, complex *work, integer *lwork, 
	 real *rwork, integer *iwork, integer *ifail, integer *info);

/* cherfs.c */
F2CSUB cherfs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, integer *ipiv, complex *
	b, integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cherfsx.c */
F2CSUB cherfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	 real *err_bnds_comp__, integer *nparams, real *params, complex *work, 
	 real *rwork, integer *info);

/* chesv.c */
F2CSUB chesv_(char *uplo, integer *n, integer *nrhs, complex *a, 
	 integer *lda, integer *ipiv, complex *b, integer *ldb, complex *work, 
	 integer *lwork, integer *info);

/* chesvx.c */
F2CSUB chesvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, 
	 real *ferr, real *berr, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* chesvxx.c */
F2CSUB chesvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *s, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *rpvgrw, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, complex *work, real *rwork, integer *info);

/* chetd2.c */
F2CSUB chetd2_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tau, integer *info);

/* chetf2.c */
F2CSUB chetf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* chetrd.c */
F2CSUB chetrd_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tau, complex *work, integer *lwork, 
	integer *info);

/* chetrf.c */
F2CSUB chetrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *lwork, integer *info);

/* chetri.c */
F2CSUB chetri_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *info);

/* chetrs.c */
F2CSUB chetrs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, integer *ipiv, complex *b, integer *ldb, integer *
	info);

/* chfrk.c */
F2CSUB chfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, real *alpha, complex *a, integer *lda, real *beta, 
	complex *c__);

/* chgeqz.c */
F2CSUB chgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *t, 
	integer *ldt, complex *alpha, complex *beta, complex *q, integer *ldq, 
	 complex *z__, integer *ldz, complex *work, integer *lwork, real *
	rwork, integer *info);

/* chla_transtype.c */
/* Character */ void chla_transtype__(char *ret_val, ftnlen ret_val_len, 
	integer *trans);

/* chpcon.c */
F2CSUB chpcon_(char *uplo, integer *n, complex *ap, integer *
	ipiv, real *anorm, real *rcond, complex *work, integer *info);

/* chpev.c */
F2CSUB chpev_(char *jobz, char *uplo, integer *n, complex *ap, 
	real *w, complex *z__, integer *ldz, complex *work, real *rwork, 
	integer *info);

/* chpevd.c */
F2CSUB chpevd_(char *jobz, char *uplo, integer *n, complex *ap, 
	real *w, complex *z__, integer *ldz, complex *work, integer *lwork, 
	real *rwork, integer *lrwork, integer *iwork, integer *liwork, 
	integer *info);

/* chpevx.c */
F2CSUB chpevx_(char *jobz, char *range, char *uplo, integer *n, 
	complex *ap, real *vl, real *vu, integer *il, integer *iu, real *
	abstol, integer *m, real *w, complex *z__, integer *ldz, complex *
	work, real *rwork, integer *iwork, integer *ifail, integer *info);

/* chpgst.c */
F2CSUB chpgst_(integer *itype, char *uplo, integer *n, complex *
	ap, complex *bp, integer *info);

/* chpgv.c */
F2CSUB chpgv_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *ap, complex *bp, real *w, complex *z__, integer *ldz, 
	complex *work, real *rwork, integer *info);

/* chpgvd.c */
F2CSUB chpgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *ap, complex *bp, real *w, complex *z__, integer *ldz, 
	complex *work, integer *lwork, real *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* chpgvx.c */
F2CSUB chpgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex *ap, complex *bp, real *vl, real *vu, 
	integer *il, integer *iu, real *abstol, integer *m, real *w, complex *
	z__, integer *ldz, complex *work, real *rwork, integer *iwork, 
	integer *ifail, integer *info);

/* chprfs.c */
F2CSUB chprfs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *afp, integer *ipiv, complex *b, integer *ldb, complex *x, 
	 integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* chpsv.c */
F2CSUB chpsv_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* chpsvx.c */
F2CSUB chpsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *ap, complex *afp, integer *ipiv, complex *b, integer *
	ldb, complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* chptrd.c */
F2CSUB chptrd_(char *uplo, integer *n, complex *ap, real *d__, 
	real *e, complex *tau, integer *info);

/* chptrf.c */
F2CSUB chptrf_(char *uplo, integer *n, complex *ap, integer *
	ipiv, integer *info);

/* chptri.c */
F2CSUB chptri_(char *uplo, integer *n, complex *ap, integer *
	ipiv, complex *work, integer *info);

/* chptrs.c */
F2CSUB chptrs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* chsein.c */
F2CSUB chsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, complex *h__, integer *ldh, complex *w, complex *
	vl, integer *ldvl, complex *vr, integer *ldvr, integer *mm, integer *
	m, complex *work, real *rwork, integer *ifaill, integer *ifailr, 
	integer *info);

/* chseqr.c */
F2CSUB chseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, complex *h__, integer *ldh, complex *w, complex *z__, 
	integer *ldz, complex *work, integer *lwork, integer *info);

/* cla_gbamv.c */
F2CSUB cla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, real *alpha, complex *ab, integer *ldab, 
	complex *x, integer *incx, real *beta, real *y, integer *incy);

/* cla_gbrcond_c.c */
doublereal cla_gbrcond_c__(char *trans, integer *n, integer *kl, integer *ku, 
	complex *ab, integer *ldab, complex *afb, integer *ldafb, integer *
	ipiv, real *c__, logical *capply, integer *info, complex *work, real *
	rwork, ftnlen trans_len);

/* cla_gbrcond_x.c */
doublereal cla_gbrcond_x__(char *trans, integer *n, integer *kl, integer *ku, 
	complex *ab, integer *ldab, complex *afb, integer *ldafb, integer *
	ipiv, complex *x, integer *info, complex *work, real *rwork, ftnlen 
	trans_len);

/* cla_gbrfsx_extended.c */
F2CSUB cla_gbrfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *kl, integer *ku, integer *nrhs, 
	complex *ab, integer *ldab, complex *afb, integer *ldafb, integer *
	ipiv, logical *colequ, real *c__, complex *b, integer *ldb, complex *
	y, integer *ldy, real *berr_out__, integer *n_norms__, real *
	err_bnds_norm__, real *err_bnds_comp__, complex *res, real *ayb, 
	complex *dy, complex *y_tail__, real *rcond, integer *ithresh, real *
	rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info);

/* cla_gbrpvgrw.c */
doublereal cla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, complex *ab, integer *ldab, complex *afb, integer *ldafb);

/* cla_geamv.c */
F2CSUB cla_geamv__(integer *trans, integer *m, integer *n, real 
	*alpha, complex *a, integer *lda, complex *x, integer *incx, real *
	beta, real *y, integer *incy);

/* cla_gercond_c.c */
doublereal cla_gercond_c__(char *trans, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, real *c__, logical *capply,
	 integer *info, complex *work, real *rwork, ftnlen trans_len);

/* cla_gercond_x.c */
doublereal cla_gercond_x__(char *trans, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, complex *x, integer *info, 
	complex *work, real *rwork, ftnlen trans_len);

/* cla_gerfsx_extended.c */
F2CSUB cla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, logical *colequ, real *c__,
	 complex *b, integer *ldb, complex *y, integer *ldy, real *berr_out__,
	 integer *n_norms__, real *errs_n__, real *errs_c__, complex *res, 
	real *ayb, complex *dy, complex *y_tail__, real *rcond, integer *
	ithresh, real *rthresh, real *dz_ub__, logical *ignore_cwise__, 
	integer *info);

/* cla_heamv.c */
F2CSUB cla_heamv__(integer *uplo, integer *n, real *alpha, 
	complex *a, integer *lda, complex *x, integer *incx, real *beta, real 
	*y, integer *incy);

/* cla_hercond_c.c */
doublereal cla_hercond_c__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, real *c__, logical *capply,
	 integer *info, complex *work, real *rwork, ftnlen uplo_len);

/* cla_hercond_x.c */
doublereal cla_hercond_x__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, complex *x, integer *info, 
	complex *work, real *rwork, ftnlen uplo_len);

/* cla_herfsx_extended.c */
F2CSUB cla_herfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *af, 
	integer *ldaf, integer *ipiv, logical *colequ, real *c__, complex *b, 
	integer *ldb, complex *y, integer *ldy, real *berr_out__, integer *
	n_norms__, real *err_bnds_norm__, real *err_bnds_comp__, complex *res,
	 real *ayb, complex *dy, complex *y_tail__, real *rcond, integer *
	ithresh, real *rthresh, real *dz_ub__, logical *ignore_cwise__, 
	integer *info, ftnlen uplo_len);

/* cla_herpvgrw.c */
doublereal cla_herpvgrw__(char *uplo, integer *n, integer *info, complex *a, 
	integer *lda, complex *af, integer *ldaf, integer *ipiv, real *work, 
	ftnlen uplo_len);

/* cla_lin_berr.c */
F2CSUB cla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	complex *res, real *ayb, real *berr);

/* cla_porcond_c.c */
doublereal cla_porcond_c__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, real *c__, logical *capply, integer *info,
	 complex *work, real *rwork, ftnlen uplo_len);

/* cla_porcond_x.c */
doublereal cla_porcond_x__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, complex *x, integer *info, complex *work, 
	real *rwork, ftnlen uplo_len);

/* cla_porfsx_extended.c */
F2CSUB cla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *af, 
	integer *ldaf, logical *colequ, real *c__, complex *b, integer *ldb, 
	complex *y, integer *ldy, real *berr_out__, integer *n_norms__, real *
	err_bnds_norm__, real *err_bnds_comp__, complex *res, real *ayb, 
	complex *dy, complex *y_tail__, real *rcond, integer *ithresh, real *
	rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info, 
	ftnlen uplo_len);

/* cla_porpvgrw.c */
doublereal cla_porpvgrw__(char *uplo, integer *ncols, complex *a, integer *
	lda, complex *af, integer *ldaf, real *work, ftnlen uplo_len);

/* cla_rpvgrw.c */
doublereal cla_rpvgrw__(integer *n, integer *ncols, complex *a, integer *lda, 
	complex *af, integer *ldaf);

/* cla_syamv.c */
F2CSUB cla_syamv__(integer *uplo, integer *n, real *alpha, 
	complex *a, integer *lda, complex *x, integer *incx, real *beta, real 
	*y, integer *incy);

/* cla_syrcond_c.c */
doublereal cla_syrcond_c__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, real *c__, logical *capply,
	 integer *info, complex *work, real *rwork, ftnlen uplo_len);

/* cla_syrcond_x.c */
doublereal cla_syrcond_x__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, complex *x, integer *info, 
	complex *work, real *rwork, ftnlen uplo_len);

/* cla_syrfsx_extended.c */
F2CSUB cla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *af, 
	integer *ldaf, integer *ipiv, logical *colequ, real *c__, complex *b, 
	integer *ldb, complex *y, integer *ldy, real *berr_out__, integer *
	n_norms__, real *err_bnds_norm__, real *err_bnds_comp__, complex *res,
	 real *ayb, complex *dy, complex *y_tail__, real *rcond, integer *
	ithresh, real *rthresh, real *dz_ub__, logical *ignore_cwise__, 
	integer *info, ftnlen uplo_len);

/* cla_syrpvgrw.c */
doublereal cla_syrpvgrw__(char *uplo, integer *n, integer *info, complex *a, 
	integer *lda, complex *af, integer *ldaf, integer *ipiv, real *work, 
	ftnlen uplo_len);

/* cla_wwaddw.c */
F2CSUB cla_wwaddw__(integer *n, complex *x, complex *y, complex 
	*w);

/* clabrd.c */
F2CSUB clabrd_(integer *m, integer *n, integer *nb, complex *a, 
	integer *lda, real *d__, real *e, complex *tauq, complex *taup, 
	complex *x, integer *ldx, complex *y, integer *ldy);

/* clacgv.c */
F2CSUB clacgv_(integer *n, complex *x, integer *incx);

/* clacn2.c */
F2CSUB clacn2_(integer *n, complex *v, complex *x, real *est, 
	integer *kase, integer *isave);

/* clacon.c */
F2CSUB clacon_(integer *n, complex *v, complex *x, real *est, 
	integer *kase);

/* clacp2.c */
F2CSUB clacp2_(char *uplo, integer *m, integer *n, real *a, 
	integer *lda, complex *b, integer *ldb);

/* clacpy.c */
F2CSUB clacpy_(char *uplo, integer *m, integer *n, complex *a, 
	integer *lda, complex *b, integer *ldb);

/* clacrm.c */
F2CSUB clacrm_(integer *m, integer *n, complex *a, integer *lda, 
	 real *b, integer *ldb, complex *c__, integer *ldc, real *rwork);

/* clacrt.c */
F2CSUB clacrt_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy, complex *c__, complex *s);

/* cladiv.c */
void cladiv_(complex * ret_val, complex *x, complex *y);

/* claed0.c */
F2CSUB claed0_(integer *qsiz, integer *n, real *d__, real *e, 
	complex *q, integer *ldq, complex *qstore, integer *ldqs, real *rwork, 
	 integer *iwork, integer *info);

/* claed7.c */
F2CSUB claed7_(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real *d__, complex *
	q, integer *ldq, real *rho, integer *indxq, real *qstore, integer *
	qptr, integer *prmptr, integer *perm, integer *givptr, integer *
	givcol, real *givnum, complex *work, real *rwork, integer *iwork, 
	integer *info);

/* claed8.c */
F2CSUB claed8_(integer *k, integer *n, integer *qsiz, complex *
	q, integer *ldq, real *d__, real *rho, integer *cutpnt, real *z__, 
	real *dlamda, complex *q2, integer *ldq2, real *w, integer *indxp, 
	integer *indx, integer *indxq, integer *perm, integer *givptr, 
	integer *givcol, real *givnum, integer *info);

/* claein.c */
F2CSUB claein_(logical *rightv, logical *noinit, integer *n, 
	complex *h__, integer *ldh, complex *w, complex *v, complex *b, 
	integer *ldb, real *rwork, real *eps3, real *smlnum, integer *info);

/* claesy.c */
F2CSUB claesy_(complex *a, complex *b, complex *c__, complex *
	rt1, complex *rt2, complex *evscal, complex *cs1, complex *sn1);

/* claev2.c */
F2CSUB claev2_(complex *a, complex *b, complex *c__, real *rt1, 
	real *rt2, real *cs1, complex *sn1);

/* clag2z.c */
F2CSUB clag2z_(integer *m, integer *n, complex *sa, integer *
	ldsa, doublecomplex *a, integer *lda, integer *info);

/* clags2.c */
F2CSUB clags2_(logical *upper, real *a1, complex *a2, real *a3, 
	real *b1, complex *b2, real *b3, real *csu, complex *snu, real *csv, 
	complex *snv, real *csq, complex *snq);

/* clagtm.c */
F2CSUB clagtm_(char *trans, integer *n, integer *nrhs, real *
	alpha, complex *dl, complex *d__, complex *du, complex *x, integer *
	ldx, real *beta, complex *b, integer *ldb);

/* clahef.c */
F2CSUB clahef_(char *uplo, integer *n, integer *nb, integer *kb, 
	 complex *a, integer *lda, integer *ipiv, complex *w, integer *ldw, 
	integer *info);

/* clahqr.c */
F2CSUB clahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *w, 
	integer *iloz, integer *ihiz, complex *z__, integer *ldz, integer *
	info);

/* clahr2.c */
F2CSUB clahr2_(integer *n, integer *k, integer *nb, complex *a, 
	integer *lda, complex *tau, complex *t, integer *ldt, complex *y, 
	integer *ldy);

/* clahrd.c */
F2CSUB clahrd_(integer *n, integer *k, integer *nb, complex *a, 
	integer *lda, complex *tau, complex *t, integer *ldt, complex *y, 
	integer *ldy);

/* claic1.c */
F2CSUB claic1_(integer *job, integer *j, complex *x, real *sest, 
	 complex *w, complex *gamma, real *sestpr, complex *s, complex *c__);

/* clals0.c */
F2CSUB clals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, complex *b, integer *ldb, complex *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real *givnum, integer *ldgnum, real *poles, real *
	difl, real *difr, real *z__, integer *k, real *c__, real *s, real *
	rwork, integer *info);

/* clalsa.c */
F2CSUB clalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, complex *b, integer *ldb, complex *bx, integer *ldbx, 
	real *u, integer *ldu, real *vt, integer *k, real *difl, real *difr, 
	real *z__, real *poles, integer *givptr, integer *givcol, integer *
	ldgcol, integer *perm, real *givnum, real *c__, real *s, real *rwork, 
	integer *iwork, integer *info);

/* clalsd.c */
F2CSUB clalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, real *d__, real *e, complex *b, integer *ldb, real *rcond, 
	integer *rank, complex *work, real *rwork, integer *iwork, integer *
	info);

/* clangb.c */
doublereal clangb_(char *norm, integer *n, integer *kl, integer *ku, complex *
	ab, integer *ldab, real *work);

/* clange.c */
doublereal clange_(char *norm, integer *m, integer *n, complex *a, integer *
	lda, real *work);

/* clangt.c */
doublereal clangt_(char *norm, integer *n, complex *dl, complex *d__, complex 
	*du);

/* clanhb.c */
doublereal clanhb_(char *norm, char *uplo, integer *n, integer *k, complex *
	ab, integer *ldab, real *work);

/* clanhe.c */
doublereal clanhe_(char *norm, char *uplo, integer *n, complex *a, integer *
	lda, real *work);

/* clanhf.c */
doublereal clanhf_(char *norm, char *transr, char *uplo, integer *n, complex *
	a, real *work);

/* clanhp.c */
doublereal clanhp_(char *norm, char *uplo, integer *n, complex *ap, real *
	work);

/* clanhs.c */
doublereal clanhs_(char *norm, integer *n, complex *a, integer *lda, real *
	work);

/* clanht.c */
doublereal clanht_(char *norm, integer *n, real *d__, complex *e);

/* clansb.c */
doublereal clansb_(char *norm, char *uplo, integer *n, integer *k, complex *
	ab, integer *ldab, real *work);

/* clansp.c */
doublereal clansp_(char *norm, char *uplo, integer *n, complex *ap, real *
	work);

/* clansy.c */
doublereal clansy_(char *norm, char *uplo, integer *n, complex *a, integer *
	lda, real *work);

/* clantb.c */
doublereal clantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 complex *ab, integer *ldab, real *work);

/* clantp.c */
doublereal clantp_(char *norm, char *uplo, char *diag, integer *n, complex *
	ap, real *work);

/* clantr.c */
doublereal clantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 complex *a, integer *lda, real *work);

/* clapll.c */
F2CSUB clapll_(integer *n, complex *x, integer *incx, complex *
	y, integer *incy, real *ssmin);

/* clapmt.c */
F2CSUB clapmt_(logical *forwrd, integer *m, integer *n, complex 
	*x, integer *ldx, integer *k);

/* claqgb.c */
F2CSUB claqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real 
	*colcnd, real *amax, char *equed);

/* claqge.c */
F2CSUB claqge_(integer *m, integer *n, complex *a, integer *lda, 
	 real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, char *
	equed);

/* claqhb.c */
F2CSUB claqhb_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *s, real *scond, real *amax, char *equed);

/* claqhe.c */
F2CSUB claqhe_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *s, real *scond, real *amax, char *equed);

/* claqhp.c */
F2CSUB claqhp_(char *uplo, integer *n, complex *ap, real *s, 
	real *scond, real *amax, char *equed);

/* claqp2.c */
F2CSUB claqp2_(integer *m, integer *n, integer *offset, complex 
	*a, integer *lda, integer *jpvt, complex *tau, real *vn1, real *vn2, 
	complex *work);

/* claqps.c */
F2CSUB claqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, complex *a, integer *lda, integer *jpvt, complex *
	tau, real *vn1, real *vn2, complex *auxv, complex *f, integer *ldf);

/* claqr0.c */
F2CSUB claqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *w, 
	integer *iloz, integer *ihiz, complex *z__, integer *ldz, complex *
	work, integer *lwork, integer *info);

/* claqr1.c */
F2CSUB claqr1_(integer *n, complex *h__, integer *ldh, complex *
	s1, complex *s2, complex *v);

/* claqr2.c */
F2CSUB claqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, complex *h__, integer *ldh, 
	 integer *iloz, integer *ihiz, complex *z__, integer *ldz, integer *
	ns, integer *nd, complex *sh, complex *v, integer *ldv, integer *nh, 
	complex *t, integer *ldt, integer *nv, complex *wv, integer *ldwv, 
	complex *work, integer *lwork);

/* claqr3.c */
F2CSUB claqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, complex *h__, integer *ldh, 
	 integer *iloz, integer *ihiz, complex *z__, integer *ldz, integer *
	ns, integer *nd, complex *sh, complex *v, integer *ldv, integer *nh, 
	complex *t, integer *ldt, integer *nv, complex *wv, integer *ldwv, 
	complex *work, integer *lwork);

/* claqr4.c */
F2CSUB claqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *w, 
	integer *iloz, integer *ihiz, complex *z__, integer *ldz, complex *
	work, integer *lwork, integer *info);

/* claqr5.c */
F2CSUB claqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, complex *s, 
	 complex *h__, integer *ldh, integer *iloz, integer *ihiz, complex *
	z__, integer *ldz, complex *v, integer *ldv, complex *u, integer *ldu, 
	 integer *nv, complex *wv, integer *ldwv, integer *nh, complex *wh, 
	integer *ldwh);

/* claqsb.c */
F2CSUB claqsb_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *s, real *scond, real *amax, char *equed);

/* claqsp.c */
F2CSUB claqsp_(char *uplo, integer *n, complex *ap, real *s, 
	real *scond, real *amax, char *equed);

/* claqsy.c */
F2CSUB claqsy_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *s, real *scond, real *amax, char *equed);

/* clar1v.c */
F2CSUB clar1v_(integer *n, integer *b1, integer *bn, real *
	lambda, real *d__, real *l, real *ld, real *lld, real *pivmin, real *
	gaptol, complex *z__, logical *wantnc, integer *negcnt, real *ztz, 
	real *mingma, integer *r__, integer *isuppz, real *nrminv, real *
	resid, real *rqcorr, real *work);

/* clar2v.c */
F2CSUB clar2v_(integer *n, complex *x, complex *y, complex *z__, 
	 integer *incx, real *c__, complex *s, integer *incc);

/* clarcm.c */
F2CSUB clarcm_(integer *m, integer *n, real *a, integer *lda, 
	complex *b, integer *ldb, complex *c__, integer *ldc, real *rwork);

/* clarf.c */
F2CSUB clarf_(char *side, integer *m, integer *n, complex *v, 
	integer *incv, complex *tau, complex *c__, integer *ldc, complex *
	work);

/* clarfb.c */
F2CSUB clarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, complex *v, integer *ldv, 
	complex *t, integer *ldt, complex *c__, integer *ldc, complex *work, 
	integer *ldwork);

/* clarfg.c */
F2CSUB clarfg_(integer *n, complex *alpha, complex *x, integer *
	incx, complex *tau);

/* clarfp.c */
F2CSUB clarfp_(integer *n, complex *alpha, complex *x, integer *
	incx, complex *tau);

/* clarft.c */
F2CSUB clarft_(char *direct, char *storev, integer *n, integer *
	k, complex *v, integer *ldv, complex *tau, complex *t, integer *ldt);

/* clarfx.c */
F2CSUB clarfx_(char *side, integer *m, integer *n, complex *v, 
	complex *tau, complex *c__, integer *ldc, complex *work);

/* clargv.c */
F2CSUB clargv_(integer *n, complex *x, integer *incx, complex *
	y, integer *incy, real *c__, integer *incc);

/* clarnv.c */
F2CSUB clarnv_(integer *idist, integer *iseed, integer *n, 
	complex *x);

/* clarrv.c */
F2CSUB clarrv_(integer *n, real *vl, real *vu, real *d__, real *
	l, real *pivmin, integer *isplit, integer *m, integer *dol, integer *
	dou, real *minrgp, real *rtol1, real *rtol2, real *w, real *werr, 
	real *wgap, integer *iblock, integer *indexw, real *gers, complex *
	z__, integer *ldz, integer *isuppz, real *work, integer *iwork, 
	integer *info);

/* clarscl2.c */
F2CSUB clarscl2_(integer *m, integer *n, real *d__, complex *x, 
	integer *ldx);

/* clartg.c */
F2CSUB clartg_(complex *f, complex *g, real *cs, complex *sn, 
	complex *r__);

/* clartv.c */
F2CSUB clartv_(integer *n, complex *x, integer *incx, complex *
	y, integer *incy, real *c__, complex *s, integer *incc);

/* clarz.c */
F2CSUB clarz_(char *side, integer *m, integer *n, integer *l, 
	complex *v, integer *incv, complex *tau, complex *c__, integer *ldc, 
	complex *work);

/* clarzb.c */
F2CSUB clarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, complex *v, 
	integer *ldv, complex *t, integer *ldt, complex *c__, integer *ldc, 
	complex *work, integer *ldwork);

/* clarzt.c */
F2CSUB clarzt_(char *direct, char *storev, integer *n, integer *
	k, complex *v, integer *ldv, complex *tau, complex *t, integer *ldt);

/* clascl.c */
F2CSUB clascl_(char *type__, integer *kl, integer *ku, real *
	cfrom, real *cto, integer *m, integer *n, complex *a, integer *lda, 
	integer *info);

/* clascl2.c */
F2CSUB clascl2_(integer *m, integer *n, real *d__, complex *x, 
	integer *ldx);

/* claset.c */
F2CSUB claset_(char *uplo, integer *m, integer *n, complex *
	alpha, complex *beta, complex *a, integer *lda);

/* clasr.c */
F2CSUB clasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, real *c__, real *s, complex *a, integer *lda);

/* classq.c */
F2CSUB classq_(integer *n, complex *x, integer *incx, real *
	scale, real *sumsq);

/* claswp.c */
F2CSUB claswp_(integer *n, complex *a, integer *lda, integer *
	k1, integer *k2, integer *ipiv, integer *incx);

/* clasyf.c */
F2CSUB clasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 complex *a, integer *lda, integer *ipiv, complex *w, integer *ldw, 
	integer *info);

/* clatbs.c */
F2CSUB clatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, complex *ab, integer *ldab, complex *
	x, real *scale, real *cnorm, integer *info);

/* clatdf.c */
F2CSUB clatdf_(integer *ijob, integer *n, complex *z__, integer 
	*ldz, complex *rhs, real *rdsum, real *rdscal, integer *ipiv, integer 
	*jpiv);

/* clatps.c */
F2CSUB clatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex *ap, complex *x, real *scale, real *cnorm, 
	 integer *info);

/* clatrd.c */
F2CSUB clatrd_(char *uplo, integer *n, integer *nb, complex *a, 
	integer *lda, real *e, complex *tau, complex *w, integer *ldw);

/* clatrs.c */
F2CSUB clatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex *a, integer *lda, complex *x, real *scale, 
	 real *cnorm, integer *info);

/* clatrz.c */
F2CSUB clatrz_(integer *m, integer *n, integer *l, complex *a, 
	integer *lda, complex *tau, complex *work);

/* clatzm.c */
F2CSUB clatzm_(char *side, integer *m, integer *n, complex *v, 
	integer *incv, complex *tau, complex *c1, complex *c2, integer *ldc, 
	complex *work);

/* clauu2.c */
F2CSUB clauu2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* clauum.c */
F2CSUB clauum_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpbcon.c */
F2CSUB cpbcon_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *anorm, real *rcond, complex *work, real *rwork, 
	integer *info);

/* cpbequ.c */
F2CSUB cpbequ_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *s, real *scond, real *amax, integer *info);

/* cpbrfs.c */
F2CSUB cpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *afb, integer *ldafb, 
	complex *b, integer *ldb, complex *x, integer *ldx, real *ferr, real *
	berr, complex *work, real *rwork, integer *info);

/* cpbstf.c */
F2CSUB cpbstf_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, integer *info);

/* cpbsv.c */
F2CSUB cpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *b, integer *ldb, integer *
	info);

/* cpbsvx.c */
F2CSUB cpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, complex *ab, integer *ldab, complex *afb, integer *
	ldafb, char *equed, real *s, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *ferr, real *berr, complex *work, 
	real *rwork, integer *info);

/* cpbtf2.c */
F2CSUB cpbtf2_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, integer *info);

/* cpbtrf.c */
F2CSUB cpbtrf_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, integer *info);

/* cpbtrs.c */
F2CSUB cpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *b, integer *ldb, integer *
	info);

/* cpftrf.c */
F2CSUB cpftrf_(char *transr, char *uplo, integer *n, complex *a, 
	 integer *info);

/* cpftri.c */
F2CSUB cpftri_(char *transr, char *uplo, integer *n, complex *a, 
	 integer *info);

/* cpftrs.c */
F2CSUB cpftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, complex *a, complex *b, integer *ldb, integer *info);

/* cpocon.c */
F2CSUB cpocon_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *anorm, real *rcond, complex *work, real *rwork, integer *info);

/* cpoequ.c */
F2CSUB cpoequ_(integer *n, complex *a, integer *lda, real *s, 
	real *scond, real *amax, integer *info);

/* cpoequb.c */
F2CSUB cpoequb_(integer *n, complex *a, integer *lda, real *s, 
	real *scond, real *amax, integer *info);

/* cporfs.c */
F2CSUB cporfs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, complex *b, integer *ldb, 
	 complex *x, integer *ldx, real *ferr, real *berr, complex *work, 
	real *rwork, integer *info);

/* cporfsx.c */
F2CSUB cporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, real *s, 
	complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, real 
	*berr, integer *n_err_bnds__, real *err_bnds_norm__, real *
	err_bnds_comp__, integer *nparams, real *params, complex *work, real *
	rwork, integer *info);

/* cposv.c */
F2CSUB cposv_(char *uplo, integer *n, integer *nrhs, complex *a, 
	 integer *lda, complex *b, integer *ldb, integer *info);

/* cposvx.c */
F2CSUB cposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, char *
	equed, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cposvxx.c */
F2CSUB cposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, char *
	equed, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, complex *work, real *rwork, integer *info);

/* cpotf2.c */
F2CSUB cpotf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpotrf.c */
F2CSUB cpotrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpotri.c */
F2CSUB cpotri_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpotrs.c */
F2CSUB cpotrs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, integer *info);

/* cppcon.c */
F2CSUB cppcon_(char *uplo, integer *n, complex *ap, real *anorm, 
	 real *rcond, complex *work, real *rwork, integer *info);

/* cppequ.c */
F2CSUB cppequ_(char *uplo, integer *n, complex *ap, real *s, 
	real *scond, real *amax, integer *info);

/* cpprfs.c */
F2CSUB cpprfs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *afp, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *ferr, real *berr, complex *work, real *rwork, integer *info);

/* cppsv.c */
F2CSUB cppsv_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *b, integer *ldb, integer *info);

/* cppsvx.c */
F2CSUB cppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *ap, complex *afp, char *equed, real *s, complex *b, 
	integer *ldb, complex *x, integer *ldx, real *rcond, real *ferr, real 
	*berr, complex *work, real *rwork, integer *info);

/* cpptrf.c */
F2CSUB cpptrf_(char *uplo, integer *n, complex *ap, integer *
	info);

/* cpptri.c */
F2CSUB cpptri_(char *uplo, integer *n, complex *ap, integer *
	info);

/* cpptrs.c */
F2CSUB cpptrs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *b, integer *ldb, integer *info);

/* cpstf2.c */
F2CSUB cpstf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *piv, integer *rank, real *tol, real *work, integer *info);

/* cpstrf.c */
F2CSUB cpstrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *piv, integer *rank, real *tol, real *work, integer *info);

/* cptcon.c */
F2CSUB cptcon_(integer *n, real *d__, complex *e, real *anorm, 
	real *rcond, real *rwork, integer *info);

/* cpteqr.c */
F2CSUB cpteqr_(char *compz, integer *n, real *d__, real *e, 
	complex *z__, integer *ldz, real *work, integer *info);

/* cptrfs.c */
F2CSUB cptrfs_(char *uplo, integer *n, integer *nrhs, real *d__, 
	 complex *e, real *df, complex *ef, complex *b, integer *ldb, complex 
	*x, integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cptsv.c */
F2CSUB cptsv_(integer *n, integer *nrhs, real *d__, complex *e, 
	complex *b, integer *ldb, integer *info);

/* cptsvx.c */
F2CSUB cptsvx_(char *fact, integer *n, integer *nrhs, real *d__, 
	 complex *e, real *df, complex *ef, complex *b, integer *ldb, complex 
	*x, integer *ldx, real *rcond, real *ferr, real *berr, complex *work, 
	real *rwork, integer *info);

/* cpttrf.c */
F2CSUB cpttrf_(integer *n, real *d__, complex *e, integer *info);

/* cpttrs.c */
F2CSUB cpttrs_(char *uplo, integer *n, integer *nrhs, real *d__, 
	 complex *e, complex *b, integer *ldb, integer *info);

/* cptts2.c */
F2CSUB cptts2_(integer *iuplo, integer *n, integer *nrhs, real *
	d__, complex *e, complex *b, integer *ldb);

/* crot.c */
F2CSUB crot_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy, real *c__, complex *s);

/* cspcon.c */
F2CSUB cspcon_(char *uplo, integer *n, complex *ap, integer *
	ipiv, real *anorm, real *rcond, complex *work, integer *info);

/* cspmv.c */
F2CSUB cspmv_(char *uplo, integer *n, complex *alpha, complex *
	ap, complex *x, integer *incx, complex *beta, complex *y, integer *
	incy);

/* cspr.c */
F2CSUB cspr_(char *uplo, integer *n, complex *alpha, complex *x, 
	 integer *incx, complex *ap);

/* csprfs.c */
F2CSUB csprfs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *afp, integer *ipiv, complex *b, integer *ldb, complex *x, 
	 integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cspsv.c */
F2CSUB cspsv_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* cspsvx.c */
F2CSUB cspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *ap, complex *afp, integer *ipiv, complex *b, integer *
	ldb, complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* csptrf.c */
F2CSUB csptrf_(char *uplo, integer *n, complex *ap, integer *
	ipiv, integer *info);

/* csptri.c */
F2CSUB csptri_(char *uplo, integer *n, complex *ap, integer *
	ipiv, complex *work, integer *info);

/* csptrs.c */
F2CSUB csptrs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* csrscl.c */
F2CSUB csrscl_(integer *n, real *sa, complex *sx, integer *incx);

/* cstedc.c */
F2CSUB cstedc_(char *compz, integer *n, real *d__, real *e, 
	complex *z__, integer *ldz, complex *work, integer *lwork, real *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);

/* cstegr.c */
F2CSUB cstegr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, complex *z__, integer *ldz, integer *isuppz, 
	real *work, integer *lwork, integer *iwork, integer *liwork, integer *
	info);

/* cstein.c */
F2CSUB cstein_(integer *n, real *d__, real *e, integer *m, real 
	*w, integer *iblock, integer *isplit, complex *z__, integer *ldz, 
	real *work, integer *iwork, integer *ifail, integer *info);

/* cstemr.c */
F2CSUB cstemr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, integer *m, 
	real *w, complex *z__, integer *ldz, integer *nzc, integer *isuppz, 
	logical *tryrac, real *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);

/* csteqr.c */
F2CSUB csteqr_(char *compz, integer *n, real *d__, real *e, 
	complex *z__, integer *ldz, real *work, integer *info);

/* csycon.c */
F2CSUB csycon_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, real *anorm, real *rcond, complex *work, integer *
	info);

/* csyequb.c */
F2CSUB csyequb_(char *uplo, integer *n, complex *a, integer *
	lda, real *s, real *scond, real *amax, complex *work, integer *info);

/* csymv.c */
F2CSUB csymv_(char *uplo, integer *n, complex *alpha, complex *
	a, integer *lda, complex *x, integer *incx, complex *beta, complex *y, 
	 integer *incy);

/* csyr.c */
F2CSUB csyr_(char *uplo, integer *n, complex *alpha, complex *x, 
	 integer *incx, complex *a, integer *lda);

/* csyrfs.c */
F2CSUB csyrfs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, integer *ipiv, complex *
	b, integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* csyrfsx.c */
F2CSUB csyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	 real *err_bnds_comp__, integer *nparams, real *params, complex *work, 
	 real *rwork, integer *info);

/* csysv.c */
F2CSUB csysv_(char *uplo, integer *n, integer *nrhs, complex *a, 
	 integer *lda, integer *ipiv, complex *b, integer *ldb, complex *work, 
	 integer *lwork, integer *info);

/* csysvx.c */
F2CSUB csysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, 
	 real *ferr, real *berr, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* csysvxx.c */
F2CSUB csysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *s, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *rpvgrw, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, complex *work, real *rwork, integer *info);

/* csytf2.c */
F2CSUB csytf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* csytrf.c */
F2CSUB csytrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *lwork, integer *info);

/* csytri.c */
F2CSUB csytri_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *info);

/* csytrs.c */
F2CSUB csytrs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, integer *ipiv, complex *b, integer *ldb, integer *
	info);

/* ctbcon.c */
F2CSUB ctbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, complex *ab, integer *ldab, real *rcond, complex *work, 
	real *rwork, integer *info);

/* ctbrfs.c */
F2CSUB ctbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *b, 
	integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* ctbtrs.c */
F2CSUB ctbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *b, 
	integer *ldb, integer *info);

/* ctfsm.c */
F2CSUB ctfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, complex *alpha, complex *a, 
	complex *b, integer *ldb);

/* ctftri.c */
F2CSUB ctftri_(char *transr, char *uplo, char *diag, integer *n, 
	 complex *a, integer *info);

/* ctfttp.c */
F2CSUB ctfttp_(char *transr, char *uplo, integer *n, complex *
	arf, complex *ap, integer *info);

/* ctfttr.c */
F2CSUB ctfttr_(char *transr, char *uplo, integer *n, complex *
	arf, complex *a, integer *lda, integer *info);

/* ctgevc.c */
F2CSUB ctgevc_(char *side, char *howmny, logical *select, 
	integer *n, complex *s, integer *lds, complex *p, integer *ldp, 
	complex *vl, integer *ldvl, complex *vr, integer *ldvr, integer *mm, 
	integer *m, complex *work, real *rwork, integer *info);

/* ctgex2.c */
F2CSUB ctgex2_(logical *wantq, logical *wantz, integer *n, 
	complex *a, integer *lda, complex *b, integer *ldb, complex *q, 
	integer *ldq, complex *z__, integer *ldz, integer *j1, integer *info);

/* ctgexc.c */
F2CSUB ctgexc_(logical *wantq, logical *wantz, integer *n, 
	complex *a, integer *lda, complex *b, integer *ldb, complex *q, 
	integer *ldq, complex *z__, integer *ldz, integer *ifst, integer *
	ilst, integer *info);

/* ctgsen.c */
F2CSUB ctgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, complex *a, integer *lda, complex *b, 
	integer *ldb, complex *alpha, complex *beta, complex *q, integer *ldq, 
	 complex *z__, integer *ldz, integer *m, real *pl, real *pr, real *
	dif, complex *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* ctgsja.c */
F2CSUB ctgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, complex *a, integer *
	lda, complex *b, integer *ldb, real *tola, real *tolb, real *alpha, 
	real *beta, complex *u, integer *ldu, complex *v, integer *ldv, 
	complex *q, integer *ldq, complex *work, integer *ncycle, integer *
	info);

/* ctgsna.c */
F2CSUB ctgsna_(char *job, char *howmny, logical *select, 
	integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *vl, integer *ldvl, complex *vr, integer *ldvr, real *s, real 
	*dif, integer *mm, integer *m, complex *work, integer *lwork, integer 
	*iwork, integer *info);

/* ctgsy2.c */
F2CSUB ctgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, complex *c__, 
	integer *ldc, complex *d__, integer *ldd, complex *e, integer *lde, 
	complex *f, integer *ldf, real *scale, real *rdsum, real *rdscal, 
	integer *info);

/* ctgsyl.c */
F2CSUB ctgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, complex *c__, 
	integer *ldc, complex *d__, integer *ldd, complex *e, integer *lde, 
	complex *f, integer *ldf, real *scale, real *dif, complex *work, 
	integer *lwork, integer *iwork, integer *info);

/* ctpcon.c */
F2CSUB ctpcon_(char *norm, char *uplo, char *diag, integer *n, 
	complex *ap, real *rcond, complex *work, real *rwork, integer *info);

/* ctprfs.c */
F2CSUB ctprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* ctptri.c */
F2CSUB ctptri_(char *uplo, char *diag, integer *n, complex *ap, 
	integer *info);

/* ctptrs.c */
F2CSUB ctptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *b, integer *ldb, integer *info);

/* ctpttf.c */
F2CSUB ctpttf_(char *transr, char *uplo, integer *n, complex *
	ap, complex *arf, integer *info);

/* ctpttr.c */
F2CSUB ctpttr_(char *uplo, integer *n, complex *ap, complex *a, 
	integer *lda, integer *info);

/* ctrcon.c */
F2CSUB ctrcon_(char *norm, char *uplo, char *diag, integer *n, 
	complex *a, integer *lda, real *rcond, complex *work, real *rwork, 
	integer *info);

/* ctrevc.c */
F2CSUB ctrevc_(char *side, char *howmny, logical *select, 
	integer *n, complex *t, integer *ldt, complex *vl, integer *ldvl, 
	complex *vr, integer *ldvr, integer *mm, integer *m, complex *work, 
	real *rwork, integer *info);

/* ctrexc.c */
F2CSUB ctrexc_(char *compq, integer *n, complex *t, integer *
	ldt, complex *q, integer *ldq, integer *ifst, integer *ilst, integer *
	info);

/* ctrrfs.c */
F2CSUB ctrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *x, integer *ldx, real *ferr, real *berr, complex *work, real 
	*rwork, integer *info);

/* ctrsen.c */
F2CSUB ctrsen_(char *job, char *compq, logical *select, integer 
	*n, complex *t, integer *ldt, complex *q, integer *ldq, complex *w, 
	integer *m, real *s, real *sep, complex *work, integer *lwork, 
	integer *info);

/* ctrsna.c */
F2CSUB ctrsna_(char *job, char *howmny, logical *select, 
	integer *n, complex *t, integer *ldt, complex *vl, integer *ldvl, 
	complex *vr, integer *ldvr, real *s, real *sep, integer *mm, integer *
	m, complex *work, integer *ldwork, real *rwork, integer *info);

/* ctrsyl.c */
F2CSUB ctrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *c__, integer *ldc, real *scale, integer *info);

/* ctrti2.c */
F2CSUB ctrti2_(char *uplo, char *diag, integer *n, complex *a, 
	integer *lda, integer *info);

/* ctrtri.c */
F2CSUB ctrtri_(char *uplo, char *diag, integer *n, complex *a, 
	integer *lda, integer *info);

/* ctrtrs.c */
F2CSUB ctrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, 
	integer *info);

/* ctrttf.c */
F2CSUB ctrttf_(char *transr, char *uplo, integer *n, complex *a, 
	 integer *lda, complex *arf, integer *info);

/* ctrttp.c */
F2CSUB ctrttp_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *ap, integer *info);

/* ctzrqf.c */
F2CSUB ctzrqf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, integer *info);

/* ctzrzf.c */
F2CSUB ctzrzf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cung2l.c */
F2CSUB cung2l_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cung2r.c */
F2CSUB cung2r_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cungbr.c */
F2CSUB cungbr_(char *vect, integer *m, integer *n, integer *k, 
	complex *a, integer *lda, complex *tau, complex *work, integer *lwork, 
	 integer *info);

/* cunghr.c */
F2CSUB cunghr_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *tau, complex *work, integer *lwork, integer 
	*info);

/* cungl2.c */
F2CSUB cungl2_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cunglq.c */
F2CSUB cunglq_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungql.c */
F2CSUB cungql_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungqr.c */
F2CSUB cungqr_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungr2.c */
F2CSUB cungr2_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cungrq.c */
F2CSUB cungrq_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungtr.c */
F2CSUB cungtr_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cunm2l.c */
F2CSUB cunm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunm2r.c */
F2CSUB cunm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunmbr.c */
F2CSUB cunmbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *lwork, integer *
	info);

/* cunmhr.c */
F2CSUB cunmhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *lwork, integer *
	info);

/* cunml2.c */
F2CSUB cunml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunmlq.c */
F2CSUB cunmlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmql.c */
F2CSUB cunmql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmqr.c */
F2CSUB cunmqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmr2.c */
F2CSUB cunmr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunmr3.c */
F2CSUB cunmr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *info);

/* cunmrq.c */
F2CSUB cunmrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmrz.c */
F2CSUB cunmrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *lwork, integer *
	info);

/* cunmtr.c */
F2CSUB cunmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cupgtr.c */
F2CSUB cupgtr_(char *uplo, integer *n, complex *ap, complex *
	tau, complex *q, integer *ldq, complex *work, integer *info);

/* cupmtr.c */
F2CSUB cupmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex *ap, complex *tau, complex *c__, integer *ldc, 
	complex *work, integer *info);

/* dbdsdc.c */
F2CSUB dbdsdc_(char *uplo, char *compq, integer *n, doublereal *
	d__, doublereal *e, doublereal *u, integer *ldu, doublereal *vt, 
	integer *ldvt, doublereal *q, integer *iq, doublereal *work, integer *
	iwork, integer *info);

/* dbdsqr.c */
F2CSUB dbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublereal *vt, 
	integer *ldvt, doublereal *u, integer *ldu, doublereal *c__, integer *
	ldc, doublereal *work, integer *info);

/* ddisna.c */
F2CSUB ddisna_(char *job, integer *m, integer *n, doublereal *
	d__, doublereal *sep, integer *info);

/* dgbbrd.c */
F2CSUB dgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, doublereal *ab, integer *ldab, doublereal *
	d__, doublereal *e, doublereal *q, integer *ldq, doublereal *pt, 
	integer *ldpt, doublereal *c__, integer *ldc, doublereal *work, 
	integer *info);

/* dgbcon.c */
F2CSUB dgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublereal *work, integer *iwork, integer *info);

/* dgbequ.c */
F2CSUB dgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);

/* dgbequb.c */
F2CSUB dgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);

/* dgbrfs.c */
F2CSUB dgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dgbrfsx.c */
F2CSUB dgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, doublereal *r__, 
	doublereal *c__, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublereal *work, integer *iwork, 
	integer *info);

/* dgbsv.c */
F2CSUB dgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublereal *ab, integer *ldab, integer *ipiv, doublereal *b, 
	integer *ldb, integer *info);

/* dgbsvx.c */
F2CSUB dgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dgbsvxx.c */
F2CSUB dgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, 
	doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublereal *work, integer *iwork, integer *info);

/* dgbtf2.c */
F2CSUB dgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);

/* dgbtrf.c */
F2CSUB dgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);

/* dgbtrs.c */
F2CSUB dgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, integer *ipiv, 
	doublereal *b, integer *ldb, integer *info);

/* dgebak.c */
F2CSUB dgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublereal *v, integer *
	ldv, integer *info);

/* dgebal.c */
F2CSUB dgebal_(char *job, integer *n, doublereal *a, integer *
	lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);

/* dgebd2.c */
F2CSUB dgebd2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *info);

/* dgebrd.c */
F2CSUB dgebrd_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *lwork, integer *info);

/* dgecon.c */
F2CSUB dgecon_(char *norm, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dgeequ.c */
F2CSUB dgeequ_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, integer *info);

/* dgeequb.c */
F2CSUB dgeequb_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, integer *info);

/* dgees.c */
F2CSUB dgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	doublereal *a, integer *lda, integer *sdim, doublereal *wr, 
	doublereal *wi, doublereal *vs, integer *ldvs, doublereal *work, 
	integer *lwork, logical *bwork, integer *info);

/* dgeesx.c */
F2CSUB dgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublereal *a, integer *lda, integer *sdim, 
	doublereal *wr, doublereal *wi, doublereal *vs, integer *ldvs, 
	doublereal *rconde, doublereal *rcondv, doublereal *work, integer *
	lwork, integer *iwork, integer *liwork, logical *bwork, integer *info);

/* dgeev.c */
F2CSUB dgeev_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *wr, doublereal *wi, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *work, 
	integer *lwork, integer *info);

/* dgeevx.c */
F2CSUB dgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *ilo, integer *ihi, doublereal *scale, 
	doublereal *abnrm, doublereal *rconde, doublereal *rcondv, doublereal 
	*work, integer *lwork, integer *iwork, integer *info);

/* dgegs.c */
F2CSUB dgegs_(char *jobvsl, char *jobvsr, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	alphar, doublereal *alphai, doublereal *beta, doublereal *vsl, 
	integer *ldvsl, doublereal *vsr, integer *ldvsr, doublereal *work, 
	integer *lwork, integer *info);

/* dgegv.c */
F2CSUB dgegv_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);

/* dgehd2.c */
F2CSUB dgehd2_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *info);

/* dgehrd.c */
F2CSUB dgehrd_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);

/* dgejsv.c */
F2CSUB dgejsv_(char *joba, char *jobu, char *jobv, char *jobr, 
	char *jobt, char *jobp, integer *m, integer *n, doublereal *a, 
	integer *lda, doublereal *sva, doublereal *u, integer *ldu, 
	doublereal *v, integer *ldv, doublereal *work, integer *lwork, 
	integer *iwork, integer *info);

/* dgelq2.c */
F2CSUB dgelq2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgelqf.c */
F2CSUB dgelqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgels.c */
F2CSUB dgels_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);

/* dgelsd.c */
F2CSUB dgelsd_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork, 
	 integer *iwork, integer *info);

/* dgelss.c */
F2CSUB dgelss_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork, 
	 integer *info);

/* dgelsx.c */
F2CSUB dgelsx_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	info);

/* dgelsy.c */
F2CSUB dgelsy_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	lwork, integer *info);

/* dgeql2.c */
F2CSUB dgeql2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgeqlf.c */
F2CSUB dgeqlf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgeqp3.c */
F2CSUB dgeqp3_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *lwork, 
	 integer *info);

/* dgeqpf.c */
F2CSUB dgeqpf_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *info);

/* dgeqr2.c */
F2CSUB dgeqr2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgeqrf.c */
F2CSUB dgeqrf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgerfs.c */
F2CSUB dgerfs_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);

/* dgerfsx.c */
F2CSUB dgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *r__, doublereal *c__, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *rcond, 
	doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublereal *work, integer *iwork, integer *info);

/* dgerq2.c */
F2CSUB dgerq2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgerqf.c */
F2CSUB dgerqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgesc2.c */
F2CSUB dgesc2_(integer *n, doublereal *a, integer *lda, 
	doublereal *rhs, integer *ipiv, integer *jpiv, doublereal *scale);

/* dgesdd.c */
F2CSUB dgesdd_(char *jobz, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *s, doublereal *u, integer *ldu, 
	doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *iwork, integer *info);

/* dgesv.c */
F2CSUB dgesv_(integer *n, integer *nrhs, doublereal *a, integer 
	*lda, integer *ipiv, doublereal *b, integer *ldb, integer *info);

/* dgesvd.c */
F2CSUB dgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *s, doublereal *u, integer *
	ldu, doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *info);

/* dgesvj.c */
F2CSUB dgesvj_(char *joba, char *jobu, char *jobv, integer *m, 
	integer *n, doublereal *a, integer *lda, doublereal *sva, integer *mv, 
	 doublereal *v, integer *ldv, doublereal *work, integer *lwork, 
	integer *info);

/* dgesvx.c */
F2CSUB dgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);

/* dgesvxx.c */
F2CSUB dgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *rpvgrw, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublereal *work, integer *iwork, 
	integer *info);

/* dgetc2.c */
F2CSUB dgetc2_(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, integer *jpiv, integer *info);

/* dgetf2.c */
F2CSUB dgetf2_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);

/* dgetrf.c */
F2CSUB dgetrf_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);

/* dgetri.c */
F2CSUB dgetri_(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, doublereal *work, integer *lwork, integer *info);

/* dgetrs.c */
F2CSUB dgetrs_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);

/* dggbak.c */
F2CSUB dggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublereal *v, integer *ldv, integer *info);

/* dggbal.c */
F2CSUB dggbal_(char *job, integer *n, doublereal *a, integer *
	lda, doublereal *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);

/* dgges.c */
F2CSUB dgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, integer *sdim, doublereal *alphar, doublereal *alphai, 
	doublereal *beta, doublereal *vsl, integer *ldvsl, doublereal *vsr, 
	integer *ldvsr, doublereal *work, integer *lwork, logical *bwork, 
	integer *info);

/* dggesx.c */
F2CSUB dggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, integer *sdim, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vsl, integer *ldvsl, 
	 doublereal *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);

/* dggev.c */
F2CSUB dggev_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);

/* dggevx.c */
F2CSUB dggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, logical *
	bwork, integer *info);

/* dggglm.c */
F2CSUB dggglm_(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *d__, 
	doublereal *x, doublereal *y, doublereal *work, integer *lwork, 
	integer *info);

/* dgghrd.c */
F2CSUB dgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *q, integer *ldq, doublereal *z__, integer *
	ldz, integer *info);

/* dgglse.c */
F2CSUB dgglse_(integer *m, integer *n, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *c__, 
	doublereal *d__, doublereal *x, doublereal *work, integer *lwork, 
	integer *info);

/* dggqrf.c */
F2CSUB dggqrf_(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);

/* dggrqf.c */
F2CSUB dggrqf_(integer *m, integer *p, integer *n, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);

/* dggsvd.c */
F2CSUB dggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublereal *u, integer *ldu, doublereal *v, integer 
	*ldv, doublereal *q, integer *ldq, doublereal *work, integer *iwork, 
	integer *info);

/* dggsvp.c */
F2CSUB dggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *tola, doublereal *tolb, integer *k, integer 
	*l, doublereal *u, integer *ldu, doublereal *v, integer *ldv, 
	doublereal *q, integer *ldq, integer *iwork, doublereal *tau, 
	doublereal *work, integer *info);

/* dgsvj0.c */
F2CSUB dgsvj0_(char *jobv, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *d__, doublereal *sva, integer *mv, 
	doublereal *v, integer *ldv, doublereal *eps, doublereal *sfmin, 
	doublereal *tol, integer *nsweep, doublereal *work, integer *lwork, 
	integer *info);

/* dgsvj1.c */
F2CSUB dgsvj1_(char *jobv, integer *m, integer *n, integer *n1, 
	doublereal *a, integer *lda, doublereal *d__, doublereal *sva, 
	integer *mv, doublereal *v, integer *ldv, doublereal *eps, doublereal 
	*sfmin, doublereal *tol, integer *nsweep, doublereal *work, integer *
	lwork, integer *info);

/* dgtcon.c */
F2CSUB dgtcon_(char *norm, integer *n, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *du2, integer *ipiv, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dgtrfs.c */
F2CSUB dgtrfs_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *dlf, 
	doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);

/* dgtsv.c */
F2CSUB dgtsv_(integer *n, integer *nrhs, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *b, integer *ldb, integer 
	*info);

/* dgtsvx.c */
F2CSUB dgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *dl, doublereal *d__, doublereal *du, doublereal *
	dlf, doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);

/* dgttrf.c */
F2CSUB dgttrf_(integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du, doublereal *du2, integer *ipiv, integer *info);

/* dgttrs.c */
F2CSUB dgttrs_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb, integer *info);

/* dgtts2.c */
F2CSUB dgtts2_(integer *itrans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb);

/* dhgeqz.c */
F2CSUB dhgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*t, integer *ldt, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	doublereal *work, integer *lwork, integer *info);

/* dhsein.c */
F2CSUB dhsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *mm, integer *m, doublereal *work, integer *
	ifaill, integer *ifailr, integer *info);

/* dhseqr.c */
F2CSUB dhseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *info);

/* disnan.c */
logical disnan_(doublereal *din);

/* dla_gbamv.c */
F2CSUB dla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, doublereal *alpha, doublereal *ab, integer *
	ldab, doublereal *x, integer *incx, doublereal *beta, doublereal *y, 
	integer *incy);

/* dla_gbrcond.c */
doublereal dla_gbrcond__(char *trans, integer *n, integer *kl, integer *ku, 
	doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	integer *ipiv, integer *cmode, doublereal *c__, integer *info, 
	doublereal *work, integer *iwork, ftnlen trans_len);

/* dla_gbrfsx_extended.c */
F2CSUB dla_gbrfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	integer *ipiv, logical *colequ, doublereal *c__, doublereal *b, 
	integer *ldb, doublereal *y, integer *ldy, doublereal *berr_out__, 
	integer *n_norms__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, doublereal *res, doublereal *ayb, doublereal *dy, 
	doublereal *y_tail__, doublereal *rcond, integer *ithresh, doublereal 
	*rthresh, doublereal *dz_ub__, logical *ignore_cwise__, integer *info);

/* dla_gbrpvgrw.c */
doublereal dla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb);

/* dla_geamv.c */
F2CSUB dla_geamv__(integer *trans, integer *m, integer *n, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *x, 
	integer *incx, doublereal *beta, doublereal *y, integer *incy);

/* dla_gercond.c */
doublereal dla_gercond__(char *trans, integer *n, doublereal *a, integer *lda,
	 doublereal *af, integer *ldaf, integer *ipiv, integer *cmode, 
	doublereal *c__, integer *info, doublereal *work, integer *iwork, 
	ftnlen trans_len);

/* dla_gerfsx_extended.c */
F2CSUB dla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, doublereal *a, integer *lda, 
	doublereal *af, integer *ldaf, integer *ipiv, logical *colequ, 
	doublereal *c__, doublereal *b, integer *ldb, doublereal *y, integer *
	ldy, doublereal *berr_out__, integer *n_norms__, doublereal *errs_n__,
	 doublereal *errs_c__, doublereal *res, doublereal *ayb, doublereal *
	dy, doublereal *y_tail__, doublereal *rcond, integer *ithresh, 
	doublereal *rthresh, doublereal *dz_ub__, logical *ignore_cwise__, 
	integer *info);

/* dla_lin_berr.c */
F2CSUB dla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	doublereal *res, doublereal *ayb, doublereal *berr);

/* dla_porcond.c */
doublereal dla_porcond__(char *uplo, integer *n, doublereal *a, integer *lda, 
	doublereal *af, integer *ldaf, integer *cmode, doublereal *c__, 
	integer *info, doublereal *work, integer *iwork, ftnlen uplo_len);

/* dla_porfsx_extended.c */
F2CSUB dla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublereal *a, integer *lda, doublereal *
	af, integer *ldaf, logical *colequ, doublereal *c__, doublereal *b, 
	integer *ldb, doublereal *y, integer *ldy, doublereal *berr_out__, 
	integer *n_norms__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, doublereal *res, doublereal *ayb, doublereal *dy, 
	doublereal *y_tail__, doublereal *rcond, integer *ithresh, doublereal 
	*rthresh, doublereal *dz_ub__, logical *ignore_cwise__, integer *info,
	 ftnlen uplo_len);

/* dla_porpvgrw.c */
doublereal dla_porpvgrw__(char *uplo, integer *ncols, doublereal *a, integer *
	lda, doublereal *af, integer *ldaf, doublereal *work, ftnlen uplo_len);

/* dla_rpvgrw.c */
doublereal dla_rpvgrw__(integer *n, integer *ncols, doublereal *a, integer *
	lda, doublereal *af, integer *ldaf);

/* dla_syamv.c */
F2CSUB dla_syamv__(integer *uplo, integer *n, doublereal *alpha,
	 doublereal *a, integer *lda, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* dla_syrcond.c */
doublereal dla_syrcond__(char *uplo, integer *n, doublereal *a, integer *lda, 
	doublereal *af, integer *ldaf, integer *ipiv, integer *cmode, 
	doublereal *c__, integer *info, doublereal *work, integer *iwork, 
	ftnlen uplo_len);

/* dla_syrfsx_extended.c */
F2CSUB dla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublereal *a, integer *lda, doublereal *
	af, integer *ldaf, integer *ipiv, logical *colequ, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *y, integer *ldy, doublereal *
	berr_out__, integer *n_norms__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, doublereal *res, doublereal *ayb, 
	doublereal *dy, doublereal *y_tail__, doublereal *rcond, integer *
	ithresh, doublereal *rthresh, doublereal *dz_ub__, logical *
	ignore_cwise__, integer *info, ftnlen uplo_len);

/* dla_syrpvgrw.c */
doublereal dla_syrpvgrw__(char *uplo, integer *n, integer *info, doublereal *
	a, integer *lda, doublereal *af, integer *ldaf, integer *ipiv, 
	doublereal *work, ftnlen uplo_len);

/* dla_wwaddw.c */
F2CSUB dla_wwaddw__(integer *n, doublereal *x, doublereal *y, 
	doublereal *w);

/* dlabad.c */
F2CSUB dlabad_(doublereal *small, doublereal *large);

/* dlabrd.c */
F2CSUB dlabrd_(integer *m, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *d__, doublereal *e, doublereal *tauq, 
	doublereal *taup, doublereal *x, integer *ldx, doublereal *y, integer 
	*ldy);

/* dlacn2.c */
F2CSUB dlacn2_(integer *n, doublereal *v, doublereal *x, 
	integer *isgn, doublereal *est, integer *kase, integer *isave);

/* dlacon.c */
F2CSUB dlacon_(integer *n, doublereal *v, doublereal *x, 
	integer *isgn, doublereal *est, integer *kase);

/* dlacpy.c */
F2CSUB dlacpy_(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb);

/* dladiv.c */
F2CSUB dladiv_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *p, doublereal *q);

/* dlae2.c */
F2CSUB dlae2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2);

/* dlaebz.c */
F2CSUB dlaebz_(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, doublereal *abstol, 
	doublereal *reltol, doublereal *pivmin, doublereal *d__, doublereal *
	e, doublereal *e2, integer *nval, doublereal *ab, doublereal *c__, 
	integer *mout, integer *nab, doublereal *work, integer *iwork, 
	integer *info);

/* dlaed0.c */
F2CSUB dlaed0_(integer *icompq, integer *qsiz, integer *n, 
	doublereal *d__, doublereal *e, doublereal *q, integer *ldq, 
	doublereal *qstore, integer *ldqs, doublereal *work, integer *iwork, 
	integer *info);

/* dlaed1.c */
F2CSUB dlaed1_(integer *n, doublereal *d__, doublereal *q, 
	integer *ldq, integer *indxq, doublereal *rho, integer *cutpnt, 
	doublereal *work, integer *iwork, integer *info);

/* dlaed2.c */
F2CSUB dlaed2_(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, integer *indxq, doublereal *rho, 
	doublereal *z__, doublereal *dlamda, doublereal *w, doublereal *q2, 
	integer *indx, integer *indxc, integer *indxp, integer *coltyp, 
	integer *info);

/* dlaed3.c */
F2CSUB dlaed3_(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, doublereal *rho, doublereal *dlamda, 
	 doublereal *q2, integer *indx, integer *ctot, doublereal *w, 
	doublereal *s, integer *info);

/* dlaed4.c */
F2CSUB dlaed4_(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *dlam, 
	 integer *info);

/* dlaed5.c */
F2CSUB dlaed5_(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dlam);

/* dlaed6.c */
F2CSUB dlaed6_(integer *kniter, logical *orgati, doublereal *
	rho, doublereal *d__, doublereal *z__, doublereal *finit, doublereal *
	tau, integer *info);

/* dlaed7.c */
F2CSUB dlaed7_(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublereal *q, integer *ldq, integer *indxq, doublereal *rho, integer 
	*cutpnt, doublereal *qstore, integer *qptr, integer *prmptr, integer *
	perm, integer *givptr, integer *givcol, doublereal *givnum, 
	doublereal *work, integer *iwork, integer *info);

/* dlaed8.c */
F2CSUB dlaed8_(integer *icompq, integer *k, integer *n, integer 
	*qsiz, doublereal *d__, doublereal *q, integer *ldq, integer *indxq, 
	doublereal *rho, integer *cutpnt, doublereal *z__, doublereal *dlamda, 
	 doublereal *q2, integer *ldq2, doublereal *w, integer *perm, integer 
	*givptr, integer *givcol, doublereal *givnum, integer *indxp, integer 
	*indx, integer *info);

/* dlaed9.c */
F2CSUB dlaed9_(integer *k, integer *kstart, integer *kstop, 
	integer *n, doublereal *d__, doublereal *q, integer *ldq, doublereal *
	rho, doublereal *dlamda, doublereal *w, doublereal *s, integer *lds, 
	integer *info);

/* dlaeda.c */
F2CSUB dlaeda_(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, doublereal *givnum, doublereal *q, integer *qptr, 
	doublereal *z__, doublereal *ztemp, integer *info);

/* dlaein.c */
F2CSUB dlaein_(logical *rightv, logical *noinit, integer *n, 
	doublereal *h__, integer *ldh, doublereal *wr, doublereal *wi, 
	doublereal *vr, doublereal *vi, doublereal *b, integer *ldb, 
	doublereal *work, doublereal *eps3, doublereal *smlnum, doublereal *
	bignum, integer *info);

/* dlaev2.c */
F2CSUB dlaev2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2, doublereal *cs1, doublereal *sn1);

/* dlaexc.c */
F2CSUB dlaexc_(logical *wantq, integer *n, doublereal *t, 
	integer *ldt, doublereal *q, integer *ldq, integer *j1, integer *n1, 
	integer *n2, doublereal *work, integer *info);

/* dlag2.c */
F2CSUB dlag2_(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *safmin, doublereal *scale1, doublereal *
	scale2, doublereal *wr1, doublereal *wr2, doublereal *wi);

/* dlag2s.c */
F2CSUB dlag2s_(integer *m, integer *n, doublereal *a, integer *
	lda, real *sa, integer *ldsa, integer *info);

/* dlags2.c */
F2CSUB dlags2_(logical *upper, doublereal *a1, doublereal *a2, 
	doublereal *a3, doublereal *b1, doublereal *b2, doublereal *b3, 
	doublereal *csu, doublereal *snu, doublereal *csv, doublereal *snv, 
	doublereal *csq, doublereal *snq);

/* dlagtf.c */
F2CSUB dlagtf_(integer *n, doublereal *a, doublereal *lambda, 
	doublereal *b, doublereal *c__, doublereal *tol, doublereal *d__, 
	integer *in, integer *info);

/* dlagtm.c */
F2CSUB dlagtm_(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublereal *dl, doublereal *d__, doublereal *du, 
	doublereal *x, integer *ldx, doublereal *beta, doublereal *b, integer 
	*ldb);

/* dlagts.c */
F2CSUB dlagts_(integer *job, integer *n, doublereal *a, 
	doublereal *b, doublereal *c__, doublereal *d__, integer *in, 
	doublereal *y, doublereal *tol, integer *info);

/* dlagv2.c */
F2CSUB dlagv2_(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *csl, doublereal *snl, doublereal *csr, doublereal *
	snr);

/* dlahqr.c */
F2CSUB dlahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, integer *info);

/* dlahr2.c */
F2CSUB dlahr2_(integer *n, integer *k, integer *nb, doublereal *
	a, integer *lda, doublereal *tau, doublereal *t, integer *ldt, 
	doublereal *y, integer *ldy);

/* dlahrd.c */
F2CSUB dlahrd_(integer *n, integer *k, integer *nb, doublereal *
	a, integer *lda, doublereal *tau, doublereal *t, integer *ldt, 
	doublereal *y, integer *ldy);

/* dlaic1.c */
F2CSUB dlaic1_(integer *job, integer *j, doublereal *x, 
	doublereal *sest, doublereal *w, doublereal *gamma, doublereal *
	sestpr, doublereal *s, doublereal *c__);

/* dlaisnan.c */
logical dlaisnan_(doublereal *din1, doublereal *din2);

/* dlaln2.c */
F2CSUB dlaln2_(logical *ltrans, integer *na, integer *nw, 
	doublereal *smin, doublereal *ca, doublereal *a, integer *lda, 
	doublereal *d1, doublereal *d2, doublereal *b, integer *ldb, 
	doublereal *wr, doublereal *wi, doublereal *x, integer *ldx, 
	doublereal *scale, doublereal *xnorm, integer *info);

/* dlals0.c */
F2CSUB dlals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublereal *b, integer *ldb, doublereal 
	*bx, integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, doublereal *givnum, integer *ldgnum, doublereal *
	poles, doublereal *difl, doublereal *difr, doublereal *z__, integer *
	k, doublereal *c__, doublereal *s, doublereal *work, integer *info);

/* dlalsa.c */
F2CSUB dlalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublereal *b, integer *ldb, doublereal *bx, integer *
	ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *k, 
	doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	work, integer *iwork, integer *info);

/* dlalsd.c */
F2CSUB dlalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, doublereal *d__, doublereal *e, doublereal *b, integer *ldb, 
	doublereal *rcond, integer *rank, doublereal *work, integer *iwork, 
	integer *info);

/* dlamch.c */
doublereal dlamch_(char *cmach);

F2CSUB dlamc1_(integer *beta, integer *t, logical *rnd, logical 
	*ieee1);

F2CSUB dlamc2_(integer *beta, integer *t, logical *rnd, 
	doublereal *eps, integer *emin, doublereal *rmin, integer *emax, 
	doublereal *rmax);

doublereal dlamc3_(doublereal *a, doublereal *b);

F2CSUB dlamc4_(integer *emin, doublereal *start, integer *base);

F2CSUB dlamc5_(integer *beta, integer *p, integer *emin, 
	logical *ieee, integer *emax, doublereal *rmax);

/* dlamrg.c */
F2CSUB dlamrg_(integer *n1, integer *n2, doublereal *a, integer 
	*dtrd1, integer *dtrd2, integer *index);

/* dlaneg.c */
integer dlaneg_(integer *n, doublereal *d__, doublereal *lld, doublereal *
	sigma, doublereal *pivmin, integer *r__);

/* dlangb.c */
doublereal dlangb_(char *norm, integer *n, integer *kl, integer *ku, 
	doublereal *ab, integer *ldab, doublereal *work);

/* dlange.c */
doublereal dlange_(char *norm, integer *m, integer *n, doublereal *a, integer 
	*lda, doublereal *work);

/* dlangt.c */
doublereal dlangt_(char *norm, integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du);

/* dlanhs.c */
doublereal dlanhs_(char *norm, integer *n, doublereal *a, integer *lda, 
	doublereal *work);

/* dlansb.c */
doublereal dlansb_(char *norm, char *uplo, integer *n, integer *k, doublereal 
	*ab, integer *ldab, doublereal *work);

/* dlansf.c */
doublereal dlansf_(char *norm, char *transr, char *uplo, integer *n, 
	doublereal *a, doublereal *work);

/* dlansp.c */
doublereal dlansp_(char *norm, char *uplo, integer *n, doublereal *ap, 
	doublereal *work);

/* dlanst.c */
doublereal dlanst_(char *norm, integer *n, doublereal *d__, doublereal *e);

/* dlansy.c */
doublereal dlansy_(char *norm, char *uplo, integer *n, doublereal *a, integer 
	*lda, doublereal *work);

/* dlantb.c */
doublereal dlantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 doublereal *ab, integer *ldab, doublereal *work);

/* dlantp.c */
doublereal dlantp_(char *norm, char *uplo, char *diag, integer *n, doublereal 
	*ap, doublereal *work);

/* dlantr.c */
doublereal dlantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 doublereal *a, integer *lda, doublereal *work);

/* dlanv2.c */
F2CSUB dlanv2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *rt1r, doublereal *rt1i, doublereal *rt2r, 
	 doublereal *rt2i, doublereal *cs, doublereal *sn);

/* dlapll.c */
F2CSUB dlapll_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *ssmin);

/* dlapmt.c */
F2CSUB dlapmt_(logical *forwrd, integer *m, integer *n, 
	doublereal *x, integer *ldx, integer *k);

/* dlapy2.c */
doublereal dlapy2_(doublereal *x, doublereal *y);

/* dlapy3.c */
doublereal dlapy3_(doublereal *x, doublereal *y, doublereal *z__);

/* dlaqgb.c */
F2CSUB dlaqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);

/* dlaqge.c */
F2CSUB dlaqge_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, char *equed);

/* dlaqp2.c */
F2CSUB dlaqp2_(integer *m, integer *n, integer *offset, 
	doublereal *a, integer *lda, integer *jpvt, doublereal *tau, 
	doublereal *vn1, doublereal *vn2, doublereal *work);

/* dlaqps.c */
F2CSUB dlaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublereal *a, integer *lda, integer *jpvt, 
	doublereal *tau, doublereal *vn1, doublereal *vn2, doublereal *auxv, 
	doublereal *f, integer *ldf);

/* dlaqr0.c */
F2CSUB dlaqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *info);

/* dlaqr1.c */
F2CSUB dlaqr1_(integer *n, doublereal *h__, integer *ldh, 
	doublereal *sr1, doublereal *si1, doublereal *sr2, doublereal *si2, 
	doublereal *v);

/* dlaqr2.c */
F2CSUB dlaqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublereal *h__, integer *
	ldh, integer *iloz, integer *ihiz, doublereal *z__, integer *ldz, 
	integer *ns, integer *nd, doublereal *sr, doublereal *si, doublereal *
	v, integer *ldv, integer *nh, doublereal *t, integer *ldt, integer *
	nv, doublereal *wv, integer *ldwv, doublereal *work, integer *lwork);

/* dlaqr3.c */
F2CSUB dlaqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublereal *h__, integer *
	ldh, integer *iloz, integer *ihiz, doublereal *z__, integer *ldz, 
	integer *ns, integer *nd, doublereal *sr, doublereal *si, doublereal *
	v, integer *ldv, integer *nh, doublereal *t, integer *ldt, integer *
	nv, doublereal *wv, integer *ldwv, doublereal *work, integer *lwork);

/* dlaqr4.c */
F2CSUB dlaqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *info);

/* dlaqr5.c */
F2CSUB dlaqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, doublereal 
	*sr, doublereal *si, doublereal *h__, integer *ldh, integer *iloz, 
	integer *ihiz, doublereal *z__, integer *ldz, doublereal *v, integer *
	ldv, doublereal *u, integer *ldu, integer *nv, doublereal *wv, 
	integer *ldwv, integer *nh, doublereal *wh, integer *ldwh);

/* dlaqsb.c */
F2CSUB dlaqsb_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax, 
	 char *equed);

/* dlaqsp.c */
F2CSUB dlaqsp_(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* dlaqsy.c */
F2CSUB dlaqsy_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* dlaqtr.c */
F2CSUB dlaqtr_(logical *ltran, logical *lreal, integer *n, 
	doublereal *t, integer *ldt, doublereal *b, doublereal *w, doublereal 
	*scale, doublereal *x, doublereal *work, integer *info);

/* dlar1v.c */
F2CSUB dlar1v_(integer *n, integer *b1, integer *bn, doublereal 
	*lambda, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *pivmin, doublereal *gaptol, doublereal *z__, logical 
	*wantnc, integer *negcnt, doublereal *ztz, doublereal *mingma, 
	integer *r__, integer *isuppz, doublereal *nrminv, doublereal *resid, 
	doublereal *rqcorr, doublereal *work);

/* dlar2v.c */
F2CSUB dlar2v_(integer *n, doublereal *x, doublereal *y, 
	doublereal *z__, integer *incx, doublereal *c__, doublereal *s, 
	integer *incc);

/* dlarf.c */
F2CSUB dlarf_(char *side, integer *m, integer *n, doublereal *v, 
	 integer *incv, doublereal *tau, doublereal *c__, integer *ldc, 
	doublereal *work);

/* dlarfb.c */
F2CSUB dlarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublereal *v, integer *
	ldv, doublereal *t, integer *ldt, doublereal *c__, integer *ldc, 
	doublereal *work, integer *ldwork);

/* dlarfg.c */
F2CSUB dlarfg_(integer *n, doublereal *alpha, doublereal *x, 
	integer *incx, doublereal *tau);

/* dlarfp.c */
F2CSUB dlarfp_(integer *n, doublereal *alpha, doublereal *x, 
	integer *incx, doublereal *tau);

/* dlarft.c */
F2CSUB dlarft_(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);

/* dlarfx.c */
F2CSUB dlarfx_(char *side, integer *m, integer *n, doublereal *
	v, doublereal *tau, doublereal *c__, integer *ldc, doublereal *work);

/* dlargv.c */
F2CSUB dlargv_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, integer *incc);

/* dlarnv.c */
F2CSUB dlarnv_(integer *idist, integer *iseed, integer *n, 
	doublereal *x);

/* dlarra.c */
F2CSUB dlarra_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *e2, doublereal *spltol, doublereal *tnrm, integer *nsplit, 
	 integer *isplit, integer *info);

/* dlarrb.c */
F2CSUB dlarrb_(integer *n, doublereal *d__, doublereal *lld, 
	integer *ifirst, integer *ilast, doublereal *rtol1, doublereal *rtol2, 
	 integer *offset, doublereal *w, doublereal *wgap, doublereal *werr, 
	doublereal *work, integer *iwork, doublereal *pivmin, doublereal *
	spdiam, integer *twist, integer *info);

/* dlarrc.c */
F2CSUB dlarrc_(char *jobt, integer *n, doublereal *vl, 
	doublereal *vu, doublereal *d__, doublereal *e, doublereal *pivmin, 
	integer *eigcnt, integer *lcnt, integer *rcnt, integer *info);

/* dlarrd.c */
F2CSUB dlarrd_(char *range, char *order, integer *n, doublereal 
	*vl, doublereal *vu, integer *il, integer *iu, doublereal *gers, 
	doublereal *reltol, doublereal *d__, doublereal *e, doublereal *e2, 
	doublereal *pivmin, integer *nsplit, integer *isplit, integer *m, 
	doublereal *w, doublereal *werr, doublereal *wl, doublereal *wu, 
	integer *iblock, integer *indexw, doublereal *work, integer *iwork, 
	integer *info);

/* dlarre.c */
F2CSUB dlarre_(char *range, integer *n, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *d__, doublereal 
	*e, doublereal *e2, doublereal *rtol1, doublereal *rtol2, doublereal *
	spltol, integer *nsplit, integer *isplit, integer *m, doublereal *w, 
	doublereal *werr, doublereal *wgap, integer *iblock, integer *indexw, 
	doublereal *gers, doublereal *pivmin, doublereal *work, integer *
	iwork, integer *info);

/* dlarrf.c */
F2CSUB dlarrf_(integer *n, doublereal *d__, doublereal *l, 
	doublereal *ld, integer *clstrt, integer *clend, doublereal *w, 
	doublereal *wgap, doublereal *werr, doublereal *spdiam, doublereal *
	clgapl, doublereal *clgapr, doublereal *pivmin, doublereal *sigma, 
	doublereal *dplus, doublereal *lplus, doublereal *work, integer *info);

/* dlarrj.c */
F2CSUB dlarrj_(integer *n, doublereal *d__, doublereal *e2, 
	integer *ifirst, integer *ilast, doublereal *rtol, integer *offset, 
	doublereal *w, doublereal *werr, doublereal *work, integer *iwork, 
	doublereal *pivmin, doublereal *spdiam, integer *info);

/* dlarrk.c */
F2CSUB dlarrk_(integer *n, integer *iw, doublereal *gl, 
	doublereal *gu, doublereal *d__, doublereal *e2, doublereal *pivmin, 
	doublereal *reltol, doublereal *w, doublereal *werr, integer *info);

/* dlarrr.c */
F2CSUB dlarrr_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);

/* dlarrv.c */
F2CSUB dlarrv_(integer *n, doublereal *vl, doublereal *vu, 
	doublereal *d__, doublereal *l, doublereal *pivmin, integer *isplit, 
	integer *m, integer *dol, integer *dou, doublereal *minrgp, 
	doublereal *rtol1, doublereal *rtol2, doublereal *w, doublereal *werr, 
	 doublereal *wgap, integer *iblock, integer *indexw, doublereal *gers, 
	 doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *iwork, integer *info);

/* dlarscl2.c */
F2CSUB dlarscl2_(integer *m, integer *n, doublereal *d__, 
	doublereal *x, integer *ldx);

/* dlartg.c */
F2CSUB dlartg_(doublereal *f, doublereal *g, doublereal *cs, 
	doublereal *sn, doublereal *r__);

/* dlartv.c */
F2CSUB dlartv_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, doublereal *s, integer 
	*incc);

/* dlaruv.c */
F2CSUB dlaruv_(integer *iseed, integer *n, doublereal *x);

/* dlarz.c */
F2CSUB dlarz_(char *side, integer *m, integer *n, integer *l, 
	doublereal *v, integer *incv, doublereal *tau, doublereal *c__, 
	integer *ldc, doublereal *work);

/* dlarzb.c */
F2CSUB dlarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublereal *v, 
	 integer *ldv, doublereal *t, integer *ldt, doublereal *c__, integer *
	ldc, doublereal *work, integer *ldwork);

/* dlarzt.c */
F2CSUB dlarzt_(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);

/* dlas2.c */
F2CSUB dlas2_(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax);

/* dlascl.c */
F2CSUB dlascl_(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublereal *a, integer *lda, integer *info);

/* dlascl2.c */
F2CSUB dlascl2_(integer *m, integer *n, doublereal *d__, 
	doublereal *x, integer *ldx);

/* dlasd0.c */
F2CSUB dlasd0_(integer *n, integer *sqre, doublereal *d__, 
	doublereal *e, doublereal *u, integer *ldu, doublereal *vt, integer *
	ldvt, integer *smlsiz, integer *iwork, doublereal *work, integer *
	info);

/* dlasd1.c */
F2CSUB dlasd1_(integer *nl, integer *nr, integer *sqre, 
	doublereal *d__, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *vt, integer *ldvt, integer *idxq, integer *
	iwork, doublereal *work, integer *info);

/* dlasd2.c */
F2CSUB dlasd2_(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *z__, doublereal *alpha, doublereal *
	beta, doublereal *u, integer *ldu, doublereal *vt, integer *ldvt, 
	doublereal *dsigma, doublereal *u2, integer *ldu2, doublereal *vt2, 
	integer *ldvt2, integer *idxp, integer *idx, integer *idxc, integer *
	idxq, integer *coltyp, integer *info);

/* dlasd3.c */
F2CSUB dlasd3_(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *q, integer *ldq, doublereal *dsigma, 
	doublereal *u, integer *ldu, doublereal *u2, integer *ldu2, 
	doublereal *vt, integer *ldvt, doublereal *vt2, integer *ldvt2, 
	integer *idxc, integer *ctot, doublereal *z__, integer *info);

/* dlasd4.c */
F2CSUB dlasd4_(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *
	sigma, doublereal *work, integer *info);

/* dlasd5.c */
F2CSUB dlasd5_(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dsigma, doublereal *
	work);

/* dlasd6.c */
F2CSUB dlasd6_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, doublereal *d__, doublereal *vf, doublereal *vl, 
	doublereal *alpha, doublereal *beta, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum, 
	 integer *ldgnum, doublereal *poles, doublereal *difl, doublereal *
	difr, doublereal *z__, integer *k, doublereal *c__, doublereal *s, 
	doublereal *work, integer *iwork, integer *info);

/* dlasd7.c */
F2CSUB dlasd7_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, doublereal *d__, doublereal *z__, 
	doublereal *zw, doublereal *vf, doublereal *vfw, doublereal *vl, 
	doublereal *vlw, doublereal *alpha, doublereal *beta, doublereal *
	dsigma, integer *idx, integer *idxp, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum, 
	 integer *ldgnum, doublereal *c__, doublereal *s, integer *info);

/* dlasd8.c */
F2CSUB dlasd8_(integer *icompq, integer *k, doublereal *d__, 
	doublereal *z__, doublereal *vf, doublereal *vl, doublereal *difl, 
	doublereal *difr, integer *lddifr, doublereal *dsigma, doublereal *
	work, integer *info);

/* dlasda.c */
F2CSUB dlasda_(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, doublereal *d__, doublereal *e, doublereal *u, integer 
	*ldu, doublereal *vt, integer *k, doublereal *difl, doublereal *difr, 
	doublereal *z__, doublereal *poles, integer *givptr, integer *givcol, 
	integer *ldgcol, integer *perm, doublereal *givnum, doublereal *c__, 
	doublereal *s, doublereal *work, integer *iwork, integer *info);

/* dlasdq.c */
F2CSUB dlasdq_(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, doublereal *d__, doublereal *e, 
	doublereal *vt, integer *ldvt, doublereal *u, integer *ldu, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);

/* dlasdt.c */
F2CSUB dlasdt_(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);

/* dlaset.c */
F2CSUB dlaset_(char *uplo, integer *m, integer *n, doublereal *
	alpha, doublereal *beta, doublereal *a, integer *lda);

/* dlasq1.c */
F2CSUB dlasq1_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *work, integer *info);

/* dlasq2.c */
F2CSUB dlasq2_(integer *n, doublereal *z__, integer *info);

/* dlasq3.c */
F2CSUB dlasq3_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *sigma, doublereal *desig, 
	 doublereal *qmax, integer *nfail, integer *iter, integer *ndiv, 
	logical *ieee, integer *ttype, doublereal *dmin1, doublereal *dmin2, 
	doublereal *dn, doublereal *dn1, doublereal *dn2, doublereal *g, 
	doublereal *tau);

/* dlasq4.c */
F2CSUB dlasq4_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, integer *n0in, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dn1, doublereal *dn2, 
	doublereal *tau, integer *ttype, doublereal *g);

/* dlasq5.c */
F2CSUB dlasq5_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *tau, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dnm1, doublereal *dnm2, 
	 logical *ieee);

/* dlasq6.c */
F2CSUB dlasq6_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *dmin1, doublereal *dmin2, 
	 doublereal *dn, doublereal *dnm1, doublereal *dnm2);

/* dlasr.c */
F2CSUB dlasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, doublereal *c__, doublereal *s, doublereal *a, integer *
	lda);

/* dlasrt.c */
F2CSUB dlasrt_(char *id, integer *n, doublereal *d__, integer *
	info);

/* dlassq.c */
F2CSUB dlassq_(integer *n, doublereal *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);

/* dlasv2.c */
F2CSUB dlasv2_(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax, doublereal *snr, doublereal *
	csr, doublereal *snl, doublereal *csl);

/* dlaswp.c */
F2CSUB dlaswp_(integer *n, doublereal *a, integer *lda, integer 
	*k1, integer *k2, integer *ipiv, integer *incx);

/* dlasy2.c */
F2CSUB dlasy2_(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, doublereal *tl, integer *ldtl, doublereal *
	tr, integer *ldtr, doublereal *b, integer *ldb, doublereal *scale, 
	doublereal *x, integer *ldx, doublereal *xnorm, integer *info);

/* dlasyf.c */
F2CSUB dlasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 doublereal *a, integer *lda, integer *ipiv, doublereal *w, integer *
	ldw, integer *info);

/* dlat2s.c */
F2CSUB dlat2s_(char *uplo, integer *n, doublereal *a, integer *
	lda, real *sa, integer *ldsa, integer *info);

/* dlatbs.c */
F2CSUB dlatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublereal *ab, integer *ldab, 
	doublereal *x, doublereal *scale, doublereal *cnorm, integer *info);

/* dlatdf.c */
F2CSUB dlatdf_(integer *ijob, integer *n, doublereal *z__, 
	integer *ldz, doublereal *rhs, doublereal *rdsum, doublereal *rdscal, 
	integer *ipiv, integer *jpiv);

/* dlatps.c */
F2CSUB dlatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *ap, doublereal *x, doublereal *scale, 
	doublereal *cnorm, integer *info);

/* dlatrd.c */
F2CSUB dlatrd_(char *uplo, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *e, doublereal *tau, doublereal *w, 
	integer *ldw);

/* dlatrs.c */
F2CSUB dlatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *a, integer *lda, doublereal *x, 
	doublereal *scale, doublereal *cnorm, integer *info);

/* dlatrz.c */
F2CSUB dlatrz_(integer *m, integer *n, integer *l, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work);

/* dlatzm.c */
F2CSUB dlatzm_(char *side, integer *m, integer *n, doublereal *
	v, integer *incv, doublereal *tau, doublereal *c1, doublereal *c2, 
	integer *ldc, doublereal *work);

/* dlauu2.c */
F2CSUB dlauu2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dlauum.c */
F2CSUB dlauum_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dopgtr.c */
F2CSUB dopgtr_(char *uplo, integer *n, doublereal *ap, 
	doublereal *tau, doublereal *q, integer *ldq, doublereal *work, 
	integer *info);

/* dopmtr.c */
F2CSUB dopmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *ap, doublereal *tau, doublereal *c__, integer 
	*ldc, doublereal *work, integer *info);

/* dorg2l.c */
F2CSUB dorg2l_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorg2r.c */
F2CSUB dorg2r_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorgbr.c */
F2CSUB dorgbr_(char *vect, integer *m, integer *n, integer *k, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);

/* dorghr.c */
F2CSUB dorghr_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);

/* dorgl2.c */
F2CSUB dorgl2_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorglq.c */
F2CSUB dorglq_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgql.c */
F2CSUB dorgql_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgqr.c */
F2CSUB dorgqr_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgr2.c */
F2CSUB dorgr2_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorgrq.c */
F2CSUB dorgrq_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgtr.c */
F2CSUB dorgtr_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dorm2l.c */
F2CSUB dorm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dorm2r.c */
F2CSUB dorm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dormbr.c */
F2CSUB dormbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);

/* dormhr.c */
F2CSUB dormhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublereal *a, integer *lda, doublereal *
	tau, doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);

/* dorml2.c */
F2CSUB dorml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dormlq.c */
F2CSUB dormlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormql.c */
F2CSUB dormql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormqr.c */
F2CSUB dormqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormr2.c */
F2CSUB dormr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dormr3.c */
F2CSUB dormr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);

/* dormrq.c */
F2CSUB dormrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormrz.c */
F2CSUB dormrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);

/* dormtr.c */
F2CSUB dormtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dpbcon.c */
F2CSUB dpbcon_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);

/* dpbequ.c */
F2CSUB dpbequ_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax, 
	 integer *info);

/* dpbrfs.c */
F2CSUB dpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);

/* dpbstf.c */
F2CSUB dpbstf_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);

/* dpbsv.c */
F2CSUB dpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);

/* dpbsvx.c */
F2CSUB dpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, char *equed, doublereal *s, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	 doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dpbtf2.c */
F2CSUB dpbtf2_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);

/* dpbtrf.c */
F2CSUB dpbtrf_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);

/* dpbtrs.c */
F2CSUB dpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);

/* dpftrf.c */
F2CSUB dpftrf_(char *transr, char *uplo, integer *n, doublereal 
	*a, integer *info);

/* dpftri.c */
F2CSUB dpftri_(char *transr, char *uplo, integer *n, doublereal 
	*a, integer *info);

/* dpftrs.c */
F2CSUB dpftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, doublereal *a, doublereal *b, integer *ldb, integer *info);

/* dpocon.c */
F2CSUB dpocon_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dpoequ.c */
F2CSUB dpoequ_(integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* dpoequb.c */
F2CSUB dpoequb_(integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* dporfs.c */
F2CSUB dporfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);

/* dporfsx.c */
F2CSUB dporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	doublereal *s, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublereal *work, integer *iwork, 
	integer *info);

/* dposv.c */
F2CSUB dposv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, doublereal *b, integer *ldb, integer *info);

/* dposvx.c */
F2CSUB dposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	char *equed, doublereal *s, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *
	berr, doublereal *work, integer *iwork, integer *info);

/* dposvxx.c */
F2CSUB dposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	char *equed, doublereal *s, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, doublereal *
	berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublereal *
	work, integer *iwork, integer *info);

/* dpotf2.c */
F2CSUB dpotf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dpotrf.c */
F2CSUB dpotrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dpotri.c */
F2CSUB dpotri_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dpotrs.c */
F2CSUB dpotrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);

/* dppcon.c */
F2CSUB dppcon_(char *uplo, integer *n, doublereal *ap, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dppequ.c */
F2CSUB dppequ_(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* dpprfs.c */
F2CSUB dpprfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dppsv.c */
F2CSUB dppsv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, doublereal *b, integer *ldb, integer *info);

/* dppsvx.c */
F2CSUB dppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, char *equed, doublereal *s, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);

/* dpptrf.c */
F2CSUB dpptrf_(char *uplo, integer *n, doublereal *ap, integer *
	info);

/* dpptri.c */
F2CSUB dpptri_(char *uplo, integer *n, doublereal *ap, integer *
	info);

/* dpptrs.c */
F2CSUB dpptrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *b, integer *ldb, integer *info);

/* dpstf2.c */
F2CSUB dpstf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *piv, integer *rank, doublereal *tol, doublereal *work, 
	integer *info);

/* dpstrf.c */
F2CSUB dpstrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *piv, integer *rank, doublereal *tol, doublereal *work, 
	integer *info);

/* dptcon.c */
F2CSUB dptcon_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *info);

/* dpteqr.c */
F2CSUB dpteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dptrfs.c */
F2CSUB dptrfs_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *df, doublereal *ef, doublereal *b, integer 
	*ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	 doublereal *work, integer *info);

/* dptsv.c */
F2CSUB dptsv_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);

/* dptsvx.c */
F2CSUB dptsvx_(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublereal *e, doublereal *df, doublereal *ef, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	info);

/* dpttrf.c */
F2CSUB dpttrf_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);

/* dpttrs.c */
F2CSUB dpttrs_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);

/* dptts2.c */
F2CSUB dptts2_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb);

/* drscl.c */
F2CSUB drscl_(integer *n, doublereal *sa, doublereal *sx, 
	integer *incx);

/* dsbev.c */
F2CSUB dsbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);

/* dsbevd.c */
F2CSUB dsbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* dsbevx.c */
F2CSUB dsbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *q, integer *
	ldq, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);

/* dsbgst.c */
F2CSUB dsbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *x, integer *ldx, doublereal *work, integer *info);

/* dsbgv.c */
F2CSUB dsbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dsbgvd.c */
F2CSUB dsbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dsbgvx.c */
F2CSUB dsbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublereal *ab, integer *ldab, doublereal *
	bb, integer *ldbb, doublereal *q, integer *ldq, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);

/* dsbtrd.c */
F2CSUB dsbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublereal *q, integer *ldq, doublereal *work, integer *info);

/* dsecnd.c */
doublereal dsecnd_();

/* dsfrk.c */
F2CSUB dsfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, doublereal *alpha, doublereal *a, integer *lda, 
	doublereal *beta, doublereal *c__);

/* dsgesv.c */
F2CSUB dsgesv_(integer *n, integer *nrhs, doublereal *a, 
	integer *lda, integer *ipiv, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *work, real *swork, integer *iter, 
	integer *info);

/* dspcon.c */
F2CSUB dspcon_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublereal *work, integer 
	*iwork, integer *info);

/* dspev.c */
F2CSUB dspev_(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dspevd.c */
F2CSUB dspevd_(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dspevx.c */
F2CSUB dspevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *ap, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);

/* dspgst.c */
F2CSUB dspgst_(integer *itype, char *uplo, integer *n, 
	doublereal *ap, doublereal *bp, integer *info);

/* dspgv.c */
F2CSUB dspgv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);

/* dspgvd.c */
F2CSUB dspgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* dspgvx.c */
F2CSUB dspgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *ap, doublereal *bp, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);

/* dsposv.c */
F2CSUB dsposv_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *work, real *swork, integer *iter, 
	integer *info);

/* dsprfs.c */
F2CSUB dsprfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dspsv.c */
F2CSUB dspsv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, integer *ipiv, doublereal *b, integer *ldb, integer *info);

/* dspsvx.c */
F2CSUB dspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *rcond, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);

/* dsptrd.c */
F2CSUB dsptrd_(char *uplo, integer *n, doublereal *ap, 
	doublereal *d__, doublereal *e, doublereal *tau, integer *info);

/* dsptrf.c */
F2CSUB dsptrf_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, integer *info);

/* dsptri.c */
F2CSUB dsptri_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *work, integer *info);

/* dsptrs.c */
F2CSUB dsptrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, integer *ipiv, doublereal *b, integer *ldb, integer *
	info);

/* dstebz.c */
F2CSUB dstebz_(char *range, char *order, integer *n, doublereal 
	*vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	doublereal *d__, doublereal *e, integer *m, integer *nsplit, 
	doublereal *w, integer *iblock, integer *isplit, doublereal *work, 
	integer *iwork, integer *info);

/* dstedc.c */
F2CSUB dstedc_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstegr.c */
F2CSUB dstegr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstein.c */
F2CSUB dstein_(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);

/* dstemr.c */
F2CSUB dstemr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, integer *m, doublereal *w, doublereal *z__, integer *ldz, 
	 integer *nzc, integer *isuppz, logical *tryrac, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dsteqr.c */
F2CSUB dsteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dsterf.c */
F2CSUB dsterf_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);

/* dstev.c */
F2CSUB dstev_(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dstevd.c */
F2CSUB dstevd_(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstevr.c */
F2CSUB dstevr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstevx.c */
F2CSUB dstevx_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);

/* dsycon.c */
F2CSUB dsycon_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);

/* dsyequb.c */
F2CSUB dsyequb_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *s, doublereal *scond, doublereal *amax, doublereal *
	work, integer *info);

/* dsyev.c */
F2CSUB dsyev_(char *jobz, char *uplo, integer *n, doublereal *a, 
	 integer *lda, doublereal *w, doublereal *work, integer *lwork, 
	integer *info);

/* dsyevd.c */
F2CSUB dsyevd_(char *jobz, char *uplo, integer *n, doublereal *
	a, integer *lda, doublereal *w, doublereal *work, integer *lwork, 
	integer *iwork, integer *liwork, integer *info);

/* dsyevr.c */
F2CSUB dsyevr_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dsyevx.c */
F2CSUB dsyevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *lwork, 
	integer *iwork, integer *ifail, integer *info);

/* dsygs2.c */
F2CSUB dsygs2_(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);

/* dsygst.c */
F2CSUB dsygst_(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);

/* dsygv.c */
F2CSUB dsygv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *info);

/* dsygvd.c */
F2CSUB dsygvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* dsygvx.c */
F2CSUB dsygvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *a, integer *lda, doublereal *b, integer 
	*ldb, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *ifail, integer *info);

/* dsyrfs.c */
F2CSUB dsyrfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);

/* dsyrfsx.c */
F2CSUB dsyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *s, doublereal *b, integer *ldb, doublereal 
	*x, integer *ldx, doublereal *rcond, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublereal *
	work, integer *iwork, integer *info);

/* dsysv.c */
F2CSUB dsysv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);

/* dsysvx.c */
F2CSUB dsysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *lwork, integer *iwork, integer *info);

/* dsysvxx.c */
F2CSUB dsysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *s, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *rcond, doublereal *
	rpvgrw, doublereal *berr, integer *n_err_bnds__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, integer *nparams, 
	doublereal *params, doublereal *work, integer *iwork, integer *info);

/* dsytd2.c */
F2CSUB dsytd2_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, integer *info);

/* dsytf2.c */
F2CSUB dsytf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);

/* dsytrd.c */
F2CSUB dsytrd_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, doublereal *
	work, integer *lwork, integer *info);

/* dsytrf.c */
F2CSUB dsytrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *lwork, integer *info);

/* dsytri.c */
F2CSUB dsytri_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *info);

/* dsytrs.c */
F2CSUB dsytrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);

/* dtbcon.c */
F2CSUB dtbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *rcond, 
	doublereal *work, integer *iwork, integer *info);

/* dtbrfs.c */
F2CSUB dtbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dtbtrs.c */
F2CSUB dtbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, integer *info);

/* dtfsm.c */
F2CSUB dtfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, doublereal *alpha, doublereal *a, 
	 doublereal *b, integer *ldb);

/* dtftri.c */
F2CSUB dtftri_(char *transr, char *uplo, char *diag, integer *n, 
	 doublereal *a, integer *info);

/* dtfttp.c */
F2CSUB dtfttp_(char *transr, char *uplo, integer *n, doublereal 
	*arf, doublereal *ap, integer *info);

/* dtfttr.c */
F2CSUB dtfttr_(char *transr, char *uplo, integer *n, doublereal 
	*arf, doublereal *a, integer *lda, integer *info);

/* dtgevc.c */
F2CSUB dtgevc_(char *side, char *howmny, logical *select, 
	integer *n, doublereal *s, integer *lds, doublereal *p, integer *ldp, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, integer 
	*mm, integer *m, doublereal *work, integer *info);

/* dtgex2.c */
F2CSUB dtgex2_(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *j1, integer *
	n1, integer *n2, doublereal *work, integer *lwork, integer *info);

/* dtgexc.c */
F2CSUB dtgexc_(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *ifst, 
	integer *ilst, doublereal *work, integer *lwork, integer *info);

/* dtgsen.c */
F2CSUB dtgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublereal *a, integer *lda, doublereal *
	b, integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublereal *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* dtgsja.c */
F2CSUB dtgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *v, integer *ldv, doublereal *q, integer *
	ldq, doublereal *work, integer *ncycle, integer *info);

/* dtgsna.c */
F2CSUB dtgsna_(char *job, char *howmny, logical *select, 
	integer *n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	doublereal *s, doublereal *dif, integer *mm, integer *m, doublereal *
	work, integer *lwork, integer *iwork, integer *info);

/* dtgsy2.c */
F2CSUB dtgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *rdsum, doublereal *rdscal, integer *iwork, integer 
	*pq, integer *info);

/* dtgsyl.c */
F2CSUB dtgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *dif, doublereal *work, integer *lwork, integer *
	iwork, integer *info);

/* dtpcon.c */
F2CSUB dtpcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *ap, doublereal *rcond, doublereal *work, integer *iwork, 
	integer *info);

/* dtprfs.c */
F2CSUB dtprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dtptri.c */
F2CSUB dtptri_(char *uplo, char *diag, integer *n, doublereal *
	ap, integer *info);

/* dtptrs.c */
F2CSUB dtptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, integer *
	info);

/* dtpttf.c */
F2CSUB dtpttf_(char *transr, char *uplo, integer *n, doublereal 
	*ap, doublereal *arf, integer *info);

/* dtpttr.c */
F2CSUB dtpttr_(char *uplo, integer *n, doublereal *ap, 
	doublereal *a, integer *lda, integer *info);

/* dtrcon.c */
F2CSUB dtrcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *rcond, doublereal *work, 
	integer *iwork, integer *info);

/* dtrevc.c */
F2CSUB dtrevc_(char *side, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, integer *mm, integer *m, 
	doublereal *work, integer *info);

/* dtrexc.c */
F2CSUB dtrexc_(char *compq, integer *n, doublereal *t, integer *
	ldt, doublereal *q, integer *ldq, integer *ifst, integer *ilst, 
	doublereal *work, integer *info);

/* dtrrfs.c */
F2CSUB dtrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dtrsen.c */
F2CSUB dtrsen_(char *job, char *compq, logical *select, integer 
	*n, doublereal *t, integer *ldt, doublereal *q, integer *ldq, 
	doublereal *wr, doublereal *wi, integer *m, doublereal *s, doublereal 
	*sep, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);

/* dtrsna.c */
F2CSUB dtrsna_(char *job, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, doublereal *s, doublereal *sep, 
	integer *mm, integer *m, doublereal *work, integer *ldwork, integer *
	iwork, integer *info);

/* dtrsyl.c */
F2CSUB dtrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *c__, integer *ldc, doublereal *scale, integer *info);

/* dtrti2.c */
F2CSUB dtrti2_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);

/* dtrtri.c */
F2CSUB dtrtri_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);

/* dtrtrs.c */
F2CSUB dtrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, integer *info);

/* dtrttf.c */
F2CSUB dtrttf_(char *transr, char *uplo, integer *n, doublereal 
	*a, integer *lda, doublereal *arf, integer *info);

/* dtrttp.c */
F2CSUB dtrttp_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *ap, integer *info);

/* dtzrqf.c */
F2CSUB dtzrqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, integer *info);

/* dtzrzf.c */
F2CSUB dtzrzf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dzsum1.c */
doublereal dzsum1_(integer *n, doublecomplex *cx, integer *incx);

/* icmax1.c */
integer icmax1_(integer *n, complex *cx, integer *incx);

/* ieeeck.c */
integer ieeeck_(integer *ispec, real *zero, real *one);

/* ilaclc.c */
integer ilaclc_(integer *m, integer *n, complex *a, integer *lda);

/* ilaclr.c */
integer ilaclr_(integer *m, integer *n, complex *a, integer *lda);

/* iladiag.c */
integer iladiag_(char *diag);

/* iladlc.c */
integer iladlc_(integer *m, integer *n, doublereal *a, integer *lda);

/* iladlr.c */
integer iladlr_(integer *m, integer *n, doublereal *a, integer *lda);

/* ilaenv.c */
integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4);

/* ilaprec.c */
integer ilaprec_(char *prec);

/* ilaslc.c */
integer ilaslc_(integer *m, integer *n, real *a, integer *lda);

/* ilaslr.c */
integer ilaslr_(integer *m, integer *n, real *a, integer *lda);

/* ilatrans.c */
integer ilatrans_(char *trans);

/* ilauplo.c */
integer ilauplo_(char *uplo);

/* ilaver.c */
F2CSUB ilaver_(integer *vers_major__, integer *vers_minor__, 
	integer *vers_patch__);

/* ilazlc.c */
integer ilazlc_(integer *m, integer *n, doublecomplex *a, integer *lda);

/* ilazlr.c */
integer ilazlr_(integer *m, integer *n, doublecomplex *a, integer *lda);

/* iparmq.c */
integer iparmq_(integer *ispec, char *name__, char *opts, integer *n, integer 
	*ilo, integer *ihi, integer *lwork);

/* izmax1.c */
integer izmax1_(integer *n, doublecomplex *cx, integer *incx);

/* lsamen.c */
logical lsamen_(integer *n, char *ca, char *cb);

/* maxloc.c */
integer smaxloc_(real *a, integer *dimm);

integer dmaxloc_(doublereal *a, integer *dimm);

/* sbdsdc.c */
F2CSUB sbdsdc_(char *uplo, char *compq, integer *n, real *d__, 
	real *e, real *u, integer *ldu, real *vt, integer *ldvt, real *q, 
	integer *iq, real *work, integer *iwork, integer *info);

/* sbdsqr.c */
F2CSUB sbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real *d__, real *e, real *vt, integer *ldvt, real *
	u, integer *ldu, real *c__, integer *ldc, real *work, integer *info);

/* scsum1.c */
doublereal scsum1_(integer *n, complex *cx, integer *incx);

/* sdisna.c */
F2CSUB sdisna_(char *job, integer *m, integer *n, real *d__, 
	real *sep, integer *info);

/* second.c */
doublereal second_();

/* sgbbrd.c */
F2CSUB sgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, real *ab, integer *ldab, real *d__, real *
	e, real *q, integer *ldq, real *pt, integer *ldpt, real *c__, integer 
	*ldc, real *work, integer *info);

/* sgbcon.c */
F2CSUB sgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, integer *ipiv, real *anorm, real *rcond, 
	real *work, integer *iwork, integer *info);

/* sgbequ.c */
F2CSUB sgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real *
	colcnd, real *amax, integer *info);

/* sgbequb.c */
F2CSUB sgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, real *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real 
	*colcnd, real *amax, integer *info);

/* sgbrfs.c */
F2CSUB sgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real *ab, integer *ldab, real *afb, integer *ldafb, 
	 integer *ipiv, real *b, integer *ldb, real *x, integer *ldx, real *
	ferr, real *berr, real *work, integer *iwork, integer *info);

/* sgbrfsx.c */
F2CSUB sgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, real *ab, integer *ldab, real *afb, 
	integer *ldafb, integer *ipiv, real *r__, real *c__, real *b, integer 
	*ldb, real *x, integer *ldx, real *rcond, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, real *work, integer *iwork, integer *info);

/* sgbsv.c */
F2CSUB sgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, real *ab, integer *ldab, integer *ipiv, real *b, integer *ldb, 
	integer *info);

/* sgbsvx.c */
F2CSUB sgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, real *ab, integer *ldab, real *afb, 
	integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	real *b, integer *ldb, real *x, integer *ldx, real *rcond, real *ferr, 
	 real *berr, real *work, integer *iwork, integer *info);

/* sgbsvxx.c */
F2CSUB sgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, real *ab, integer *ldab, real *afb, 
	integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	real *b, integer *ldb, real *x, integer *ldx, real *rcond, real *
	rpvgrw, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	real *err_bnds_comp__, integer *nparams, real *params, real *work, 
	integer *iwork, integer *info);

/* sgbtf2.c */
F2CSUB sgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, integer *ipiv, integer *info);

/* sgbtrf.c */
F2CSUB sgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, integer *ipiv, integer *info);

/* sgbtrs.c */
F2CSUB sgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real *ab, integer *ldab, integer *ipiv, real *b, 
	integer *ldb, integer *info);

/* sgebak.c */
F2CSUB sgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *scale, integer *m, real *v, integer *ldv, integer 
	*info);

/* sgebal.c */
F2CSUB sgebal_(char *job, integer *n, real *a, integer *lda, 
	integer *ilo, integer *ihi, real *scale, integer *info);

/* sgebd2.c */
F2CSUB sgebd2_(integer *m, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tauq, real *taup, real *work, integer *info);

/* sgebrd.c */
F2CSUB sgebrd_(integer *m, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tauq, real *taup, real *work, integer *
	lwork, integer *info);

/* sgecon.c */
F2CSUB sgecon_(char *norm, integer *n, real *a, integer *lda, 
	real *anorm, real *rcond, real *work, integer *iwork, integer *info);

/* sgeequ.c */
F2CSUB sgeequ_(integer *m, integer *n, real *a, integer *lda, 
	real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, integer 
	*info);

/* sgeequb.c */
F2CSUB sgeequb_(integer *m, integer *n, real *a, integer *lda, 
	real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, integer 
	*info);

/* sgees.c */
F2CSUB sgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	real *a, integer *lda, integer *sdim, real *wr, real *wi, real *vs, 
	integer *ldvs, real *work, integer *lwork, logical *bwork, integer *
	info);

/* sgeesx.c */
F2CSUB sgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, real *a, integer *lda, integer *sdim, real *wr, 
	real *wi, real *vs, integer *ldvs, real *rconde, real *rcondv, real *
	work, integer *lwork, integer *iwork, integer *liwork, logical *bwork, 
	 integer *info);

/* sgeev.c */
F2CSUB sgeev_(char *jobvl, char *jobvr, integer *n, real *a, 
	integer *lda, real *wr, real *wi, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, real *work, integer *lwork, integer *info);

/* sgeevx.c */
F2CSUB sgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real *a, integer *lda, real *wr, real *wi, real *
	vl, integer *ldvl, real *vr, integer *ldvr, integer *ilo, integer *
	ihi, real *scale, real *abnrm, real *rconde, real *rcondv, real *work, 
	 integer *lwork, integer *iwork, integer *info);

/* sgegs.c */
F2CSUB sgegs_(char *jobvsl, char *jobvsr, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, real *alphar, real *alphai, real 
	*beta, real *vsl, integer *ldvsl, real *vsr, integer *ldvsr, real *
	work, integer *lwork, integer *info);

/* sgegv.c */
F2CSUB sgegv_(char *jobvl, char *jobvr, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, real *alphar, real *alphai, real 
	*beta, real *vl, integer *ldvl, real *vr, integer *ldvr, real *work, 
	integer *lwork, integer *info);

/* sgehd2.c */
F2CSUB sgehd2_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sgehrd.c */
F2CSUB sgehrd_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sgejsv.c */
F2CSUB sgejsv_(char *joba, char *jobu, char *jobv, char *jobr, 
	char *jobt, char *jobp, integer *m, integer *n, real *a, integer *lda, 
	 real *sva, real *u, integer *ldu, real *v, integer *ldv, real *work, 
	integer *lwork, integer *iwork, integer *info);

/* sgelq2.c */
F2CSUB sgelq2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgelqf.c */
F2CSUB sgelqf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgels.c */
F2CSUB sgels_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *b, integer *ldb, real *work, 
	integer *lwork, integer *info);

/* sgelsd.c */
F2CSUB sgelsd_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *s, real *rcond, integer *
	rank, real *work, integer *lwork, integer *iwork, integer *info);

/* sgelss.c */
F2CSUB sgelss_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *s, real *rcond, integer *
	rank, real *work, integer *lwork, integer *info);

/* sgelsx.c */
F2CSUB sgelsx_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *jpvt, real *rcond, 
	integer *rank, real *work, integer *info);

/* sgelsy.c */
F2CSUB sgelsy_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *jpvt, real *rcond, 
	integer *rank, real *work, integer *lwork, integer *info);

/* sgeql2.c */
F2CSUB sgeql2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgeqlf.c */
F2CSUB sgeqlf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgeqp3.c */
F2CSUB sgeqp3_(integer *m, integer *n, real *a, integer *lda, 
	integer *jpvt, real *tau, real *work, integer *lwork, integer *info);

/* sgeqpf.c */
F2CSUB sgeqpf_(integer *m, integer *n, real *a, integer *lda, 
	integer *jpvt, real *tau, real *work, integer *info);

/* sgeqr2.c */
F2CSUB sgeqr2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgeqrf.c */
F2CSUB sgeqrf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgerfs.c */
F2CSUB sgerfs_(char *trans, integer *n, integer *nrhs, real *a, 
	integer *lda, real *af, integer *ldaf, integer *ipiv, real *b, 
	integer *ldb, real *x, integer *ldx, real *ferr, real *berr, real *
	work, integer *iwork, integer *info);

/* sgerfsx.c */
F2CSUB sgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	real *r__, real *c__, real *b, integer *ldb, real *x, integer *ldx, 
	real *rcond, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	 real *err_bnds_comp__, integer *nparams, real *params, real *work, 
	integer *iwork, integer *info);

/* sgerq2.c */
F2CSUB sgerq2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgerqf.c */
F2CSUB sgerqf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgesc2.c */
F2CSUB sgesc2_(integer *n, real *a, integer *lda, real *rhs, 
	integer *ipiv, integer *jpiv, real *scale);

/* sgesdd.c */
F2CSUB sgesdd_(char *jobz, integer *m, integer *n, real *a, 
	integer *lda, real *s, real *u, integer *ldu, real *vt, integer *ldvt, 
	 real *work, integer *lwork, integer *iwork, integer *info);

/* sgesv.c */
F2CSUB sgesv_(integer *n, integer *nrhs, real *a, integer *lda, 
	integer *ipiv, real *b, integer *ldb, integer *info);

/* sgesvd.c */
F2CSUB sgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	real *a, integer *lda, real *s, real *u, integer *ldu, real *vt, 
	integer *ldvt, real *work, integer *lwork, integer *info);

/* sgesvj.c */
F2CSUB sgesvj_(char *joba, char *jobu, char *jobv, integer *m, 
	integer *n, real *a, integer *lda, real *sva, integer *mv, real *v, 
	integer *ldv, real *work, integer *lwork, integer *info);

/* sgesvx.c */
F2CSUB sgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	char *equed, real *r__, real *c__, real *b, integer *ldb, real *x, 
	integer *ldx, real *rcond, real *ferr, real *berr, real *work, 
	integer *iwork, integer *info);

/* sgesvxx.c */
F2CSUB sgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	char *equed, real *r__, real *c__, real *b, integer *ldb, real *x, 
	integer *ldx, real *rcond, real *rpvgrw, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, real *work, integer *iwork, integer *info);

/* sgetc2.c */
F2CSUB sgetc2_(integer *n, real *a, integer *lda, integer *ipiv, 
	 integer *jpiv, integer *info);

/* sgetf2.c */
F2CSUB sgetf2_(integer *m, integer *n, real *a, integer *lda, 
	integer *ipiv, integer *info);

/* sgetrf.c */
F2CSUB sgetrf_(integer *m, integer *n, real *a, integer *lda, 
	integer *ipiv, integer *info);

/* sgetri.c */
F2CSUB sgetri_(integer *n, real *a, integer *lda, integer *ipiv, 
	 real *work, integer *lwork, integer *info);

/* sgetrs.c */
F2CSUB sgetrs_(char *trans, integer *n, integer *nrhs, real *a, 
	integer *lda, integer *ipiv, real *b, integer *ldb, integer *info);

/* sggbak.c */
F2CSUB sggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *lscale, real *rscale, integer *m, real *v, 
	integer *ldv, integer *info);

/* sggbal.c */
F2CSUB sggbal_(char *job, integer *n, real *a, integer *lda, 
	real *b, integer *ldb, integer *ilo, integer *ihi, real *lscale, real 
	*rscale, real *work, integer *info);

/* sgges.c */
F2CSUB sgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, real *a, integer *lda, real *b, integer *ldb, 
	integer *sdim, real *alphar, real *alphai, real *beta, real *vsl, 
	integer *ldvsl, real *vsr, integer *ldvsr, real *work, integer *lwork, 
	 logical *bwork, integer *info);

/* sggesx.c */
F2CSUB sggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, real *a, integer *lda, real *b, 
	integer *ldb, integer *sdim, real *alphar, real *alphai, real *beta, 
	real *vsl, integer *ldvsl, real *vsr, integer *ldvsr, real *rconde, 
	real *rcondv, real *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);

/* sggev.c */
F2CSUB sggev_(char *jobvl, char *jobvr, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, real *alphar, real *alphai, real 
	*beta, real *vl, integer *ldvl, real *vr, integer *ldvr, real *work, 
	integer *lwork, integer *info);

/* sggevx.c */
F2CSUB sggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real *a, integer *lda, real *b, integer *ldb, real 
	*alphar, real *alphai, real *beta, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, integer *ilo, integer *ihi, real *lscale, real *rscale, 
	 real *abnrm, real *bbnrm, real *rconde, real *rcondv, real *work, 
	integer *lwork, integer *iwork, logical *bwork, integer *info);

/* sggglm.c */
F2CSUB sggglm_(integer *n, integer *m, integer *p, real *a, 
	integer *lda, real *b, integer *ldb, real *d__, real *x, real *y, 
	real *work, integer *lwork, integer *info);

/* sgghrd.c */
F2CSUB sgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, real *a, integer *lda, real *b, integer *ldb, real 
	*q, integer *ldq, real *z__, integer *ldz, integer *info);

/* sgglse.c */
F2CSUB sgglse_(integer *m, integer *n, integer *p, real *a, 
	integer *lda, real *b, integer *ldb, real *c__, real *d__, real *x, 
	real *work, integer *lwork, integer *info);

/* sggqrf.c */
F2CSUB sggqrf_(integer *n, integer *m, integer *p, real *a, 
	integer *lda, real *taua, real *b, integer *ldb, real *taub, real *
	work, integer *lwork, integer *info);

/* sggrqf.c */
F2CSUB sggrqf_(integer *m, integer *p, integer *n, real *a, 
	integer *lda, real *taua, real *b, integer *ldb, real *taub, real *
	work, integer *lwork, integer *info);

/* sggsvd.c */
F2CSUB sggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, real *a, integer *lda, 
	 real *b, integer *ldb, real *alpha, real *beta, real *u, integer *
	ldu, real *v, integer *ldv, real *q, integer *ldq, real *work, 
	integer *iwork, integer *info);

/* sggsvp.c */
F2CSUB sggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, real *a, integer *lda, real *b, integer *ldb, 
	real *tola, real *tolb, integer *k, integer *l, real *u, integer *ldu, 
	 real *v, integer *ldv, real *q, integer *ldq, integer *iwork, real *
	tau, real *work, integer *info);

/* sgsvj0.c */
F2CSUB sgsvj0_(char *jobv, integer *m, integer *n, real *a, 
	integer *lda, real *d__, real *sva, integer *mv, real *v, integer *
	ldv, real *eps, real *sfmin, real *tol, integer *nsweep, real *work, 
	integer *lwork, integer *info);

/* sgsvj1.c */
F2CSUB sgsvj1_(char *jobv, integer *m, integer *n, integer *n1, 
	real *a, integer *lda, real *d__, real *sva, integer *mv, real *v, 
	integer *ldv, real *eps, real *sfmin, real *tol, integer *nsweep, 
	real *work, integer *lwork, integer *info);

/* sgtcon.c */
F2CSUB sgtcon_(char *norm, integer *n, real *dl, real *d__, 
	real *du, real *du2, integer *ipiv, real *anorm, real *rcond, real *
	work, integer *iwork, integer *info);

/* sgtrfs.c */
F2CSUB sgtrfs_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *dlf, real *df, real *duf, real *du2, 
	integer *ipiv, real *b, integer *ldb, real *x, integer *ldx, real *
	ferr, real *berr, real *work, integer *iwork, integer *info);

/* sgtsv.c */
F2CSUB sgtsv_(integer *n, integer *nrhs, real *dl, real *d__, 
	real *du, real *b, integer *ldb, integer *info);

/* sgtsvx.c */
F2CSUB sgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, real *dl, real *d__, real *du, real *dlf, real *df, real *duf, 
	real *du2, integer *ipiv, real *b, integer *ldb, real *x, integer *
	ldx, real *rcond, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* sgttrf.c */
F2CSUB sgttrf_(integer *n, real *dl, real *d__, real *du, real *
	du2, integer *ipiv, integer *info);

/* sgttrs.c */
F2CSUB sgttrs_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *du2, integer *ipiv, real *b, integer *ldb, 
	 integer *info);

/* sgtts2.c */
F2CSUB sgtts2_(integer *itrans, integer *n, integer *nrhs, real 
	*dl, real *d__, real *du, real *du2, integer *ipiv, real *b, integer *
	ldb);

/* shgeqz.c */
F2CSUB shgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *t, integer 
	*ldt, real *alphar, real *alphai, real *beta, real *q, integer *ldq, 
	real *z__, integer *ldz, real *work, integer *lwork, integer *info);

/* shsein.c */
F2CSUB shsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, real *h__, integer *ldh, real *wr, real *wi, real 
	*vl, integer *ldvl, real *vr, integer *ldvr, integer *mm, integer *m, 
	real *work, integer *ifaill, integer *ifailr, integer *info);

/* shseqr.c */
F2CSUB shseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, real *h__, integer *ldh, real *wr, real *wi, real *z__, 
	 integer *ldz, real *work, integer *lwork, integer *info);

/* sisnan.c */
logical sisnan_(real *sin__);

/* sla_gbamv.c */
F2CSUB sla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, real *alpha, real *ab, integer *ldab, real *
	x, integer *incx, real *beta, real *y, integer *incy);

/* sla_gbrcond.c */
doublereal sla_gbrcond__(char *trans, integer *n, integer *kl, integer *ku, 
	real *ab, integer *ldab, real *afb, integer *ldafb, integer *ipiv, 
	integer *cmode, real *c__, integer *info, real *work, integer *iwork, 
	ftnlen trans_len);

/* sla_gbrfsx_extended.c */
F2CSUB sla_gbrfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *kl, integer *ku, integer *nrhs, 
	real *ab, integer *ldab, real *afb, integer *ldafb, integer *ipiv, 
	logical *colequ, real *c__, real *b, integer *ldb, real *y, integer *
	ldy, real *berr_out__, integer *n_norms__, real *err_bnds_norm__, 
	real *err_bnds_comp__, real *res, real *ayb, real *dy, real *y_tail__,
	 real *rcond, integer *ithresh, real *rthresh, real *dz_ub__, logical 
	*ignore_cwise__, integer *info);

/* sla_gbrpvgrw.c */
doublereal sla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, real *ab, integer *ldab, real *afb, integer *ldafb);

/* sla_geamv.c */
F2CSUB sla_geamv__(integer *trans, integer *m, integer *n, real 
	*alpha, real *a, integer *lda, real *x, integer *incx, real *beta, 
	real *y, integer *incy);

/* sla_gercond.c */
doublereal sla_gercond__(char *trans, integer *n, real *a, integer *lda, real 
	*af, integer *ldaf, integer *ipiv, integer *cmode, real *c__, integer 
	*info, real *work, integer *iwork, ftnlen trans_len);

/* sla_gerfsx_extended.c */
F2CSUB sla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, real *a, integer *lda, real *
	af, integer *ldaf, integer *ipiv, logical *colequ, real *c__, real *b,
	 integer *ldb, real *y, integer *ldy, real *berr_out__, integer *
	n_norms__, real *err_bnds_norm__, real *err_bnds_comp__, real *res, 
	real *ayb, real *dy, real *y_tail__, real *rcond, integer *ithresh, 
	real *rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info);

/* sla_lin_berr.c */
F2CSUB sla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	real *res, real *ayb, real *berr);

/* sla_porcond.c */
doublereal sla_porcond__(char *uplo, integer *n, real *a, integer *lda, real *
	af, integer *ldaf, integer *cmode, real *c__, integer *info, real *
	work, integer *iwork, ftnlen uplo_len);

/* sla_porfsx_extended.c */
F2CSUB sla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, real *a, integer *lda, real *af, integer *
	ldaf, logical *colequ, real *c__, real *b, integer *ldb, real *y, 
	integer *ldy, real *berr_out__, integer *n_norms__, real *
	err_bnds_norm__, real *err_bnds_comp__, real *res, real *ayb, real *
	dy, real *y_tail__, real *rcond, integer *ithresh, real *rthresh, 
	real *dz_ub__, logical *ignore_cwise__, integer *info, ftnlen 
	uplo_len);

/* sla_porpvgrw.c */
doublereal sla_porpvgrw__(char *uplo, integer *ncols, real *a, integer *lda, 
	real *af, integer *ldaf, real *work, ftnlen uplo_len);

/* sla_rpvgrw.c */
doublereal sla_rpvgrw__(integer *n, integer *ncols, real *a, integer *lda, 
	real *af, integer *ldaf);

/* sla_syamv.c */
F2CSUB sla_syamv__(integer *uplo, integer *n, real *alpha, real 
	*a, integer *lda, real *x, integer *incx, real *beta, real *y, 
	integer *incy);

/* sla_syrcond.c */
doublereal sla_syrcond__(char *uplo, integer *n, real *a, integer *lda, real *
	af, integer *ldaf, integer *ipiv, integer *cmode, real *c__, integer *
	info, real *work, integer *iwork, ftnlen uplo_len);

/* sla_syrfsx_extended.c */
F2CSUB sla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, real *a, integer *lda, real *af, integer *
	ldaf, integer *ipiv, logical *colequ, real *c__, real *b, integer *
	ldb, real *y, integer *ldy, real *berr_out__, integer *n_norms__, 
	real *err_bnds_norm__, real *err_bnds_comp__, real *res, real *ayb, 
	real *dy, real *y_tail__, real *rcond, integer *ithresh, real *
	rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info, 
	ftnlen uplo_len);

/* sla_syrpvgrw.c */
doublereal sla_syrpvgrw__(char *uplo, integer *n, integer *info, real *a, 
	integer *lda, real *af, integer *ldaf, integer *ipiv, real *work, 
	ftnlen uplo_len);

/* sla_wwaddw.c */
F2CSUB sla_wwaddw__(integer *n, real *x, real *y, real *w);

/* slabad.c */
F2CSUB slabad_(real *small, real *large);

/* slabrd.c */
F2CSUB slabrd_(integer *m, integer *n, integer *nb, real *a, 
	integer *lda, real *d__, real *e, real *tauq, real *taup, real *x, 
	integer *ldx, real *y, integer *ldy);

/* slacn2.c */
F2CSUB slacn2_(integer *n, real *v, real *x, integer *isgn, 
	real *est, integer *kase, integer *isave);

/* slacon.c */
F2CSUB slacon_(integer *n, real *v, real *x, integer *isgn, 
	real *est, integer *kase);

/* slacpy.c */
F2CSUB slacpy_(char *uplo, integer *m, integer *n, real *a, 
	integer *lda, real *b, integer *ldb);

/* sladiv.c */
F2CSUB sladiv_(real *a, real *b, real *c__, real *d__, real *p, 
	real *q);

/* slae2.c */
F2CSUB slae2_(real *a, real *b, real *c__, real *rt1, real *rt2);

/* slaebz.c */
F2CSUB slaebz_(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, real *abstol, real *
	reltol, real *pivmin, real *d__, real *e, real *e2, integer *nval, 
	real *ab, real *c__, integer *mout, integer *nab, real *work, integer 
	*iwork, integer *info);

/* slaed0.c */
F2CSUB slaed0_(integer *icompq, integer *qsiz, integer *n, real 
	*d__, real *e, real *q, integer *ldq, real *qstore, integer *ldqs, 
	real *work, integer *iwork, integer *info);

/* slaed1.c */
F2CSUB slaed1_(integer *n, real *d__, real *q, integer *ldq, 
	integer *indxq, real *rho, integer *cutpnt, real *work, integer *
	iwork, integer *info);

/* slaed2.c */
F2CSUB slaed2_(integer *k, integer *n, integer *n1, real *d__, 
	real *q, integer *ldq, integer *indxq, real *rho, real *z__, real *
	dlamda, real *w, real *q2, integer *indx, integer *indxc, integer *
	indxp, integer *coltyp, integer *info);

/* slaed3.c */
F2CSUB slaed3_(integer *k, integer *n, integer *n1, real *d__, 
	real *q, integer *ldq, real *rho, real *dlamda, real *q2, integer *
	indx, integer *ctot, real *w, real *s, integer *info);

/* slaed4.c */
F2CSUB slaed4_(integer *n, integer *i__, real *d__, real *z__, 
	real *delta, real *rho, real *dlam, integer *info);

/* slaed5.c */
F2CSUB slaed5_(integer *i__, real *d__, real *z__, real *delta, 
	real *rho, real *dlam);

/* slaed6.c */
F2CSUB slaed6_(integer *kniter, logical *orgati, real *rho, 
	real *d__, real *z__, real *finit, real *tau, integer *info);

/* slaed7.c */
F2CSUB slaed7_(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real *d__, real *q, 
	integer *ldq, integer *indxq, real *rho, integer *cutpnt, real *
	qstore, integer *qptr, integer *prmptr, integer *perm, integer *
	givptr, integer *givcol, real *givnum, real *work, integer *iwork, 
	integer *info);

/* slaed8.c */
F2CSUB slaed8_(integer *icompq, integer *k, integer *n, integer 
	*qsiz, real *d__, real *q, integer *ldq, integer *indxq, real *rho, 
	integer *cutpnt, real *z__, real *dlamda, real *q2, integer *ldq2, 
	real *w, integer *perm, integer *givptr, integer *givcol, real *
	givnum, integer *indxp, integer *indx, integer *info);

/* slaed9.c */
F2CSUB slaed9_(integer *k, integer *kstart, integer *kstop, 
	integer *n, real *d__, real *q, integer *ldq, real *rho, real *dlamda, 
	 real *w, real *s, integer *lds, integer *info);

/* slaeda.c */
F2CSUB slaeda_(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, real *givnum, real *q, integer *qptr, real *z__, 
	real *ztemp, integer *info);

/* slaein.c */
F2CSUB slaein_(logical *rightv, logical *noinit, integer *n, 
	real *h__, integer *ldh, real *wr, real *wi, real *vr, real *vi, real 
	*b, integer *ldb, real *work, real *eps3, real *smlnum, real *bignum, 
	integer *info);

/* slaev2.c */
F2CSUB slaev2_(real *a, real *b, real *c__, real *rt1, real *
	rt2, real *cs1, real *sn1);

/* slaexc.c */
F2CSUB slaexc_(logical *wantq, integer *n, real *t, integer *
	ldt, real *q, integer *ldq, integer *j1, integer *n1, integer *n2, 
	real *work, integer *info);

/* slag2.c */
F2CSUB slag2_(real *a, integer *lda, real *b, integer *ldb, 
	real *safmin, real *scale1, real *scale2, real *wr1, real *wr2, real *
	wi);

/* slag2d.c */
F2CSUB slag2d_(integer *m, integer *n, real *sa, integer *ldsa, 
	doublereal *a, integer *lda, integer *info);

/* slags2.c */
F2CSUB slags2_(logical *upper, real *a1, real *a2, real *a3, 
	real *b1, real *b2, real *b3, real *csu, real *snu, real *csv, real *
	snv, real *csq, real *snq);

/* slagtf.c */
F2CSUB slagtf_(integer *n, real *a, real *lambda, real *b, real 
	*c__, real *tol, real *d__, integer *in, integer *info);

/* slagtm.c */
F2CSUB slagtm_(char *trans, integer *n, integer *nrhs, real *
	alpha, real *dl, real *d__, real *du, real *x, integer *ldx, real *
	beta, real *b, integer *ldb);

/* slagts.c */
F2CSUB slagts_(integer *job, integer *n, real *a, real *b, real 
	*c__, real *d__, integer *in, real *y, real *tol, integer *info);

/* slagv2.c */
F2CSUB slagv2_(real *a, integer *lda, real *b, integer *ldb, 
	real *alphar, real *alphai, real *beta, real *csl, real *snl, real *
	csr, real *snr);

/* slahqr.c */
F2CSUB slahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *wr, real *
	wi, integer *iloz, integer *ihiz, real *z__, integer *ldz, integer *
	info);

/* slahr2.c */
F2CSUB slahr2_(integer *n, integer *k, integer *nb, real *a, 
	integer *lda, real *tau, real *t, integer *ldt, real *y, integer *ldy);

/* slahrd.c */
F2CSUB slahrd_(integer *n, integer *k, integer *nb, real *a, 
	integer *lda, real *tau, real *t, integer *ldt, real *y, integer *ldy);

/* slaic1.c */
F2CSUB slaic1_(integer *job, integer *j, real *x, real *sest, 
	real *w, real *gamma, real *sestpr, real *s, real *c__);

/* slaisnan.c */
logical slaisnan_(real *sin1, real *sin2);

/* slaln2.c */
F2CSUB slaln2_(logical *ltrans, integer *na, integer *nw, real *
	smin, real *ca, real *a, integer *lda, real *d1, real *d2, real *b, 
	integer *ldb, real *wr, real *wi, real *x, integer *ldx, real *scale, 
	real *xnorm, integer *info);

/* slals0.c */
F2CSUB slals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, real *b, integer *ldb, real *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real *givnum, integer *ldgnum, real *poles, real *
	difl, real *difr, real *z__, integer *k, real *c__, real *s, real *
	work, integer *info);

/* slalsa.c */
F2CSUB slalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, real *b, integer *ldb, real *bx, integer *ldbx, real *
	u, integer *ldu, real *vt, integer *k, real *difl, real *difr, real *
	z__, real *poles, integer *givptr, integer *givcol, integer *ldgcol, 
	integer *perm, real *givnum, real *c__, real *s, real *work, integer *
	iwork, integer *info);

/* slalsd.c */
F2CSUB slalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, real *d__, real *e, real *b, integer *ldb, real *rcond, 
	integer *rank, real *work, integer *iwork, integer *info);

/* slamch.c */
doublereal slamch_(char *cmach);

F2CSUB slamc1_(integer *beta, integer *t, logical *rnd, logical 
	*ieee1);

F2CSUB slamc2_(integer *beta, integer *t, logical *rnd, real *
	eps, integer *emin, real *rmin, integer *emax, real *rmax);

doublereal slamc3_(real *a, real *b);

F2CSUB slamc4_(integer *emin, real *start, integer *base);

F2CSUB slamc5_(integer *beta, integer *p, integer *emin, 
	logical *ieee, integer *emax, real *rmax);

/* slamrg.c */
F2CSUB slamrg_(integer *n1, integer *n2, real *a, integer *
	strd1, integer *strd2, integer *index);

/* slaneg.c */
integer slaneg_(integer *n, real *d__, real *lld, real *sigma, real *pivmin, 
	integer *r__);

/* slangb.c */
doublereal slangb_(char *norm, integer *n, integer *kl, integer *ku, real *ab, 
	 integer *ldab, real *work);

/* slange.c */
doublereal slange_(char *norm, integer *m, integer *n, real *a, integer *lda, 
	real *work);

/* slangt.c */
doublereal slangt_(char *norm, integer *n, real *dl, real *d__, real *du);

/* slanhs.c */
doublereal slanhs_(char *norm, integer *n, real *a, integer *lda, real *work);

/* slansb.c */
doublereal slansb_(char *norm, char *uplo, integer *n, integer *k, real *ab, 
	integer *ldab, real *work);

/* slansf.c */
doublereal slansf_(char *norm, char *transr, char *uplo, integer *n, real *a, 
	real *work);

/* slansp.c */
doublereal slansp_(char *norm, char *uplo, integer *n, real *ap, real *work);

/* slanst.c */
doublereal slanst_(char *norm, integer *n, real *d__, real *e);

/* slansy.c */
doublereal slansy_(char *norm, char *uplo, integer *n, real *a, integer *lda, 
	real *work);

/* slantb.c */
doublereal slantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 real *ab, integer *ldab, real *work);

/* slantp.c */
doublereal slantp_(char *norm, char *uplo, char *diag, integer *n, real *ap, 
	real *work);

/* slantr.c */
doublereal slantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 real *a, integer *lda, real *work);

/* slanv2.c */
F2CSUB slanv2_(real *a, real *b, real *c__, real *d__, real *
	rt1r, real *rt1i, real *rt2r, real *rt2i, real *cs, real *sn);

/* slapll.c */
F2CSUB slapll_(integer *n, real *x, integer *incx, real *y, 
	integer *incy, real *ssmin);

/* slapmt.c */
F2CSUB slapmt_(logical *forwrd, integer *m, integer *n, real *x, 
	 integer *ldx, integer *k);

/* slapy2.c */
doublereal slapy2_(real *x, real *y);

/* slapy3.c */
doublereal slapy3_(real *x, real *y, real *z__);

/* slaqgb.c */
F2CSUB slaqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real *
	colcnd, real *amax, char *equed);

/* slaqge.c */
F2CSUB slaqge_(integer *m, integer *n, real *a, integer *lda, 
	real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, char *
	equed);

/* slaqp2.c */
F2CSUB slaqp2_(integer *m, integer *n, integer *offset, real *a, 
	 integer *lda, integer *jpvt, real *tau, real *vn1, real *vn2, real *
	work);

/* slaqps.c */
F2CSUB slaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, real *a, integer *lda, integer *jpvt, real *tau, 
	real *vn1, real *vn2, real *auxv, real *f, integer *ldf);

/* slaqr0.c */
F2CSUB slaqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *wr, real *
	wi, integer *iloz, integer *ihiz, real *z__, integer *ldz, real *work, 
	 integer *lwork, integer *info);

/* slaqr1.c */
F2CSUB slaqr1_(integer *n, real *h__, integer *ldh, real *sr1, 
	real *si1, real *sr2, real *si2, real *v);

/* slaqr2.c */
F2CSUB slaqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, real *h__, integer *ldh, 
	integer *iloz, integer *ihiz, real *z__, integer *ldz, integer *ns, 
	integer *nd, real *sr, real *si, real *v, integer *ldv, integer *nh, 
	real *t, integer *ldt, integer *nv, real *wv, integer *ldwv, real *
	work, integer *lwork);

/* slaqr3.c */
F2CSUB slaqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, real *h__, integer *ldh, 
	integer *iloz, integer *ihiz, real *z__, integer *ldz, integer *ns, 
	integer *nd, real *sr, real *si, real *v, integer *ldv, integer *nh, 
	real *t, integer *ldt, integer *nv, real *wv, integer *ldwv, real *
	work, integer *lwork);

/* slaqr4.c */
F2CSUB slaqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *wr, real *
	wi, integer *iloz, integer *ihiz, real *z__, integer *ldz, real *work, 
	 integer *lwork, integer *info);

/* slaqr5.c */
F2CSUB slaqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, real *sr, 
	real *si, real *h__, integer *ldh, integer *iloz, integer *ihiz, real 
	*z__, integer *ldz, real *v, integer *ldv, real *u, integer *ldu, 
	integer *nv, real *wv, integer *ldwv, integer *nh, real *wh, integer *
	ldwh);

/* slaqsb.c */
F2CSUB slaqsb_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, real *s, real *scond, real *amax, char *equed);

/* slaqsp.c */
F2CSUB slaqsp_(char *uplo, integer *n, real *ap, real *s, real *
	scond, real *amax, char *equed);

/* slaqsy.c */
F2CSUB slaqsy_(char *uplo, integer *n, real *a, integer *lda, 
	real *s, real *scond, real *amax, char *equed);

/* slaqtr.c */
F2CSUB slaqtr_(logical *ltran, logical *lreal, integer *n, real 
	*t, integer *ldt, real *b, real *w, real *scale, real *x, real *work, 
	integer *info);

/* slar1v.c */
F2CSUB slar1v_(integer *n, integer *b1, integer *bn, real *
	lambda, real *d__, real *l, real *ld, real *lld, real *pivmin, real *
	gaptol, real *z__, logical *wantnc, integer *negcnt, real *ztz, real *
	mingma, integer *r__, integer *isuppz, real *nrminv, real *resid, 
	real *rqcorr, real *work);

/* slar2v.c */
F2CSUB slar2v_(integer *n, real *x, real *y, real *z__, integer 
	*incx, real *c__, real *s, integer *incc);

/* slarf.c */
F2CSUB slarf_(char *side, integer *m, integer *n, real *v, 
	integer *incv, real *tau, real *c__, integer *ldc, real *work);

/* slarfb.c */
F2CSUB slarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, real *v, integer *ldv, 
	real *t, integer *ldt, real *c__, integer *ldc, real *work, integer *
	ldwork);

/* slarfg.c */
F2CSUB slarfg_(integer *n, real *alpha, real *x, integer *incx, 
	real *tau);

/* slarfp.c */
F2CSUB slarfp_(integer *n, real *alpha, real *x, integer *incx, 
	real *tau);

/* slarft.c */
F2CSUB slarft_(char *direct, char *storev, integer *n, integer *
	k, real *v, integer *ldv, real *tau, real *t, integer *ldt);

/* slarfx.c */
F2CSUB slarfx_(char *side, integer *m, integer *n, real *v, 
	real *tau, real *c__, integer *ldc, real *work);

/* slargv.c */
F2CSUB slargv_(integer *n, real *x, integer *incx, real *y, 
	integer *incy, real *c__, integer *incc);

/* slarnv.c */
F2CSUB slarnv_(integer *idist, integer *iseed, integer *n, real 
	*x);

/* slarra.c */
F2CSUB slarra_(integer *n, real *d__, real *e, real *e2, real *
	spltol, real *tnrm, integer *nsplit, integer *isplit, integer *info);

/* slarrb.c */
F2CSUB slarrb_(integer *n, real *d__, real *lld, integer *
	ifirst, integer *ilast, real *rtol1, real *rtol2, integer *offset, 
	real *w, real *wgap, real *werr, real *work, integer *iwork, real *
	pivmin, real *spdiam, integer *twist, integer *info);

/* slarrc.c */
F2CSUB slarrc_(char *jobt, integer *n, real *vl, real *vu, real 
	*d__, real *e, real *pivmin, integer *eigcnt, integer *lcnt, integer *
	rcnt, integer *info);

/* slarrd.c */
F2CSUB slarrd_(char *range, char *order, integer *n, real *vl, 
	real *vu, integer *il, integer *iu, real *gers, real *reltol, real *
	d__, real *e, real *e2, real *pivmin, integer *nsplit, integer *
	isplit, integer *m, real *w, real *werr, real *wl, real *wu, integer *
	iblock, integer *indexw, real *work, integer *iwork, integer *info);

/* slarre.c */
F2CSUB slarre_(char *range, integer *n, real *vl, real *vu, 
	integer *il, integer *iu, real *d__, real *e, real *e2, real *rtol1, 
	real *rtol2, real *spltol, integer *nsplit, integer *isplit, integer *
	m, real *w, real *werr, real *wgap, integer *iblock, integer *indexw, 
	real *gers, real *pivmin, real *work, integer *iwork, integer *info);

/* slarrf.c */
F2CSUB slarrf_(integer *n, real *d__, real *l, real *ld, 
	integer *clstrt, integer *clend, real *w, real *wgap, real *werr, 
	real *spdiam, real *clgapl, real *clgapr, real *pivmin, real *sigma, 
	real *dplus, real *lplus, real *work, integer *info);

/* slarrj.c */
F2CSUB slarrj_(integer *n, real *d__, real *e2, integer *ifirst, 
	 integer *ilast, real *rtol, integer *offset, real *w, real *werr, 
	real *work, integer *iwork, real *pivmin, real *spdiam, integer *info);

/* slarrk.c */
F2CSUB slarrk_(integer *n, integer *iw, real *gl, real *gu, 
	real *d__, real *e2, real *pivmin, real *reltol, real *w, real *werr, 
	integer *info);

/* slarrr.c */
F2CSUB slarrr_(integer *n, real *d__, real *e, integer *info);

/* slarrv.c */
F2CSUB slarrv_(integer *n, real *vl, real *vu, real *d__, real *
	l, real *pivmin, integer *isplit, integer *m, integer *dol, integer *
	dou, real *minrgp, real *rtol1, real *rtol2, real *w, real *werr, 
	real *wgap, integer *iblock, integer *indexw, real *gers, real *z__, 
	integer *ldz, integer *isuppz, real *work, integer *iwork, integer *
	info);

/* slarscl2.c */
F2CSUB slarscl2_(integer *m, integer *n, real *d__, real *x, 
	integer *ldx);

/* slartg.c */
F2CSUB slartg_(real *f, real *g, real *cs, real *sn, real *r__);

/* slartv.c */
F2CSUB slartv_(integer *n, real *x, integer *incx, real *y, 
	integer *incy, real *c__, real *s, integer *incc);

/* slaruv.c */
F2CSUB slaruv_(integer *iseed, integer *n, real *x);

/* slarz.c */
F2CSUB slarz_(char *side, integer *m, integer *n, integer *l, 
	real *v, integer *incv, real *tau, real *c__, integer *ldc, real *
	work);

/* slarzb.c */
F2CSUB slarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, real *v, 
	integer *ldv, real *t, integer *ldt, real *c__, integer *ldc, real *
	work, integer *ldwork);

/* slarzt.c */
F2CSUB slarzt_(char *direct, char *storev, integer *n, integer *
	k, real *v, integer *ldv, real *tau, real *t, integer *ldt);

/* slas2.c */
F2CSUB slas2_(real *f, real *g, real *h__, real *ssmin, real *
	ssmax);

/* slascl.c */
F2CSUB slascl_(char *type__, integer *kl, integer *ku, real *
	cfrom, real *cto, integer *m, integer *n, real *a, integer *lda, 
	integer *info);

/* slascl2.c */
F2CSUB slascl2_(integer *m, integer *n, real *d__, real *x, 
	integer *ldx);

/* slasd0.c */
F2CSUB slasd0_(integer *n, integer *sqre, real *d__, real *e, 
	real *u, integer *ldu, real *vt, integer *ldvt, integer *smlsiz, 
	integer *iwork, real *work, integer *info);

/* slasd1.c */
F2CSUB slasd1_(integer *nl, integer *nr, integer *sqre, real *
	d__, real *alpha, real *beta, real *u, integer *ldu, real *vt, 
	integer *ldvt, integer *idxq, integer *iwork, real *work, integer *
	info);

/* slasd2.c */
F2CSUB slasd2_(integer *nl, integer *nr, integer *sqre, integer 
	*k, real *d__, real *z__, real *alpha, real *beta, real *u, integer *
	ldu, real *vt, integer *ldvt, real *dsigma, real *u2, integer *ldu2, 
	real *vt2, integer *ldvt2, integer *idxp, integer *idx, integer *idxc, 
	 integer *idxq, integer *coltyp, integer *info);

/* slasd3.c */
F2CSUB slasd3_(integer *nl, integer *nr, integer *sqre, integer 
	*k, real *d__, real *q, integer *ldq, real *dsigma, real *u, integer *
	ldu, real *u2, integer *ldu2, real *vt, integer *ldvt, real *vt2, 
	integer *ldvt2, integer *idxc, integer *ctot, real *z__, integer *
	info);

/* slasd4.c */
F2CSUB slasd4_(integer *n, integer *i__, real *d__, real *z__, 
	real *delta, real *rho, real *sigma, real *work, integer *info);

/* slasd5.c */
F2CSUB slasd5_(integer *i__, real *d__, real *z__, real *delta, 
	real *rho, real *dsigma, real *work);

/* slasd6.c */
F2CSUB slasd6_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, real *d__, real *vf, real *vl, real *alpha, real *beta, 
	 integer *idxq, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real *givnum, integer *ldgnum, real *poles, real *
	difl, real *difr, real *z__, integer *k, real *c__, real *s, real *
	work, integer *iwork, integer *info);

/* slasd7.c */
F2CSUB slasd7_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, real *d__, real *z__, real *zw, real *vf, 
	real *vfw, real *vl, real *vlw, real *alpha, real *beta, real *dsigma, 
	 integer *idx, integer *idxp, integer *idxq, integer *perm, integer *
	givptr, integer *givcol, integer *ldgcol, real *givnum, integer *
	ldgnum, real *c__, real *s, integer *info);

/* slasd8.c */
F2CSUB slasd8_(integer *icompq, integer *k, real *d__, real *
	z__, real *vf, real *vl, real *difl, real *difr, integer *lddifr, 
	real *dsigma, real *work, integer *info);

/* slasda.c */
F2CSUB slasda_(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, real *d__, real *e, real *u, integer *ldu, real *vt, 
	integer *k, real *difl, real *difr, real *z__, real *poles, integer *
	givptr, integer *givcol, integer *ldgcol, integer *perm, real *givnum, 
	 real *c__, real *s, real *work, integer *iwork, integer *info);

/* slasdq.c */
F2CSUB slasdq_(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, real *d__, real *e, real *vt, 
	integer *ldvt, real *u, integer *ldu, real *c__, integer *ldc, real *
	work, integer *info);

/* slasdt.c */
F2CSUB slasdt_(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);

/* slaset.c */
F2CSUB slaset_(char *uplo, integer *m, integer *n, real *alpha, 
	real *beta, real *a, integer *lda);

/* slasq1.c */
F2CSUB slasq1_(integer *n, real *d__, real *e, real *work, 
	integer *info);

/* slasq2.c */
F2CSUB slasq2_(integer *n, real *z__, integer *info);

/* slasq3.c */
F2CSUB slasq3_(integer *i0, integer *n0, real *z__, integer *pp, 
	 real *dmin__, real *sigma, real *desig, real *qmax, integer *nfail, 
	integer *iter, integer *ndiv, logical *ieee, integer *ttype, real *
	dmin1, real *dmin2, real *dn, real *dn1, real *dn2, real *g, real *
	tau);

/* slasq4.c */
F2CSUB slasq4_(integer *i0, integer *n0, real *z__, integer *pp, 
	 integer *n0in, real *dmin__, real *dmin1, real *dmin2, real *dn, 
	real *dn1, real *dn2, real *tau, integer *ttype, real *g);

/* slasq5.c */
F2CSUB slasq5_(integer *i0, integer *n0, real *z__, integer *pp, 
	 real *tau, real *dmin__, real *dmin1, real *dmin2, real *dn, real *
	dnm1, real *dnm2, logical *ieee);

/* slasq6.c */
F2CSUB slasq6_(integer *i0, integer *n0, real *z__, integer *pp, 
	 real *dmin__, real *dmin1, real *dmin2, real *dn, real *dnm1, real *
	dnm2);

/* slasr.c */
F2CSUB slasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, real *c__, real *s, real *a, integer *lda);

/* slasrt.c */
F2CSUB slasrt_(char *id, integer *n, real *d__, integer *info);

/* slassq.c */
F2CSUB slassq_(integer *n, real *x, integer *incx, real *scale, 
	real *sumsq);

/* slasv2.c */
F2CSUB slasv2_(real *f, real *g, real *h__, real *ssmin, real *
	ssmax, real *snr, real *csr, real *snl, real *csl);

/* slaswp.c */
F2CSUB slaswp_(integer *n, real *a, integer *lda, integer *k1, 
	integer *k2, integer *ipiv, integer *incx);

/* slasy2.c */
F2CSUB slasy2_(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, real *tl, integer *ldtl, real *tr, integer *
	ldtr, real *b, integer *ldb, real *scale, real *x, integer *ldx, real 
	*xnorm, integer *info);

/* slasyf.c */
F2CSUB slasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 real *a, integer *lda, integer *ipiv, real *w, integer *ldw, integer 
	*info);

/* slatbs.c */
F2CSUB slatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, real *ab, integer *ldab, real *x, 
	real *scale, real *cnorm, integer *info);

/* slatdf.c */
F2CSUB slatdf_(integer *ijob, integer *n, real *z__, integer *
	ldz, real *rhs, real *rdsum, real *rdscal, integer *ipiv, integer *
	jpiv);

/* slatps.c */
F2CSUB slatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real *ap, real *x, real *scale, real *cnorm, 
	integer *info);

/* slatrd.c */
F2CSUB slatrd_(char *uplo, integer *n, integer *nb, real *a, 
	integer *lda, real *e, real *tau, real *w, integer *ldw);

/* slatrs.c */
F2CSUB slatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real *a, integer *lda, real *x, real *scale, real 
	*cnorm, integer *info);

/* slatrz.c */
F2CSUB slatrz_(integer *m, integer *n, integer *l, real *a, 
	integer *lda, real *tau, real *work);

/* slatzm.c */
F2CSUB slatzm_(char *side, integer *m, integer *n, real *v, 
	integer *incv, real *tau, real *c1, real *c2, integer *ldc, real *
	work);

/* slauu2.c */
F2CSUB slauu2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* slauum.c */
F2CSUB slauum_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* sopgtr.c */
F2CSUB sopgtr_(char *uplo, integer *n, real *ap, real *tau, 
	real *q, integer *ldq, real *work, integer *info);

/* sopmtr.c */
F2CSUB sopmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real *ap, real *tau, real *c__, integer *ldc, real *work, 
	integer *info);

/* sorg2l.c */
F2CSUB sorg2l_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorg2r.c */
F2CSUB sorg2r_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorgbr.c */
F2CSUB sorgbr_(char *vect, integer *m, integer *n, integer *k, 
	real *a, integer *lda, real *tau, real *work, integer *lwork, integer 
	*info);

/* sorghr.c */
F2CSUB sorghr_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgl2.c */
F2CSUB sorgl2_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorglq.c */
F2CSUB sorglq_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgql.c */
F2CSUB sorgql_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgqr.c */
F2CSUB sorgqr_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgr2.c */
F2CSUB sorgr2_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorgrq.c */
F2CSUB sorgrq_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgtr.c */
F2CSUB sorgtr_(char *uplo, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sorm2l.c */
F2CSUB sorm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sorm2r.c */
F2CSUB sorm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sormbr.c */
F2CSUB sormbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, real *a, integer *lda, real *tau, real *c__, 
	integer *ldc, real *work, integer *lwork, integer *info);

/* sormhr.c */
F2CSUB sormhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, real *a, integer *lda, real *tau, real *
	c__, integer *ldc, real *work, integer *lwork, integer *info);

/* sorml2.c */
F2CSUB sorml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sormlq.c */
F2CSUB sormlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormql.c */
F2CSUB sormql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormqr.c */
F2CSUB sormqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormr2.c */
F2CSUB sormr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sormr3.c */
F2CSUB sormr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real *a, integer *lda, real *tau, real *c__, 
	integer *ldc, real *work, integer *info);

/* sormrq.c */
F2CSUB sormrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormrz.c */
F2CSUB sormrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real *a, integer *lda, real *tau, real *c__, 
	integer *ldc, real *work, integer *lwork, integer *info);

/* sormtr.c */
F2CSUB sormtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* spbcon.c */
F2CSUB spbcon_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, real *anorm, real *rcond, real *work, integer *iwork, 
	integer *info);

/* spbequ.c */
F2CSUB spbequ_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, real *s, real *scond, real *amax, integer *info);

/* spbrfs.c */
F2CSUB spbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *afb, integer *ldafb, real *b, 
	integer *ldb, real *x, integer *ldx, real *ferr, real *berr, real *
	work, integer *iwork, integer *info);

/* spbstf.c */
F2CSUB spbstf_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, integer *info);

/* spbsv.c */
F2CSUB spbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *b, integer *ldb, integer *info);

/* spbsvx.c */
F2CSUB spbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, real *ab, integer *ldab, real *afb, integer *ldafb, 
	char *equed, real *s, real *b, integer *ldb, real *x, integer *ldx, 
	real *rcond, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* spbtf2.c */
F2CSUB spbtf2_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, integer *info);

/* spbtrf.c */
F2CSUB spbtrf_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, integer *info);

/* spbtrs.c */
F2CSUB spbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *b, integer *ldb, integer *info);

/* spftrf.c */
F2CSUB spftrf_(char *transr, char *uplo, integer *n, real *a, 
	integer *info);

/* spftri.c */
F2CSUB spftri_(char *transr, char *uplo, integer *n, real *a, 
	integer *info);

/* spftrs.c */
F2CSUB spftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, real *a, real *b, integer *ldb, integer *info);

/* spocon.c */
F2CSUB spocon_(char *uplo, integer *n, real *a, integer *lda, 
	real *anorm, real *rcond, real *work, integer *iwork, integer *info);

/* spoequ.c */
F2CSUB spoequ_(integer *n, real *a, integer *lda, real *s, real 
	*scond, real *amax, integer *info);

/* spoequb.c */
F2CSUB spoequb_(integer *n, real *a, integer *lda, real *s, 
	real *scond, real *amax, integer *info);

/* sporfs.c */
F2CSUB sporfs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *af, integer *ldaf, real *b, integer *ldb, real *x, 
	 integer *ldx, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* sporfsx.c */
F2CSUB sporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, real *s, real *
	b, integer *ldb, real *x, integer *ldx, real *rcond, real *berr, 
	integer *n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, 
	integer *nparams, real *params, real *work, integer *iwork, integer *
	info);

/* sposv.c */
F2CSUB sposv_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* sposvx.c */
F2CSUB sposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, char *equed, 
	real *s, real *b, integer *ldb, real *x, integer *ldx, real *rcond, 
	real *ferr, real *berr, real *work, integer *iwork, integer *info);

/* sposvxx.c */
F2CSUB sposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, char *equed, 
	real *s, real *b, integer *ldb, real *x, integer *ldx, real *rcond, 
	real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, real *work, integer *iwork, integer *info);

/* spotf2.c */
F2CSUB spotf2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* spotrf.c */
F2CSUB spotrf_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* spotri.c */
F2CSUB spotri_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* spotrs.c */
F2CSUB spotrs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* sppcon.c */
F2CSUB sppcon_(char *uplo, integer *n, real *ap, real *anorm, 
	real *rcond, real *work, integer *iwork, integer *info);

/* sppequ.c */
F2CSUB sppequ_(char *uplo, integer *n, real *ap, real *s, real *
	scond, real *amax, integer *info);

/* spprfs.c */
F2CSUB spprfs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *afp, real *b, integer *ldb, real *x, integer *ldx, real *ferr, 
	real *berr, real *work, integer *iwork, integer *info);

/* sppsv.c */
F2CSUB sppsv_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *b, integer *ldb, integer *info);

/* sppsvx.c */
F2CSUB sppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *ap, real *afp, char *equed, real *s, real *b, integer *
	ldb, real *x, integer *ldx, real *rcond, real *ferr, real *berr, real 
	*work, integer *iwork, integer *info);

/* spptrf.c */
F2CSUB spptrf_(char *uplo, integer *n, real *ap, integer *info);

/* spptri.c */
F2CSUB spptri_(char *uplo, integer *n, real *ap, integer *info);

/* spptrs.c */
F2CSUB spptrs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *b, integer *ldb, integer *info);

/* spstf2.c */
F2CSUB spstf2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *piv, integer *rank, real *tol, real *work, integer *info);

/* spstrf.c */
F2CSUB spstrf_(char *uplo, integer *n, real *a, integer *lda, 
	integer *piv, integer *rank, real *tol, real *work, integer *info);

/* sptcon.c */
F2CSUB sptcon_(integer *n, real *d__, real *e, real *anorm, 
	real *rcond, real *work, integer *info);

/* spteqr.c */
F2CSUB spteqr_(char *compz, integer *n, real *d__, real *e, 
	real *z__, integer *ldz, real *work, integer *info);

/* sptrfs.c */
F2CSUB sptrfs_(integer *n, integer *nrhs, real *d__, real *e, 
	real *df, real *ef, real *b, integer *ldb, real *x, integer *ldx, 
	real *ferr, real *berr, real *work, integer *info);

/* sptsv.c */
F2CSUB sptsv_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb, integer *info);

/* sptsvx.c */
F2CSUB sptsvx_(char *fact, integer *n, integer *nrhs, real *d__, 
	 real *e, real *df, real *ef, real *b, integer *ldb, real *x, integer 
	*ldx, real *rcond, real *ferr, real *berr, real *work, integer *info);

/* spttrf.c */
F2CSUB spttrf_(integer *n, real *d__, real *e, integer *info);

/* spttrs.c */
F2CSUB spttrs_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb, integer *info);

/* sptts2.c */
F2CSUB sptts2_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb);

/* srscl.c */
F2CSUB srscl_(integer *n, real *sa, real *sx, integer *incx);

/* ssbev.c */
F2CSUB ssbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	real *ab, integer *ldab, real *w, real *z__, integer *ldz, real *work, 
	 integer *info);

/* ssbevd.c */
F2CSUB ssbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	real *ab, integer *ldab, real *w, real *z__, integer *ldz, real *work, 
	 integer *lwork, integer *iwork, integer *liwork, integer *info);

/* ssbevx.c */
F2CSUB ssbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, real *ab, integer *ldab, real *q, integer *ldq, real *vl, 
	 real *vu, integer *il, integer *iu, real *abstol, integer *m, real *
	w, real *z__, integer *ldz, real *work, integer *iwork, integer *
	ifail, integer *info);

/* ssbgst.c */
F2CSUB ssbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, real *ab, integer *ldab, real *bb, integer *ldbb, real *
	x, integer *ldx, real *work, integer *info);

/* ssbgv.c */
F2CSUB ssbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real *ab, integer *ldab, real *bb, integer *ldbb, real *
	w, real *z__, integer *ldz, real *work, integer *info);

/* ssbgvd.c */
F2CSUB ssbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real *ab, integer *ldab, real *bb, integer *ldbb, real *
	w, real *z__, integer *ldz, real *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);

/* ssbgvx.c */
F2CSUB ssbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, real *ab, integer *ldab, real *bb, integer *
	ldbb, real *q, integer *ldq, real *vl, real *vu, integer *il, integer 
	*iu, real *abstol, integer *m, real *w, real *z__, integer *ldz, real 
	*work, integer *iwork, integer *ifail, integer *info);

/* ssbtrd.c */
F2CSUB ssbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	real *ab, integer *ldab, real *d__, real *e, real *q, integer *ldq, 
	real *work, integer *info);

/* ssfrk.c */
F2CSUB ssfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, real *alpha, real *a, integer *lda, real *beta, real *
	c__);

/* sspcon.c */
F2CSUB sspcon_(char *uplo, integer *n, real *ap, integer *ipiv, 
	real *anorm, real *rcond, real *work, integer *iwork, integer *info);

/* sspev.c */
F2CSUB sspev_(char *jobz, char *uplo, integer *n, real *ap, 
	real *w, real *z__, integer *ldz, real *work, integer *info);

/* sspevd.c */
F2CSUB sspevd_(char *jobz, char *uplo, integer *n, real *ap, 
	real *w, real *z__, integer *ldz, real *work, integer *lwork, integer 
	*iwork, integer *liwork, integer *info);

/* sspevx.c */
F2CSUB sspevx_(char *jobz, char *range, char *uplo, integer *n, 
	real *ap, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, real *work, integer *
	iwork, integer *ifail, integer *info);

/* sspgst.c */
F2CSUB sspgst_(integer *itype, char *uplo, integer *n, real *ap, 
	 real *bp, integer *info);

/* sspgv.c */
F2CSUB sspgv_(integer *itype, char *jobz, char *uplo, integer *
	n, real *ap, real *bp, real *w, real *z__, integer *ldz, real *work, 
	integer *info);

/* sspgvd.c */
F2CSUB sspgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, real *ap, real *bp, real *w, real *z__, integer *ldz, real *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* sspgvx.c */
F2CSUB sspgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real *ap, real *bp, real *vl, real *vu, integer *il, 
	 integer *iu, real *abstol, integer *m, real *w, real *z__, integer *
	ldz, real *work, integer *iwork, integer *ifail, integer *info);

/* ssprfs.c */
F2CSUB ssprfs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *afp, integer *ipiv, real *b, integer *ldb, real *x, integer *
	ldx, real *ferr, real *berr, real *work, integer *iwork, integer *
	info);

/* sspsv.c */
F2CSUB sspsv_(char *uplo, integer *n, integer *nrhs, real *ap, 
	integer *ipiv, real *b, integer *ldb, integer *info);

/* sspsvx.c */
F2CSUB sspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *ap, real *afp, integer *ipiv, real *b, integer *ldb, real 
	*x, integer *ldx, real *rcond, real *ferr, real *berr, real *work, 
	integer *iwork, integer *info);

/* ssptrd.c */
F2CSUB ssptrd_(char *uplo, integer *n, real *ap, real *d__, 
	real *e, real *tau, integer *info);

/* ssptrf.c */
F2CSUB ssptrf_(char *uplo, integer *n, real *ap, integer *ipiv, 
	integer *info);

/* ssptri.c */
F2CSUB ssptri_(char *uplo, integer *n, real *ap, integer *ipiv, 
	real *work, integer *info);

/* ssptrs.c */
F2CSUB ssptrs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	integer *ipiv, real *b, integer *ldb, integer *info);

/* sstebz.c */
F2CSUB sstebz_(char *range, char *order, integer *n, real *vl, 
	real *vu, integer *il, integer *iu, real *abstol, real *d__, real *e, 
	integer *m, integer *nsplit, real *w, integer *iblock, integer *
	isplit, real *work, integer *iwork, integer *info);

/* sstedc.c */
F2CSUB sstedc_(char *compz, integer *n, real *d__, real *e, 
	real *z__, integer *ldz, real *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* sstegr.c */
F2CSUB sstegr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, integer *isuppz, real *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);

/* sstein.c */
F2CSUB sstein_(integer *n, real *d__, real *e, integer *m, real 
	*w, integer *iblock, integer *isplit, real *z__, integer *ldz, real *
	work, integer *iwork, integer *ifail, integer *info);

/* sstemr.c */
F2CSUB sstemr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, integer *m, 
	real *w, real *z__, integer *ldz, integer *nzc, integer *isuppz, 
	logical *tryrac, real *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);

/* ssteqr.c */
F2CSUB ssteqr_(char *compz, integer *n, real *d__, real *e, 
	real *z__, integer *ldz, real *work, integer *info);

/* ssterf.c */
F2CSUB ssterf_(integer *n, real *d__, real *e, integer *info);

/* sstev.c */
F2CSUB sstev_(char *jobz, integer *n, real *d__, real *e, real *
	z__, integer *ldz, real *work, integer *info);

/* sstevd.c */
F2CSUB sstevd_(char *jobz, integer *n, real *d__, real *e, real 
	*z__, integer *ldz, real *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* sstevr.c */
F2CSUB sstevr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, integer *isuppz, real *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);

/* sstevx.c */
F2CSUB sstevx_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, real *work, integer *
	iwork, integer *ifail, integer *info);

/* ssycon.c */
F2CSUB ssycon_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, real *anorm, real *rcond, real *work, integer *iwork, 
	integer *info);

/* ssyequb.c */
F2CSUB ssyequb_(char *uplo, integer *n, real *a, integer *lda, 
	real *s, real *scond, real *amax, real *work, integer *info);

/* ssyev.c */
F2CSUB ssyev_(char *jobz, char *uplo, integer *n, real *a, 
	integer *lda, real *w, real *work, integer *lwork, integer *info);

/* ssyevd.c */
F2CSUB ssyevd_(char *jobz, char *uplo, integer *n, real *a, 
	integer *lda, real *w, real *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* ssyevr.c */
F2CSUB ssyevr_(char *jobz, char *range, char *uplo, integer *n, 
	real *a, integer *lda, real *vl, real *vu, integer *il, integer *iu, 
	real *abstol, integer *m, real *w, real *z__, integer *ldz, integer *
	isuppz, real *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* ssyevx.c */
F2CSUB ssyevx_(char *jobz, char *range, char *uplo, integer *n, 
	real *a, integer *lda, real *vl, real *vu, integer *il, integer *iu, 
	real *abstol, integer *m, real *w, real *z__, integer *ldz, real *
	work, integer *lwork, integer *iwork, integer *ifail, integer *info);

/* ssygs2.c */
F2CSUB ssygs2_(integer *itype, char *uplo, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* ssygst.c */
F2CSUB ssygst_(integer *itype, char *uplo, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* ssygv.c */
F2CSUB ssygv_(integer *itype, char *jobz, char *uplo, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *w, real *work, 
	integer *lwork, integer *info);

/* ssygvd.c */
F2CSUB ssygvd_(integer *itype, char *jobz, char *uplo, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *w, real *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* ssygvx.c */
F2CSUB ssygvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real *a, integer *lda, real *b, integer *ldb, real *
	vl, real *vu, integer *il, integer *iu, real *abstol, integer *m, 
	real *w, real *z__, integer *ldz, real *work, integer *lwork, integer 
	*iwork, integer *ifail, integer *info);

/* ssyrfs.c */
F2CSUB ssyrfs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *af, integer *ldaf, integer *ipiv, real *b, 
	integer *ldb, real *x, integer *ldx, real *ferr, real *berr, real *
	work, integer *iwork, integer *info);

/* ssyrfsx.c */
F2CSUB ssyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	real *s, real *b, integer *ldb, real *x, integer *ldx, real *rcond, 
	real *berr, integer *n_err_bnds__, real *err_bnds_norm__, real *
	err_bnds_comp__, integer *nparams, real *params, real *work, integer *
	iwork, integer *info);

/* ssysv.c */
F2CSUB ssysv_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, integer *ipiv, real *b, integer *ldb, real *work, 
	integer *lwork, integer *info);

/* ssysvx.c */
F2CSUB ssysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	real *b, integer *ldb, real *x, integer *ldx, real *rcond, real *ferr, 
	 real *berr, real *work, integer *lwork, integer *iwork, integer *
	info);

/* ssysvxx.c */
F2CSUB ssysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	char *equed, real *s, real *b, integer *ldb, real *x, integer *ldx, 
	real *rcond, real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, real *work, integer *iwork, integer *info);

/* ssytd2.c */
F2CSUB ssytd2_(char *uplo, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tau, integer *info);

/* ssytf2.c */
F2CSUB ssytf2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, integer *info);

/* ssytrd.c */
F2CSUB ssytrd_(char *uplo, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tau, real *work, integer *lwork, integer *
	info);

/* ssytrf.c */
F2CSUB ssytrf_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, real *work, integer *lwork, integer *info);

/* ssytri.c */
F2CSUB ssytri_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, real *work, integer *info);

/* ssytrs.c */
F2CSUB ssytrs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, integer *ipiv, real *b, integer *ldb, integer *info);

/* stbcon.c */
F2CSUB stbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, real *ab, integer *ldab, real *rcond, real *work, 
	integer *iwork, integer *info);

/* stbrfs.c */
F2CSUB stbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *b, integer 
	*ldb, real *x, integer *ldx, real *ferr, real *berr, real *work, 
	integer *iwork, integer *info);

/* stbtrs.c */
F2CSUB stbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *b, integer 
	*ldb, integer *info);

/* stfsm.c */
F2CSUB stfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, real *alpha, real *a, real *b, 
	integer *ldb);

/* stftri.c */
F2CSUB stftri_(char *transr, char *uplo, char *diag, integer *n, 
	 real *a, integer *info);

/* stfttp.c */
F2CSUB stfttp_(char *transr, char *uplo, integer *n, real *arf, 
	real *ap, integer *info);

/* stfttr.c */
F2CSUB stfttr_(char *transr, char *uplo, integer *n, real *arf, 
	real *a, integer *lda, integer *info);

/* stgevc.c */
F2CSUB stgevc_(char *side, char *howmny, logical *select, 
	integer *n, real *s, integer *lds, real *p, integer *ldp, real *vl, 
	integer *ldvl, real *vr, integer *ldvr, integer *mm, integer *m, real 
	*work, integer *info);

/* stgex2.c */
F2CSUB stgex2_(logical *wantq, logical *wantz, integer *n, real 
	*a, integer *lda, real *b, integer *ldb, real *q, integer *ldq, real *
	z__, integer *ldz, integer *j1, integer *n1, integer *n2, real *work, 
	integer *lwork, integer *info);

/* stgexc.c */
F2CSUB stgexc_(logical *wantq, logical *wantz, integer *n, real 
	*a, integer *lda, real *b, integer *ldb, real *q, integer *ldq, real *
	z__, integer *ldz, integer *ifst, integer *ilst, real *work, integer *
	lwork, integer *info);

/* stgsen.c */
F2CSUB stgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, real *a, integer *lda, real *b, integer *
	ldb, real *alphar, real *alphai, real *beta, real *q, integer *ldq, 
	real *z__, integer *ldz, integer *m, real *pl, real *pr, real *dif, 
	real *work, integer *lwork, integer *iwork, integer *liwork, integer *
	info);

/* stgsja.c */
F2CSUB stgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, real *a, integer *lda, 
	 real *b, integer *ldb, real *tola, real *tolb, real *alpha, real *
	beta, real *u, integer *ldu, real *v, integer *ldv, real *q, integer *
	ldq, real *work, integer *ncycle, integer *info);

/* stgsna.c */
F2CSUB stgsna_(char *job, char *howmny, logical *select, 
	integer *n, real *a, integer *lda, real *b, integer *ldb, real *vl, 
	integer *ldvl, real *vr, integer *ldvr, real *s, real *dif, integer *
	mm, integer *m, real *work, integer *lwork, integer *iwork, integer *
	info);

/* stgsy2.c */
F2CSUB stgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *c__, integer *
	ldc, real *d__, integer *ldd, real *e, integer *lde, real *f, integer 
	*ldf, real *scale, real *rdsum, real *rdscal, integer *iwork, integer 
	*pq, integer *info);

/* stgsyl.c */
F2CSUB stgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *c__, integer *
	ldc, real *d__, integer *ldd, real *e, integer *lde, real *f, integer 
	*ldf, real *scale, real *dif, real *work, integer *lwork, integer *
	iwork, integer *info);

/* stpcon.c */
F2CSUB stpcon_(char *norm, char *uplo, char *diag, integer *n, 
	real *ap, real *rcond, real *work, integer *iwork, integer *info);

/* stprfs.c */
F2CSUB stprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *b, integer *ldb, real *x, integer *ldx, 
	 real *ferr, real *berr, real *work, integer *iwork, integer *info);

/* stptri.c */
F2CSUB stptri_(char *uplo, char *diag, integer *n, real *ap, 
	integer *info);

/* stptrs.c */
F2CSUB stptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *b, integer *ldb, integer *info);

/* stpttf.c */
F2CSUB stpttf_(char *transr, char *uplo, integer *n, real *ap, 
	real *arf, integer *info);

/* stpttr.c */
F2CSUB stpttr_(char *uplo, integer *n, real *ap, real *a, 
	integer *lda, integer *info);

/* strcon.c */
F2CSUB strcon_(char *norm, char *uplo, char *diag, integer *n, 
	real *a, integer *lda, real *rcond, real *work, integer *iwork, 
	integer *info);

/* strevc.c */
F2CSUB strevc_(char *side, char *howmny, logical *select, 
	integer *n, real *t, integer *ldt, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, integer *mm, integer *m, real *work, integer *info);

/* strexc.c */
F2CSUB strexc_(char *compq, integer *n, real *t, integer *ldt, 
	real *q, integer *ldq, integer *ifst, integer *ilst, real *work, 
	integer *info);

/* strrfs.c */
F2CSUB strrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *b, integer *ldb, real *x, 
	integer *ldx, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* strsen.c */
F2CSUB strsen_(char *job, char *compq, logical *select, integer 
	*n, real *t, integer *ldt, real *q, integer *ldq, real *wr, real *wi, 
	integer *m, real *s, real *sep, real *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);

/* strsna.c */
F2CSUB strsna_(char *job, char *howmny, logical *select, 
	integer *n, real *t, integer *ldt, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, real *s, real *sep, integer *mm, integer *m, real *
	work, integer *ldwork, integer *iwork, integer *info);

/* strsyl.c */
F2CSUB strsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, real *a, integer *lda, real *b, integer *ldb, real *
	c__, integer *ldc, real *scale, integer *info);

/* strti2.c */
F2CSUB strti2_(char *uplo, char *diag, integer *n, real *a, 
	integer *lda, integer *info);

/* strtri.c */
F2CSUB strtri_(char *uplo, char *diag, integer *n, real *a, 
	integer *lda, integer *info);

/* strtrs.c */
F2CSUB strtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *b, integer *ldb, integer *
	info);

/* strttf.c */
F2CSUB strttf_(char *transr, char *uplo, integer *n, real *a, 
	integer *lda, real *arf, integer *info);

/* strttp.c */
F2CSUB strttp_(char *uplo, integer *n, real *a, integer *lda, 
	real *ap, integer *info);

/* stzrqf.c */
F2CSUB stzrqf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, integer *info);

/* stzrzf.c */
F2CSUB stzrzf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* zbdsqr.c */
F2CSUB zbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublecomplex *vt, 
	integer *ldvt, doublecomplex *u, integer *ldu, doublecomplex *c__, 
	integer *ldc, doublereal *rwork, integer *info);

/* zcgesv.c */
F2CSUB zcgesv_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *work, complex *swork, 
	doublereal *rwork, integer *iter, integer *info);

/* zcposv.c */
F2CSUB zcposv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *work, complex *swork, 
	doublereal *rwork, integer *iter, integer *info);

/* zdrscl.c */
F2CSUB zdrscl_(integer *n, doublereal *sa, doublecomplex *sx, 
	integer *incx);

/* zgbbrd.c */
F2CSUB zgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, doublecomplex *ab, integer *ldab, 
	doublereal *d__, doublereal *e, doublecomplex *q, integer *ldq, 
	doublecomplex *pt, integer *ldpt, doublecomplex *c__, integer *ldc, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgbcon.c */
F2CSUB zgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zgbequ.c */
F2CSUB zgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);

/* zgbequb.c */
F2CSUB zgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *
	c__, doublereal *rowcnd, doublereal *colcnd, doublereal *amax, 
	integer *info);

/* zgbrfs.c */
F2CSUB zgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *
	afb, integer *ldafb, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgbrfsx.c */
F2CSUB zgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, doublereal *r__, 
	doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *rcond, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgbsv.c */
F2CSUB zgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, doublecomplex *
	b, integer *ldb, integer *info);

/* zgbsvx.c */
F2CSUB zgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zgbsvxx.c */
F2CSUB zgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, 
	 doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	 doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgbtf2.c */
F2CSUB zgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);

/* zgbtrf.c */
F2CSUB zgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);

/* zgbtrs.c */
F2CSUB zgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);

/* zgebak.c */
F2CSUB zgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublecomplex *v, 
	integer *ldv, integer *info);

/* zgebal.c */
F2CSUB zgebal_(char *job, integer *n, doublecomplex *a, integer 
	*lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);

/* zgebd2.c */
F2CSUB zgebd2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *info);

/* zgebrd.c */
F2CSUB zgebrd_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *lwork, integer *
	info);

/* zgecon.c */
F2CSUB zgecon_(char *norm, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgeequ.c */
F2CSUB zgeequ_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, integer *info);

/* zgeequb.c */
F2CSUB zgeequb_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, integer *info);

/* zgees.c */
F2CSUB zgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	doublecomplex *a, integer *lda, integer *sdim, doublecomplex *w, 
	doublecomplex *vs, integer *ldvs, doublecomplex *work, integer *lwork, 
	 doublereal *rwork, logical *bwork, integer *info);

/* zgeesx.c */
F2CSUB zgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublecomplex *a, integer *lda, integer *sdim, 
	doublecomplex *w, doublecomplex *vs, integer *ldvs, doublereal *
	rconde, doublereal *rcondv, doublecomplex *work, integer *lwork, 
	doublereal *rwork, logical *bwork, integer *info);

/* zgeev.c */
F2CSUB zgeev_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *w, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgeevx.c */
F2CSUB zgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *w, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *scale, doublereal *abnrm, 
	doublereal *rconde, doublereal *rcondv, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *info);

/* zgegs.c */
F2CSUB zgegs_(char *jobvsl, char *jobvsr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vsl, 
	integer *ldvsl, doublecomplex *vsr, integer *ldvsr, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *info);

/* zgegv.c */
F2CSUB zgegv_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);

/* zgehd2.c */
F2CSUB zgehd2_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zgehrd.c */
F2CSUB zgehrd_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zgelq2.c */
F2CSUB zgelq2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgelqf.c */
F2CSUB zgelqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgels.c */
F2CSUB zgels_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *work, integer *lwork, integer *info);

/* zgelsd.c */
F2CSUB zgelsd_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *s, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *iwork, integer *info);

/* zgelss.c */
F2CSUB zgelss_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *s, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgelsx.c */
F2CSUB zgelsx_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	doublereal *rwork, integer *info);

/* zgelsy.c */
F2CSUB zgelsy_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgeql2.c */
F2CSUB zgeql2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgeqlf.c */
F2CSUB zgeqlf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgeqp3.c */
F2CSUB zgeqp3_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgeqpf.c */
F2CSUB zgeqpf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *info);

/* zgeqr2.c */
F2CSUB zgeqr2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgeqrf.c */
F2CSUB zgeqrf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgerfs.c */
F2CSUB zgerfs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work, 
	 doublereal *rwork, integer *info);

/* zgerfsx.c */
F2CSUB zgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublereal *r__, doublereal *c__, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *rcond, 
	doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgerq2.c */
F2CSUB zgerq2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgerqf.c */
F2CSUB zgerqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgesc2.c */
F2CSUB zgesc2_(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *rhs, integer *ipiv, integer *jpiv, doublereal *scale);

/* zgesdd.c */
F2CSUB zgesdd_(char *jobz, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublereal *s, doublecomplex *u, 
	integer *ldu, doublecomplex *vt, integer *ldvt, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *iwork, integer *info);

/* zgesv.c */
F2CSUB zgesv_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *b, integer *ldb, integer *
	info);

/* zgesvd.c */
F2CSUB zgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublereal *s, doublecomplex *u, 
	integer *ldu, doublecomplex *vt, integer *ldvt, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgesvx.c */
F2CSUB zgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgesvxx.c */
F2CSUB zgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *rpvgrw, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgetc2.c */
F2CSUB zgetc2_(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, integer *jpiv, integer *info);

/* zgetf2.c */
F2CSUB zgetf2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zgetrf.c */
F2CSUB zgetrf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zgetri.c */
F2CSUB zgetri_(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, doublecomplex *work, integer *lwork, integer *info);

/* zgetrs.c */
F2CSUB zgetrs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* zggbak.c */
F2CSUB zggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublecomplex *v, integer *ldv, integer *info);

/* zggbal.c */
F2CSUB zggbal_(char *job, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);

/* zgges.c */
F2CSUB zgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *sdim, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *vsl, integer *ldvsl, doublecomplex *vsr, integer 
	*ldvsr, doublecomplex *work, integer *lwork, doublereal *rwork, 
	logical *bwork, integer *info);

/* zggesx.c */
F2CSUB zggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, integer *sdim, doublecomplex *alpha, 
	doublecomplex *beta, doublecomplex *vsl, integer *ldvsl, 
	doublecomplex *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, integer *liwork, logical *bwork, integer *info);

/* zggev.c */
F2CSUB zggev_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);

/* zggevx.c */
F2CSUB zggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, logical *bwork, integer *info);

/* zggglm.c */
F2CSUB zggglm_(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *d__, doublecomplex *x, doublecomplex *y, doublecomplex 
	*work, integer *lwork, integer *info);

/* zgghrd.c */
F2CSUB zgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	integer *ldz, integer *info);

/* zgglse.c */
F2CSUB zgglse_(integer *m, integer *n, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, doublecomplex *d__, doublecomplex *x, 
	doublecomplex *work, integer *lwork, integer *info);

/* zggqrf.c */
F2CSUB zggqrf_(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b, 
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);

/* zggrqf.c */
F2CSUB zggrqf_(integer *m, integer *p, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b, 
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);

/* zggsvd.c */
F2CSUB zggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublecomplex *u, integer *ldu, doublecomplex *v, 
	integer *ldv, doublecomplex *q, integer *ldq, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *info);

/* zggsvp.c */
F2CSUB zggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublecomplex *a, integer *lda, doublecomplex 
	*b, integer *ldb, doublereal *tola, doublereal *tolb, integer *k, 
	integer *l, doublecomplex *u, integer *ldu, doublecomplex *v, integer 
	*ldv, doublecomplex *q, integer *ldq, integer *iwork, doublereal *
	rwork, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgtcon.c */
F2CSUB zgtcon_(char *norm, integer *n, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *du2, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *work, 
	integer *info);

/* zgtrfs.c */
F2CSUB zgtrfs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgtsv.c */
F2CSUB zgtsv_(integer *n, integer *nrhs, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *b, integer *ldb, 
	 integer *info);

/* zgtsvx.c */
F2CSUB zgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zgttrf.c */
F2CSUB zgttrf_(integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du, doublecomplex *du2, integer *ipiv, integer *
	info);

/* zgttrs.c */
F2CSUB zgttrs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zgtts2.c */
F2CSUB zgtts2_(integer *itrans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb);

/* zhbev.c */
F2CSUB zhbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, doublereal *rwork, integer *info);

/* zhbevd.c */
F2CSUB zhbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);

/* zhbevx.c */
F2CSUB zhbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublecomplex *q, 
	integer *ldq, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__, 
	 integer *ldz, doublecomplex *work, doublereal *rwork, integer *iwork, 
	 integer *ifail, integer *info);

/* zhbgst.c */
F2CSUB zhbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublecomplex *x, integer *ldx, doublecomplex *work, 
	doublereal *rwork, integer *info);

/* zhbgv.c */
F2CSUB zhbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zhbgvd.c */
F2CSUB zhbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);

/* zhbgvx.c */
F2CSUB zhbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublecomplex *ab, integer *ldab, 
	doublecomplex *bb, integer *ldbb, doublecomplex *q, integer *ldq, 
	doublereal *vl, doublereal *vu, integer *il, integer *iu, doublereal *
	abstol, integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);

/* zhbtrd.c */
F2CSUB zhbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublecomplex *q, integer *ldq, doublecomplex *work, integer *info);

/* zhecon.c */
F2CSUB zhecon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);

/* zheequb.c */
F2CSUB zheequb_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	doublecomplex *work, integer *info);

/* zheev.c */
F2CSUB zheev_(char *jobz, char *uplo, integer *n, doublecomplex 
	*a, integer *lda, doublereal *w, doublecomplex *work, integer *lwork, 
	doublereal *rwork, integer *info);

/* zheevd.c */
F2CSUB zheevd_(char *jobz, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *w, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);

/* zheevr.c */
F2CSUB zheevr_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, integer *isuppz, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* zheevx.c */
F2CSUB zheevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *iwork, integer *ifail, integer *
	info);

/* zhegs2.c */
F2CSUB zhegs2_(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhegst.c */
F2CSUB zhegst_(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhegv.c */
F2CSUB zhegv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *info);

/* zhegvd.c */
F2CSUB zhegvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *lrwork, integer *iwork, integer *liwork, integer *info);

/* zhegvx.c */
F2CSUB zhegvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__, 
	 integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *iwork, integer *ifail, integer *info);

/* zherfs.c */
F2CSUB zherfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work, 
	 doublereal *rwork, integer *info);

/* zherfsx.c */
F2CSUB zherfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *berr, 
	integer *n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zhesv.c */
F2CSUB zhesv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zhesvx.c */
F2CSUB zhesvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);

/* zhesvxx.c */
F2CSUB zhesvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *s, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *rcond, 
	doublereal *rpvgrw, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublecomplex *work, doublereal *rwork, 
	integer *info);

/* zhetd2.c */
F2CSUB zhetd2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tau, 
	integer *info);

/* zhetf2.c */
F2CSUB zhetf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zhetrd.c */
F2CSUB zhetrd_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tau, 
	doublecomplex *work, integer *lwork, integer *info);

/* zhetrf.c */
F2CSUB zhetrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);

/* zhetri.c */
F2CSUB zhetri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);

/* zhetrs.c */
F2CSUB zhetrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* zhfrk.c */
F2CSUB zhfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, doublereal *alpha, doublecomplex *a, integer *lda, 
	doublereal *beta, doublecomplex *c__);

/* zhgeqz.c */
F2CSUB zhgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *t, integer *ldt, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	info);

/* zhpcon.c */
F2CSUB zhpcon_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);

/* zhpev.c */
F2CSUB zhpev_(char *jobz, char *uplo, integer *n, doublecomplex 
	*ap, doublereal *w, doublecomplex *z__, integer *ldz, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zhpevd.c */
F2CSUB zhpevd_(char *jobz, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);

/* zhpevx.c */
F2CSUB zhpevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *ifail, integer *info);

/* zhpgst.c */
F2CSUB zhpgst_(integer *itype, char *uplo, integer *n, 
	doublecomplex *ap, doublecomplex *bp, integer *info);

/* zhpgv.c */
F2CSUB zhpgv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zhpgvd.c */
F2CSUB zhpgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);

/* zhpgvx.c */
F2CSUB zhpgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *ap, doublecomplex *bp, doublereal *
	vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);

/* zhprfs.c */
F2CSUB zhprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zhpsv.c */
F2CSUB zhpsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhpsvx.c */
F2CSUB zhpsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zhptrd.c */
F2CSUB zhptrd_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *d__, doublereal *e, doublecomplex *tau, integer *info);

/* zhptrf.c */
F2CSUB zhptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);

/* zhptri.c */
F2CSUB zhptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);

/* zhptrs.c */
F2CSUB zhptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhsein.c */
F2CSUB zhsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublecomplex *h__, integer *ldh, doublecomplex *
	w, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	 integer *mm, integer *m, doublecomplex *work, doublereal *rwork, 
	integer *ifaill, integer *ifailr, integer *info);

/* zhseqr.c */
F2CSUB zhseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, doublecomplex *h__, integer *ldh, doublecomplex *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zla_gbamv.c */
F2CSUB zla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, doublereal *alpha, doublecomplex *ab, 
	integer *ldab, doublecomplex *x, integer *incx, doublereal *beta, 
	doublereal *y, integer *incy);

/* zla_gbrcond_c.c */
doublereal zla_gbrcond_c__(char *trans, integer *n, integer *kl, integer *ku, 
	doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *ldafb, 
	integer *ipiv, doublereal *c__, logical *capply, integer *info, 
	doublecomplex *work, doublereal *rwork, ftnlen trans_len);

/* zla_gbrcond_x.c */
doublereal zla_gbrcond_x__(char *trans, integer *n, integer *kl, integer *ku, 
	doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *ldafb, 
	integer *ipiv, doublecomplex *x, integer *info, doublecomplex *work, 
	doublereal *rwork, ftnlen trans_len);

/* zla_gbrfsx_extended.c */
F2CSUB zla_gbrfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *ldafb, 
	integer *ipiv, logical *colequ, doublereal *c__, doublecomplex *b, 
	integer *ldb, doublecomplex *y, integer *ldy, doublereal *berr_out__, 
	integer *n_norms__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, doublecomplex *res, doublereal *ayb, doublecomplex *
	dy, doublecomplex *y_tail__, doublereal *rcond, integer *ithresh, 
	doublereal *rthresh, doublereal *dz_ub__, logical *ignore_cwise__, 
	integer *info);

/* zla_gbrpvgrw.c */
doublereal zla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *
	ldafb);

/* zla_geamv.c */
F2CSUB zla_geamv__(integer *trans, integer *m, integer *n, 
	doublereal *alpha, doublecomplex *a, integer *lda, doublecomplex *x, 
	integer *incx, doublereal *beta, doublereal *y, integer *incy);

/* zla_gercond_c.c */
doublereal zla_gercond_c__(char *trans, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublereal *
	c__, logical *capply, integer *info, doublecomplex *work, doublereal *
	rwork, ftnlen trans_len);

/* zla_gercond_x.c */
doublereal zla_gercond_x__(char *trans, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublecomplex *
	x, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	trans_len);

/* zla_gerfsx_extended.c */
F2CSUB zla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, logical *colequ,
	 doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *y, 
	integer *ldy, doublereal *berr_out__, integer *n_norms__, doublereal *
	errs_n__, doublereal *errs_c__, doublecomplex *res, doublereal *ayb, 
	doublecomplex *dy, doublecomplex *y_tail__, doublereal *rcond, 
	integer *ithresh, doublereal *rthresh, doublereal *dz_ub__, logical *
	ignore_cwise__, integer *info);

/* zla_heamv.c */
F2CSUB zla_heamv__(integer *uplo, integer *n, doublereal *alpha,
	 doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* zla_hercond_c.c */
doublereal zla_hercond_c__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublereal *c__,
	 logical *capply, integer *info, doublecomplex *work, doublereal *
	rwork, ftnlen uplo_len);

/* zla_hercond_x.c */
doublereal zla_hercond_x__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublecomplex *
	x, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	uplo_len);

/* zla_herfsx_extended.c */
F2CSUB zla_herfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *af, integer *ldaf, integer *ipiv, logical *colequ, 
	doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *y, 
	integer *ldy, doublereal *berr_out__, integer *n_norms__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, doublecomplex *res, 
	doublereal *ayb, doublecomplex *dy, doublecomplex *y_tail__, 
	doublereal *rcond, integer *ithresh, doublereal *rthresh, doublereal *
	dz_ub__, logical *ignore_cwise__, integer *info, ftnlen uplo_len);

/* zla_herpvgrw.c */
doublereal zla_herpvgrw__(char *uplo, integer *n, integer *info, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublereal *work, ftnlen uplo_len);

/* zla_lin_berr.c */
F2CSUB zla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	doublecomplex *res, doublereal *ayb, doublereal *berr);

/* zla_porcond_c.c */
doublereal zla_porcond_c__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, doublereal *c__, logical *
	capply, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	uplo_len);

/* zla_porcond_x.c */
doublereal zla_porcond_x__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, doublecomplex *x, integer *
	info, doublecomplex *work, doublereal *rwork, ftnlen uplo_len);

/* zla_porfsx_extended.c */
F2CSUB zla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *af, integer *ldaf, logical *colequ, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *y, integer *ldy, 
	doublereal *berr_out__, integer *n_norms__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, doublecomplex *res, 
	doublereal *ayb, doublecomplex *dy, doublecomplex *y_tail__, 
	doublereal *rcond, integer *ithresh, doublereal *rthresh, doublereal *
	dz_ub__, logical *ignore_cwise__, integer *info, ftnlen uplo_len);

/* zla_porpvgrw.c */
doublereal zla_porpvgrw__(char *uplo, integer *ncols, doublecomplex *a, 
	integer *lda, doublecomplex *af, integer *ldaf, doublereal *work, 
	ftnlen uplo_len);

/* zla_rpvgrw.c */
doublereal zla_rpvgrw__(integer *n, integer *ncols, doublecomplex *a, integer 
	*lda, doublecomplex *af, integer *ldaf);

/* zla_syamv.c */
F2CSUB zla_syamv__(integer *uplo, integer *n, doublereal *alpha,
	 doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* zla_syrcond_c.c */
doublereal zla_syrcond_c__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublereal *c__,
	 logical *capply, integer *info, doublecomplex *work, doublereal *
	rwork, ftnlen uplo_len);

/* zla_syrcond_x.c */
doublereal zla_syrcond_x__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublecomplex *
	x, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	uplo_len);

/* zla_syrfsx_extended.c */
F2CSUB zla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *af, integer *ldaf, integer *ipiv, logical *colequ, 
	doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *y, 
	integer *ldy, doublereal *berr_out__, integer *n_norms__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, doublecomplex *res, 
	doublereal *ayb, doublecomplex *dy, doublecomplex *y_tail__, 
	doublereal *rcond, integer *ithresh, doublereal *rthresh, doublereal *
	dz_ub__, logical *ignore_cwise__, integer *info, ftnlen uplo_len);

/* zla_syrpvgrw.c */
doublereal zla_syrpvgrw__(char *uplo, integer *n, integer *info, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublereal *work, ftnlen uplo_len);

/* zla_wwaddw.c */
F2CSUB zla_wwaddw__(integer *n, doublecomplex *x, doublecomplex 
	*y, doublecomplex *w);

/* zlabrd.c */
F2CSUB zlabrd_(integer *m, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	doublecomplex *tauq, doublecomplex *taup, doublecomplex *x, integer *
	ldx, doublecomplex *y, integer *ldy);

/* zlacgv.c */
F2CSUB zlacgv_(integer *n, doublecomplex *x, integer *incx);

/* zlacn2.c */
F2CSUB zlacn2_(integer *n, doublecomplex *v, doublecomplex *x, 
	doublereal *est, integer *kase, integer *isave);

/* zlacon.c */
F2CSUB zlacon_(integer *n, doublecomplex *v, doublecomplex *x, 
	doublereal *est, integer *kase);

/* zlacp2.c */
F2CSUB zlacp2_(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublecomplex *b, integer *ldb);

/* zlacpy.c */
F2CSUB zlacpy_(char *uplo, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb);

/* zlacrm.c */
F2CSUB zlacrm_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *b, integer *ldb, doublecomplex *c__, 
	integer *ldc, doublereal *rwork);

/* zlacrt.c */
F2CSUB zlacrt_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublecomplex *c__, doublecomplex *
	s);

/* zladiv.c */
/* Double Complex */ void zladiv_(doublecomplex * ret_val, doublecomplex *x, 
	doublecomplex *y);

/* zlaed0.c */
F2CSUB zlaed0_(integer *qsiz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *q, integer *ldq, doublecomplex *qstore, 
	integer *ldqs, doublereal *rwork, integer *iwork, integer *info);

/* zlaed7.c */
F2CSUB zlaed7_(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublecomplex *q, integer *ldq, doublereal *rho, integer *indxq, 
	doublereal *qstore, integer *qptr, integer *prmptr, integer *perm, 
	integer *givptr, integer *givcol, doublereal *givnum, doublecomplex *
	work, doublereal *rwork, integer *iwork, integer *info);

/* zlaed8.c */
F2CSUB zlaed8_(integer *k, integer *n, integer *qsiz, 
	doublecomplex *q, integer *ldq, doublereal *d__, doublereal *rho, 
	integer *cutpnt, doublereal *z__, doublereal *dlamda, doublecomplex *
	q2, integer *ldq2, doublereal *w, integer *indxp, integer *indx, 
	integer *indxq, integer *perm, integer *givptr, integer *givcol, 
	doublereal *givnum, integer *info);

/* zlaein.c */
F2CSUB zlaein_(logical *rightv, logical *noinit, integer *n, 
	doublecomplex *h__, integer *ldh, doublecomplex *w, doublecomplex *v, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *eps3, 
	doublereal *smlnum, integer *info);

/* zlaesy.c */
F2CSUB zlaesy_(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublecomplex *rt1, doublecomplex *rt2, 
	doublecomplex *evscal, doublecomplex *cs1, doublecomplex *sn1);

/* zlaev2.c */
F2CSUB zlaev2_(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublereal *rt1, doublereal *rt2, doublereal *cs1, 
	 doublecomplex *sn1);

/* zlag2c.c */
F2CSUB zlag2c_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, complex *sa, integer *ldsa, integer *info);

/* zlags2.c */
F2CSUB zlags2_(logical *upper, doublereal *a1, doublecomplex *
	a2, doublereal *a3, doublereal *b1, doublecomplex *b2, doublereal *b3, 
	 doublereal *csu, doublecomplex *snu, doublereal *csv, doublecomplex *
	snv, doublereal *csq, doublecomplex *snq);

/* zlagtm.c */
F2CSUB zlagtm_(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublecomplex *dl, doublecomplex *d__, 
	doublecomplex *du, doublecomplex *x, integer *ldx, doublereal *beta, 
	doublecomplex *b, integer *ldb);

/* zlahef.c */
F2CSUB zlahef_(char *uplo, integer *n, integer *nb, integer *kb, 
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);

/* zlahqr.c */
F2CSUB zlahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *info);

/* zlahr2.c */
F2CSUB zlahr2_(integer *n, integer *k, integer *nb, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *t, 
	integer *ldt, doublecomplex *y, integer *ldy);

/* zlahrd.c */
F2CSUB zlahrd_(integer *n, integer *k, integer *nb, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *t, 
	integer *ldt, doublecomplex *y, integer *ldy);

/* zlaic1.c */
F2CSUB zlaic1_(integer *job, integer *j, doublecomplex *x, 
	doublereal *sest, doublecomplex *w, doublecomplex *gamma, doublereal *
	sestpr, doublecomplex *s, doublecomplex *c__);

/* zlals0.c */
F2CSUB zlals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublecomplex *b, integer *ldb, 
	doublecomplex *bx, integer *ldbx, integer *perm, integer *givptr, 
	integer *givcol, integer *ldgcol, doublereal *givnum, integer *ldgnum, 
	 doublereal *poles, doublereal *difl, doublereal *difr, doublereal *
	z__, integer *k, doublereal *c__, doublereal *s, doublereal *rwork, 
	integer *info);

/* zlalsa.c */
F2CSUB zlalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublecomplex *b, integer *ldb, doublecomplex *bx, 
	integer *ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *
	k, doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	rwork, integer *iwork, integer *info);

/* zlalsd.c */
F2CSUB zlalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, doublereal *d__, doublereal *e, doublecomplex *b, integer *ldb, 
	 doublereal *rcond, integer *rank, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *info);

/* zlangb.c */
doublereal zlangb_(char *norm, integer *n, integer *kl, integer *ku, 
	doublecomplex *ab, integer *ldab, doublereal *work);

/* zlange.c */
doublereal zlange_(char *norm, integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *work);

/* zlangt.c */
doublereal zlangt_(char *norm, integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du);

/* zlanhb.c */
doublereal zlanhb_(char *norm, char *uplo, integer *n, integer *k, 
	doublecomplex *ab, integer *ldab, doublereal *work);

/* zlanhe.c */
doublereal zlanhe_(char *norm, char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *work);

/* zlanhf.c */
doublereal zlanhf_(char *norm, char *transr, char *uplo, integer *n, 
	doublecomplex *a, doublereal *work);

/* zlanhp.c */
doublereal zlanhp_(char *norm, char *uplo, integer *n, doublecomplex *ap, 
	doublereal *work);

/* zlanhs.c */
doublereal zlanhs_(char *norm, integer *n, doublecomplex *a, integer *lda, 
	doublereal *work);

/* zlanht.c */
doublereal zlanht_(char *norm, integer *n, doublereal *d__, doublecomplex *e);

/* zlansb.c */
doublereal zlansb_(char *norm, char *uplo, integer *n, integer *k, 
	doublecomplex *ab, integer *ldab, doublereal *work);

/* zlansp.c */
doublereal zlansp_(char *norm, char *uplo, integer *n, doublecomplex *ap, 
	doublereal *work);

/* zlansy.c */
doublereal zlansy_(char *norm, char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *work);

/* zlantb.c */
doublereal zlantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 doublecomplex *ab, integer *ldab, doublereal *work);

/* zlantp.c */
doublereal zlantp_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublereal *work);

/* zlantr.c */
doublereal zlantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 doublecomplex *a, integer *lda, doublereal *work);

/* zlapll.c */
F2CSUB zlapll_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *ssmin);

/* zlapmt.c */
F2CSUB zlapmt_(logical *forwrd, integer *m, integer *n, 
	doublecomplex *x, integer *ldx, integer *k);

/* zlaqgb.c */
F2CSUB zlaqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);

/* zlaqge.c */
F2CSUB zlaqge_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, char *equed);

/* zlaqhb.c */
F2CSUB zlaqhb_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);

/* zlaqhe.c */
F2CSUB zlaqhe_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);

/* zlaqhp.c */
F2CSUB zlaqhp_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* zlaqp2.c */
F2CSUB zlaqp2_(integer *m, integer *n, integer *offset, 
	doublecomplex *a, integer *lda, integer *jpvt, doublecomplex *tau, 
	doublereal *vn1, doublereal *vn2, doublecomplex *work);

/* zlaqps.c */
F2CSUB zlaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublecomplex *a, integer *lda, integer *jpvt, 
	doublecomplex *tau, doublereal *vn1, doublereal *vn2, doublecomplex *
	auxv, doublecomplex *f, integer *ldf);

/* zlaqr0.c */
F2CSUB zlaqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, integer *info);

/* zlaqr1.c */
F2CSUB zlaqr1_(integer *n, doublecomplex *h__, integer *ldh, 
	doublecomplex *s1, doublecomplex *s2, doublecomplex *v);

/* zlaqr2.c */
F2CSUB zlaqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublecomplex *h__, 
	integer *ldh, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *ns, integer *nd, doublecomplex *sh, 
	doublecomplex *v, integer *ldv, integer *nh, doublecomplex *t, 
	integer *ldt, integer *nv, doublecomplex *wv, integer *ldwv, 
	doublecomplex *work, integer *lwork);

/* zlaqr3.c */
F2CSUB zlaqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublecomplex *h__, 
	integer *ldh, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *ns, integer *nd, doublecomplex *sh, 
	doublecomplex *v, integer *ldv, integer *nh, doublecomplex *t, 
	integer *ldt, integer *nv, doublecomplex *wv, integer *ldwv, 
	doublecomplex *work, integer *lwork);

/* zlaqr4.c */
F2CSUB zlaqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, integer *info);

/* zlaqr5.c */
F2CSUB zlaqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, 
	doublecomplex *s, doublecomplex *h__, integer *ldh, integer *iloz, 
	integer *ihiz, doublecomplex *z__, integer *ldz, doublecomplex *v, 
	integer *ldv, doublecomplex *u, integer *ldu, integer *nv, 
	doublecomplex *wv, integer *ldwv, integer *nh, doublecomplex *wh, 
	integer *ldwh);

/* zlaqsb.c */
F2CSUB zlaqsb_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);

/* zlaqsp.c */
F2CSUB zlaqsp_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* zlaqsy.c */
F2CSUB zlaqsy_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);

/* zlar1v.c */
F2CSUB zlar1v_(integer *n, integer *b1, integer *bn, doublereal 
	*lambda, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *pivmin, doublereal *gaptol, doublecomplex *z__, 
	logical *wantnc, integer *negcnt, doublereal *ztz, doublereal *mingma, 
	 integer *r__, integer *isuppz, doublereal *nrminv, doublereal *resid, 
	 doublereal *rqcorr, doublereal *work);

/* zlar2v.c */
F2CSUB zlar2v_(integer *n, doublecomplex *x, doublecomplex *y, 
	doublecomplex *z__, integer *incx, doublereal *c__, doublecomplex *s, 
	integer *incc);

/* zlarcm.c */
F2CSUB zlarcm_(integer *m, integer *n, doublereal *a, integer *
	lda, doublecomplex *b, integer *ldb, doublecomplex *c__, integer *ldc, 
	 doublereal *rwork);

/* zlarf.c */
F2CSUB zlarf_(char *side, integer *m, integer *n, doublecomplex 
	*v, integer *incv, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);

/* zlarfb.c */
F2CSUB zlarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublecomplex *v, integer 
	*ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, integer *
	ldc, doublecomplex *work, integer *ldwork);

/* zlarfg.c */
F2CSUB zlarfg_(integer *n, doublecomplex *alpha, doublecomplex *
	x, integer *incx, doublecomplex *tau);

/* zlarfp.c */
F2CSUB zlarfp_(integer *n, doublecomplex *alpha, doublecomplex *
	x, integer *incx, doublecomplex *tau);

/* zlarft.c */
F2CSUB zlarft_(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);

/* zlarfx.c */
F2CSUB zlarfx_(char *side, integer *m, integer *n, 
	doublecomplex *v, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);

/* zlargv.c */
F2CSUB zlargv_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, integer *incc);

/* zlarnv.c */
F2CSUB zlarnv_(integer *idist, integer *iseed, integer *n, 
	doublecomplex *x);

/* zlarrv.c */
F2CSUB zlarrv_(integer *n, doublereal *vl, doublereal *vu, 
	doublereal *d__, doublereal *l, doublereal *pivmin, integer *isplit, 
	integer *m, integer *dol, integer *dou, doublereal *minrgp, 
	doublereal *rtol1, doublereal *rtol2, doublereal *w, doublereal *werr, 
	 doublereal *wgap, integer *iblock, integer *indexw, doublereal *gers, 
	 doublecomplex *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *iwork, integer *info);

/* zlarscl2.c */
F2CSUB zlarscl2_(integer *m, integer *n, doublereal *d__, 
	doublecomplex *x, integer *ldx);

/* zlartg.c */
F2CSUB zlartg_(doublecomplex *f, doublecomplex *g, doublereal *
	cs, doublecomplex *sn, doublecomplex *r__);

/* zlartv.c */
F2CSUB zlartv_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, doublecomplex *s, 
	integer *incc);

/* zlarz.c */
F2CSUB zlarz_(char *side, integer *m, integer *n, integer *l, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c__, integer *ldc, doublecomplex *work);

/* zlarzb.c */
F2CSUB zlarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublecomplex 
	*v, integer *ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, 
	integer *ldc, doublecomplex *work, integer *ldwork);

/* zlarzt.c */
F2CSUB zlarzt_(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);

/* zlascl.c */
F2CSUB zlascl_(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublecomplex *a, integer *lda, integer *info);

/* zlascl2.c */
F2CSUB zlascl2_(integer *m, integer *n, doublereal *d__, 
	doublecomplex *x, integer *ldx);

/* zlaset.c */
F2CSUB zlaset_(char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *a, integer *
	lda);

/* zlasr.c */
F2CSUB zlasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, doublereal *c__, doublereal *s, doublecomplex *a, 
	integer *lda);

/* zlassq.c */
F2CSUB zlassq_(integer *n, doublecomplex *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);

/* zlaswp.c */
F2CSUB zlaswp_(integer *n, doublecomplex *a, integer *lda, 
	integer *k1, integer *k2, integer *ipiv, integer *incx);

/* zlasyf.c */
F2CSUB zlasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);

/* zlat2c.c */
F2CSUB zlat2c_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, complex *sa, integer *ldsa, integer *info);

/* zlatbs.c */
F2CSUB zlatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublecomplex *ab, integer *ldab, 
	doublecomplex *x, doublereal *scale, doublereal *cnorm, integer *info);

/* zlatdf.c */
F2CSUB zlatdf_(integer *ijob, integer *n, doublecomplex *z__, 
	integer *ldz, doublecomplex *rhs, doublereal *rdsum, doublereal *
	rdscal, integer *ipiv, integer *jpiv);

/* zlatps.c */
F2CSUB zlatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *ap, doublecomplex *x, doublereal *
	scale, doublereal *cnorm, integer *info);

/* zlatrd.c */
F2CSUB zlatrd_(char *uplo, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *e, doublecomplex *tau, 
	doublecomplex *w, integer *ldw);

/* zlatrs.c */
F2CSUB zlatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *a, integer *lda, doublecomplex *x, 
	doublereal *scale, doublereal *cnorm, integer *info);

/* zlatrz.c */
F2CSUB zlatrz_(integer *m, integer *n, integer *l, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work);

/* zlatzm.c */
F2CSUB zlatzm_(char *side, integer *m, integer *n, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c1, doublecomplex *c2, integer *ldc, doublecomplex *work);

/* zlauu2.c */
F2CSUB zlauu2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zlauum.c */
F2CSUB zlauum_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpbcon.c */
F2CSUB zpbcon_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *anorm, doublereal *
	rcond, doublecomplex *work, doublereal *rwork, integer *info);

/* zpbequ.c */
F2CSUB zpbequ_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, integer *info);

/* zpbrfs.c */
F2CSUB zpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *
	ldafb, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	 doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* zpbstf.c */
F2CSUB zpbstf_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);

/* zpbsv.c */
F2CSUB zpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);

/* zpbsvx.c */
F2CSUB zpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, 
	integer *ldafb, char *equed, doublereal *s, doublecomplex *b, integer 
	*ldb, doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *
	ferr, doublereal *berr, doublecomplex *work, doublereal *rwork, 
	integer *info);

/* zpbtf2.c */
F2CSUB zpbtf2_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);

/* zpbtrf.c */
F2CSUB zpbtrf_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);

/* zpbtrs.c */
F2CSUB zpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);

/* zpftrf.c */
F2CSUB zpftrf_(char *transr, char *uplo, integer *n, 
	doublecomplex *a, integer *info);

/* zpftri.c */
F2CSUB zpftri_(char *transr, char *uplo, integer *n, 
	doublecomplex *a, integer *info);

/* zpftrs.c */
F2CSUB zpftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, doublecomplex *b, integer *ldb, integer *info);

/* zpocon.c */
F2CSUB zpocon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zpoequ.c */
F2CSUB zpoequ_(integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* zpoequb.c */
F2CSUB zpoequb_(integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* zporfs.c */
F2CSUB zporfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* zporfsx.c */
F2CSUB zporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, doublereal *s, doublecomplex *b, integer *ldb, doublecomplex *x, 
	 integer *ldx, doublereal *rcond, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zposv.c */
F2CSUB zposv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zposvx.c */
F2CSUB zposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, char *equed, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zposvxx.c */
F2CSUB zposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, char *equed, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, 
	 doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	 doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zpotf2.c */
F2CSUB zpotf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpotrf.c */
F2CSUB zpotrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpotri.c */
F2CSUB zpotri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpotrs.c */
F2CSUB zpotrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zppcon.c */
F2CSUB zppcon_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *anorm, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);

/* zppequ.c */
F2CSUB zppequ_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* zpprfs.c */
F2CSUB zpprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, doublecomplex *b, integer *ldb, 
	 doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zppsv.c */
F2CSUB zppsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);

/* zppsvx.c */
F2CSUB zppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, char *equed, doublereal *
	s, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zpptrf.c */
F2CSUB zpptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);

/* zpptri.c */
F2CSUB zpptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);

/* zpptrs.c */
F2CSUB zpptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);

/* zpstf2.c */
F2CSUB zpstf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *piv, integer *rank, doublereal *tol, 
	doublereal *work, integer *info);

/* zpstrf.c */
F2CSUB zpstrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *piv, integer *rank, doublereal *tol, 
	doublereal *work, integer *info);

/* zptcon.c */
F2CSUB zptcon_(integer *n, doublereal *d__, doublecomplex *e, 
	doublereal *anorm, doublereal *rcond, doublereal *rwork, integer *
	info);

/* zpteqr.c */
F2CSUB zpteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublereal *work, 
	integer *info);

/* zptrfs.c */
F2CSUB zptrfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* zptsv.c */
F2CSUB zptsv_(integer *n, integer *nrhs, doublereal *d__, 
	doublecomplex *e, doublecomplex *b, integer *ldb, integer *info);

/* zptsvx.c */
F2CSUB zptsvx_(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zpttrf.c */
F2CSUB zpttrf_(integer *n, doublereal *d__, doublecomplex *e, 
	integer *info);

/* zpttrs.c */
F2CSUB zpttrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb, 
	integer *info);

/* zptts2.c */
F2CSUB zptts2_(integer *iuplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb);

/* zrot.c */
F2CSUB zrot_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublecomplex *s);

/* zspcon.c */
F2CSUB zspcon_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);

/* zspmv.c */
F2CSUB zspmv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *ap, doublecomplex *x, integer *incx, doublecomplex *
	beta, doublecomplex *y, integer *incy);

/* zspr.c */
F2CSUB zspr_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *ap);

/* zsprfs.c */
F2CSUB zsprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zspsv.c */
F2CSUB zspsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zspsvx.c */
F2CSUB zspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zsptrf.c */
F2CSUB zsptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);

/* zsptri.c */
F2CSUB zsptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);

/* zsptrs.c */
F2CSUB zsptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zstedc.c */
F2CSUB zstedc_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);

/* zstegr.c */
F2CSUB zstegr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublecomplex *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* zstein.c */
F2CSUB zstein_(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublecomplex *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);

/* zstemr.c */
F2CSUB zstemr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, integer *m, doublereal *w, doublecomplex *z__, integer *
	ldz, integer *nzc, integer *isuppz, logical *tryrac, doublereal *work, 
	 integer *lwork, integer *iwork, integer *liwork, integer *info);

/* zsteqr.c */
F2CSUB zsteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublereal *work, 
	integer *info);

/* zsycon.c */
F2CSUB zsycon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);

/* zsyequb.c */
F2CSUB zsyequb_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	doublecomplex *work, integer *info);

/* zsymv.c */
F2CSUB zsymv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublecomplex *beta, doublecomplex *y, integer *incy);

/* zsyr.c */
F2CSUB zsyr_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda);

/* zsyrfs.c */
F2CSUB zsyrfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work, 
	 doublereal *rwork, integer *info);

/* zsyrfsx.c */
F2CSUB zsyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *berr, 
	integer *n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zsysv.c */
F2CSUB zsysv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zsysvx.c */
F2CSUB zsysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);

/* zsysvxx.c */
F2CSUB zsysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *s, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *rcond, 
	doublereal *rpvgrw, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublecomplex *work, doublereal *rwork, 
	integer *info);

/* zsytf2.c */
F2CSUB zsytf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zsytrf.c */
F2CSUB zsytrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);

/* zsytri.c */
F2CSUB zsytri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);

/* zsytrs.c */
F2CSUB zsytrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* ztbcon.c */
F2CSUB ztbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublereal *rcond, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* ztbrfs.c */
F2CSUB ztbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* ztbtrs.c */
F2CSUB ztbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, integer *info);

/* ztfsm.c */
F2CSUB ztfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, doublecomplex *alpha, 
	doublecomplex *a, doublecomplex *b, integer *ldb);

/* ztftri.c */
F2CSUB ztftri_(char *transr, char *uplo, char *diag, integer *n, 
	 doublecomplex *a, integer *info);

/* ztfttp.c */
F2CSUB ztfttp_(char *transr, char *uplo, integer *n, 
	doublecomplex *arf, doublecomplex *ap, integer *info);

/* ztfttr.c */
F2CSUB ztfttr_(char *transr, char *uplo, integer *n, 
	doublecomplex *arf, doublecomplex *a, integer *lda, integer *info);

/* ztgevc.c */
F2CSUB ztgevc_(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *s, integer *lds, doublecomplex *p, integer 
	*ldp, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, integer *mm, integer *m, doublecomplex *work, doublereal *rwork, 
	 integer *info);

/* ztgex2.c */
F2CSUB ztgex2_(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *j1, integer *info);

/* ztgexc.c */
F2CSUB ztgexc_(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *ifst, integer *ilst, integer *info);

/* ztgsen.c */
F2CSUB ztgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* ztgsja.c */
F2CSUB ztgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublecomplex *
	u, integer *ldu, doublecomplex *v, integer *ldv, doublecomplex *q, 
	integer *ldq, doublecomplex *work, integer *ncycle, integer *info);

/* ztgsna.c */
F2CSUB ztgsna_(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *b, integer 
	*ldb, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, doublereal *s, doublereal *dif, integer *mm, integer *m, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *info);

/* ztgsy2.c */
F2CSUB ztgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *rdsum, doublereal *rdscal, integer *
	info);

/* ztgsyl.c */
F2CSUB ztgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *dif, doublecomplex *work, integer *
	lwork, integer *iwork, integer *info);

/* ztpcon.c */
F2CSUB ztpcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);

/* ztprfs.c */
F2CSUB ztprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* ztptri.c */
F2CSUB ztptri_(char *uplo, char *diag, integer *n, 
	doublecomplex *ap, integer *info);

/* ztptrs.c */
F2CSUB ztptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	integer *info);

/* ztpttf.c */
F2CSUB ztpttf_(char *transr, char *uplo, integer *n, 
	doublecomplex *ap, doublecomplex *arf, integer *info);

/* ztpttr.c */
F2CSUB ztpttr_(char *uplo, integer *n, doublecomplex *ap, 
	doublecomplex *a, integer *lda, integer *info);

/* ztrcon.c */
F2CSUB ztrcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);

/* ztrevc.c */
F2CSUB ztrevc_(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, integer *mm, integer 
	*m, doublecomplex *work, doublereal *rwork, integer *info);

/* ztrexc.c */
F2CSUB ztrexc_(char *compq, integer *n, doublecomplex *t, 
	integer *ldt, doublecomplex *q, integer *ldq, integer *ifst, integer *
	ilst, integer *info);

/* ztrrfs.c */
F2CSUB ztrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* ztrsen.c */
F2CSUB ztrsen_(char *job, char *compq, logical *select, integer 
	*n, doublecomplex *t, integer *ldt, doublecomplex *q, integer *ldq, 
	doublecomplex *w, integer *m, doublereal *s, doublereal *sep, 
	doublecomplex *work, integer *lwork, integer *info);

/* ztrsna.c */
F2CSUB ztrsna_(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublereal *s, 
	doublereal *sep, integer *mm, integer *m, doublecomplex *work, 
	integer *ldwork, doublereal *rwork, integer *info);

/* ztrsyl.c */
F2CSUB ztrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *c__, integer *ldc, doublereal *scale, 
	integer *info);

/* ztrti2.c */
F2CSUB ztrti2_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);

/* ztrtri.c */
F2CSUB ztrtri_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);

/* ztrtrs.c */
F2CSUB ztrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *info);

/* ztrttf.c */
F2CSUB ztrttf_(char *transr, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *arf, integer *info);

/* ztrttp.c */
F2CSUB ztrttp_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *ap, integer *info);

/* ztzrqf.c */
F2CSUB ztzrqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, integer *info);

/* ztzrzf.c */
F2CSUB ztzrzf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zung2l.c */
F2CSUB zung2l_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zung2r.c */
F2CSUB zung2r_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zungbr.c */
F2CSUB zungbr_(char *vect, integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zunghr.c */
F2CSUB zunghr_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungl2.c */
F2CSUB zungl2_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zunglq.c */
F2CSUB zunglq_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungql.c */
F2CSUB zungql_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungqr.c */
F2CSUB zungqr_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungr2.c */
F2CSUB zungr2_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zungrq.c */
F2CSUB zungrq_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungtr.c */
F2CSUB zungtr_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunm2l.c */
F2CSUB zunm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunm2r.c */
F2CSUB zunm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunmbr.c */
F2CSUB zunmbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);

/* zunmhr.c */
F2CSUB zunmhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *a, integer *lda, 
	doublecomplex *tau, doublecomplex *c__, integer *ldc, doublecomplex *
	work, integer *lwork, integer *info);

/* zunml2.c */
F2CSUB zunml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunmlq.c */
F2CSUB zunmlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmql.c */
F2CSUB zunmql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmqr.c */
F2CSUB zunmqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmr2.c */
F2CSUB zunmr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunmr3.c */
F2CSUB zunmr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	info);

/* zunmrq.c */
F2CSUB zunmrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmrz.c */
F2CSUB zunmrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);

/* zunmtr.c */
F2CSUB zunmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zupgtr.c */
F2CSUB zupgtr_(char *uplo, integer *n, doublecomplex *ap, 
	doublecomplex *tau, doublecomplex *q, integer *ldq, doublecomplex *
	work, integer *info);

/* zupmtr.c */
F2CSUB zupmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *ap, doublecomplex *tau, doublecomplex *c__, 
	 integer *ldc, doublecomplex *work, integer *info);

#ifdef __cplusplus
}
#endif

#endif /* CBLAPACK_LAPACK_H */
