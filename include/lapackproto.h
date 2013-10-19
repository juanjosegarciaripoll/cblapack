#ifndef CBLAPACK_LAPACKPROTO_H
#define CBLAPACK_LAPACKPROTO_H

/* cbdsqr.c */
extern int cbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real *d__, real *e, complex *vt, integer *ldvt, 
	complex *u, integer *ldu, complex *c__, integer *ldc, real *rwork, 
	integer *info);

/* cgbbrd.c */
extern int cgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, complex *ab, integer *ldab, real *d__, 
	real *e, complex *q, integer *ldq, complex *pt, integer *ldpt, 
	complex *c__, integer *ldc, complex *work, real *rwork, integer *info);

/* cgbcon.c */
extern int cgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, integer *ipiv, real *anorm, real *rcond, 
	complex *work, real *rwork, integer *info);

/* cgbequ.c */
extern int cgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real 
	*colcnd, real *amax, integer *info);

/* cgbequb.c */
extern int cgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, complex *ab, integer *ldab, real *r__, real *c__, real *rowcnd, 
	real *colcnd, real *amax, integer *info);

/* cgbrfs.c */
extern int cgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex *ab, integer *ldab, complex *afb, integer *
	ldafb, integer *ipiv, complex *b, integer *ldb, complex *x, integer *
	ldx, real *ferr, real *berr, complex *work, real *rwork, integer *
	info);

/* cgbrfsx.c */
extern int cgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, complex *ab, integer *ldab, complex *
	afb, integer *ldafb, integer *ipiv, real *r__, real *c__, complex *b, 
	integer *ldb, complex *x, integer *ldx, real *rcond, real *berr, 
	integer *n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, 
	integer *nparams, real *params, complex *work, real *rwork, integer *
	info);

/* cgbsv.c */
extern int cgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, complex *ab, integer *ldab, integer *ipiv, complex *b, integer *
	ldb, integer *info);

/* cgbsvx.c */
extern int cgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, complex *ab, integer *ldab, complex *afb, 
	 integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, real 
	*ferr, real *berr, complex *work, real *rwork, integer *info);

/* cgbsvxx.c */
extern int cgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, complex *ab, integer *ldab, complex *
	afb, integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	 complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, 
	real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, complex *work, real *rwork, integer *info);

/* cgbtf2.c */
extern int cgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, integer *ipiv, integer *info);

/* cgbtrf.c */
extern int cgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, integer *ipiv, integer *info);

/* cgbtrs.c */
extern int cgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex *ab, integer *ldab, integer *ipiv, complex 
	*b, integer *ldb, integer *info);

/* cgebak.c */
extern int cgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *scale, integer *m, complex *v, integer *ldv, 
	integer *info);

/* cgebal.c */
extern int cgebal_(char *job, integer *n, complex *a, integer *lda, 
	integer *ilo, integer *ihi, real *scale, integer *info);

/* cgebd2.c */
extern int cgebd2_(integer *m, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tauq, complex *taup, complex *work, 
	integer *info);

/* cgebrd.c */
extern int cgebrd_(integer *m, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tauq, complex *taup, complex *work, 
	integer *lwork, integer *info);

/* cgecon.c */
extern int cgecon_(char *norm, integer *n, complex *a, integer *lda, 
	 real *anorm, real *rcond, complex *work, real *rwork, integer *info);

/* cgeequ.c */
extern int cgeequ_(integer *m, integer *n, complex *a, integer *lda, 
	 real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, 
	integer *info);

/* cgeequb.c */
extern int cgeequb_(integer *m, integer *n, complex *a, integer *
	lda, real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, 
	integer *info);

/* cgees.c */
extern int cgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	complex *a, integer *lda, integer *sdim, complex *w, complex *vs, 
	integer *ldvs, complex *work, integer *lwork, real *rwork, logical *
	bwork, integer *info);

/* cgeesx.c */
extern int cgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, complex *a, integer *lda, integer *sdim, complex *
	w, complex *vs, integer *ldvs, real *rconde, real *rcondv, complex *
	work, integer *lwork, real *rwork, logical *bwork, integer *info);

/* cgeev.c */
extern int cgeev_(char *jobvl, char *jobvr, integer *n, complex *a, 
	integer *lda, complex *w, complex *vl, integer *ldvl, complex *vr, 
	integer *ldvr, complex *work, integer *lwork, real *rwork, integer *
	info);

/* cgeevx.c */
extern int cgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex *a, integer *lda, complex *w, complex *vl, 
	integer *ldvl, complex *vr, integer *ldvr, integer *ilo, integer *ihi, 
	 real *scale, real *abnrm, real *rconde, real *rcondv, complex *work, 
	integer *lwork, real *rwork, integer *info);

/* cgegs.c */
extern int cgegs_(char *jobvsl, char *jobvsr, integer *n, complex *
	a, integer *lda, complex *b, integer *ldb, complex *alpha, complex *
	beta, complex *vsl, integer *ldvsl, complex *vsr, integer *ldvsr, 
	complex *work, integer *lwork, real *rwork, integer *info);

/* cgegv.c */
extern int cgegv_(char *jobvl, char *jobvr, integer *n, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *alpha, complex *beta, 
	 complex *vl, integer *ldvl, complex *vr, integer *ldvr, complex *
	work, integer *lwork, real *rwork, integer *info);

/* cgehd2.c */
extern int cgehd2_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *tau, complex *work, integer *info);

/* cgehrd.c */
extern int cgehrd_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *tau, complex *work, integer *lwork, integer 
	*info);

/* cgelq2.c */
extern int cgelq2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgelqf.c */
extern int cgelqf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgels.c */
extern int cgels_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);

/* cgelsd.c */
extern int cgelsd_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, real *s, real *rcond, 
	integer *rank, complex *work, integer *lwork, real *rwork, integer *
	iwork, integer *info);

/* cgelss.c */
extern int cgelss_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, real *s, real *rcond, 
	integer *rank, complex *work, integer *lwork, real *rwork, integer *
	info);

/* cgelsx.c */
extern int cgelsx_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, integer *jpvt, real *rcond, 
	 integer *rank, complex *work, real *rwork, integer *info);

/* cgelsy.c */
extern int cgelsy_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, integer *jpvt, real *rcond, 
	 integer *rank, complex *work, integer *lwork, real *rwork, integer *
	info);

/* cgeql2.c */
extern int cgeql2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgeqlf.c */
extern int cgeqlf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgeqp3.c */
extern int cgeqp3_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *jpvt, complex *tau, complex *work, integer *lwork, real *
	rwork, integer *info);

/* cgeqpf.c */
extern int cgeqpf_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *jpvt, complex *tau, complex *work, real *rwork, integer *
	info);

/* cgeqr2.c */
extern int cgeqr2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgeqrf.c */
extern int cgeqrf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgerfs.c */
extern int cgerfs_(char *trans, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, integer *ipiv, complex *
	b, integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cgerfsx.c */
extern int cgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, real *r__, real *c__, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, complex *work, real *rwork, integer *info);

/* cgerq2.c */
extern int cgerq2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *info);

/* cgerqf.c */
extern int cgerqf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cgesc2.c */
extern int cgesc2_(integer *n, complex *a, integer *lda, complex *
	rhs, integer *ipiv, integer *jpiv, real *scale);

/* cgesdd.c */
extern int cgesdd_(char *jobz, integer *m, integer *n, complex *a, 
	integer *lda, real *s, complex *u, integer *ldu, complex *vt, integer 
	*ldvt, complex *work, integer *lwork, real *rwork, integer *iwork, 
	integer *info);

/* cgesv.c */
extern int cgesv_(integer *n, integer *nrhs, complex *a, integer *
	lda, integer *ipiv, complex *b, integer *ldb, integer *info);

/* cgesvd.c */
extern int cgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	complex *a, integer *lda, real *s, complex *u, integer *ldu, complex *
	vt, integer *ldvt, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* cgesvx.c */
extern int cgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *r__, real *c__, complex *b, integer *ldb, 
	complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cgesvxx.c */
extern int cgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *r__, real *c__, complex *b, integer *ldb, 
	complex *x, integer *ldx, real *rcond, real *rpvgrw, real *berr, 
	integer *n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, 
	integer *nparams, real *params, complex *work, real *rwork, integer *
	info);

/* cgetc2.c */
extern int cgetc2_(integer *n, complex *a, integer *lda, integer *
	ipiv, integer *jpiv, integer *info);

/* cgetf2.c */
extern int cgetf2_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* cgetrf.c */
extern int cgetrf_(integer *m, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* cgetri.c */
extern int cgetri_(integer *n, complex *a, integer *lda, integer *
	ipiv, complex *work, integer *lwork, integer *info);

/* cgetrs.c */
extern int cgetrs_(char *trans, integer *n, integer *nrhs, complex *
	a, integer *lda, integer *ipiv, complex *b, integer *ldb, integer *
	info);

/* cggbak.c */
extern int cggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *lscale, real *rscale, integer *m, complex *v, 
	integer *ldv, integer *info);

/* cggbal.c */
extern int cggbal_(char *job, integer *n, complex *a, integer *lda, 
	complex *b, integer *ldb, integer *ilo, integer *ihi, real *lscale, 
	real *rscale, real *work, integer *info);

/* cgges.c */
extern int cgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, complex *a, integer *lda, complex *b, integer *
	ldb, integer *sdim, complex *alpha, complex *beta, complex *vsl, 
	integer *ldvsl, complex *vsr, integer *ldvsr, complex *work, integer *
	lwork, real *rwork, logical *bwork, integer *info);

/* cggesx.c */
extern int cggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, complex *a, integer *lda, complex *b, 
	 integer *ldb, integer *sdim, complex *alpha, complex *beta, complex *
	vsl, integer *ldvsl, complex *vsr, integer *ldvsr, real *rconde, real 
	*rcondv, complex *work, integer *lwork, real *rwork, integer *iwork, 
	integer *liwork, logical *bwork, integer *info);

/* cggev.c */
extern int cggev_(char *jobvl, char *jobvr, integer *n, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *alpha, complex *beta, 
	 complex *vl, integer *ldvl, complex *vr, integer *ldvr, complex *
	work, integer *lwork, real *rwork, integer *info);

/* cggevx.c */
extern int cggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	 complex *alpha, complex *beta, complex *vl, integer *ldvl, complex *
	vr, integer *ldvr, integer *ilo, integer *ihi, real *lscale, real *
	rscale, real *abnrm, real *bbnrm, real *rconde, real *rcondv, complex 
	*work, integer *lwork, real *rwork, integer *iwork, logical *bwork, 
	integer *info);

/* cggglm.c */
extern int cggglm_(integer *n, integer *m, integer *p, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *d__, complex *x, 
	complex *y, complex *work, integer *lwork, integer *info);

/* cgghrd.c */
extern int cgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, complex *a, integer *lda, complex *b, integer *ldb, 
	 complex *q, integer *ldq, complex *z__, integer *ldz, integer *info);

/* cgglse.c */
extern int cgglse_(integer *m, integer *n, integer *p, complex *a, 
	integer *lda, complex *b, integer *ldb, complex *c__, complex *d__, 
	complex *x, complex *work, integer *lwork, integer *info);

/* cggqrf.c */
extern int cggqrf_(integer *n, integer *m, integer *p, complex *a, 
	integer *lda, complex *taua, complex *b, integer *ldb, complex *taub, 
	complex *work, integer *lwork, integer *info);

/* cggrqf.c */
extern int cggrqf_(integer *m, integer *p, integer *n, complex *a, 
	integer *lda, complex *taua, complex *b, integer *ldb, complex *taub, 
	complex *work, integer *lwork, integer *info);

/* cggsvd.c */
extern int cggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, complex *a, integer *
	lda, complex *b, integer *ldb, real *alpha, real *beta, complex *u, 
	integer *ldu, complex *v, integer *ldv, complex *q, integer *ldq, 
	complex *work, real *rwork, integer *iwork, integer *info);

/* cggsvp.c */
extern int cggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, complex *a, integer *lda, complex *b, integer 
	*ldb, real *tola, real *tolb, integer *k, integer *l, complex *u, 
	integer *ldu, complex *v, integer *ldv, complex *q, integer *ldq, 
	integer *iwork, real *rwork, complex *tau, complex *work, integer *
	info);

/* cgtcon.c */
extern int cgtcon_(char *norm, integer *n, complex *dl, complex *
	d__, complex *du, complex *du2, integer *ipiv, real *anorm, real *
	rcond, complex *work, integer *info);

/* cgtrfs.c */
extern int cgtrfs_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *dlf, complex *df, complex *
	duf, complex *du2, integer *ipiv, complex *b, integer *ldb, complex *
	x, integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cgtsv.c */
extern int cgtsv_(integer *n, integer *nrhs, complex *dl, complex *
	d__, complex *du, complex *b, integer *ldb, integer *info);

/* cgtsvx.c */
extern int cgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, complex *dl, complex *d__, complex *du, complex *dlf, complex *
	df, complex *duf, complex *du2, integer *ipiv, complex *b, integer *
	ldb, complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cgttrf.c */
extern int cgttrf_(integer *n, complex *dl, complex *d__, complex *
	du, complex *du2, integer *ipiv, integer *info);

/* cgttrs.c */
extern int cgttrs_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *du2, integer *ipiv, complex *
	b, integer *ldb, integer *info);

/* cgtts2.c */
extern int cgtts2_(integer *itrans, integer *n, integer *nrhs, 
	complex *dl, complex *d__, complex *du, complex *du2, integer *ipiv, 
	complex *b, integer *ldb);

/* chbev.c */
extern int chbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	complex *ab, integer *ldab, real *w, complex *z__, integer *ldz, 
	complex *work, real *rwork, integer *info);

/* chbevd.c */
extern int chbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	complex *ab, integer *ldab, real *w, complex *z__, integer *ldz, 
	complex *work, integer *lwork, real *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* chbevx.c */
extern int chbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, complex *ab, integer *ldab, complex *q, integer *ldq, 
	real *vl, real *vu, integer *il, integer *iu, real *abstol, integer *
	m, real *w, complex *z__, integer *ldz, complex *work, real *rwork, 
	integer *iwork, integer *ifail, integer *info);

/* chbgst.c */
extern int chbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, complex *ab, integer *ldab, complex *bb, integer *ldbb, 
	complex *x, integer *ldx, complex *work, real *rwork, integer *info);

/* chbgv.c */
extern int chbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, complex *ab, integer *ldab, complex *bb, integer *ldbb, 
	real *w, complex *z__, integer *ldz, complex *work, real *rwork, 
	integer *info);

/* chbgvd.c */
extern int chbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, complex *ab, integer *ldab, complex *bb, integer *ldbb, 
	real *w, complex *z__, integer *ldz, complex *work, integer *lwork, 
	real *rwork, integer *lrwork, integer *iwork, integer *liwork, 
	integer *info);

/* chbgvx.c */
extern int chbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, complex *ab, integer *ldab, complex *bb, 
	integer *ldbb, complex *q, integer *ldq, real *vl, real *vu, integer *
	il, integer *iu, real *abstol, integer *m, real *w, complex *z__, 
	integer *ldz, complex *work, real *rwork, integer *iwork, integer *
	ifail, integer *info);

/* chbtrd.c */
extern int chbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	complex *ab, integer *ldab, real *d__, real *e, complex *q, integer *
	ldq, complex *work, integer *info);

/* checon.c */
extern int checon_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, real *anorm, real *rcond, complex *work, integer *
	info);

/* cheequb.c */
extern int cheequb_(char *uplo, integer *n, complex *a, integer *
	lda, real *s, real *scond, real *amax, complex *work, integer *info);

/* cheev.c */
extern int cheev_(char *jobz, char *uplo, integer *n, complex *a, 
	integer *lda, real *w, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* cheevd.c */
extern int cheevd_(char *jobz, char *uplo, integer *n, complex *a, 
	integer *lda, real *w, complex *work, integer *lwork, real *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);

/* cheevr.c */
extern int cheevr_(char *jobz, char *range, char *uplo, integer *n, 
	complex *a, integer *lda, real *vl, real *vu, integer *il, integer *
	iu, real *abstol, integer *m, real *w, complex *z__, integer *ldz, 
	integer *isuppz, complex *work, integer *lwork, real *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);

/* cheevx.c */
extern int cheevx_(char *jobz, char *range, char *uplo, integer *n, 
	complex *a, integer *lda, real *vl, real *vu, integer *il, integer *
	iu, real *abstol, integer *m, real *w, complex *z__, integer *ldz, 
	complex *work, integer *lwork, real *rwork, integer *iwork, integer *
	ifail, integer *info);

/* chegs2.c */
extern int chegs2_(integer *itype, char *uplo, integer *n, complex *
	a, integer *lda, complex *b, integer *ldb, integer *info);

/* chegst.c */
extern int chegst_(integer *itype, char *uplo, integer *n, complex *
	a, integer *lda, complex *b, integer *ldb, integer *info);

/* chegv.c */
extern int chegv_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, real *w, 
	complex *work, integer *lwork, real *rwork, integer *info);

/* chegvd.c */
extern int chegvd_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, real *w, 
	complex *work, integer *lwork, real *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* chegvx.c */
extern int chegvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	real *vl, real *vu, integer *il, integer *iu, real *abstol, integer *
	m, real *w, complex *z__, integer *ldz, complex *work, integer *lwork, 
	 real *rwork, integer *iwork, integer *ifail, integer *info);

/* cherfs.c */
extern int cherfs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, integer *ipiv, complex *
	b, integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* cherfsx.c */
extern int cherfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	 real *err_bnds_comp__, integer *nparams, real *params, complex *work, 
	 real *rwork, integer *info);

/* chesv.c */
extern int chesv_(char *uplo, integer *n, integer *nrhs, complex *a, 
	 integer *lda, integer *ipiv, complex *b, integer *ldb, complex *work, 
	 integer *lwork, integer *info);

/* chesvx.c */
extern int chesvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, 
	 real *ferr, real *berr, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* chesvxx.c */
extern int chesvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *s, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *rpvgrw, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, complex *work, real *rwork, integer *info);

/* chetd2.c */
extern int chetd2_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tau, integer *info);

/* chetf2.c */
extern int chetf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* chetrd.c */
extern int chetrd_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *d__, real *e, complex *tau, complex *work, integer *lwork, 
	integer *info);

/* chetrf.c */
extern int chetrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *lwork, integer *info);

/* chetri.c */
extern int chetri_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *info);

/* chetrs.c */
extern int chetrs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, integer *ipiv, complex *b, integer *ldb, integer *
	info);

/* chfrk.c */
extern int chfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, real *alpha, complex *a, integer *lda, real *beta, 
	complex *c__);

/* chgeqz.c */
extern int chgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *t, 
	integer *ldt, complex *alpha, complex *beta, complex *q, integer *ldq, 
	 complex *z__, integer *ldz, complex *work, integer *lwork, real *
	rwork, integer *info);

/* chla_transtype.c */
extern void chla_transtype__(char *ret_val, ftnlen ret_val_len, 
	integer *trans);

/* chpcon.c */
extern int chpcon_(char *uplo, integer *n, complex *ap, integer *
	ipiv, real *anorm, real *rcond, complex *work, integer *info);

/* chpev.c */
extern int chpev_(char *jobz, char *uplo, integer *n, complex *ap, 
	real *w, complex *z__, integer *ldz, complex *work, real *rwork, 
	integer *info);

/* chpevd.c */
extern int chpevd_(char *jobz, char *uplo, integer *n, complex *ap, 
	real *w, complex *z__, integer *ldz, complex *work, integer *lwork, 
	real *rwork, integer *lrwork, integer *iwork, integer *liwork, 
	integer *info);

/* chpevx.c */
extern int chpevx_(char *jobz, char *range, char *uplo, integer *n, 
	complex *ap, real *vl, real *vu, integer *il, integer *iu, real *
	abstol, integer *m, real *w, complex *z__, integer *ldz, complex *
	work, real *rwork, integer *iwork, integer *ifail, integer *info);

/* chpgst.c */
extern int chpgst_(integer *itype, char *uplo, integer *n, complex *
	ap, complex *bp, integer *info);

/* chpgv.c */
extern int chpgv_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *ap, complex *bp, real *w, complex *z__, integer *ldz, 
	complex *work, real *rwork, integer *info);

/* chpgvd.c */
extern int chpgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, complex *ap, complex *bp, real *w, complex *z__, integer *ldz, 
	complex *work, integer *lwork, real *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* chpgvx.c */
extern int chpgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, complex *ap, complex *bp, real *vl, real *vu, 
	integer *il, integer *iu, real *abstol, integer *m, real *w, complex *
	z__, integer *ldz, complex *work, real *rwork, integer *iwork, 
	integer *ifail, integer *info);

/* chprfs.c */
extern int chprfs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *afp, integer *ipiv, complex *b, integer *ldb, complex *x, 
	 integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* chpsv.c */
extern int chpsv_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* chpsvx.c */
extern int chpsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *ap, complex *afp, integer *ipiv, complex *b, integer *
	ldb, complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* chptrd.c */
extern int chptrd_(char *uplo, integer *n, complex *ap, real *d__, 
	real *e, complex *tau, integer *info);

/* chptrf.c */
extern int chptrf_(char *uplo, integer *n, complex *ap, integer *
	ipiv, integer *info);

/* chptri.c */
extern int chptri_(char *uplo, integer *n, complex *ap, integer *
	ipiv, complex *work, integer *info);

/* chptrs.c */
extern int chptrs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* chsein.c */
extern int chsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, complex *h__, integer *ldh, complex *w, complex *
	vl, integer *ldvl, complex *vr, integer *ldvr, integer *mm, integer *
	m, complex *work, real *rwork, integer *ifaill, integer *ifailr, 
	integer *info);

/* chseqr.c */
extern int chseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, complex *h__, integer *ldh, complex *w, complex *z__, 
	integer *ldz, complex *work, integer *lwork, integer *info);

/* cla_gbamv.c */
extern int cla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, real *alpha, complex *ab, integer *ldab, 
	complex *x, integer *incx, real *beta, real *y, integer *incy);

/* cla_gbrcond_c.c */
extern doublereal cla_gbrcond_c__(char *trans, integer *n, integer *kl, integer *ku, 
	complex *ab, integer *ldab, complex *afb, integer *ldafb, integer *
	ipiv, real *c__, logical *capply, integer *info, complex *work, real *
	rwork, ftnlen trans_len);

/* cla_gbrcond_x.c */
extern doublereal cla_gbrcond_x__(char *trans, integer *n, integer *kl, integer *ku, 
	complex *ab, integer *ldab, complex *afb, integer *ldafb, integer *
	ipiv, complex *x, integer *info, complex *work, real *rwork, ftnlen 
	trans_len);

/* cla_gbrfsx_extended.c */
extern int cla_gbrfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *kl, integer *ku, integer *nrhs, 
	complex *ab, integer *ldab, complex *afb, integer *ldafb, integer *
	ipiv, logical *colequ, real *c__, complex *b, integer *ldb, complex *
	y, integer *ldy, real *berr_out__, integer *n_norms__, real *
	err_bnds_norm__, real *err_bnds_comp__, complex *res, real *ayb, 
	complex *dy, complex *y_tail__, real *rcond, integer *ithresh, real *
	rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info);

/* cla_gbrpvgrw.c */
extern doublereal cla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, complex *ab, integer *ldab, complex *afb, integer *ldafb);

/* cla_geamv.c */
extern int cla_geamv__(integer *trans, integer *m, integer *n, real 
	*alpha, complex *a, integer *lda, complex *x, integer *incx, real *
	beta, real *y, integer *incy);

/* cla_gercond_c.c */
extern doublereal cla_gercond_c__(char *trans, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, real *c__, logical *capply,
	 integer *info, complex *work, real *rwork, ftnlen trans_len);

/* cla_gercond_x.c */
extern doublereal cla_gercond_x__(char *trans, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, complex *x, integer *info, 
	complex *work, real *rwork, ftnlen trans_len);

/* cla_gerfsx_extended.c */
extern int cla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, logical *colequ, real *c__,
	 complex *b, integer *ldb, complex *y, integer *ldy, real *berr_out__,
	 integer *n_norms__, real *errs_n__, real *errs_c__, complex *res, 
	real *ayb, complex *dy, complex *y_tail__, real *rcond, integer *
	ithresh, real *rthresh, real *dz_ub__, logical *ignore_cwise__, 
	integer *info);

/* cla_heamv.c */
extern int cla_heamv__(integer *uplo, integer *n, real *alpha, 
	complex *a, integer *lda, complex *x, integer *incx, real *beta, real 
	*y, integer *incy);

/* cla_hercond_c.c */
extern doublereal cla_hercond_c__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, real *c__, logical *capply,
	 integer *info, complex *work, real *rwork, ftnlen uplo_len);

/* cla_hercond_x.c */
extern doublereal cla_hercond_x__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, complex *x, integer *info, 
	complex *work, real *rwork, ftnlen uplo_len);

/* cla_herfsx_extended.c */
extern int cla_herfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *af, 
	integer *ldaf, integer *ipiv, logical *colequ, real *c__, complex *b, 
	integer *ldb, complex *y, integer *ldy, real *berr_out__, integer *
	n_norms__, real *err_bnds_norm__, real *err_bnds_comp__, complex *res,
	 real *ayb, complex *dy, complex *y_tail__, real *rcond, integer *
	ithresh, real *rthresh, real *dz_ub__, logical *ignore_cwise__, 
	integer *info, ftnlen uplo_len);

/* cla_herpvgrw.c */
extern doublereal cla_herpvgrw__(char *uplo, integer *n, integer *info, complex *a, 
	integer *lda, complex *af, integer *ldaf, integer *ipiv, real *work, 
	ftnlen uplo_len);

/* cla_lin_berr.c */
extern int cla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	complex *res, real *ayb, real *berr);

/* cla_porcond_c.c */
extern doublereal cla_porcond_c__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, real *c__, logical *capply, integer *info,
	 complex *work, real *rwork, ftnlen uplo_len);

/* cla_porcond_x.c */
extern doublereal cla_porcond_x__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, complex *x, integer *info, complex *work, 
	real *rwork, ftnlen uplo_len);

/* cla_porfsx_extended.c */
extern int cla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *af, 
	integer *ldaf, logical *colequ, real *c__, complex *b, integer *ldb, 
	complex *y, integer *ldy, real *berr_out__, integer *n_norms__, real *
	err_bnds_norm__, real *err_bnds_comp__, complex *res, real *ayb, 
	complex *dy, complex *y_tail__, real *rcond, integer *ithresh, real *
	rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info, 
	ftnlen uplo_len);

/* cla_porpvgrw.c */
extern doublereal cla_porpvgrw__(char *uplo, integer *ncols, complex *a, integer *
	lda, complex *af, integer *ldaf, real *work, ftnlen uplo_len);

/* cla_rpvgrw.c */
extern doublereal cla_rpvgrw__(integer *n, integer *ncols, complex *a, integer *lda, 
	complex *af, integer *ldaf);

/* cla_syamv.c */
extern int cla_syamv__(integer *uplo, integer *n, real *alpha, 
	complex *a, integer *lda, complex *x, integer *incx, real *beta, real 
	*y, integer *incy);

/* cla_syrcond_c.c */
extern doublereal cla_syrcond_c__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, real *c__, logical *capply,
	 integer *info, complex *work, real *rwork, ftnlen uplo_len);

/* cla_syrcond_x.c */
extern doublereal cla_syrcond_x__(char *uplo, integer *n, complex *a, integer *lda, 
	complex *af, integer *ldaf, integer *ipiv, complex *x, integer *info, 
	complex *work, real *rwork, ftnlen uplo_len);

/* cla_syrfsx_extended.c */
extern int cla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *af, 
	integer *ldaf, integer *ipiv, logical *colequ, real *c__, complex *b, 
	integer *ldb, complex *y, integer *ldy, real *berr_out__, integer *
	n_norms__, real *err_bnds_norm__, real *err_bnds_comp__, complex *res,
	 real *ayb, complex *dy, complex *y_tail__, real *rcond, integer *
	ithresh, real *rthresh, real *dz_ub__, logical *ignore_cwise__, 
	integer *info, ftnlen uplo_len);

/* cla_syrpvgrw.c */
extern doublereal cla_syrpvgrw__(char *uplo, integer *n, integer *info, complex *a, 
	integer *lda, complex *af, integer *ldaf, integer *ipiv, real *work, 
	ftnlen uplo_len);

/* cla_wwaddw.c */
extern int cla_wwaddw__(integer *n, complex *x, complex *y, complex 
	*w);

/* clabrd.c */
extern int clabrd_(integer *m, integer *n, integer *nb, complex *a, 
	integer *lda, real *d__, real *e, complex *tauq, complex *taup, 
	complex *x, integer *ldx, complex *y, integer *ldy);

/* clacgv.c */
extern int clacgv_(integer *n, complex *x, integer *incx);

/* clacn2.c */
extern int clacn2_(integer *n, complex *v, complex *x, real *est, 
	integer *kase, integer *isave);

/* clacon.c */
extern int clacon_(integer *n, complex *v, complex *x, real *est, 
	integer *kase);

/* clacp2.c */
extern int clacp2_(char *uplo, integer *m, integer *n, real *a, 
	integer *lda, complex *b, integer *ldb);

/* clacpy.c */
extern int clacpy_(char *uplo, integer *m, integer *n, complex *a, 
	integer *lda, complex *b, integer *ldb);

/* clacrm.c */
extern int clacrm_(integer *m, integer *n, complex *a, integer *lda, 
	 real *b, integer *ldb, complex *c__, integer *ldc, real *rwork);

/* clacrt.c */
extern int clacrt_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy, complex *c__, complex *s);

/* cladiv.c */
extern void cladiv_(complex * ret_val, complex *x, complex *y);

/* claed0.c */
extern int claed0_(integer *qsiz, integer *n, real *d__, real *e, 
	complex *q, integer *ldq, complex *qstore, integer *ldqs, real *rwork, 
	 integer *iwork, integer *info);

/* claed7.c */
extern int claed7_(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real *d__, complex *
	q, integer *ldq, real *rho, integer *indxq, real *qstore, integer *
	qptr, integer *prmptr, integer *perm, integer *givptr, integer *
	givcol, real *givnum, complex *work, real *rwork, integer *iwork, 
	integer *info);

/* claed8.c */
extern int claed8_(integer *k, integer *n, integer *qsiz, complex *
	q, integer *ldq, real *d__, real *rho, integer *cutpnt, real *z__, 
	real *dlamda, complex *q2, integer *ldq2, real *w, integer *indxp, 
	integer *indx, integer *indxq, integer *perm, integer *givptr, 
	integer *givcol, real *givnum, integer *info);

/* claein.c */
extern int claein_(logical *rightv, logical *noinit, integer *n, 
	complex *h__, integer *ldh, complex *w, complex *v, complex *b, 
	integer *ldb, real *rwork, real *eps3, real *smlnum, integer *info);

/* claesy.c */
extern int claesy_(complex *a, complex *b, complex *c__, complex *
	rt1, complex *rt2, complex *evscal, complex *cs1, complex *sn1);

/* claev2.c */
extern int claev2_(complex *a, complex *b, complex *c__, real *rt1, 
	real *rt2, real *cs1, complex *sn1);

/* clag2z.c */
extern int clag2z_(integer *m, integer *n, complex *sa, integer *
	ldsa, doublecomplex *a, integer *lda, integer *info);

/* clags2.c */
extern int clags2_(logical *upper, real *a1, complex *a2, real *a3, 
	real *b1, complex *b2, real *b3, real *csu, complex *snu, real *csv, 
	complex *snv, real *csq, complex *snq);

/* clagtm.c */
extern int clagtm_(char *trans, integer *n, integer *nrhs, real *
	alpha, complex *dl, complex *d__, complex *du, complex *x, integer *
	ldx, real *beta, complex *b, integer *ldb);

/* clahef.c */
extern int clahef_(char *uplo, integer *n, integer *nb, integer *kb, 
	 complex *a, integer *lda, integer *ipiv, complex *w, integer *ldw, 
	integer *info);

/* clahqr.c */
extern int clahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *w, 
	integer *iloz, integer *ihiz, complex *z__, integer *ldz, integer *
	info);

/* clahr2.c */
extern int clahr2_(integer *n, integer *k, integer *nb, complex *a, 
	integer *lda, complex *tau, complex *t, integer *ldt, complex *y, 
	integer *ldy);

/* clahrd.c */
extern int clahrd_(integer *n, integer *k, integer *nb, complex *a, 
	integer *lda, complex *tau, complex *t, integer *ldt, complex *y, 
	integer *ldy);

/* claic1.c */
extern int claic1_(integer *job, integer *j, complex *x, real *sest, 
	 complex *w, complex *gamma, real *sestpr, complex *s, complex *c__);

/* clals0.c */
extern int clals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, complex *b, integer *ldb, complex *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real *givnum, integer *ldgnum, real *poles, real *
	difl, real *difr, real *z__, integer *k, real *c__, real *s, real *
	rwork, integer *info);

/* clalsa.c */
extern int clalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, complex *b, integer *ldb, complex *bx, integer *ldbx, 
	real *u, integer *ldu, real *vt, integer *k, real *difl, real *difr, 
	real *z__, real *poles, integer *givptr, integer *givcol, integer *
	ldgcol, integer *perm, real *givnum, real *c__, real *s, real *rwork, 
	integer *iwork, integer *info);

/* clalsd.c */
extern int clalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, real *d__, real *e, complex *b, integer *ldb, real *rcond, 
	integer *rank, complex *work, real *rwork, integer *iwork, integer *
	info);

/* clangb.c */
extern doublereal clangb_(char *norm, integer *n, integer *kl, integer *ku, complex *
	ab, integer *ldab, real *work);

/* clange.c */
extern doublereal clange_(char *norm, integer *m, integer *n, complex *a, integer *
	lda, real *work);

/* clangt.c */
extern doublereal clangt_(char *norm, integer *n, complex *dl, complex *d__, complex 
	*du);

/* clanhb.c */
extern doublereal clanhb_(char *norm, char *uplo, integer *n, integer *k, complex *
	ab, integer *ldab, real *work);

/* clanhe.c */
extern doublereal clanhe_(char *norm, char *uplo, integer *n, complex *a, integer *
	lda, real *work);

/* clanhf.c */
extern doublereal clanhf_(char *norm, char *transr, char *uplo, integer *n, complex *
	a, real *work);

/* clanhp.c */
extern doublereal clanhp_(char *norm, char *uplo, integer *n, complex *ap, real *
	work);

/* clanhs.c */
extern doublereal clanhs_(char *norm, integer *n, complex *a, integer *lda, real *
	work);

/* clanht.c */
extern doublereal clanht_(char *norm, integer *n, real *d__, complex *e);

/* clansb.c */
extern doublereal clansb_(char *norm, char *uplo, integer *n, integer *k, complex *
	ab, integer *ldab, real *work);

/* clansp.c */
extern doublereal clansp_(char *norm, char *uplo, integer *n, complex *ap, real *
	work);

/* clansy.c */
extern doublereal clansy_(char *norm, char *uplo, integer *n, complex *a, integer *
	lda, real *work);

/* clantb.c */
extern doublereal clantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 complex *ab, integer *ldab, real *work);

/* clantp.c */
extern doublereal clantp_(char *norm, char *uplo, char *diag, integer *n, complex *
	ap, real *work);

/* clantr.c */
extern doublereal clantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 complex *a, integer *lda, real *work);

/* clapll.c */
extern int clapll_(integer *n, complex *x, integer *incx, complex *
	y, integer *incy, real *ssmin);

/* clapmt.c */
extern int clapmt_(logical *forwrd, integer *m, integer *n, complex 
	*x, integer *ldx, integer *k);

/* claqgb.c */
extern int claqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real 
	*colcnd, real *amax, char *equed);

/* claqge.c */
extern int claqge_(integer *m, integer *n, complex *a, integer *lda, 
	 real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, char *
	equed);

/* claqhb.c */
extern int claqhb_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *s, real *scond, real *amax, char *equed);

/* claqhe.c */
extern int claqhe_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *s, real *scond, real *amax, char *equed);

/* claqhp.c */
extern int claqhp_(char *uplo, integer *n, complex *ap, real *s, 
	real *scond, real *amax, char *equed);

/* claqp2.c */
extern int claqp2_(integer *m, integer *n, integer *offset, complex 
	*a, integer *lda, integer *jpvt, complex *tau, real *vn1, real *vn2, 
	complex *work);

/* claqps.c */
extern int claqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, complex *a, integer *lda, integer *jpvt, complex *
	tau, real *vn1, real *vn2, complex *auxv, complex *f, integer *ldf);

/* claqr0.c */
extern int claqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *w, 
	integer *iloz, integer *ihiz, complex *z__, integer *ldz, complex *
	work, integer *lwork, integer *info);

/* claqr1.c */
extern int claqr1_(integer *n, complex *h__, integer *ldh, complex *
	s1, complex *s2, complex *v);

/* claqr2.c */
extern int claqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, complex *h__, integer *ldh, 
	 integer *iloz, integer *ihiz, complex *z__, integer *ldz, integer *
	ns, integer *nd, complex *sh, complex *v, integer *ldv, integer *nh, 
	complex *t, integer *ldt, integer *nv, complex *wv, integer *ldwv, 
	complex *work, integer *lwork);

/* claqr3.c */
extern int claqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, complex *h__, integer *ldh, 
	 integer *iloz, integer *ihiz, complex *z__, integer *ldz, integer *
	ns, integer *nd, complex *sh, complex *v, integer *ldv, integer *nh, 
	complex *t, integer *ldt, integer *nv, complex *wv, integer *ldwv, 
	complex *work, integer *lwork);

/* claqr4.c */
extern int claqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, complex *h__, integer *ldh, complex *w, 
	integer *iloz, integer *ihiz, complex *z__, integer *ldz, complex *
	work, integer *lwork, integer *info);

/* claqr5.c */
extern int claqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, complex *s, 
	 complex *h__, integer *ldh, integer *iloz, integer *ihiz, complex *
	z__, integer *ldz, complex *v, integer *ldv, complex *u, integer *ldu, 
	 integer *nv, complex *wv, integer *ldwv, integer *nh, complex *wh, 
	integer *ldwh);

/* claqsb.c */
extern int claqsb_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *s, real *scond, real *amax, char *equed);

/* claqsp.c */
extern int claqsp_(char *uplo, integer *n, complex *ap, real *s, 
	real *scond, real *amax, char *equed);

/* claqsy.c */
extern int claqsy_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *s, real *scond, real *amax, char *equed);

/* clar1v.c */
extern int clar1v_(integer *n, integer *b1, integer *bn, real *
	lambda, real *d__, real *l, real *ld, real *lld, real *pivmin, real *
	gaptol, complex *z__, logical *wantnc, integer *negcnt, real *ztz, 
	real *mingma, integer *r__, integer *isuppz, real *nrminv, real *
	resid, real *rqcorr, real *work);

/* clar2v.c */
extern int clar2v_(integer *n, complex *x, complex *y, complex *z__, 
	 integer *incx, real *c__, complex *s, integer *incc);

/* clarcm.c */
extern int clarcm_(integer *m, integer *n, real *a, integer *lda, 
	complex *b, integer *ldb, complex *c__, integer *ldc, real *rwork);

/* clarf.c */
extern int clarf_(char *side, integer *m, integer *n, complex *v, 
	integer *incv, complex *tau, complex *c__, integer *ldc, complex *
	work);

/* clarfb.c */
extern int clarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, complex *v, integer *ldv, 
	complex *t, integer *ldt, complex *c__, integer *ldc, complex *work, 
	integer *ldwork);

/* clarfg.c */
extern int clarfg_(integer *n, complex *alpha, complex *x, integer *
	incx, complex *tau);

/* clarfp.c */
extern int clarfp_(integer *n, complex *alpha, complex *x, integer *
	incx, complex *tau);

/* clarft.c */
extern int clarft_(char *direct, char *storev, integer *n, integer *
	k, complex *v, integer *ldv, complex *tau, complex *t, integer *ldt);

/* clarfx.c */
extern int clarfx_(char *side, integer *m, integer *n, complex *v, 
	complex *tau, complex *c__, integer *ldc, complex *work);

/* clargv.c */
extern int clargv_(integer *n, complex *x, integer *incx, complex *
	y, integer *incy, real *c__, integer *incc);

/* clarnv.c */
extern int clarnv_(integer *idist, integer *iseed, integer *n, 
	complex *x);

/* clarrv.c */
extern int clarrv_(integer *n, real *vl, real *vu, real *d__, real *
	l, real *pivmin, integer *isplit, integer *m, integer *dol, integer *
	dou, real *minrgp, real *rtol1, real *rtol2, real *w, real *werr, 
	real *wgap, integer *iblock, integer *indexw, real *gers, complex *
	z__, integer *ldz, integer *isuppz, real *work, integer *iwork, 
	integer *info);

/* clarscl2.c */
extern int clarscl2_(integer *m, integer *n, real *d__, complex *x, 
	integer *ldx);

/* clartg.c */
extern int clartg_(complex *f, complex *g, real *cs, complex *sn, 
	complex *r__);

/* clartv.c */
extern int clartv_(integer *n, complex *x, integer *incx, complex *
	y, integer *incy, real *c__, complex *s, integer *incc);

/* clarz.c */
extern int clarz_(char *side, integer *m, integer *n, integer *l, 
	complex *v, integer *incv, complex *tau, complex *c__, integer *ldc, 
	complex *work);

/* clarzb.c */
extern int clarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, complex *v, 
	integer *ldv, complex *t, integer *ldt, complex *c__, integer *ldc, 
	complex *work, integer *ldwork);

/* clarzt.c */
extern int clarzt_(char *direct, char *storev, integer *n, integer *
	k, complex *v, integer *ldv, complex *tau, complex *t, integer *ldt);

/* clascl.c */
extern int clascl_(char *type__, integer *kl, integer *ku, real *
	cfrom, real *cto, integer *m, integer *n, complex *a, integer *lda, 
	integer *info);

/* clascl2.c */
extern int clascl2_(integer *m, integer *n, real *d__, complex *x, 
	integer *ldx);

/* claset.c */
extern int claset_(char *uplo, integer *m, integer *n, complex *
	alpha, complex *beta, complex *a, integer *lda);

/* clasr.c */
extern int clasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, real *c__, real *s, complex *a, integer *lda);

/* classq.c */
extern int classq_(integer *n, complex *x, integer *incx, real *
	scale, real *sumsq);

/* claswp.c */
extern int claswp_(integer *n, complex *a, integer *lda, integer *
	k1, integer *k2, integer *ipiv, integer *incx);

/* clasyf.c */
extern int clasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 complex *a, integer *lda, integer *ipiv, complex *w, integer *ldw, 
	integer *info);

/* clatbs.c */
extern int clatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, complex *ab, integer *ldab, complex *
	x, real *scale, real *cnorm, integer *info);

/* clatdf.c */
extern int clatdf_(integer *ijob, integer *n, complex *z__, integer 
	*ldz, complex *rhs, real *rdsum, real *rdscal, integer *ipiv, integer 
	*jpiv);

/* clatps.c */
extern int clatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex *ap, complex *x, real *scale, real *cnorm, 
	 integer *info);

/* clatrd.c */
extern int clatrd_(char *uplo, integer *n, integer *nb, complex *a, 
	integer *lda, real *e, complex *tau, complex *w, integer *ldw);

/* clatrs.c */
extern int clatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, complex *a, integer *lda, complex *x, real *scale, 
	 real *cnorm, integer *info);

/* clatrz.c */
extern int clatrz_(integer *m, integer *n, integer *l, complex *a, 
	integer *lda, complex *tau, complex *work);

/* clatzm.c */
extern int clatzm_(char *side, integer *m, integer *n, complex *v, 
	integer *incv, complex *tau, complex *c1, complex *c2, integer *ldc, 
	complex *work);

/* clauu2.c */
extern int clauu2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* clauum.c */
extern int clauum_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpbcon.c */
extern int cpbcon_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *anorm, real *rcond, complex *work, real *rwork, 
	integer *info);

/* cpbequ.c */
extern int cpbequ_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, real *s, real *scond, real *amax, integer *info);

/* cpbrfs.c */
extern int cpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *afb, integer *ldafb, 
	complex *b, integer *ldb, complex *x, integer *ldx, real *ferr, real *
	berr, complex *work, real *rwork, integer *info);

/* cpbstf.c */
extern int cpbstf_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, integer *info);

/* cpbsv.c */
extern int cpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *b, integer *ldb, integer *
	info);

/* cpbsvx.c */
extern int cpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, complex *ab, integer *ldab, complex *afb, integer *
	ldafb, char *equed, real *s, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *ferr, real *berr, complex *work, 
	real *rwork, integer *info);

/* cpbtf2.c */
extern int cpbtf2_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, integer *info);

/* cpbtrf.c */
extern int cpbtrf_(char *uplo, integer *n, integer *kd, complex *ab, 
	 integer *ldab, integer *info);

/* cpbtrs.c */
extern int cpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *b, integer *ldb, integer *
	info);

/* cpftrf.c */
extern int cpftrf_(char *transr, char *uplo, integer *n, complex *a, 
	 integer *info);

/* cpftri.c */
extern int cpftri_(char *transr, char *uplo, integer *n, complex *a, 
	 integer *info);

/* cpftrs.c */
extern int cpftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, complex *a, complex *b, integer *ldb, integer *info);

/* cpocon.c */
extern int cpocon_(char *uplo, integer *n, complex *a, integer *lda, 
	 real *anorm, real *rcond, complex *work, real *rwork, integer *info);

/* cpoequ.c */
extern int cpoequ_(integer *n, complex *a, integer *lda, real *s, 
	real *scond, real *amax, integer *info);

/* cpoequb.c */
extern int cpoequb_(integer *n, complex *a, integer *lda, real *s, 
	real *scond, real *amax, integer *info);

/* cporfs.c */
extern int cporfs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, complex *b, integer *ldb, 
	 complex *x, integer *ldx, real *ferr, real *berr, complex *work, 
	real *rwork, integer *info);

/* cporfsx.c */
extern int cporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, real *s, 
	complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, real 
	*berr, integer *n_err_bnds__, real *err_bnds_norm__, real *
	err_bnds_comp__, integer *nparams, real *params, complex *work, real *
	rwork, integer *info);

/* cposv.c */
extern int cposv_(char *uplo, integer *n, integer *nrhs, complex *a, 
	 integer *lda, complex *b, integer *ldb, integer *info);

/* cposvx.c */
extern int cposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, char *
	equed, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cposvxx.c */
extern int cposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, char *
	equed, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, complex *work, real *rwork, integer *info);

/* cpotf2.c */
extern int cpotf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpotrf.c */
extern int cpotrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpotri.c */
extern int cpotri_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *info);

/* cpotrs.c */
extern int cpotrs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, integer *info);

/* cppcon.c */
extern int cppcon_(char *uplo, integer *n, complex *ap, real *anorm, 
	 real *rcond, complex *work, real *rwork, integer *info);

/* cppequ.c */
extern int cppequ_(char *uplo, integer *n, complex *ap, real *s, 
	real *scond, real *amax, integer *info);

/* cpprfs.c */
extern int cpprfs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *afp, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *ferr, real *berr, complex *work, real *rwork, integer *info);

/* cppsv.c */
extern int cppsv_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *b, integer *ldb, integer *info);

/* cppsvx.c */
extern int cppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *ap, complex *afp, char *equed, real *s, complex *b, 
	integer *ldb, complex *x, integer *ldx, real *rcond, real *ferr, real 
	*berr, complex *work, real *rwork, integer *info);

/* cpptrf.c */
extern int cpptrf_(char *uplo, integer *n, complex *ap, integer *
	info);

/* cpptri.c */
extern int cpptri_(char *uplo, integer *n, complex *ap, integer *
	info);

/* cpptrs.c */
extern int cpptrs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *b, integer *ldb, integer *info);

/* cpstf2.c */
extern int cpstf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *piv, integer *rank, real *tol, real *work, integer *info);

/* cpstrf.c */
extern int cpstrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *piv, integer *rank, real *tol, real *work, integer *info);

/* cptcon.c */
extern int cptcon_(integer *n, real *d__, complex *e, real *anorm, 
	real *rcond, real *rwork, integer *info);

/* cpteqr.c */
extern int cpteqr_(char *compz, integer *n, real *d__, real *e, 
	complex *z__, integer *ldz, real *work, integer *info);

/* cptrfs.c */
extern int cptrfs_(char *uplo, integer *n, integer *nrhs, real *d__, 
	 complex *e, real *df, complex *ef, complex *b, integer *ldb, complex 
	*x, integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cptsv.c */
extern int cptsv_(integer *n, integer *nrhs, real *d__, complex *e, 
	complex *b, integer *ldb, integer *info);

/* cptsvx.c */
extern int cptsvx_(char *fact, integer *n, integer *nrhs, real *d__, 
	 complex *e, real *df, complex *ef, complex *b, integer *ldb, complex 
	*x, integer *ldx, real *rcond, real *ferr, real *berr, complex *work, 
	real *rwork, integer *info);

/* cpttrf.c */
extern int cpttrf_(integer *n, real *d__, complex *e, integer *info);

/* cpttrs.c */
extern int cpttrs_(char *uplo, integer *n, integer *nrhs, real *d__, 
	 complex *e, complex *b, integer *ldb, integer *info);

/* cptts2.c */
extern int cptts2_(integer *iuplo, integer *n, integer *nrhs, real *
	d__, complex *e, complex *b, integer *ldb);

/* crot.c */
extern int crot_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy, real *c__, complex *s);

/* cspcon.c */
extern int cspcon_(char *uplo, integer *n, complex *ap, integer *
	ipiv, real *anorm, real *rcond, complex *work, integer *info);

/* cspmv.c */
extern int cspmv_(char *uplo, integer *n, complex *alpha, complex *
	ap, complex *x, integer *incx, complex *beta, complex *y, integer *
	incy);

/* cspr.c */
extern int cspr_(char *uplo, integer *n, complex *alpha, complex *x, 
	 integer *incx, complex *ap);

/* csprfs.c */
extern int csprfs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *afp, integer *ipiv, complex *b, integer *ldb, complex *x, 
	 integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* cspsv.c */
extern int cspsv_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* cspsvx.c */
extern int cspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *ap, complex *afp, integer *ipiv, complex *b, integer *
	ldb, complex *x, integer *ldx, real *rcond, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* csptrf.c */
extern int csptrf_(char *uplo, integer *n, complex *ap, integer *
	ipiv, integer *info);

/* csptri.c */
extern int csptri_(char *uplo, integer *n, complex *ap, integer *
	ipiv, complex *work, integer *info);

/* csptrs.c */
extern int csptrs_(char *uplo, integer *n, integer *nrhs, complex *
	ap, integer *ipiv, complex *b, integer *ldb, integer *info);

/* csrscl.c */
extern int csrscl_(integer *n, real *sa, complex *sx, integer *incx);

/* cstedc.c */
extern int cstedc_(char *compz, integer *n, real *d__, real *e, 
	complex *z__, integer *ldz, complex *work, integer *lwork, real *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);

/* cstegr.c */
extern int cstegr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, complex *z__, integer *ldz, integer *isuppz, 
	real *work, integer *lwork, integer *iwork, integer *liwork, integer *
	info);

/* cstein.c */
extern int cstein_(integer *n, real *d__, real *e, integer *m, real 
	*w, integer *iblock, integer *isplit, complex *z__, integer *ldz, 
	real *work, integer *iwork, integer *ifail, integer *info);

/* cstemr.c */
extern int cstemr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, integer *m, 
	real *w, complex *z__, integer *ldz, integer *nzc, integer *isuppz, 
	logical *tryrac, real *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);

/* csteqr.c */
extern int csteqr_(char *compz, integer *n, real *d__, real *e, 
	complex *z__, integer *ldz, real *work, integer *info);

/* csycon.c */
extern int csycon_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, real *anorm, real *rcond, complex *work, integer *
	info);

/* csyequb.c */
extern int csyequb_(char *uplo, integer *n, complex *a, integer *
	lda, real *s, real *scond, real *amax, complex *work, integer *info);

/* csymv.c */
extern int csymv_(char *uplo, integer *n, complex *alpha, complex *
	a, integer *lda, complex *x, integer *incx, complex *beta, complex *y, 
	 integer *incy);

/* csyr.c */
extern int csyr_(char *uplo, integer *n, complex *alpha, complex *x, 
	 integer *incx, complex *a, integer *lda);

/* csyrfs.c */
extern int csyrfs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *af, integer *ldaf, integer *ipiv, complex *
	b, integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* csyrfsx.c */
extern int csyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, real *s, complex *b, integer *ldb, complex *x, integer *ldx, 
	real *rcond, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	 real *err_bnds_comp__, integer *nparams, real *params, complex *work, 
	 real *rwork, integer *info);

/* csysv.c */
extern int csysv_(char *uplo, integer *n, integer *nrhs, complex *a, 
	 integer *lda, integer *ipiv, complex *b, integer *ldb, complex *work, 
	 integer *lwork, integer *info);

/* csysvx.c */
extern int csysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, complex *b, integer *ldb, complex *x, integer *ldx, real *rcond, 
	 real *ferr, real *berr, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* csysvxx.c */
extern int csysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *af, integer *ldaf, integer *
	ipiv, char *equed, real *s, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *rcond, real *rpvgrw, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, complex *work, real *rwork, integer *info);

/* csytf2.c */
extern int csytf2_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, integer *info);

/* csytrf.c */
extern int csytrf_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *lwork, integer *info);

/* csytri.c */
extern int csytri_(char *uplo, integer *n, complex *a, integer *lda, 
	 integer *ipiv, complex *work, integer *info);

/* csytrs.c */
extern int csytrs_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, integer *ipiv, complex *b, integer *ldb, integer *
	info);

/* ctbcon.c */
extern int ctbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, complex *ab, integer *ldab, real *rcond, complex *work, 
	real *rwork, integer *info);

/* ctbrfs.c */
extern int ctbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *b, 
	integer *ldb, complex *x, integer *ldx, real *ferr, real *berr, 
	complex *work, real *rwork, integer *info);

/* ctbtrs.c */
extern int ctbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *b, 
	integer *ldb, integer *info);

/* ctfsm.c */
extern int ctfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, complex *alpha, complex *a, 
	complex *b, integer *ldb);

/* ctftri.c */
extern int ctftri_(char *transr, char *uplo, char *diag, integer *n, 
	 complex *a, integer *info);

/* ctfttp.c */
extern int ctfttp_(char *transr, char *uplo, integer *n, complex *
	arf, complex *ap, integer *info);

/* ctfttr.c */
extern int ctfttr_(char *transr, char *uplo, integer *n, complex *
	arf, complex *a, integer *lda, integer *info);

/* ctgevc.c */
extern int ctgevc_(char *side, char *howmny, logical *select, 
	integer *n, complex *s, integer *lds, complex *p, integer *ldp, 
	complex *vl, integer *ldvl, complex *vr, integer *ldvr, integer *mm, 
	integer *m, complex *work, real *rwork, integer *info);

/* ctgex2.c */
extern int ctgex2_(logical *wantq, logical *wantz, integer *n, 
	complex *a, integer *lda, complex *b, integer *ldb, complex *q, 
	integer *ldq, complex *z__, integer *ldz, integer *j1, integer *info);

/* ctgexc.c */
extern int ctgexc_(logical *wantq, logical *wantz, integer *n, 
	complex *a, integer *lda, complex *b, integer *ldb, complex *q, 
	integer *ldq, complex *z__, integer *ldz, integer *ifst, integer *
	ilst, integer *info);

/* ctgsen.c */
extern int ctgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, complex *a, integer *lda, complex *b, 
	integer *ldb, complex *alpha, complex *beta, complex *q, integer *ldq, 
	 complex *z__, integer *ldz, integer *m, real *pl, real *pr, real *
	dif, complex *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* ctgsja.c */
extern int ctgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, complex *a, integer *
	lda, complex *b, integer *ldb, real *tola, real *tolb, real *alpha, 
	real *beta, complex *u, integer *ldu, complex *v, integer *ldv, 
	complex *q, integer *ldq, complex *work, integer *ncycle, integer *
	info);

/* ctgsna.c */
extern int ctgsna_(char *job, char *howmny, logical *select, 
	integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *vl, integer *ldvl, complex *vr, integer *ldvr, real *s, real 
	*dif, integer *mm, integer *m, complex *work, integer *lwork, integer 
	*iwork, integer *info);

/* ctgsy2.c */
extern int ctgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, complex *c__, 
	integer *ldc, complex *d__, integer *ldd, complex *e, integer *lde, 
	complex *f, integer *ldf, real *scale, real *rdsum, real *rdscal, 
	integer *info);

/* ctgsyl.c */
extern int ctgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, complex *a, integer *lda, complex *b, integer *ldb, complex *c__, 
	integer *ldc, complex *d__, integer *ldd, complex *e, integer *lde, 
	complex *f, integer *ldf, real *scale, real *dif, complex *work, 
	integer *lwork, integer *iwork, integer *info);

/* ctpcon.c */
extern int ctpcon_(char *norm, char *uplo, char *diag, integer *n, 
	complex *ap, real *rcond, complex *work, real *rwork, integer *info);

/* ctprfs.c */
extern int ctprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *b, integer *ldb, complex *x, 
	integer *ldx, real *ferr, real *berr, complex *work, real *rwork, 
	integer *info);

/* ctptri.c */
extern int ctptri_(char *uplo, char *diag, integer *n, complex *ap, 
	integer *info);

/* ctptrs.c */
extern int ctptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *b, integer *ldb, integer *info);

/* ctpttf.c */
extern int ctpttf_(char *transr, char *uplo, integer *n, complex *
	ap, complex *arf, integer *info);

/* ctpttr.c */
extern int ctpttr_(char *uplo, integer *n, complex *ap, complex *a, 
	integer *lda, integer *info);

/* ctrcon.c */
extern int ctrcon_(char *norm, char *uplo, char *diag, integer *n, 
	complex *a, integer *lda, real *rcond, complex *work, real *rwork, 
	integer *info);

/* ctrevc.c */
extern int ctrevc_(char *side, char *howmny, logical *select, 
	integer *n, complex *t, integer *ldt, complex *vl, integer *ldvl, 
	complex *vr, integer *ldvr, integer *mm, integer *m, complex *work, 
	real *rwork, integer *info);

/* ctrexc.c */
extern int ctrexc_(char *compq, integer *n, complex *t, integer *
	ldt, complex *q, integer *ldq, integer *ifst, integer *ilst, integer *
	info);

/* ctrrfs.c */
extern int ctrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *x, integer *ldx, real *ferr, real *berr, complex *work, real 
	*rwork, integer *info);

/* ctrsen.c */
extern int ctrsen_(char *job, char *compq, logical *select, integer 
	*n, complex *t, integer *ldt, complex *q, integer *ldq, complex *w, 
	integer *m, real *s, real *sep, complex *work, integer *lwork, 
	integer *info);

/* ctrsna.c */
extern int ctrsna_(char *job, char *howmny, logical *select, 
	integer *n, complex *t, integer *ldt, complex *vl, integer *ldvl, 
	complex *vr, integer *ldvr, real *s, real *sep, integer *mm, integer *
	m, complex *work, integer *ldwork, real *rwork, integer *info);

/* ctrsyl.c */
extern int ctrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *c__, integer *ldc, real *scale, integer *info);

/* ctrti2.c */
extern int ctrti2_(char *uplo, char *diag, integer *n, complex *a, 
	integer *lda, integer *info);

/* ctrtri.c */
extern int ctrtri_(char *uplo, char *diag, integer *n, complex *a, 
	integer *lda, integer *info);

/* ctrtrs.c */
extern int ctrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, 
	integer *info);

/* ctrttf.c */
extern int ctrttf_(char *transr, char *uplo, integer *n, complex *a, 
	 integer *lda, complex *arf, integer *info);

/* ctrttp.c */
extern int ctrttp_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *ap, integer *info);

/* ctzrqf.c */
extern int ctzrqf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, integer *info);

/* ctzrzf.c */
extern int ctzrzf_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cung2l.c */
extern int cung2l_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cung2r.c */
extern int cung2r_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cungbr.c */
extern int cungbr_(char *vect, integer *m, integer *n, integer *k, 
	complex *a, integer *lda, complex *tau, complex *work, integer *lwork, 
	 integer *info);

/* cunghr.c */
extern int cunghr_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *tau, complex *work, integer *lwork, integer 
	*info);

/* cungl2.c */
extern int cungl2_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cunglq.c */
extern int cunglq_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungql.c */
extern int cungql_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungqr.c */
extern int cungqr_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungr2.c */
extern int cungr2_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *info);

/* cungrq.c */
extern int cungrq_(integer *m, integer *n, integer *k, complex *a, 
	integer *lda, complex *tau, complex *work, integer *lwork, integer *
	info);

/* cungtr.c */
extern int cungtr_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *tau, complex *work, integer *lwork, integer *info);

/* cunm2l.c */
extern int cunm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunm2r.c */
extern int cunm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunmbr.c */
extern int cunmbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *lwork, integer *
	info);

/* cunmhr.c */
extern int cunmhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *lwork, integer *
	info);

/* cunml2.c */
extern int cunml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunmlq.c */
extern int cunmlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmql.c */
extern int cunmql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmqr.c */
extern int cunmqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmr2.c */
extern int cunmr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *info);

/* cunmr3.c */
extern int cunmr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *info);

/* cunmrq.c */
extern int cunmrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cunmrz.c */
extern int cunmrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, complex *a, integer *lda, complex *tau, 
	complex *c__, integer *ldc, complex *work, integer *lwork, integer *
	info);

/* cunmtr.c */
extern int cunmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex *a, integer *lda, complex *tau, complex *c__, 
	integer *ldc, complex *work, integer *lwork, integer *info);

/* cupgtr.c */
extern int cupgtr_(char *uplo, integer *n, complex *ap, complex *
	tau, complex *q, integer *ldq, complex *work, integer *info);

/* cupmtr.c */
extern int cupmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, complex *ap, complex *tau, complex *c__, integer *ldc, 
	complex *work, integer *info);

/* dbdsdc.c */
extern int dbdsdc_(char *uplo, char *compq, integer *n, doublereal *
	d__, doublereal *e, doublereal *u, integer *ldu, doublereal *vt, 
	integer *ldvt, doublereal *q, integer *iq, doublereal *work, integer *
	iwork, integer *info);

/* dbdsqr.c */
extern int dbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublereal *vt, 
	integer *ldvt, doublereal *u, integer *ldu, doublereal *c__, integer *
	ldc, doublereal *work, integer *info);

/* ddisna.c */
extern int ddisna_(char *job, integer *m, integer *n, doublereal *
	d__, doublereal *sep, integer *info);

/* dgbbrd.c */
extern int dgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, doublereal *ab, integer *ldab, doublereal *
	d__, doublereal *e, doublereal *q, integer *ldq, doublereal *pt, 
	integer *ldpt, doublereal *c__, integer *ldc, doublereal *work, 
	integer *info);

/* dgbcon.c */
extern int dgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublereal *work, integer *iwork, integer *info);

/* dgbequ.c */
extern int dgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);

/* dgbequb.c */
extern int dgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);

/* dgbrfs.c */
extern int dgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dgbrfsx.c */
extern int dgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, doublereal *r__, 
	doublereal *c__, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublereal *work, integer *iwork, 
	integer *info);

/* dgbsv.c */
extern int dgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublereal *ab, integer *ldab, integer *ipiv, doublereal *b, 
	integer *ldb, integer *info);

/* dgbsvx.c */
extern int dgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dgbsvxx.c */
extern int dgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublereal *ab, integer *ldab, 
	doublereal *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, 
	doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublereal *work, integer *iwork, integer *info);

/* dgbtf2.c */
extern int dgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);

/* dgbtrf.c */
extern int dgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, integer *ipiv, integer *info);

/* dgbtrs.c */
extern int dgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, integer *ipiv, 
	doublereal *b, integer *ldb, integer *info);

/* dgebak.c */
extern int dgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublereal *v, integer *
	ldv, integer *info);

/* dgebal.c */
extern int dgebal_(char *job, integer *n, doublereal *a, integer *
	lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);

/* dgebd2.c */
extern int dgebd2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *info);

/* dgebrd.c */
extern int dgebrd_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tauq, doublereal *
	taup, doublereal *work, integer *lwork, integer *info);

/* dgecon.c */
extern int dgecon_(char *norm, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dgeequ.c */
extern int dgeequ_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, integer *info);

/* dgeequb.c */
extern int dgeequb_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, integer *info);

/* dgees.c */
extern int dgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	doublereal *a, integer *lda, integer *sdim, doublereal *wr, 
	doublereal *wi, doublereal *vs, integer *ldvs, doublereal *work, 
	integer *lwork, logical *bwork, integer *info);

/* dgeesx.c */
extern int dgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublereal *a, integer *lda, integer *sdim, 
	doublereal *wr, doublereal *wi, doublereal *vs, integer *ldvs, 
	doublereal *rconde, doublereal *rcondv, doublereal *work, integer *
	lwork, integer *iwork, integer *liwork, logical *bwork, integer *info);

/* dgeev.c */
extern int dgeev_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *wr, doublereal *wi, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *work, 
	integer *lwork, integer *info);

/* dgeevx.c */
extern int dgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *ilo, integer *ihi, doublereal *scale, 
	doublereal *abnrm, doublereal *rconde, doublereal *rcondv, doublereal 
	*work, integer *lwork, integer *iwork, integer *info);

/* dgegs.c */
extern int dgegs_(char *jobvsl, char *jobvsr, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	alphar, doublereal *alphai, doublereal *beta, doublereal *vsl, 
	integer *ldvsl, doublereal *vsr, integer *ldvsr, doublereal *work, 
	integer *lwork, integer *info);

/* dgegv.c */
extern int dgegv_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);

/* dgehd2.c */
extern int dgehd2_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *info);

/* dgehrd.c */
extern int dgehrd_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);

/* dgejsv.c */
extern int dgejsv_(char *joba, char *jobu, char *jobv, char *jobr, 
	char *jobt, char *jobp, integer *m, integer *n, doublereal *a, 
	integer *lda, doublereal *sva, doublereal *u, integer *ldu, 
	doublereal *v, integer *ldv, doublereal *work, integer *lwork, 
	integer *iwork, integer *info);

/* dgelq2.c */
extern int dgelq2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgelqf.c */
extern int dgelqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgels.c */
extern int dgels_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);

/* dgelsd.c */
extern int dgelsd_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork, 
	 integer *iwork, integer *info);

/* dgelss.c */
extern int dgelss_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	s, doublereal *rcond, integer *rank, doublereal *work, integer *lwork, 
	 integer *info);

/* dgelsx.c */
extern int dgelsx_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	info);

/* dgelsy.c */
extern int dgelsy_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	jpvt, doublereal *rcond, integer *rank, doublereal *work, integer *
	lwork, integer *info);

/* dgeql2.c */
extern int dgeql2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgeqlf.c */
extern int dgeqlf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgeqp3.c */
extern int dgeqp3_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *lwork, 
	 integer *info);

/* dgeqpf.c */
extern int dgeqpf_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *jpvt, doublereal *tau, doublereal *work, integer *info);

/* dgeqr2.c */
extern int dgeqr2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgeqrf.c */
extern int dgeqrf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgerfs.c */
extern int dgerfs_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);

/* dgerfsx.c */
extern int dgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *r__, doublereal *c__, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *rcond, 
	doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublereal *work, integer *iwork, integer *info);

/* dgerq2.c */
extern int dgerq2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *info);

/* dgerqf.c */
extern int dgerqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dgesc2.c */
extern int dgesc2_(integer *n, doublereal *a, integer *lda, 
	doublereal *rhs, integer *ipiv, integer *jpiv, doublereal *scale);

/* dgesdd.c */
extern int dgesdd_(char *jobz, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *s, doublereal *u, integer *ldu, 
	doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *iwork, integer *info);

/* dgesv.c */
extern int dgesv_(integer *n, integer *nrhs, doublereal *a, integer 
	*lda, integer *ipiv, doublereal *b, integer *ldb, integer *info);

/* dgesvd.c */
extern int dgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *s, doublereal *u, integer *
	ldu, doublereal *vt, integer *ldvt, doublereal *work, integer *lwork, 
	integer *info);

/* dgesvj.c */
extern int dgesvj_(char *joba, char *jobu, char *jobv, integer *m, 
	integer *n, doublereal *a, integer *lda, doublereal *sva, integer *mv, 
	 doublereal *v, integer *ldv, doublereal *work, integer *lwork, 
	integer *info);

/* dgesvx.c */
extern int dgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);

/* dgesvxx.c */
extern int dgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *rpvgrw, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublereal *work, integer *iwork, 
	integer *info);

/* dgetc2.c */
extern int dgetc2_(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, integer *jpiv, integer *info);

/* dgetf2.c */
extern int dgetf2_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);

/* dgetrf.c */
extern int dgetrf_(integer *m, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);

/* dgetri.c */
extern int dgetri_(integer *n, doublereal *a, integer *lda, integer 
	*ipiv, doublereal *work, integer *lwork, integer *info);

/* dgetrs.c */
extern int dgetrs_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);

/* dggbak.c */
extern int dggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublereal *v, integer *ldv, integer *info);

/* dggbal.c */
extern int dggbal_(char *job, integer *n, doublereal *a, integer *
	lda, doublereal *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);

/* dgges.c */
extern int dgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, integer *sdim, doublereal *alphar, doublereal *alphai, 
	doublereal *beta, doublereal *vsl, integer *ldvsl, doublereal *vsr, 
	integer *ldvsr, doublereal *work, integer *lwork, logical *bwork, 
	integer *info);

/* dggesx.c */
extern int dggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, integer *sdim, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vsl, integer *ldvsl, 
	 doublereal *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);

/* dggev.c */
extern int dggev_(char *jobvl, char *jobvr, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *vl, integer *ldvl, 
	doublereal *vr, integer *ldvr, doublereal *work, integer *lwork, 
	integer *info);

/* dggevx.c */
extern int dggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublereal *work, integer *lwork, integer *iwork, logical *
	bwork, integer *info);

/* dggglm.c */
extern int dggglm_(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *d__, 
	doublereal *x, doublereal *y, doublereal *work, integer *lwork, 
	integer *info);

/* dgghrd.c */
extern int dgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *q, integer *ldq, doublereal *z__, integer *
	ldz, integer *info);

/* dgglse.c */
extern int dgglse_(integer *m, integer *n, integer *p, doublereal *
	a, integer *lda, doublereal *b, integer *ldb, doublereal *c__, 
	doublereal *d__, doublereal *x, doublereal *work, integer *lwork, 
	integer *info);

/* dggqrf.c */
extern int dggqrf_(integer *n, integer *m, integer *p, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);

/* dggrqf.c */
extern int dggrqf_(integer *m, integer *p, integer *n, doublereal *
	a, integer *lda, doublereal *taua, doublereal *b, integer *ldb, 
	doublereal *taub, doublereal *work, integer *lwork, integer *info);

/* dggsvd.c */
extern int dggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublereal *u, integer *ldu, doublereal *v, integer 
	*ldv, doublereal *q, integer *ldq, doublereal *work, integer *iwork, 
	integer *info);

/* dggsvp.c */
extern int dggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *tola, doublereal *tolb, integer *k, integer 
	*l, doublereal *u, integer *ldu, doublereal *v, integer *ldv, 
	doublereal *q, integer *ldq, integer *iwork, doublereal *tau, 
	doublereal *work, integer *info);

/* dgsvj0.c */
extern int dgsvj0_(char *jobv, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *d__, doublereal *sva, integer *mv, 
	doublereal *v, integer *ldv, doublereal *eps, doublereal *sfmin, 
	doublereal *tol, integer *nsweep, doublereal *work, integer *lwork, 
	integer *info);

/* dgsvj1.c */
extern int dgsvj1_(char *jobv, integer *m, integer *n, integer *n1, 
	doublereal *a, integer *lda, doublereal *d__, doublereal *sva, 
	integer *mv, doublereal *v, integer *ldv, doublereal *eps, doublereal 
	*sfmin, doublereal *tol, integer *nsweep, doublereal *work, integer *
	lwork, integer *info);

/* dgtcon.c */
extern int dgtcon_(char *norm, integer *n, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *du2, integer *ipiv, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dgtrfs.c */
extern int dgtrfs_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *dlf, 
	doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);

/* dgtsv.c */
extern int dgtsv_(integer *n, integer *nrhs, doublereal *dl, 
	doublereal *d__, doublereal *du, doublereal *b, integer *ldb, integer 
	*info);

/* dgtsvx.c */
extern int dgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublereal *dl, doublereal *d__, doublereal *du, doublereal *
	dlf, doublereal *df, doublereal *duf, doublereal *du2, integer *ipiv, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);

/* dgttrf.c */
extern int dgttrf_(integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du, doublereal *du2, integer *ipiv, integer *info);

/* dgttrs.c */
extern int dgttrs_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb, integer *info);

/* dgtts2.c */
extern int dgtts2_(integer *itrans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *du2, 
	integer *ipiv, doublereal *b, integer *ldb);

/* dhgeqz.c */
extern int dhgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*t, integer *ldt, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	doublereal *work, integer *lwork, integer *info);

/* dhsein.c */
extern int dhsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *vl, integer *ldvl, doublereal *vr, 
	integer *ldvr, integer *mm, integer *m, doublereal *work, integer *
	ifaill, integer *ifailr, integer *info);

/* dhseqr.c */
extern int dhseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, doublereal *h__, integer *ldh, doublereal *wr, 
	doublereal *wi, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *info);

/* disnan.c */
extern logical disnan_(doublereal *din);

/* dla_gbamv.c */
extern int dla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, doublereal *alpha, doublereal *ab, integer *
	ldab, doublereal *x, integer *incx, doublereal *beta, doublereal *y, 
	integer *incy);

/* dla_gbrcond.c */
extern doublereal dla_gbrcond__(char *trans, integer *n, integer *kl, integer *ku, 
	doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	integer *ipiv, integer *cmode, doublereal *c__, integer *info, 
	doublereal *work, integer *iwork, ftnlen trans_len);

/* dla_gbrfsx_extended.c */
extern int dla_gbrfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	integer *ipiv, logical *colequ, doublereal *c__, doublereal *b, 
	integer *ldb, doublereal *y, integer *ldy, doublereal *berr_out__, 
	integer *n_norms__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, doublereal *res, doublereal *ayb, doublereal *dy, 
	doublereal *y_tail__, doublereal *rcond, integer *ithresh, doublereal 
	*rthresh, doublereal *dz_ub__, logical *ignore_cwise__, integer *info);

/* dla_gbrpvgrw.c */
extern doublereal dla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb);

/* dla_geamv.c */
extern int dla_geamv__(integer *trans, integer *m, integer *n, 
	doublereal *alpha, doublereal *a, integer *lda, doublereal *x, 
	integer *incx, doublereal *beta, doublereal *y, integer *incy);

/* dla_gercond.c */
extern doublereal dla_gercond__(char *trans, integer *n, doublereal *a, integer *lda,
	 doublereal *af, integer *ldaf, integer *ipiv, integer *cmode, 
	doublereal *c__, integer *info, doublereal *work, integer *iwork, 
	ftnlen trans_len);

/* dla_gerfsx_extended.c */
extern int dla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, doublereal *a, integer *lda, 
	doublereal *af, integer *ldaf, integer *ipiv, logical *colequ, 
	doublereal *c__, doublereal *b, integer *ldb, doublereal *y, integer *
	ldy, doublereal *berr_out__, integer *n_norms__, doublereal *errs_n__,
	 doublereal *errs_c__, doublereal *res, doublereal *ayb, doublereal *
	dy, doublereal *y_tail__, doublereal *rcond, integer *ithresh, 
	doublereal *rthresh, doublereal *dz_ub__, logical *ignore_cwise__, 
	integer *info);

/* dla_lin_berr.c */
extern int dla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	doublereal *res, doublereal *ayb, doublereal *berr);

/* dla_porcond.c */
extern doublereal dla_porcond__(char *uplo, integer *n, doublereal *a, integer *lda, 
	doublereal *af, integer *ldaf, integer *cmode, doublereal *c__, 
	integer *info, doublereal *work, integer *iwork, ftnlen uplo_len);

/* dla_porfsx_extended.c */
extern int dla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublereal *a, integer *lda, doublereal *
	af, integer *ldaf, logical *colequ, doublereal *c__, doublereal *b, 
	integer *ldb, doublereal *y, integer *ldy, doublereal *berr_out__, 
	integer *n_norms__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, doublereal *res, doublereal *ayb, doublereal *dy, 
	doublereal *y_tail__, doublereal *rcond, integer *ithresh, doublereal 
	*rthresh, doublereal *dz_ub__, logical *ignore_cwise__, integer *info,
	 ftnlen uplo_len);

/* dla_porpvgrw.c */
extern doublereal dla_porpvgrw__(char *uplo, integer *ncols, doublereal *a, integer *
	lda, doublereal *af, integer *ldaf, doublereal *work, ftnlen uplo_len);

/* dla_rpvgrw.c */
extern doublereal dla_rpvgrw__(integer *n, integer *ncols, doublereal *a, integer *
	lda, doublereal *af, integer *ldaf);

/* dla_syamv.c */
extern int dla_syamv__(integer *uplo, integer *n, doublereal *alpha,
	 doublereal *a, integer *lda, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* dla_syrcond.c */
extern doublereal dla_syrcond__(char *uplo, integer *n, doublereal *a, integer *lda, 
	doublereal *af, integer *ldaf, integer *ipiv, integer *cmode, 
	doublereal *c__, integer *info, doublereal *work, integer *iwork, 
	ftnlen uplo_len);

/* dla_syrfsx_extended.c */
extern int dla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublereal *a, integer *lda, doublereal *
	af, integer *ldaf, integer *ipiv, logical *colequ, doublereal *c__, 
	doublereal *b, integer *ldb, doublereal *y, integer *ldy, doublereal *
	berr_out__, integer *n_norms__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, doublereal *res, doublereal *ayb, 
	doublereal *dy, doublereal *y_tail__, doublereal *rcond, integer *
	ithresh, doublereal *rthresh, doublereal *dz_ub__, logical *
	ignore_cwise__, integer *info, ftnlen uplo_len);

/* dla_syrpvgrw.c */
extern doublereal dla_syrpvgrw__(char *uplo, integer *n, integer *info, doublereal *
	a, integer *lda, doublereal *af, integer *ldaf, integer *ipiv, 
	doublereal *work, ftnlen uplo_len);

/* dla_wwaddw.c */
extern int dla_wwaddw__(integer *n, doublereal *x, doublereal *y, 
	doublereal *w);

/* dlabad.c */
extern int dlabad_(doublereal *small, doublereal *large);

/* dlabrd.c */
extern int dlabrd_(integer *m, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *d__, doublereal *e, doublereal *tauq, 
	doublereal *taup, doublereal *x, integer *ldx, doublereal *y, integer 
	*ldy);

/* dlacn2.c */
extern int dlacn2_(integer *n, doublereal *v, doublereal *x, 
	integer *isgn, doublereal *est, integer *kase, integer *isave);

/* dlacon.c */
extern int dlacon_(integer *n, doublereal *v, doublereal *x, 
	integer *isgn, doublereal *est, integer *kase);

/* dlacpy.c */
extern int dlacpy_(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublereal *b, integer *ldb);

/* dladiv.c */
extern int dladiv_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *p, doublereal *q);

/* dlae2.c */
extern int dlae2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2);

/* dlaebz.c */
extern int dlaebz_(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, doublereal *abstol, 
	doublereal *reltol, doublereal *pivmin, doublereal *d__, doublereal *
	e, doublereal *e2, integer *nval, doublereal *ab, doublereal *c__, 
	integer *mout, integer *nab, doublereal *work, integer *iwork, 
	integer *info);

/* dlaed0.c */
extern int dlaed0_(integer *icompq, integer *qsiz, integer *n, 
	doublereal *d__, doublereal *e, doublereal *q, integer *ldq, 
	doublereal *qstore, integer *ldqs, doublereal *work, integer *iwork, 
	integer *info);

/* dlaed1.c */
extern int dlaed1_(integer *n, doublereal *d__, doublereal *q, 
	integer *ldq, integer *indxq, doublereal *rho, integer *cutpnt, 
	doublereal *work, integer *iwork, integer *info);

/* dlaed2.c */
extern int dlaed2_(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, integer *indxq, doublereal *rho, 
	doublereal *z__, doublereal *dlamda, doublereal *w, doublereal *q2, 
	integer *indx, integer *indxc, integer *indxp, integer *coltyp, 
	integer *info);

/* dlaed3.c */
extern int dlaed3_(integer *k, integer *n, integer *n1, doublereal *
	d__, doublereal *q, integer *ldq, doublereal *rho, doublereal *dlamda, 
	 doublereal *q2, integer *indx, integer *ctot, doublereal *w, 
	doublereal *s, integer *info);

/* dlaed4.c */
extern int dlaed4_(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *dlam, 
	 integer *info);

/* dlaed5.c */
extern int dlaed5_(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dlam);

/* dlaed6.c */
extern int dlaed6_(integer *kniter, logical *orgati, doublereal *
	rho, doublereal *d__, doublereal *z__, doublereal *finit, doublereal *
	tau, integer *info);

/* dlaed7.c */
extern int dlaed7_(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublereal *q, integer *ldq, integer *indxq, doublereal *rho, integer 
	*cutpnt, doublereal *qstore, integer *qptr, integer *prmptr, integer *
	perm, integer *givptr, integer *givcol, doublereal *givnum, 
	doublereal *work, integer *iwork, integer *info);

/* dlaed8.c */
extern int dlaed8_(integer *icompq, integer *k, integer *n, integer 
	*qsiz, doublereal *d__, doublereal *q, integer *ldq, integer *indxq, 
	doublereal *rho, integer *cutpnt, doublereal *z__, doublereal *dlamda, 
	 doublereal *q2, integer *ldq2, doublereal *w, integer *perm, integer 
	*givptr, integer *givcol, doublereal *givnum, integer *indxp, integer 
	*indx, integer *info);

/* dlaed9.c */
extern int dlaed9_(integer *k, integer *kstart, integer *kstop, 
	integer *n, doublereal *d__, doublereal *q, integer *ldq, doublereal *
	rho, doublereal *dlamda, doublereal *w, doublereal *s, integer *lds, 
	integer *info);

/* dlaeda.c */
extern int dlaeda_(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, doublereal *givnum, doublereal *q, integer *qptr, 
	doublereal *z__, doublereal *ztemp, integer *info);

/* dlaein.c */
extern int dlaein_(logical *rightv, logical *noinit, integer *n, 
	doublereal *h__, integer *ldh, doublereal *wr, doublereal *wi, 
	doublereal *vr, doublereal *vi, doublereal *b, integer *ldb, 
	doublereal *work, doublereal *eps3, doublereal *smlnum, doublereal *
	bignum, integer *info);

/* dlaev2.c */
extern int dlaev2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *rt1, doublereal *rt2, doublereal *cs1, doublereal *sn1);

/* dlaexc.c */
extern int dlaexc_(logical *wantq, integer *n, doublereal *t, 
	integer *ldt, doublereal *q, integer *ldq, integer *j1, integer *n1, 
	integer *n2, doublereal *work, integer *info);

/* dlag2.c */
extern int dlag2_(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *safmin, doublereal *scale1, doublereal *
	scale2, doublereal *wr1, doublereal *wr2, doublereal *wi);

/* dlag2s.c */
extern int dlag2s_(integer *m, integer *n, doublereal *a, integer *
	lda, real *sa, integer *ldsa, integer *info);

/* dlags2.c */
extern int dlags2_(logical *upper, doublereal *a1, doublereal *a2, 
	doublereal *a3, doublereal *b1, doublereal *b2, doublereal *b3, 
	doublereal *csu, doublereal *snu, doublereal *csv, doublereal *snv, 
	doublereal *csq, doublereal *snq);

/* dlagtf.c */
extern int dlagtf_(integer *n, doublereal *a, doublereal *lambda, 
	doublereal *b, doublereal *c__, doublereal *tol, doublereal *d__, 
	integer *in, integer *info);

/* dlagtm.c */
extern int dlagtm_(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublereal *dl, doublereal *d__, doublereal *du, 
	doublereal *x, integer *ldx, doublereal *beta, doublereal *b, integer 
	*ldb);

/* dlagts.c */
extern int dlagts_(integer *job, integer *n, doublereal *a, 
	doublereal *b, doublereal *c__, doublereal *d__, integer *in, 
	doublereal *y, doublereal *tol, integer *info);

/* dlagv2.c */
extern int dlagv2_(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *csl, doublereal *snl, doublereal *csr, doublereal *
	snr);

/* dlahqr.c */
extern int dlahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, integer *info);

/* dlahr2.c */
extern int dlahr2_(integer *n, integer *k, integer *nb, doublereal *
	a, integer *lda, doublereal *tau, doublereal *t, integer *ldt, 
	doublereal *y, integer *ldy);

/* dlahrd.c */
extern int dlahrd_(integer *n, integer *k, integer *nb, doublereal *
	a, integer *lda, doublereal *tau, doublereal *t, integer *ldt, 
	doublereal *y, integer *ldy);

/* dlaic1.c */
extern int dlaic1_(integer *job, integer *j, doublereal *x, 
	doublereal *sest, doublereal *w, doublereal *gamma, doublereal *
	sestpr, doublereal *s, doublereal *c__);

/* dlaisnan.c */
extern logical dlaisnan_(doublereal *din1, doublereal *din2);

/* dlaln2.c */
extern int dlaln2_(logical *ltrans, integer *na, integer *nw, 
	doublereal *smin, doublereal *ca, doublereal *a, integer *lda, 
	doublereal *d1, doublereal *d2, doublereal *b, integer *ldb, 
	doublereal *wr, doublereal *wi, doublereal *x, integer *ldx, 
	doublereal *scale, doublereal *xnorm, integer *info);

/* dlals0.c */
extern int dlals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublereal *b, integer *ldb, doublereal 
	*bx, integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, doublereal *givnum, integer *ldgnum, doublereal *
	poles, doublereal *difl, doublereal *difr, doublereal *z__, integer *
	k, doublereal *c__, doublereal *s, doublereal *work, integer *info);

/* dlalsa.c */
extern int dlalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublereal *b, integer *ldb, doublereal *bx, integer *
	ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *k, 
	doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	work, integer *iwork, integer *info);

/* dlalsd.c */
extern int dlalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, doublereal *d__, doublereal *e, doublereal *b, integer *ldb, 
	doublereal *rcond, integer *rank, doublereal *work, integer *iwork, 
	integer *info);

/* dlamrg.c */
extern int dlamrg_(integer *n1, integer *n2, doublereal *a, integer 
	*dtrd1, integer *dtrd2, integer *index);

/* dlaneg.c */
extern integer dlaneg_(integer *n, doublereal *d__, doublereal *lld, doublereal *
	sigma, doublereal *pivmin, integer *r__);

/* dlangb.c */
extern doublereal dlangb_(char *norm, integer *n, integer *kl, integer *ku, 
	doublereal *ab, integer *ldab, doublereal *work);

/* dlange.c */
extern doublereal dlange_(char *norm, integer *m, integer *n, doublereal *a, integer 
	*lda, doublereal *work);

/* dlangt.c */
extern doublereal dlangt_(char *norm, integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du);

/* dlanhs.c */
extern doublereal dlanhs_(char *norm, integer *n, doublereal *a, integer *lda, 
	doublereal *work);

/* dlansb.c */
extern doublereal dlansb_(char *norm, char *uplo, integer *n, integer *k, doublereal 
	*ab, integer *ldab, doublereal *work);

/* dlansf.c */
extern doublereal dlansf_(char *norm, char *transr, char *uplo, integer *n, 
	doublereal *a, doublereal *work);

/* dlansp.c */
extern doublereal dlansp_(char *norm, char *uplo, integer *n, doublereal *ap, 
	doublereal *work);

/* dlanst.c */
extern doublereal dlanst_(char *norm, integer *n, doublereal *d__, doublereal *e);

/* dlansy.c */
extern doublereal dlansy_(char *norm, char *uplo, integer *n, doublereal *a, integer 
	*lda, doublereal *work);

/* dlantb.c */
extern doublereal dlantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 doublereal *ab, integer *ldab, doublereal *work);

/* dlantp.c */
extern doublereal dlantp_(char *norm, char *uplo, char *diag, integer *n, doublereal 
	*ap, doublereal *work);

/* dlantr.c */
extern doublereal dlantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 doublereal *a, integer *lda, doublereal *work);

/* dlanv2.c */
extern int dlanv2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *rt1r, doublereal *rt1i, doublereal *rt2r, 
	 doublereal *rt2i, doublereal *cs, doublereal *sn);

/* dlapll.c */
extern int dlapll_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *ssmin);

/* dlapmt.c */
extern int dlapmt_(logical *forwrd, integer *m, integer *n, 
	doublereal *x, integer *ldx, integer *k);

/* dlapy2.c */
extern doublereal dlapy2_(doublereal *x, doublereal *y);

/* dlapy3.c */
extern doublereal dlapy3_(doublereal *x, doublereal *y, doublereal *z__);

/* dlaqgb.c */
extern int dlaqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);

/* dlaqge.c */
extern int dlaqge_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, doublereal 
	*colcnd, doublereal *amax, char *equed);

/* dlaqp2.c */
extern int dlaqp2_(integer *m, integer *n, integer *offset, 
	doublereal *a, integer *lda, integer *jpvt, doublereal *tau, 
	doublereal *vn1, doublereal *vn2, doublereal *work);

/* dlaqps.c */
extern int dlaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublereal *a, integer *lda, integer *jpvt, 
	doublereal *tau, doublereal *vn1, doublereal *vn2, doublereal *auxv, 
	doublereal *f, integer *ldf);

/* dlaqr0.c */
extern int dlaqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *info);

/* dlaqr1.c */
extern int dlaqr1_(integer *n, doublereal *h__, integer *ldh, 
	doublereal *sr1, doublereal *si1, doublereal *sr2, doublereal *si2, 
	doublereal *v);

/* dlaqr2.c */
extern int dlaqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublereal *h__, integer *
	ldh, integer *iloz, integer *ihiz, doublereal *z__, integer *ldz, 
	integer *ns, integer *nd, doublereal *sr, doublereal *si, doublereal *
	v, integer *ldv, integer *nh, doublereal *t, integer *ldt, integer *
	nv, doublereal *wv, integer *ldwv, doublereal *work, integer *lwork);

/* dlaqr3.c */
extern int dlaqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublereal *h__, integer *
	ldh, integer *iloz, integer *ihiz, doublereal *z__, integer *ldz, 
	integer *ns, integer *nd, doublereal *sr, doublereal *si, doublereal *
	v, integer *ldv, integer *nh, doublereal *t, integer *ldt, integer *
	nv, doublereal *wv, integer *ldwv, doublereal *work, integer *lwork);

/* dlaqr4.c */
extern int dlaqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublereal *h__, integer *ldh, doublereal 
	*wr, doublereal *wi, integer *iloz, integer *ihiz, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *info);

/* dlaqr5.c */
extern int dlaqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, doublereal 
	*sr, doublereal *si, doublereal *h__, integer *ldh, integer *iloz, 
	integer *ihiz, doublereal *z__, integer *ldz, doublereal *v, integer *
	ldv, doublereal *u, integer *ldu, integer *nv, doublereal *wv, 
	integer *ldwv, integer *nh, doublereal *wh, integer *ldwh);

/* dlaqsb.c */
extern int dlaqsb_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax, 
	 char *equed);

/* dlaqsp.c */
extern int dlaqsp_(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* dlaqsy.c */
extern int dlaqsy_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* dlaqtr.c */
extern int dlaqtr_(logical *ltran, logical *lreal, integer *n, 
	doublereal *t, integer *ldt, doublereal *b, doublereal *w, doublereal 
	*scale, doublereal *x, doublereal *work, integer *info);

/* dlar1v.c */
extern int dlar1v_(integer *n, integer *b1, integer *bn, doublereal 
	*lambda, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *pivmin, doublereal *gaptol, doublereal *z__, logical 
	*wantnc, integer *negcnt, doublereal *ztz, doublereal *mingma, 
	integer *r__, integer *isuppz, doublereal *nrminv, doublereal *resid, 
	doublereal *rqcorr, doublereal *work);

/* dlar2v.c */
extern int dlar2v_(integer *n, doublereal *x, doublereal *y, 
	doublereal *z__, integer *incx, doublereal *c__, doublereal *s, 
	integer *incc);

/* dlarf.c */
extern int dlarf_(char *side, integer *m, integer *n, doublereal *v, 
	 integer *incv, doublereal *tau, doublereal *c__, integer *ldc, 
	doublereal *work);

/* dlarfb.c */
extern int dlarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublereal *v, integer *
	ldv, doublereal *t, integer *ldt, doublereal *c__, integer *ldc, 
	doublereal *work, integer *ldwork);

/* dlarfg.c */
extern int dlarfg_(integer *n, doublereal *alpha, doublereal *x, 
	integer *incx, doublereal *tau);

/* dlarfp.c */
extern int dlarfp_(integer *n, doublereal *alpha, doublereal *x, 
	integer *incx, doublereal *tau);

/* dlarft.c */
extern int dlarft_(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);

/* dlarfx.c */
extern int dlarfx_(char *side, integer *m, integer *n, doublereal *
	v, doublereal *tau, doublereal *c__, integer *ldc, doublereal *work);

/* dlargv.c */
extern int dlargv_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, integer *incc);

/* dlarnv.c */
extern int dlarnv_(integer *idist, integer *iseed, integer *n, 
	doublereal *x);

/* dlarra.c */
extern int dlarra_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *e2, doublereal *spltol, doublereal *tnrm, integer *nsplit, 
	 integer *isplit, integer *info);

/* dlarrb.c */
extern int dlarrb_(integer *n, doublereal *d__, doublereal *lld, 
	integer *ifirst, integer *ilast, doublereal *rtol1, doublereal *rtol2, 
	 integer *offset, doublereal *w, doublereal *wgap, doublereal *werr, 
	doublereal *work, integer *iwork, doublereal *pivmin, doublereal *
	spdiam, integer *twist, integer *info);

/* dlarrc.c */
extern int dlarrc_(char *jobt, integer *n, doublereal *vl, 
	doublereal *vu, doublereal *d__, doublereal *e, doublereal *pivmin, 
	integer *eigcnt, integer *lcnt, integer *rcnt, integer *info);

/* dlarrd.c */
extern int dlarrd_(char *range, char *order, integer *n, doublereal 
	*vl, doublereal *vu, integer *il, integer *iu, doublereal *gers, 
	doublereal *reltol, doublereal *d__, doublereal *e, doublereal *e2, 
	doublereal *pivmin, integer *nsplit, integer *isplit, integer *m, 
	doublereal *w, doublereal *werr, doublereal *wl, doublereal *wu, 
	integer *iblock, integer *indexw, doublereal *work, integer *iwork, 
	integer *info);

/* dlarre.c */
extern int dlarre_(char *range, integer *n, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *d__, doublereal 
	*e, doublereal *e2, doublereal *rtol1, doublereal *rtol2, doublereal *
	spltol, integer *nsplit, integer *isplit, integer *m, doublereal *w, 
	doublereal *werr, doublereal *wgap, integer *iblock, integer *indexw, 
	doublereal *gers, doublereal *pivmin, doublereal *work, integer *
	iwork, integer *info);

/* dlarrf.c */
extern int dlarrf_(integer *n, doublereal *d__, doublereal *l, 
	doublereal *ld, integer *clstrt, integer *clend, doublereal *w, 
	doublereal *wgap, doublereal *werr, doublereal *spdiam, doublereal *
	clgapl, doublereal *clgapr, doublereal *pivmin, doublereal *sigma, 
	doublereal *dplus, doublereal *lplus, doublereal *work, integer *info);

/* dlarrj.c */
extern int dlarrj_(integer *n, doublereal *d__, doublereal *e2, 
	integer *ifirst, integer *ilast, doublereal *rtol, integer *offset, 
	doublereal *w, doublereal *werr, doublereal *work, integer *iwork, 
	doublereal *pivmin, doublereal *spdiam, integer *info);

/* dlarrk.c */
extern int dlarrk_(integer *n, integer *iw, doublereal *gl, 
	doublereal *gu, doublereal *d__, doublereal *e2, doublereal *pivmin, 
	doublereal *reltol, doublereal *w, doublereal *werr, integer *info);

/* dlarrr.c */
extern int dlarrr_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);

/* dlarrv.c */
extern int dlarrv_(integer *n, doublereal *vl, doublereal *vu, 
	doublereal *d__, doublereal *l, doublereal *pivmin, integer *isplit, 
	integer *m, integer *dol, integer *dou, doublereal *minrgp, 
	doublereal *rtol1, doublereal *rtol2, doublereal *w, doublereal *werr, 
	 doublereal *wgap, integer *iblock, integer *indexw, doublereal *gers, 
	 doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *iwork, integer *info);

/* dlarscl2.c */
extern int dlarscl2_(integer *m, integer *n, doublereal *d__, 
	doublereal *x, integer *ldx);

/* dlartg.c */
extern int dlartg_(doublereal *f, doublereal *g, doublereal *cs, 
	doublereal *sn, doublereal *r__);

/* dlartv.c */
extern int dlartv_(integer *n, doublereal *x, integer *incx, 
	doublereal *y, integer *incy, doublereal *c__, doublereal *s, integer 
	*incc);

/* dlaruv.c */
extern int dlaruv_(integer *iseed, integer *n, doublereal *x);

/* dlarz.c */
extern int dlarz_(char *side, integer *m, integer *n, integer *l, 
	doublereal *v, integer *incv, doublereal *tau, doublereal *c__, 
	integer *ldc, doublereal *work);

/* dlarzb.c */
extern int dlarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublereal *v, 
	 integer *ldv, doublereal *t, integer *ldt, doublereal *c__, integer *
	ldc, doublereal *work, integer *ldwork);

/* dlarzt.c */
extern int dlarzt_(char *direct, char *storev, integer *n, integer *
	k, doublereal *v, integer *ldv, doublereal *tau, doublereal *t, 
	integer *ldt);

/* dlas2.c */
extern int dlas2_(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax);

/* dlascl.c */
extern int dlascl_(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublereal *a, integer *lda, integer *info);

/* dlascl2.c */
extern int dlascl2_(integer *m, integer *n, doublereal *d__, 
	doublereal *x, integer *ldx);

/* dlasd0.c */
extern int dlasd0_(integer *n, integer *sqre, doublereal *d__, 
	doublereal *e, doublereal *u, integer *ldu, doublereal *vt, integer *
	ldvt, integer *smlsiz, integer *iwork, doublereal *work, integer *
	info);

/* dlasd1.c */
extern int dlasd1_(integer *nl, integer *nr, integer *sqre, 
	doublereal *d__, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *vt, integer *ldvt, integer *idxq, integer *
	iwork, doublereal *work, integer *info);

/* dlasd2.c */
extern int dlasd2_(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *z__, doublereal *alpha, doublereal *
	beta, doublereal *u, integer *ldu, doublereal *vt, integer *ldvt, 
	doublereal *dsigma, doublereal *u2, integer *ldu2, doublereal *vt2, 
	integer *ldvt2, integer *idxp, integer *idx, integer *idxc, integer *
	idxq, integer *coltyp, integer *info);

/* dlasd3.c */
extern int dlasd3_(integer *nl, integer *nr, integer *sqre, integer 
	*k, doublereal *d__, doublereal *q, integer *ldq, doublereal *dsigma, 
	doublereal *u, integer *ldu, doublereal *u2, integer *ldu2, 
	doublereal *vt, integer *ldvt, doublereal *vt2, integer *ldvt2, 
	integer *idxc, integer *ctot, doublereal *z__, integer *info);

/* dlasd4.c */
extern int dlasd4_(integer *n, integer *i__, doublereal *d__, 
	doublereal *z__, doublereal *delta, doublereal *rho, doublereal *
	sigma, doublereal *work, integer *info);

/* dlasd5.c */
extern int dlasd5_(integer *i__, doublereal *d__, doublereal *z__, 
	doublereal *delta, doublereal *rho, doublereal *dsigma, doublereal *
	work);

/* dlasd6.c */
extern int dlasd6_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, doublereal *d__, doublereal *vf, doublereal *vl, 
	doublereal *alpha, doublereal *beta, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum, 
	 integer *ldgnum, doublereal *poles, doublereal *difl, doublereal *
	difr, doublereal *z__, integer *k, doublereal *c__, doublereal *s, 
	doublereal *work, integer *iwork, integer *info);

/* dlasd7.c */
extern int dlasd7_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, doublereal *d__, doublereal *z__, 
	doublereal *zw, doublereal *vf, doublereal *vfw, doublereal *vl, 
	doublereal *vlw, doublereal *alpha, doublereal *beta, doublereal *
	dsigma, integer *idx, integer *idxp, integer *idxq, integer *perm, 
	integer *givptr, integer *givcol, integer *ldgcol, doublereal *givnum, 
	 integer *ldgnum, doublereal *c__, doublereal *s, integer *info);

/* dlasd8.c */
extern int dlasd8_(integer *icompq, integer *k, doublereal *d__, 
	doublereal *z__, doublereal *vf, doublereal *vl, doublereal *difl, 
	doublereal *difr, integer *lddifr, doublereal *dsigma, doublereal *
	work, integer *info);

/* dlasda.c */
extern int dlasda_(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, doublereal *d__, doublereal *e, doublereal *u, integer 
	*ldu, doublereal *vt, integer *k, doublereal *difl, doublereal *difr, 
	doublereal *z__, doublereal *poles, integer *givptr, integer *givcol, 
	integer *ldgcol, integer *perm, doublereal *givnum, doublereal *c__, 
	doublereal *s, doublereal *work, integer *iwork, integer *info);

/* dlasdq.c */
extern int dlasdq_(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, doublereal *d__, doublereal *e, 
	doublereal *vt, integer *ldvt, doublereal *u, integer *ldu, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);

/* dlasdt.c */
extern int dlasdt_(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);

/* dlaset.c */
extern int dlaset_(char *uplo, integer *m, integer *n, doublereal *
	alpha, doublereal *beta, doublereal *a, integer *lda);

/* dlasq1.c */
extern int dlasq1_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *work, integer *info);

/* dlasq2.c */
extern int dlasq2_(integer *n, doublereal *z__, integer *info);

/* dlasq3.c */
extern int dlasq3_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *sigma, doublereal *desig, 
	 doublereal *qmax, integer *nfail, integer *iter, integer *ndiv, 
	logical *ieee, integer *ttype, doublereal *dmin1, doublereal *dmin2, 
	doublereal *dn, doublereal *dn1, doublereal *dn2, doublereal *g, 
	doublereal *tau);

/* dlasq4.c */
extern int dlasq4_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, integer *n0in, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dn1, doublereal *dn2, 
	doublereal *tau, integer *ttype, doublereal *g);

/* dlasq5.c */
extern int dlasq5_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *tau, doublereal *dmin__, doublereal *dmin1, 
	doublereal *dmin2, doublereal *dn, doublereal *dnm1, doublereal *dnm2, 
	 logical *ieee);

/* dlasq6.c */
extern int dlasq6_(integer *i0, integer *n0, doublereal *z__, 
	integer *pp, doublereal *dmin__, doublereal *dmin1, doublereal *dmin2, 
	 doublereal *dn, doublereal *dnm1, doublereal *dnm2);

/* dlasr.c */
extern int dlasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, doublereal *c__, doublereal *s, doublereal *a, integer *
	lda);

/* dlasrt.c */
extern int dlasrt_(char *id, integer *n, doublereal *d__, integer *
	info);

/* dlassq.c */
extern int dlassq_(integer *n, doublereal *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);

/* dlasv2.c */
extern int dlasv2_(doublereal *f, doublereal *g, doublereal *h__, 
	doublereal *ssmin, doublereal *ssmax, doublereal *snr, doublereal *
	csr, doublereal *snl, doublereal *csl);

/* dlaswp.c */
extern int dlaswp_(integer *n, doublereal *a, integer *lda, integer 
	*k1, integer *k2, integer *ipiv, integer *incx);

/* dlasy2.c */
extern int dlasy2_(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, doublereal *tl, integer *ldtl, doublereal *
	tr, integer *ldtr, doublereal *b, integer *ldb, doublereal *scale, 
	doublereal *x, integer *ldx, doublereal *xnorm, integer *info);

/* dlasyf.c */
extern int dlasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 doublereal *a, integer *lda, integer *ipiv, doublereal *w, integer *
	ldw, integer *info);

/* dlat2s.c */
extern int dlat2s_(char *uplo, integer *n, doublereal *a, integer *
	lda, real *sa, integer *ldsa, integer *info);

/* dlatbs.c */
extern int dlatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublereal *ab, integer *ldab, 
	doublereal *x, doublereal *scale, doublereal *cnorm, integer *info);

/* dlatdf.c */
extern int dlatdf_(integer *ijob, integer *n, doublereal *z__, 
	integer *ldz, doublereal *rhs, doublereal *rdsum, doublereal *rdscal, 
	integer *ipiv, integer *jpiv);

/* dlatps.c */
extern int dlatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *ap, doublereal *x, doublereal *scale, 
	doublereal *cnorm, integer *info);

/* dlatrd.c */
extern int dlatrd_(char *uplo, integer *n, integer *nb, doublereal *
	a, integer *lda, doublereal *e, doublereal *tau, doublereal *w, 
	integer *ldw);

/* dlatrs.c */
extern int dlatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublereal *a, integer *lda, doublereal *x, 
	doublereal *scale, doublereal *cnorm, integer *info);

/* dlatrz.c */
extern int dlatrz_(integer *m, integer *n, integer *l, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work);

/* dlatzm.c */
extern int dlatzm_(char *side, integer *m, integer *n, doublereal *
	v, integer *incv, doublereal *tau, doublereal *c1, doublereal *c2, 
	integer *ldc, doublereal *work);

/* dlauu2.c */
extern int dlauu2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dlauum.c */
extern int dlauum_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dopgtr.c */
extern int dopgtr_(char *uplo, integer *n, doublereal *ap, 
	doublereal *tau, doublereal *q, integer *ldq, doublereal *work, 
	integer *info);

/* dopmtr.c */
extern int dopmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *ap, doublereal *tau, doublereal *c__, integer 
	*ldc, doublereal *work, integer *info);

/* dorg2l.c */
extern int dorg2l_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorg2r.c */
extern int dorg2r_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorgbr.c */
extern int dorgbr_(char *vect, integer *m, integer *n, integer *k, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);

/* dorghr.c */
extern int dorghr_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *work, 
	integer *lwork, integer *info);

/* dorgl2.c */
extern int dorgl2_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorglq.c */
extern int dorglq_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgql.c */
extern int dorgql_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgqr.c */
extern int dorgqr_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgr2.c */
extern int dorgr2_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *info);

/* dorgrq.c */
extern int dorgrq_(integer *m, integer *n, integer *k, doublereal *
	a, integer *lda, doublereal *tau, doublereal *work, integer *lwork, 
	integer *info);

/* dorgtr.c */
extern int dorgtr_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dorm2l.c */
extern int dorm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dorm2r.c */
extern int dorm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dormbr.c */
extern int dormbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);

/* dormhr.c */
extern int dormhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublereal *a, integer *lda, doublereal *
	tau, doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);

/* dorml2.c */
extern int dorml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dormlq.c */
extern int dormlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormql.c */
extern int dormql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormqr.c */
extern int dormqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormr2.c */
extern int dormr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *info);

/* dormr3.c */
extern int dormr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *info);

/* dormrq.c */
extern int dormrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dormrz.c */
extern int dormrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublereal *a, integer *lda, doublereal *tau, 
	doublereal *c__, integer *ldc, doublereal *work, integer *lwork, 
	integer *info);

/* dormtr.c */
extern int dormtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublereal *a, integer *lda, doublereal *tau, doublereal *
	c__, integer *ldc, doublereal *work, integer *lwork, integer *info);

/* dpbcon.c */
extern int dpbcon_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);

/* dpbequ.c */
extern int dpbequ_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, doublereal *s, doublereal *scond, doublereal *amax, 
	 integer *info);

/* dpbrfs.c */
extern int dpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *afb, integer *ldafb, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);

/* dpbstf.c */
extern int dpbstf_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);

/* dpbsv.c */
extern int dpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);

/* dpbsvx.c */
extern int dpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublereal *ab, integer *ldab, doublereal *afb, 
	integer *ldafb, char *equed, doublereal *s, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	 doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dpbtf2.c */
extern int dpbtf2_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);

/* dpbtrf.c */
extern int dpbtrf_(char *uplo, integer *n, integer *kd, doublereal *
	ab, integer *ldab, integer *info);

/* dpbtrs.c */
extern int dpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	integer *info);

/* dpftrf.c */
extern int dpftrf_(char *transr, char *uplo, integer *n, doublereal 
	*a, integer *info);

/* dpftri.c */
extern int dpftri_(char *transr, char *uplo, integer *n, doublereal 
	*a, integer *info);

/* dpftrs.c */
extern int dpftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, doublereal *a, doublereal *b, integer *ldb, integer *info);

/* dpocon.c */
extern int dpocon_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dpoequ.c */
extern int dpoequ_(integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* dpoequb.c */
extern int dpoequb_(integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* dporfs.c */
extern int dporfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	ferr, doublereal *berr, doublereal *work, integer *iwork, integer *
	info);

/* dporfsx.c */
extern int dporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	doublereal *s, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublereal *work, integer *iwork, 
	integer *info);

/* dposv.c */
extern int dposv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, doublereal *b, integer *ldb, integer *info);

/* dposvx.c */
extern int dposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	char *equed, doublereal *s, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *
	berr, doublereal *work, integer *iwork, integer *info);

/* dposvxx.c */
extern int dposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	char *equed, doublereal *s, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, doublereal *
	berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublereal *
	work, integer *iwork, integer *info);

/* dpotf2.c */
extern int dpotf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dpotrf.c */
extern int dpotrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dpotri.c */
extern int dpotri_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *info);

/* dpotrs.c */
extern int dpotrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);

/* dppcon.c */
extern int dppcon_(char *uplo, integer *n, doublereal *ap, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *
	iwork, integer *info);

/* dppequ.c */
extern int dppequ_(char *uplo, integer *n, doublereal *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* dpprfs.c */
extern int dpprfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dppsv.c */
extern int dppsv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, doublereal *b, integer *ldb, integer *info);

/* dppsvx.c */
extern int dppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, char *equed, doublereal *s, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	iwork, integer *info);

/* dpptrf.c */
extern int dpptrf_(char *uplo, integer *n, doublereal *ap, integer *
	info);

/* dpptri.c */
extern int dpptri_(char *uplo, integer *n, doublereal *ap, integer *
	info);

/* dpptrs.c */
extern int dpptrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *b, integer *ldb, integer *info);

/* dpstf2.c */
extern int dpstf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *piv, integer *rank, doublereal *tol, doublereal *work, 
	integer *info);

/* dpstrf.c */
extern int dpstrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *piv, integer *rank, doublereal *tol, doublereal *work, 
	integer *info);

/* dptcon.c */
extern int dptcon_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *anorm, doublereal *rcond, doublereal *work, integer *info);

/* dpteqr.c */
extern int dpteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dptrfs.c */
extern int dptrfs_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *df, doublereal *ef, doublereal *b, integer 
	*ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	 doublereal *work, integer *info);

/* dptsv.c */
extern int dptsv_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);

/* dptsvx.c */
extern int dptsvx_(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublereal *e, doublereal *df, doublereal *ef, 
	doublereal *b, integer *ldb, doublereal *x, integer *ldx, doublereal *
	rcond, doublereal *ferr, doublereal *berr, doublereal *work, integer *
	info);

/* dpttrf.c */
extern int dpttrf_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);

/* dpttrs.c */
extern int dpttrs_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, integer *info);

/* dptts2.c */
extern int dptts2_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb);

/* drscl.c */
extern int drscl_(integer *n, doublereal *sa, doublereal *sx, 
	integer *incx);

/* dsbev.c */
extern int dsbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);

/* dsbevd.c */
extern int dsbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* dsbevx.c */
extern int dsbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *q, integer *
	ldq, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);

/* dsbgst.c */
extern int dsbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *x, integer *ldx, doublereal *work, integer *info);

/* dsbgv.c */
extern int dsbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dsbgvd.c */
extern int dsbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublereal *ab, integer *ldab, doublereal *bb, integer *
	ldbb, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dsbgvx.c */
extern int dsbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublereal *ab, integer *ldab, doublereal *
	bb, integer *ldbb, doublereal *q, integer *ldq, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);

/* dsbtrd.c */
extern int dsbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	doublereal *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublereal *q, integer *ldq, doublereal *work, integer *info);

/* dsfrk.c */
extern int dsfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, doublereal *alpha, doublereal *a, integer *lda, 
	doublereal *beta, doublereal *c__);

/* dsgesv.c */
extern int dsgesv_(integer *n, integer *nrhs, doublereal *a, 
	integer *lda, integer *ipiv, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *work, real *swork, integer *iter, 
	integer *info);

/* dspcon.c */
extern int dspcon_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublereal *work, integer 
	*iwork, integer *info);

/* dspev.c */
extern int dspev_(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dspevd.c */
extern int dspevd_(char *jobz, char *uplo, integer *n, doublereal *
	ap, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dspevx.c */
extern int dspevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *ap, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *iwork, integer *ifail, 
	integer *info);

/* dspgst.c */
extern int dspgst_(integer *itype, char *uplo, integer *n, 
	doublereal *ap, doublereal *bp, integer *info);

/* dspgv.c */
extern int dspgv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *info);

/* dspgvd.c */
extern int dspgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* dspgvx.c */
extern int dspgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *ap, doublereal *bp, doublereal *vl, 
	doublereal *vu, integer *il, integer *iu, doublereal *abstol, integer 
	*m, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, 
	integer *iwork, integer *ifail, integer *info);

/* dsposv.c */
extern int dsposv_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *work, real *swork, integer *iter, 
	integer *info);

/* dsprfs.c */
extern int dsprfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dspsv.c */
extern int dspsv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*ap, integer *ipiv, doublereal *b, integer *ldb, integer *info);

/* dspsvx.c */
extern int dspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *ap, doublereal *afp, integer *ipiv, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *rcond, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);

/* dsptrd.c */
extern int dsptrd_(char *uplo, integer *n, doublereal *ap, 
	doublereal *d__, doublereal *e, doublereal *tau, integer *info);

/* dsptrf.c */
extern int dsptrf_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, integer *info);

/* dsptri.c */
extern int dsptri_(char *uplo, integer *n, doublereal *ap, integer *
	ipiv, doublereal *work, integer *info);

/* dsptrs.c */
extern int dsptrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, integer *ipiv, doublereal *b, integer *ldb, integer *
	info);

/* dstebz.c */
extern int dstebz_(char *range, char *order, integer *n, doublereal 
	*vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	doublereal *d__, doublereal *e, integer *m, integer *nsplit, 
	doublereal *w, integer *iblock, integer *isplit, doublereal *work, 
	integer *iwork, integer *info);

/* dstedc.c */
extern int dstedc_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstegr.c */
extern int dstegr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstein.c */
extern int dstein_(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);

/* dstemr.c */
extern int dstemr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, integer *m, doublereal *w, doublereal *z__, integer *ldz, 
	 integer *nzc, integer *isuppz, logical *tryrac, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dsteqr.c */
extern int dsteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dsterf.c */
extern int dsterf_(integer *n, doublereal *d__, doublereal *e, 
	integer *info);

/* dstev.c */
extern int dstev_(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *info);

/* dstevd.c */
extern int dstevd_(char *jobz, integer *n, doublereal *d__, 
	doublereal *e, doublereal *z__, integer *ldz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstevr.c */
extern int dstevr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dstevx.c */
extern int dstevx_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);

/* dsycon.c */
extern int dsycon_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *anorm, doublereal *rcond, doublereal *
	work, integer *iwork, integer *info);

/* dsyequb.c */
extern int dsyequb_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *s, doublereal *scond, doublereal *amax, doublereal *
	work, integer *info);

/* dsyev.c */
extern int dsyev_(char *jobz, char *uplo, integer *n, doublereal *a, 
	 integer *lda, doublereal *w, doublereal *work, integer *lwork, 
	integer *info);

/* dsyevd.c */
extern int dsyevd_(char *jobz, char *uplo, integer *n, doublereal *
	a, integer *lda, doublereal *w, doublereal *work, integer *lwork, 
	integer *iwork, integer *liwork, integer *info);

/* dsyevr.c */
extern int dsyevr_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* dsyevx.c */
extern int dsyevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *vl, doublereal *vu, integer *
	il, integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublereal *z__, integer *ldz, doublereal *work, integer *lwork, 
	integer *iwork, integer *ifail, integer *info);

/* dsygs2.c */
extern int dsygs2_(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);

/* dsygst.c */
extern int dsygst_(integer *itype, char *uplo, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, integer *
	info);

/* dsygv.c */
extern int dsygv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *info);

/* dsygvd.c */
extern int dsygvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *w, doublereal *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* dsygvx.c */
extern int dsygvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublereal *a, integer *lda, doublereal *b, integer 
	*ldb, doublereal *vl, doublereal *vu, integer *il, integer *iu, 
	doublereal *abstol, integer *m, doublereal *w, doublereal *z__, 
	integer *ldz, doublereal *work, integer *lwork, integer *iwork, 
	integer *ifail, integer *info);

/* dsyrfs.c */
extern int dsyrfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *af, integer *ldaf, integer *
	ipiv, doublereal *b, integer *ldb, doublereal *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublereal *work, integer *iwork, 
	integer *info);

/* dsyrfsx.c */
extern int dsyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *s, doublereal *b, integer *ldb, doublereal 
	*x, integer *ldx, doublereal *rcond, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublereal *
	work, integer *iwork, integer *info);

/* dsysv.c */
extern int dsysv_(char *uplo, integer *n, integer *nrhs, doublereal 
	*a, integer *lda, integer *ipiv, doublereal *b, integer *ldb, 
	doublereal *work, integer *lwork, integer *info);

/* dsysvx.c */
extern int dsysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *lwork, integer *iwork, integer *info);

/* dsysvxx.c */
extern int dsysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *af, integer *ldaf, 
	integer *ipiv, char *equed, doublereal *s, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *rcond, doublereal *
	rpvgrw, doublereal *berr, integer *n_err_bnds__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, integer *nparams, 
	doublereal *params, doublereal *work, integer *iwork, integer *info);

/* dsytd2.c */
extern int dsytd2_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, integer *info);

/* dsytf2.c */
extern int dsytf2_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, integer *info);

/* dsytrd.c */
extern int dsytrd_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *d__, doublereal *e, doublereal *tau, doublereal *
	work, integer *lwork, integer *info);

/* dsytrf.c */
extern int dsytrf_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *lwork, integer *info);

/* dsytri.c */
extern int dsytri_(char *uplo, integer *n, doublereal *a, integer *
	lda, integer *ipiv, doublereal *work, integer *info);

/* dsytrs.c */
extern int dsytrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);

/* dtbcon.c */
extern int dtbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublereal *ab, integer *ldab, doublereal *rcond, 
	doublereal *work, integer *iwork, integer *info);

/* dtbrfs.c */
extern int dtbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, doublereal *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublereal *work, integer *iwork, integer *info);

/* dtbtrs.c */
extern int dtbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, integer *info);

/* dtfsm.c */
extern int dtfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, doublereal *alpha, doublereal *a, 
	 doublereal *b, integer *ldb);

/* dtftri.c */
extern int dtftri_(char *transr, char *uplo, char *diag, integer *n, 
	 doublereal *a, integer *info);

/* dtfttp.c */
extern int dtfttp_(char *transr, char *uplo, integer *n, doublereal 
	*arf, doublereal *ap, integer *info);

/* dtfttr.c */
extern int dtfttr_(char *transr, char *uplo, integer *n, doublereal 
	*arf, doublereal *a, integer *lda, integer *info);

/* dtgevc.c */
extern int dtgevc_(char *side, char *howmny, logical *select, 
	integer *n, doublereal *s, integer *lds, doublereal *p, integer *ldp, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, integer 
	*mm, integer *m, doublereal *work, integer *info);

/* dtgex2.c */
extern int dtgex2_(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *j1, integer *
	n1, integer *n2, doublereal *work, integer *lwork, integer *info);

/* dtgexc.c */
extern int dtgexc_(logical *wantq, logical *wantz, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	q, integer *ldq, doublereal *z__, integer *ldz, integer *ifst, 
	integer *ilst, doublereal *work, integer *lwork, integer *info);

/* dtgsen.c */
extern int dtgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublereal *a, integer *lda, doublereal *
	b, integer *ldb, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *q, integer *ldq, doublereal *z__, integer *ldz, 
	integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublereal *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* dtgsja.c */
extern int dtgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublereal *u, 
	integer *ldu, doublereal *v, integer *ldv, doublereal *q, integer *
	ldq, doublereal *work, integer *ncycle, integer *info);

/* dtgsna.c */
extern int dtgsna_(char *job, char *howmny, logical *select, 
	integer *n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	doublereal *s, doublereal *dif, integer *mm, integer *m, doublereal *
	work, integer *lwork, integer *iwork, integer *info);

/* dtgsy2.c */
extern int dtgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *rdsum, doublereal *rdscal, integer *iwork, integer 
	*pq, integer *info);

/* dtgsyl.c */
extern int dtgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *c__, integer *ldc, doublereal *d__, integer *ldd, 
	doublereal *e, integer *lde, doublereal *f, integer *ldf, doublereal *
	scale, doublereal *dif, doublereal *work, integer *lwork, integer *
	iwork, integer *info);

/* dtpcon.c */
extern int dtpcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *ap, doublereal *rcond, doublereal *work, integer *iwork, 
	integer *info);

/* dtprfs.c */
extern int dtprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dtptri.c */
extern int dtptri_(char *uplo, char *diag, integer *n, doublereal *
	ap, integer *info);

/* dtptrs.c */
extern int dtptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, integer *
	info);

/* dtpttf.c */
extern int dtpttf_(char *transr, char *uplo, integer *n, doublereal 
	*ap, doublereal *arf, integer *info);

/* dtpttr.c */
extern int dtpttr_(char *uplo, integer *n, doublereal *ap, 
	doublereal *a, integer *lda, integer *info);

/* dtrcon.c */
extern int dtrcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublereal *a, integer *lda, doublereal *rcond, doublereal *work, 
	integer *iwork, integer *info);

/* dtrevc.c */
extern int dtrevc_(char *side, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, integer *mm, integer *m, 
	doublereal *work, integer *info);

/* dtrexc.c */
extern int dtrexc_(char *compq, integer *n, doublereal *t, integer *
	ldt, doublereal *q, integer *ldq, integer *ifst, integer *ilst, 
	doublereal *work, integer *info);

/* dtrrfs.c */
extern int dtrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublereal *work, integer *iwork, integer *info);

/* dtrsen.c */
extern int dtrsen_(char *job, char *compq, logical *select, integer 
	*n, doublereal *t, integer *ldt, doublereal *q, integer *ldq, 
	doublereal *wr, doublereal *wi, integer *m, doublereal *s, doublereal 
	*sep, doublereal *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);

/* dtrsna.c */
extern int dtrsna_(char *job, char *howmny, logical *select, 
	integer *n, doublereal *t, integer *ldt, doublereal *vl, integer *
	ldvl, doublereal *vr, integer *ldvr, doublereal *s, doublereal *sep, 
	integer *mm, integer *m, doublereal *work, integer *ldwork, integer *
	iwork, integer *info);

/* dtrsyl.c */
extern int dtrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *c__, integer *ldc, doublereal *scale, integer *info);

/* dtrti2.c */
extern int dtrti2_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);

/* dtrtri.c */
extern int dtrtri_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, integer *info);

/* dtrtrs.c */
extern int dtrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, integer *info);

/* dtrttf.c */
extern int dtrttf_(char *transr, char *uplo, integer *n, doublereal 
	*a, integer *lda, doublereal *arf, integer *info);

/* dtrttp.c */
extern int dtrttp_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *ap, integer *info);

/* dtzrqf.c */
extern int dtzrqf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, integer *info);

/* dtzrzf.c */
extern int dtzrzf_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *tau, doublereal *work, integer *lwork, integer *info);

/* dzsum1.c */
extern doublereal dzsum1_(integer *n, doublecomplex *cx, integer *incx);

/* icmax1.c */
extern integer icmax1_(integer *n, complex *cx, integer *incx);

/* ieeeck.c */
extern integer ieeeck_(integer *ispec, real *zero, real *one);

/* ilaclc.c */
extern integer ilaclc_(integer *m, integer *n, complex *a, integer *lda);

/* ilaclr.c */
extern integer ilaclr_(integer *m, integer *n, complex *a, integer *lda);

/* iladiag.c */
extern integer iladiag_(char *diag);

/* iladlc.c */
extern integer iladlc_(integer *m, integer *n, doublereal *a, integer *lda);

/* iladlr.c */
extern integer iladlr_(integer *m, integer *n, doublereal *a, integer *lda);

/* ilaenv.c */
extern integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4);

/* ilaprec.c */
extern integer ilaprec_(char *prec);

/* ilaslc.c */
extern integer ilaslc_(integer *m, integer *n, real *a, integer *lda);

/* ilaslr.c */
extern integer ilaslr_(integer *m, integer *n, real *a, integer *lda);

/* ilatrans.c */
extern integer ilatrans_(char *trans);

/* ilauplo.c */
extern integer ilauplo_(char *uplo);

/* ilaver.c */
extern int ilaver_(integer *vers_major__, integer *vers_minor__, 
	integer *vers_patch__);

/* ilazlc.c */
extern integer ilazlc_(integer *m, integer *n, doublecomplex *a, integer *lda);

/* ilazlr.c */
extern integer ilazlr_(integer *m, integer *n, doublecomplex *a, integer *lda);

/* iparmq.c */
extern integer iparmq_(integer *ispec, char *name__, char *opts, integer *n, integer 
	*ilo, integer *ihi, integer *lwork);

/* izmax1.c */
extern integer izmax1_(integer *n, doublecomplex *cx, integer *incx);

/* lsamen.c */
extern logical lsamen_(integer *n, char *ca, char *cb);

/* maxloc.c */
extern integer smaxloc_(real *a, integer *dimm);

/* sbdsdc.c */
extern int sbdsdc_(char *uplo, char *compq, integer *n, real *d__, 
	real *e, real *u, integer *ldu, real *vt, integer *ldvt, real *q, 
	integer *iq, real *work, integer *iwork, integer *info);

/* sbdsqr.c */
extern int sbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, real *d__, real *e, real *vt, integer *ldvt, real *
	u, integer *ldu, real *c__, integer *ldc, real *work, integer *info);

/* scsum1.c */
extern doublereal scsum1_(integer *n, complex *cx, integer *incx);

/* sdisna.c */
extern int sdisna_(char *job, integer *m, integer *n, real *d__, 
	real *sep, integer *info);

/* sgbbrd.c */
extern int sgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, real *ab, integer *ldab, real *d__, real *
	e, real *q, integer *ldq, real *pt, integer *ldpt, real *c__, integer 
	*ldc, real *work, integer *info);

/* sgbcon.c */
extern int sgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, integer *ipiv, real *anorm, real *rcond, 
	real *work, integer *iwork, integer *info);

/* sgbequ.c */
extern int sgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real *
	colcnd, real *amax, integer *info);

/* sgbequb.c */
extern int sgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, real *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real 
	*colcnd, real *amax, integer *info);

/* sgbrfs.c */
extern int sgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real *ab, integer *ldab, real *afb, integer *ldafb, 
	 integer *ipiv, real *b, integer *ldb, real *x, integer *ldx, real *
	ferr, real *berr, real *work, integer *iwork, integer *info);

/* sgbrfsx.c */
extern int sgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, real *ab, integer *ldab, real *afb, 
	integer *ldafb, integer *ipiv, real *r__, real *c__, real *b, integer 
	*ldb, real *x, integer *ldx, real *rcond, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, real *work, integer *iwork, integer *info);

/* sgbsv.c */
extern int sgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, real *ab, integer *ldab, integer *ipiv, real *b, integer *ldb, 
	integer *info);

/* sgbsvx.c */
extern int sgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, real *ab, integer *ldab, real *afb, 
	integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	real *b, integer *ldb, real *x, integer *ldx, real *rcond, real *ferr, 
	 real *berr, real *work, integer *iwork, integer *info);

/* sgbsvxx.c */
extern int sgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, real *ab, integer *ldab, real *afb, 
	integer *ldafb, integer *ipiv, char *equed, real *r__, real *c__, 
	real *b, integer *ldb, real *x, integer *ldx, real *rcond, real *
	rpvgrw, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	real *err_bnds_comp__, integer *nparams, real *params, real *work, 
	integer *iwork, integer *info);

/* sgbtf2.c */
extern int sgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, integer *ipiv, integer *info);

/* sgbtrf.c */
extern int sgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, integer *ipiv, integer *info);

/* sgbtrs.c */
extern int sgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real *ab, integer *ldab, integer *ipiv, real *b, 
	integer *ldb, integer *info);

/* sgebak.c */
extern int sgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *scale, integer *m, real *v, integer *ldv, integer 
	*info);

/* sgebal.c */
extern int sgebal_(char *job, integer *n, real *a, integer *lda, 
	integer *ilo, integer *ihi, real *scale, integer *info);

/* sgebd2.c */
extern int sgebd2_(integer *m, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tauq, real *taup, real *work, integer *info);

/* sgebrd.c */
extern int sgebrd_(integer *m, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tauq, real *taup, real *work, integer *
	lwork, integer *info);

/* sgecon.c */
extern int sgecon_(char *norm, integer *n, real *a, integer *lda, 
	real *anorm, real *rcond, real *work, integer *iwork, integer *info);

/* sgeequ.c */
extern int sgeequ_(integer *m, integer *n, real *a, integer *lda, 
	real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, integer 
	*info);

/* sgeequb.c */
extern int sgeequb_(integer *m, integer *n, real *a, integer *lda, 
	real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, integer 
	*info);

/* sgees.c */
extern int sgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	real *a, integer *lda, integer *sdim, real *wr, real *wi, real *vs, 
	integer *ldvs, real *work, integer *lwork, logical *bwork, integer *
	info);

/* sgeesx.c */
extern int sgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, real *a, integer *lda, integer *sdim, real *wr, 
	real *wi, real *vs, integer *ldvs, real *rconde, real *rcondv, real *
	work, integer *lwork, integer *iwork, integer *liwork, logical *bwork, 
	 integer *info);

/* sgeev.c */
extern int sgeev_(char *jobvl, char *jobvr, integer *n, real *a, 
	integer *lda, real *wr, real *wi, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, real *work, integer *lwork, integer *info);

/* sgeevx.c */
extern int sgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real *a, integer *lda, real *wr, real *wi, real *
	vl, integer *ldvl, real *vr, integer *ldvr, integer *ilo, integer *
	ihi, real *scale, real *abnrm, real *rconde, real *rcondv, real *work, 
	 integer *lwork, integer *iwork, integer *info);

/* sgegs.c */
extern int sgegs_(char *jobvsl, char *jobvsr, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, real *alphar, real *alphai, real 
	*beta, real *vsl, integer *ldvsl, real *vsr, integer *ldvsr, real *
	work, integer *lwork, integer *info);

/* sgegv.c */
extern int sgegv_(char *jobvl, char *jobvr, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, real *alphar, real *alphai, real 
	*beta, real *vl, integer *ldvl, real *vr, integer *ldvr, real *work, 
	integer *lwork, integer *info);

/* sgehd2.c */
extern int sgehd2_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sgehrd.c */
extern int sgehrd_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sgejsv.c */
extern int sgejsv_(char *joba, char *jobu, char *jobv, char *jobr, 
	char *jobt, char *jobp, integer *m, integer *n, real *a, integer *lda, 
	 real *sva, real *u, integer *ldu, real *v, integer *ldv, real *work, 
	integer *lwork, integer *iwork, integer *info);

/* sgelq2.c */
extern int sgelq2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgelqf.c */
extern int sgelqf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgels.c */
extern int sgels_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *b, integer *ldb, real *work, 
	integer *lwork, integer *info);

/* sgelsd.c */
extern int sgelsd_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *s, real *rcond, integer *
	rank, real *work, integer *lwork, integer *iwork, integer *info);

/* sgelss.c */
extern int sgelss_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *s, real *rcond, integer *
	rank, real *work, integer *lwork, integer *info);

/* sgelsx.c */
extern int sgelsx_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *jpvt, real *rcond, 
	integer *rank, real *work, integer *info);

/* sgelsy.c */
extern int sgelsy_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *jpvt, real *rcond, 
	integer *rank, real *work, integer *lwork, integer *info);

/* sgeql2.c */
extern int sgeql2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgeqlf.c */
extern int sgeqlf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgeqp3.c */
extern int sgeqp3_(integer *m, integer *n, real *a, integer *lda, 
	integer *jpvt, real *tau, real *work, integer *lwork, integer *info);

/* sgeqpf.c */
extern int sgeqpf_(integer *m, integer *n, real *a, integer *lda, 
	integer *jpvt, real *tau, real *work, integer *info);

/* sgeqr2.c */
extern int sgeqr2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgeqrf.c */
extern int sgeqrf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgerfs.c */
extern int sgerfs_(char *trans, integer *n, integer *nrhs, real *a, 
	integer *lda, real *af, integer *ldaf, integer *ipiv, real *b, 
	integer *ldb, real *x, integer *ldx, real *ferr, real *berr, real *
	work, integer *iwork, integer *info);

/* sgerfsx.c */
extern int sgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	real *r__, real *c__, real *b, integer *ldb, real *x, integer *ldx, 
	real *rcond, real *berr, integer *n_err_bnds__, real *err_bnds_norm__, 
	 real *err_bnds_comp__, integer *nparams, real *params, real *work, 
	integer *iwork, integer *info);

/* sgerq2.c */
extern int sgerq2_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *info);

/* sgerqf.c */
extern int sgerqf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sgesc2.c */
extern int sgesc2_(integer *n, real *a, integer *lda, real *rhs, 
	integer *ipiv, integer *jpiv, real *scale);

/* sgesdd.c */
extern int sgesdd_(char *jobz, integer *m, integer *n, real *a, 
	integer *lda, real *s, real *u, integer *ldu, real *vt, integer *ldvt, 
	 real *work, integer *lwork, integer *iwork, integer *info);

/* sgesv.c */
extern int sgesv_(integer *n, integer *nrhs, real *a, integer *lda, 
	integer *ipiv, real *b, integer *ldb, integer *info);

/* sgesvd.c */
extern int sgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	real *a, integer *lda, real *s, real *u, integer *ldu, real *vt, 
	integer *ldvt, real *work, integer *lwork, integer *info);

/* sgesvj.c */
extern int sgesvj_(char *joba, char *jobu, char *jobv, integer *m, 
	integer *n, real *a, integer *lda, real *sva, integer *mv, real *v, 
	integer *ldv, real *work, integer *lwork, integer *info);

/* sgesvx.c */
extern int sgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	char *equed, real *r__, real *c__, real *b, integer *ldb, real *x, 
	integer *ldx, real *rcond, real *ferr, real *berr, real *work, 
	integer *iwork, integer *info);

/* sgesvxx.c */
extern int sgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	char *equed, real *r__, real *c__, real *b, integer *ldb, real *x, 
	integer *ldx, real *rcond, real *rpvgrw, real *berr, integer *
	n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, integer *
	nparams, real *params, real *work, integer *iwork, integer *info);

/* sgetc2.c */
extern int sgetc2_(integer *n, real *a, integer *lda, integer *ipiv, 
	 integer *jpiv, integer *info);

/* sgetf2.c */
extern int sgetf2_(integer *m, integer *n, real *a, integer *lda, 
	integer *ipiv, integer *info);

/* sgetrf.c */
extern int sgetrf_(integer *m, integer *n, real *a, integer *lda, 
	integer *ipiv, integer *info);

/* sgetri.c */
extern int sgetri_(integer *n, real *a, integer *lda, integer *ipiv, 
	 real *work, integer *lwork, integer *info);

/* sgetrs.c */
extern int sgetrs_(char *trans, integer *n, integer *nrhs, real *a, 
	integer *lda, integer *ipiv, real *b, integer *ldb, integer *info);

/* sggbak.c */
extern int sggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, real *lscale, real *rscale, integer *m, real *v, 
	integer *ldv, integer *info);

/* sggbal.c */
extern int sggbal_(char *job, integer *n, real *a, integer *lda, 
	real *b, integer *ldb, integer *ilo, integer *ihi, real *lscale, real 
	*rscale, real *work, integer *info);

/* sgges.c */
extern int sgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, real *a, integer *lda, real *b, integer *ldb, 
	integer *sdim, real *alphar, real *alphai, real *beta, real *vsl, 
	integer *ldvsl, real *vsr, integer *ldvsr, real *work, integer *lwork, 
	 logical *bwork, integer *info);

/* sggesx.c */
extern int sggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, real *a, integer *lda, real *b, 
	integer *ldb, integer *sdim, real *alphar, real *alphai, real *beta, 
	real *vsl, integer *ldvsl, real *vsr, integer *ldvsr, real *rconde, 
	real *rcondv, real *work, integer *lwork, integer *iwork, integer *
	liwork, logical *bwork, integer *info);

/* sggev.c */
extern int sggev_(char *jobvl, char *jobvr, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, real *alphar, real *alphai, real 
	*beta, real *vl, integer *ldvl, real *vr, integer *ldvr, real *work, 
	integer *lwork, integer *info);

/* sggevx.c */
extern int sggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, real *a, integer *lda, real *b, integer *ldb, real 
	*alphar, real *alphai, real *beta, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, integer *ilo, integer *ihi, real *lscale, real *rscale, 
	 real *abnrm, real *bbnrm, real *rconde, real *rcondv, real *work, 
	integer *lwork, integer *iwork, logical *bwork, integer *info);

/* sggglm.c */
extern int sggglm_(integer *n, integer *m, integer *p, real *a, 
	integer *lda, real *b, integer *ldb, real *d__, real *x, real *y, 
	real *work, integer *lwork, integer *info);

/* sgghrd.c */
extern int sgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, real *a, integer *lda, real *b, integer *ldb, real 
	*q, integer *ldq, real *z__, integer *ldz, integer *info);

/* sgglse.c */
extern int sgglse_(integer *m, integer *n, integer *p, real *a, 
	integer *lda, real *b, integer *ldb, real *c__, real *d__, real *x, 
	real *work, integer *lwork, integer *info);

/* sggqrf.c */
extern int sggqrf_(integer *n, integer *m, integer *p, real *a, 
	integer *lda, real *taua, real *b, integer *ldb, real *taub, real *
	work, integer *lwork, integer *info);

/* sggrqf.c */
extern int sggrqf_(integer *m, integer *p, integer *n, real *a, 
	integer *lda, real *taua, real *b, integer *ldb, real *taub, real *
	work, integer *lwork, integer *info);

/* sggsvd.c */
extern int sggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, real *a, integer *lda, 
	 real *b, integer *ldb, real *alpha, real *beta, real *u, integer *
	ldu, real *v, integer *ldv, real *q, integer *ldq, real *work, 
	integer *iwork, integer *info);

/* sggsvp.c */
extern int sggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, real *a, integer *lda, real *b, integer *ldb, 
	real *tola, real *tolb, integer *k, integer *l, real *u, integer *ldu, 
	 real *v, integer *ldv, real *q, integer *ldq, integer *iwork, real *
	tau, real *work, integer *info);

/* sgsvj0.c */
extern int sgsvj0_(char *jobv, integer *m, integer *n, real *a, 
	integer *lda, real *d__, real *sva, integer *mv, real *v, integer *
	ldv, real *eps, real *sfmin, real *tol, integer *nsweep, real *work, 
	integer *lwork, integer *info);

/* sgsvj1.c */
extern int sgsvj1_(char *jobv, integer *m, integer *n, integer *n1, 
	real *a, integer *lda, real *d__, real *sva, integer *mv, real *v, 
	integer *ldv, real *eps, real *sfmin, real *tol, integer *nsweep, 
	real *work, integer *lwork, integer *info);

/* sgtcon.c */
extern int sgtcon_(char *norm, integer *n, real *dl, real *d__, 
	real *du, real *du2, integer *ipiv, real *anorm, real *rcond, real *
	work, integer *iwork, integer *info);

/* sgtrfs.c */
extern int sgtrfs_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *dlf, real *df, real *duf, real *du2, 
	integer *ipiv, real *b, integer *ldb, real *x, integer *ldx, real *
	ferr, real *berr, real *work, integer *iwork, integer *info);

/* sgtsv.c */
extern int sgtsv_(integer *n, integer *nrhs, real *dl, real *d__, 
	real *du, real *b, integer *ldb, integer *info);

/* sgtsvx.c */
extern int sgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, real *dl, real *d__, real *du, real *dlf, real *df, real *duf, 
	real *du2, integer *ipiv, real *b, integer *ldb, real *x, integer *
	ldx, real *rcond, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* sgttrf.c */
extern int sgttrf_(integer *n, real *dl, real *d__, real *du, real *
	du2, integer *ipiv, integer *info);

/* sgttrs.c */
extern int sgttrs_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *du2, integer *ipiv, real *b, integer *ldb, 
	 integer *info);

/* sgtts2.c */
extern int sgtts2_(integer *itrans, integer *n, integer *nrhs, real 
	*dl, real *d__, real *du, real *du2, integer *ipiv, real *b, integer *
	ldb);

/* shgeqz.c */
extern int shgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *t, integer 
	*ldt, real *alphar, real *alphai, real *beta, real *q, integer *ldq, 
	real *z__, integer *ldz, real *work, integer *lwork, integer *info);

/* shsein.c */
extern int shsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, real *h__, integer *ldh, real *wr, real *wi, real 
	*vl, integer *ldvl, real *vr, integer *ldvr, integer *mm, integer *m, 
	real *work, integer *ifaill, integer *ifailr, integer *info);

/* shseqr.c */
extern int shseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, real *h__, integer *ldh, real *wr, real *wi, real *z__, 
	 integer *ldz, real *work, integer *lwork, integer *info);

/* sisnan.c */
extern logical sisnan_(real *sin__);

/* sla_gbamv.c */
extern int sla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, real *alpha, real *ab, integer *ldab, real *
	x, integer *incx, real *beta, real *y, integer *incy);

/* sla_gbrcond.c */
extern doublereal sla_gbrcond__(char *trans, integer *n, integer *kl, integer *ku, 
	real *ab, integer *ldab, real *afb, integer *ldafb, integer *ipiv, 
	integer *cmode, real *c__, integer *info, real *work, integer *iwork, 
	ftnlen trans_len);

/* sla_gbrfsx_extended.c */
extern int sla_gbrfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *kl, integer *ku, integer *nrhs, 
	real *ab, integer *ldab, real *afb, integer *ldafb, integer *ipiv, 
	logical *colequ, real *c__, real *b, integer *ldb, real *y, integer *
	ldy, real *berr_out__, integer *n_norms__, real *err_bnds_norm__, 
	real *err_bnds_comp__, real *res, real *ayb, real *dy, real *y_tail__,
	 real *rcond, integer *ithresh, real *rthresh, real *dz_ub__, logical 
	*ignore_cwise__, integer *info);

/* sla_gbrpvgrw.c */
extern doublereal sla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, real *ab, integer *ldab, real *afb, integer *ldafb);

/* sla_geamv.c */
extern int sla_geamv__(integer *trans, integer *m, integer *n, real 
	*alpha, real *a, integer *lda, real *x, integer *incx, real *beta, 
	real *y, integer *incy);

/* sla_gercond.c */
extern doublereal sla_gercond__(char *trans, integer *n, real *a, integer *lda, real 
	*af, integer *ldaf, integer *ipiv, integer *cmode, real *c__, integer 
	*info, real *work, integer *iwork, ftnlen trans_len);

/* sla_gerfsx_extended.c */
extern int sla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, real *a, integer *lda, real *
	af, integer *ldaf, integer *ipiv, logical *colequ, real *c__, real *b,
	 integer *ldb, real *y, integer *ldy, real *berr_out__, integer *
	n_norms__, real *err_bnds_norm__, real *err_bnds_comp__, real *res, 
	real *ayb, real *dy, real *y_tail__, real *rcond, integer *ithresh, 
	real *rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info);

/* sla_lin_berr.c */
extern int sla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	real *res, real *ayb, real *berr);

/* sla_porcond.c */
extern doublereal sla_porcond__(char *uplo, integer *n, real *a, integer *lda, real *
	af, integer *ldaf, integer *cmode, real *c__, integer *info, real *
	work, integer *iwork, ftnlen uplo_len);

/* sla_porfsx_extended.c */
extern int sla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, real *a, integer *lda, real *af, integer *
	ldaf, logical *colequ, real *c__, real *b, integer *ldb, real *y, 
	integer *ldy, real *berr_out__, integer *n_norms__, real *
	err_bnds_norm__, real *err_bnds_comp__, real *res, real *ayb, real *
	dy, real *y_tail__, real *rcond, integer *ithresh, real *rthresh, 
	real *dz_ub__, logical *ignore_cwise__, integer *info, ftnlen 
	uplo_len);

/* sla_porpvgrw.c */
extern doublereal sla_porpvgrw__(char *uplo, integer *ncols, real *a, integer *lda, 
	real *af, integer *ldaf, real *work, ftnlen uplo_len);

/* sla_rpvgrw.c */
extern doublereal sla_rpvgrw__(integer *n, integer *ncols, real *a, integer *lda, 
	real *af, integer *ldaf);

/* sla_syamv.c */
extern int sla_syamv__(integer *uplo, integer *n, real *alpha, real 
	*a, integer *lda, real *x, integer *incx, real *beta, real *y, 
	integer *incy);

/* sla_syrcond.c */
extern doublereal sla_syrcond__(char *uplo, integer *n, real *a, integer *lda, real *
	af, integer *ldaf, integer *ipiv, integer *cmode, real *c__, integer *
	info, real *work, integer *iwork, ftnlen uplo_len);

/* sla_syrfsx_extended.c */
extern int sla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, real *a, integer *lda, real *af, integer *
	ldaf, integer *ipiv, logical *colequ, real *c__, real *b, integer *
	ldb, real *y, integer *ldy, real *berr_out__, integer *n_norms__, 
	real *err_bnds_norm__, real *err_bnds_comp__, real *res, real *ayb, 
	real *dy, real *y_tail__, real *rcond, integer *ithresh, real *
	rthresh, real *dz_ub__, logical *ignore_cwise__, integer *info, 
	ftnlen uplo_len);

/* sla_syrpvgrw.c */
extern doublereal sla_syrpvgrw__(char *uplo, integer *n, integer *info, real *a, 
	integer *lda, real *af, integer *ldaf, integer *ipiv, real *work, 
	ftnlen uplo_len);

/* sla_wwaddw.c */
extern int sla_wwaddw__(integer *n, real *x, real *y, real *w);

/* slabad.c */
extern int slabad_(real *small, real *large);

/* slabrd.c */
extern int slabrd_(integer *m, integer *n, integer *nb, real *a, 
	integer *lda, real *d__, real *e, real *tauq, real *taup, real *x, 
	integer *ldx, real *y, integer *ldy);

/* slacn2.c */
extern int slacn2_(integer *n, real *v, real *x, integer *isgn, 
	real *est, integer *kase, integer *isave);

/* slacon.c */
extern int slacon_(integer *n, real *v, real *x, integer *isgn, 
	real *est, integer *kase);

/* slacpy.c */
extern int slacpy_(char *uplo, integer *m, integer *n, real *a, 
	integer *lda, real *b, integer *ldb);

/* sladiv.c */
extern int sladiv_(real *a, real *b, real *c__, real *d__, real *p, 
	real *q);

/* slae2.c */
extern int slae2_(real *a, real *b, real *c__, real *rt1, real *rt2);

/* slaebz.c */
extern int slaebz_(integer *ijob, integer *nitmax, integer *n, 
	integer *mmax, integer *minp, integer *nbmin, real *abstol, real *
	reltol, real *pivmin, real *d__, real *e, real *e2, integer *nval, 
	real *ab, real *c__, integer *mout, integer *nab, real *work, integer 
	*iwork, integer *info);

/* slaed0.c */
extern int slaed0_(integer *icompq, integer *qsiz, integer *n, real 
	*d__, real *e, real *q, integer *ldq, real *qstore, integer *ldqs, 
	real *work, integer *iwork, integer *info);

/* slaed1.c */
extern int slaed1_(integer *n, real *d__, real *q, integer *ldq, 
	integer *indxq, real *rho, integer *cutpnt, real *work, integer *
	iwork, integer *info);

/* slaed2.c */
extern int slaed2_(integer *k, integer *n, integer *n1, real *d__, 
	real *q, integer *ldq, integer *indxq, real *rho, real *z__, real *
	dlamda, real *w, real *q2, integer *indx, integer *indxc, integer *
	indxp, integer *coltyp, integer *info);

/* slaed3.c */
extern int slaed3_(integer *k, integer *n, integer *n1, real *d__, 
	real *q, integer *ldq, real *rho, real *dlamda, real *q2, integer *
	indx, integer *ctot, real *w, real *s, integer *info);

/* slaed4.c */
extern int slaed4_(integer *n, integer *i__, real *d__, real *z__, 
	real *delta, real *rho, real *dlam, integer *info);

/* slaed5.c */
extern int slaed5_(integer *i__, real *d__, real *z__, real *delta, 
	real *rho, real *dlam);

/* slaed6.c */
extern int slaed6_(integer *kniter, logical *orgati, real *rho, 
	real *d__, real *z__, real *finit, real *tau, integer *info);

/* slaed7.c */
extern int slaed7_(integer *icompq, integer *n, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, real *d__, real *q, 
	integer *ldq, integer *indxq, real *rho, integer *cutpnt, real *
	qstore, integer *qptr, integer *prmptr, integer *perm, integer *
	givptr, integer *givcol, real *givnum, real *work, integer *iwork, 
	integer *info);

/* slaed8.c */
extern int slaed8_(integer *icompq, integer *k, integer *n, integer 
	*qsiz, real *d__, real *q, integer *ldq, integer *indxq, real *rho, 
	integer *cutpnt, real *z__, real *dlamda, real *q2, integer *ldq2, 
	real *w, integer *perm, integer *givptr, integer *givcol, real *
	givnum, integer *indxp, integer *indx, integer *info);

/* slaed9.c */
extern int slaed9_(integer *k, integer *kstart, integer *kstop, 
	integer *n, real *d__, real *q, integer *ldq, real *rho, real *dlamda, 
	 real *w, real *s, integer *lds, integer *info);

/* slaeda.c */
extern int slaeda_(integer *n, integer *tlvls, integer *curlvl, 
	integer *curpbm, integer *prmptr, integer *perm, integer *givptr, 
	integer *givcol, real *givnum, real *q, integer *qptr, real *z__, 
	real *ztemp, integer *info);

/* slaein.c */
extern int slaein_(logical *rightv, logical *noinit, integer *n, 
	real *h__, integer *ldh, real *wr, real *wi, real *vr, real *vi, real 
	*b, integer *ldb, real *work, real *eps3, real *smlnum, real *bignum, 
	integer *info);

/* slaev2.c */
extern int slaev2_(real *a, real *b, real *c__, real *rt1, real *
	rt2, real *cs1, real *sn1);

/* slaexc.c */
extern int slaexc_(logical *wantq, integer *n, real *t, integer *
	ldt, real *q, integer *ldq, integer *j1, integer *n1, integer *n2, 
	real *work, integer *info);

/* slag2.c */
extern int slag2_(real *a, integer *lda, real *b, integer *ldb, 
	real *safmin, real *scale1, real *scale2, real *wr1, real *wr2, real *
	wi);

/* slag2d.c */
extern int slag2d_(integer *m, integer *n, real *sa, integer *ldsa, 
	doublereal *a, integer *lda, integer *info);

/* slags2.c */
extern int slags2_(logical *upper, real *a1, real *a2, real *a3, 
	real *b1, real *b2, real *b3, real *csu, real *snu, real *csv, real *
	snv, real *csq, real *snq);

/* slagtf.c */
extern int slagtf_(integer *n, real *a, real *lambda, real *b, real 
	*c__, real *tol, real *d__, integer *in, integer *info);

/* slagtm.c */
extern int slagtm_(char *trans, integer *n, integer *nrhs, real *
	alpha, real *dl, real *d__, real *du, real *x, integer *ldx, real *
	beta, real *b, integer *ldb);

/* slagts.c */
extern int slagts_(integer *job, integer *n, real *a, real *b, real 
	*c__, real *d__, integer *in, real *y, real *tol, integer *info);

/* slagv2.c */
extern int slagv2_(real *a, integer *lda, real *b, integer *ldb, 
	real *alphar, real *alphai, real *beta, real *csl, real *snl, real *
	csr, real *snr);

/* slahqr.c */
extern int slahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *wr, real *
	wi, integer *iloz, integer *ihiz, real *z__, integer *ldz, integer *
	info);

/* slahr2.c */
extern int slahr2_(integer *n, integer *k, integer *nb, real *a, 
	integer *lda, real *tau, real *t, integer *ldt, real *y, integer *ldy);

/* slahrd.c */
extern int slahrd_(integer *n, integer *k, integer *nb, real *a, 
	integer *lda, real *tau, real *t, integer *ldt, real *y, integer *ldy);

/* slaic1.c */
extern int slaic1_(integer *job, integer *j, real *x, real *sest, 
	real *w, real *gamma, real *sestpr, real *s, real *c__);

/* slaisnan.c */
extern logical slaisnan_(real *sin1, real *sin2);

/* slaln2.c */
extern int slaln2_(logical *ltrans, integer *na, integer *nw, real *
	smin, real *ca, real *a, integer *lda, real *d1, real *d2, real *b, 
	integer *ldb, real *wr, real *wi, real *x, integer *ldx, real *scale, 
	real *xnorm, integer *info);

/* slals0.c */
extern int slals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, real *b, integer *ldb, real *bx, 
	integer *ldbx, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real *givnum, integer *ldgnum, real *poles, real *
	difl, real *difr, real *z__, integer *k, real *c__, real *s, real *
	work, integer *info);

/* slalsa.c */
extern int slalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, real *b, integer *ldb, real *bx, integer *ldbx, real *
	u, integer *ldu, real *vt, integer *k, real *difl, real *difr, real *
	z__, real *poles, integer *givptr, integer *givcol, integer *ldgcol, 
	integer *perm, real *givnum, real *c__, real *s, real *work, integer *
	iwork, integer *info);

/* slalsd.c */
extern int slalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, real *d__, real *e, real *b, integer *ldb, real *rcond, 
	integer *rank, real *work, integer *iwork, integer *info);

/* slamrg.c */
extern int slamrg_(integer *n1, integer *n2, real *a, integer *
	strd1, integer *strd2, integer *index);

/* slaneg.c */
extern integer slaneg_(integer *n, real *d__, real *lld, real *sigma, real *pivmin, 
	integer *r__);

/* slangb.c */
extern doublereal slangb_(char *norm, integer *n, integer *kl, integer *ku, real *ab, 
	 integer *ldab, real *work);

/* slange.c */
extern doublereal slange_(char *norm, integer *m, integer *n, real *a, integer *lda, 
	real *work);

/* slangt.c */
extern doublereal slangt_(char *norm, integer *n, real *dl, real *d__, real *du);

/* slanhs.c */
extern doublereal slanhs_(char *norm, integer *n, real *a, integer *lda, real *work);

/* slansb.c */
extern doublereal slansb_(char *norm, char *uplo, integer *n, integer *k, real *ab, 
	integer *ldab, real *work);

/* slansf.c */
extern doublereal slansf_(char *norm, char *transr, char *uplo, integer *n, real *a, 
	real *work);

/* slansp.c */
extern doublereal slansp_(char *norm, char *uplo, integer *n, real *ap, real *work);

/* slanst.c */
extern doublereal slanst_(char *norm, integer *n, real *d__, real *e);

/* slansy.c */
extern doublereal slansy_(char *norm, char *uplo, integer *n, real *a, integer *lda, 
	real *work);

/* slantb.c */
extern doublereal slantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 real *ab, integer *ldab, real *work);

/* slantp.c */
extern doublereal slantp_(char *norm, char *uplo, char *diag, integer *n, real *ap, 
	real *work);

/* slantr.c */
extern doublereal slantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 real *a, integer *lda, real *work);

/* slanv2.c */
extern int slanv2_(real *a, real *b, real *c__, real *d__, real *
	rt1r, real *rt1i, real *rt2r, real *rt2i, real *cs, real *sn);

/* slapll.c */
extern int slapll_(integer *n, real *x, integer *incx, real *y, 
	integer *incy, real *ssmin);

/* slapmt.c */
extern int slapmt_(logical *forwrd, integer *m, integer *n, real *x, 
	 integer *ldx, integer *k);

/* slapy2.c */
extern doublereal slapy2_(real *x, real *y);

/* slapy3.c */
extern doublereal slapy3_(real *x, real *y, real *z__);

/* slaqgb.c */
extern int slaqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *ab, integer *ldab, real *r__, real *c__, real *rowcnd, real *
	colcnd, real *amax, char *equed);

/* slaqge.c */
extern int slaqge_(integer *m, integer *n, real *a, integer *lda, 
	real *r__, real *c__, real *rowcnd, real *colcnd, real *amax, char *
	equed);

/* slaqp2.c */
extern int slaqp2_(integer *m, integer *n, integer *offset, real *a, 
	 integer *lda, integer *jpvt, real *tau, real *vn1, real *vn2, real *
	work);

/* slaqps.c */
extern int slaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, real *a, integer *lda, integer *jpvt, real *tau, 
	real *vn1, real *vn2, real *auxv, real *f, integer *ldf);

/* slaqr0.c */
extern int slaqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *wr, real *
	wi, integer *iloz, integer *ihiz, real *z__, integer *ldz, real *work, 
	 integer *lwork, integer *info);

/* slaqr1.c */
extern int slaqr1_(integer *n, real *h__, integer *ldh, real *sr1, 
	real *si1, real *sr2, real *si2, real *v);

/* slaqr2.c */
extern int slaqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, real *h__, integer *ldh, 
	integer *iloz, integer *ihiz, real *z__, integer *ldz, integer *ns, 
	integer *nd, real *sr, real *si, real *v, integer *ldv, integer *nh, 
	real *t, integer *ldt, integer *nv, real *wv, integer *ldwv, real *
	work, integer *lwork);

/* slaqr3.c */
extern int slaqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, real *h__, integer *ldh, 
	integer *iloz, integer *ihiz, real *z__, integer *ldz, integer *ns, 
	integer *nd, real *sr, real *si, real *v, integer *ldv, integer *nh, 
	real *t, integer *ldt, integer *nv, real *wv, integer *ldwv, real *
	work, integer *lwork);

/* slaqr4.c */
extern int slaqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, real *h__, integer *ldh, real *wr, real *
	wi, integer *iloz, integer *ihiz, real *z__, integer *ldz, real *work, 
	 integer *lwork, integer *info);

/* slaqr5.c */
extern int slaqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, real *sr, 
	real *si, real *h__, integer *ldh, integer *iloz, integer *ihiz, real 
	*z__, integer *ldz, real *v, integer *ldv, real *u, integer *ldu, 
	integer *nv, real *wv, integer *ldwv, integer *nh, real *wh, integer *
	ldwh);

/* slaqsb.c */
extern int slaqsb_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, real *s, real *scond, real *amax, char *equed);

/* slaqsp.c */
extern int slaqsp_(char *uplo, integer *n, real *ap, real *s, real *
	scond, real *amax, char *equed);

/* slaqsy.c */
extern int slaqsy_(char *uplo, integer *n, real *a, integer *lda, 
	real *s, real *scond, real *amax, char *equed);

/* slaqtr.c */
extern int slaqtr_(logical *ltran, logical *lreal, integer *n, real 
	*t, integer *ldt, real *b, real *w, real *scale, real *x, real *work, 
	integer *info);

/* slar1v.c */
extern int slar1v_(integer *n, integer *b1, integer *bn, real *
	lambda, real *d__, real *l, real *ld, real *lld, real *pivmin, real *
	gaptol, real *z__, logical *wantnc, integer *negcnt, real *ztz, real *
	mingma, integer *r__, integer *isuppz, real *nrminv, real *resid, 
	real *rqcorr, real *work);

/* slar2v.c */
extern int slar2v_(integer *n, real *x, real *y, real *z__, integer 
	*incx, real *c__, real *s, integer *incc);

/* slarf.c */
extern int slarf_(char *side, integer *m, integer *n, real *v, 
	integer *incv, real *tau, real *c__, integer *ldc, real *work);

/* slarfb.c */
extern int slarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, real *v, integer *ldv, 
	real *t, integer *ldt, real *c__, integer *ldc, real *work, integer *
	ldwork);

/* slarfg.c */
extern int slarfg_(integer *n, real *alpha, real *x, integer *incx, 
	real *tau);

/* slarfp.c */
extern int slarfp_(integer *n, real *alpha, real *x, integer *incx, 
	real *tau);

/* slarft.c */
extern int slarft_(char *direct, char *storev, integer *n, integer *
	k, real *v, integer *ldv, real *tau, real *t, integer *ldt);

/* slarfx.c */
extern int slarfx_(char *side, integer *m, integer *n, real *v, 
	real *tau, real *c__, integer *ldc, real *work);

/* slargv.c */
extern int slargv_(integer *n, real *x, integer *incx, real *y, 
	integer *incy, real *c__, integer *incc);

/* slarnv.c */
extern int slarnv_(integer *idist, integer *iseed, integer *n, real 
	*x);

/* slarra.c */
extern int slarra_(integer *n, real *d__, real *e, real *e2, real *
	spltol, real *tnrm, integer *nsplit, integer *isplit, integer *info);

/* slarrb.c */
extern int slarrb_(integer *n, real *d__, real *lld, integer *
	ifirst, integer *ilast, real *rtol1, real *rtol2, integer *offset, 
	real *w, real *wgap, real *werr, real *work, integer *iwork, real *
	pivmin, real *spdiam, integer *twist, integer *info);

/* slarrc.c */
extern int slarrc_(char *jobt, integer *n, real *vl, real *vu, real 
	*d__, real *e, real *pivmin, integer *eigcnt, integer *lcnt, integer *
	rcnt, integer *info);

/* slarrd.c */
extern int slarrd_(char *range, char *order, integer *n, real *vl, 
	real *vu, integer *il, integer *iu, real *gers, real *reltol, real *
	d__, real *e, real *e2, real *pivmin, integer *nsplit, integer *
	isplit, integer *m, real *w, real *werr, real *wl, real *wu, integer *
	iblock, integer *indexw, real *work, integer *iwork, integer *info);

/* slarre.c */
extern int slarre_(char *range, integer *n, real *vl, real *vu, 
	integer *il, integer *iu, real *d__, real *e, real *e2, real *rtol1, 
	real *rtol2, real *spltol, integer *nsplit, integer *isplit, integer *
	m, real *w, real *werr, real *wgap, integer *iblock, integer *indexw, 
	real *gers, real *pivmin, real *work, integer *iwork, integer *info);

/* slarrf.c */
extern int slarrf_(integer *n, real *d__, real *l, real *ld, 
	integer *clstrt, integer *clend, real *w, real *wgap, real *werr, 
	real *spdiam, real *clgapl, real *clgapr, real *pivmin, real *sigma, 
	real *dplus, real *lplus, real *work, integer *info);

/* slarrj.c */
extern int slarrj_(integer *n, real *d__, real *e2, integer *ifirst, 
	 integer *ilast, real *rtol, integer *offset, real *w, real *werr, 
	real *work, integer *iwork, real *pivmin, real *spdiam, integer *info);

/* slarrk.c */
extern int slarrk_(integer *n, integer *iw, real *gl, real *gu, 
	real *d__, real *e2, real *pivmin, real *reltol, real *w, real *werr, 
	integer *info);

/* slarrr.c */
extern int slarrr_(integer *n, real *d__, real *e, integer *info);

/* slarrv.c */
extern int slarrv_(integer *n, real *vl, real *vu, real *d__, real *
	l, real *pivmin, integer *isplit, integer *m, integer *dol, integer *
	dou, real *minrgp, real *rtol1, real *rtol2, real *w, real *werr, 
	real *wgap, integer *iblock, integer *indexw, real *gers, real *z__, 
	integer *ldz, integer *isuppz, real *work, integer *iwork, integer *
	info);

/* slarscl2.c */
extern int slarscl2_(integer *m, integer *n, real *d__, real *x, 
	integer *ldx);

/* slartg.c */
extern int slartg_(real *f, real *g, real *cs, real *sn, real *r__);

/* slartv.c */
extern int slartv_(integer *n, real *x, integer *incx, real *y, 
	integer *incy, real *c__, real *s, integer *incc);

/* slaruv.c */
extern int slaruv_(integer *iseed, integer *n, real *x);

/* slarz.c */
extern int slarz_(char *side, integer *m, integer *n, integer *l, 
	real *v, integer *incv, real *tau, real *c__, integer *ldc, real *
	work);

/* slarzb.c */
extern int slarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, real *v, 
	integer *ldv, real *t, integer *ldt, real *c__, integer *ldc, real *
	work, integer *ldwork);

/* slarzt.c */
extern int slarzt_(char *direct, char *storev, integer *n, integer *
	k, real *v, integer *ldv, real *tau, real *t, integer *ldt);

/* slas2.c */
extern int slas2_(real *f, real *g, real *h__, real *ssmin, real *
	ssmax);

/* slascl.c */
extern int slascl_(char *type__, integer *kl, integer *ku, real *
	cfrom, real *cto, integer *m, integer *n, real *a, integer *lda, 
	integer *info);

/* slascl2.c */
extern int slascl2_(integer *m, integer *n, real *d__, real *x, 
	integer *ldx);

/* slasd0.c */
extern int slasd0_(integer *n, integer *sqre, real *d__, real *e, 
	real *u, integer *ldu, real *vt, integer *ldvt, integer *smlsiz, 
	integer *iwork, real *work, integer *info);

/* slasd1.c */
extern int slasd1_(integer *nl, integer *nr, integer *sqre, real *
	d__, real *alpha, real *beta, real *u, integer *ldu, real *vt, 
	integer *ldvt, integer *idxq, integer *iwork, real *work, integer *
	info);

/* slasd2.c */
extern int slasd2_(integer *nl, integer *nr, integer *sqre, integer 
	*k, real *d__, real *z__, real *alpha, real *beta, real *u, integer *
	ldu, real *vt, integer *ldvt, real *dsigma, real *u2, integer *ldu2, 
	real *vt2, integer *ldvt2, integer *idxp, integer *idx, integer *idxc, 
	 integer *idxq, integer *coltyp, integer *info);

/* slasd3.c */
extern int slasd3_(integer *nl, integer *nr, integer *sqre, integer 
	*k, real *d__, real *q, integer *ldq, real *dsigma, real *u, integer *
	ldu, real *u2, integer *ldu2, real *vt, integer *ldvt, real *vt2, 
	integer *ldvt2, integer *idxc, integer *ctot, real *z__, integer *
	info);

/* slasd4.c */
extern int slasd4_(integer *n, integer *i__, real *d__, real *z__, 
	real *delta, real *rho, real *sigma, real *work, integer *info);

/* slasd5.c */
extern int slasd5_(integer *i__, real *d__, real *z__, real *delta, 
	real *rho, real *dsigma, real *work);

/* slasd6.c */
extern int slasd6_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, real *d__, real *vf, real *vl, real *alpha, real *beta, 
	 integer *idxq, integer *perm, integer *givptr, integer *givcol, 
	integer *ldgcol, real *givnum, integer *ldgnum, real *poles, real *
	difl, real *difr, real *z__, integer *k, real *c__, real *s, real *
	work, integer *iwork, integer *info);

/* slasd7.c */
extern int slasd7_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *k, real *d__, real *z__, real *zw, real *vf, 
	real *vfw, real *vl, real *vlw, real *alpha, real *beta, real *dsigma, 
	 integer *idx, integer *idxp, integer *idxq, integer *perm, integer *
	givptr, integer *givcol, integer *ldgcol, real *givnum, integer *
	ldgnum, real *c__, real *s, integer *info);

/* slasd8.c */
extern int slasd8_(integer *icompq, integer *k, real *d__, real *
	z__, real *vf, real *vl, real *difl, real *difr, integer *lddifr, 
	real *dsigma, real *work, integer *info);

/* slasda.c */
extern int slasda_(integer *icompq, integer *smlsiz, integer *n, 
	integer *sqre, real *d__, real *e, real *u, integer *ldu, real *vt, 
	integer *k, real *difl, real *difr, real *z__, real *poles, integer *
	givptr, integer *givcol, integer *ldgcol, integer *perm, real *givnum, 
	 real *c__, real *s, real *work, integer *iwork, integer *info);

/* slasdq.c */
extern int slasdq_(char *uplo, integer *sqre, integer *n, integer *
	ncvt, integer *nru, integer *ncc, real *d__, real *e, real *vt, 
	integer *ldvt, real *u, integer *ldu, real *c__, integer *ldc, real *
	work, integer *info);

/* slasdt.c */
extern int slasdt_(integer *n, integer *lvl, integer *nd, integer *
	inode, integer *ndiml, integer *ndimr, integer *msub);

/* slaset.c */
extern int slaset_(char *uplo, integer *m, integer *n, real *alpha, 
	real *beta, real *a, integer *lda);

/* slasq1.c */
extern int slasq1_(integer *n, real *d__, real *e, real *work, 
	integer *info);

/* slasq2.c */
extern int slasq2_(integer *n, real *z__, integer *info);

/* slasq3.c */
extern int slasq3_(integer *i0, integer *n0, real *z__, integer *pp, 
	 real *dmin__, real *sigma, real *desig, real *qmax, integer *nfail, 
	integer *iter, integer *ndiv, logical *ieee, integer *ttype, real *
	dmin1, real *dmin2, real *dn, real *dn1, real *dn2, real *g, real *
	tau);

/* slasq4.c */
extern int slasq4_(integer *i0, integer *n0, real *z__, integer *pp, 
	 integer *n0in, real *dmin__, real *dmin1, real *dmin2, real *dn, 
	real *dn1, real *dn2, real *tau, integer *ttype, real *g);

/* slasq5.c */
extern int slasq5_(integer *i0, integer *n0, real *z__, integer *pp, 
	 real *tau, real *dmin__, real *dmin1, real *dmin2, real *dn, real *
	dnm1, real *dnm2, logical *ieee);

/* slasq6.c */
extern int slasq6_(integer *i0, integer *n0, real *z__, integer *pp, 
	 real *dmin__, real *dmin1, real *dmin2, real *dn, real *dnm1, real *
	dnm2);

/* slasr.c */
extern int slasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, real *c__, real *s, real *a, integer *lda);

/* slasrt.c */
extern int slasrt_(char *id, integer *n, real *d__, integer *info);

/* slassq.c */
extern int slassq_(integer *n, real *x, integer *incx, real *scale, 
	real *sumsq);

/* slasv2.c */
extern int slasv2_(real *f, real *g, real *h__, real *ssmin, real *
	ssmax, real *snr, real *csr, real *snl, real *csl);

/* slaswp.c */
extern int slaswp_(integer *n, real *a, integer *lda, integer *k1, 
	integer *k2, integer *ipiv, integer *incx);

/* slasy2.c */
extern int slasy2_(logical *ltranl, logical *ltranr, integer *isgn, 
	integer *n1, integer *n2, real *tl, integer *ldtl, real *tr, integer *
	ldtr, real *b, integer *ldb, real *scale, real *x, integer *ldx, real 
	*xnorm, integer *info);

/* slasyf.c */
extern int slasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 real *a, integer *lda, integer *ipiv, real *w, integer *ldw, integer 
	*info);

/* slatbs.c */
extern int slatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, real *ab, integer *ldab, real *x, 
	real *scale, real *cnorm, integer *info);

/* slatdf.c */
extern int slatdf_(integer *ijob, integer *n, real *z__, integer *
	ldz, real *rhs, real *rdsum, real *rdscal, integer *ipiv, integer *
	jpiv);

/* slatps.c */
extern int slatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real *ap, real *x, real *scale, real *cnorm, 
	integer *info);

/* slatrd.c */
extern int slatrd_(char *uplo, integer *n, integer *nb, real *a, 
	integer *lda, real *e, real *tau, real *w, integer *ldw);

/* slatrs.c */
extern int slatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, real *a, integer *lda, real *x, real *scale, real 
	*cnorm, integer *info);

/* slatrz.c */
extern int slatrz_(integer *m, integer *n, integer *l, real *a, 
	integer *lda, real *tau, real *work);

/* slatzm.c */
extern int slatzm_(char *side, integer *m, integer *n, real *v, 
	integer *incv, real *tau, real *c1, real *c2, integer *ldc, real *
	work);

/* slauu2.c */
extern int slauu2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* slauum.c */
extern int slauum_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* sopgtr.c */
extern int sopgtr_(char *uplo, integer *n, real *ap, real *tau, 
	real *q, integer *ldq, real *work, integer *info);

/* sopmtr.c */
extern int sopmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real *ap, real *tau, real *c__, integer *ldc, real *work, 
	integer *info);

/* sorg2l.c */
extern int sorg2l_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorg2r.c */
extern int sorg2r_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorgbr.c */
extern int sorgbr_(char *vect, integer *m, integer *n, integer *k, 
	real *a, integer *lda, real *tau, real *work, integer *lwork, integer 
	*info);

/* sorghr.c */
extern int sorghr_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgl2.c */
extern int sorgl2_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorglq.c */
extern int sorglq_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgql.c */
extern int sorgql_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgqr.c */
extern int sorgqr_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgr2.c */
extern int sorgr2_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *info);

/* sorgrq.c */
extern int sorgrq_(integer *m, integer *n, integer *k, real *a, 
	integer *lda, real *tau, real *work, integer *lwork, integer *info);

/* sorgtr.c */
extern int sorgtr_(char *uplo, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* sorm2l.c */
extern int sorm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sorm2r.c */
extern int sorm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sormbr.c */
extern int sormbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, real *a, integer *lda, real *tau, real *c__, 
	integer *ldc, real *work, integer *lwork, integer *info);

/* sormhr.c */
extern int sormhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, real *a, integer *lda, real *tau, real *
	c__, integer *ldc, real *work, integer *lwork, integer *info);

/* sorml2.c */
extern int sorml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sormlq.c */
extern int sormlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormql.c */
extern int sormql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormqr.c */
extern int sormqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormr2.c */
extern int sormr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *info);

/* sormr3.c */
extern int sormr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real *a, integer *lda, real *tau, real *c__, 
	integer *ldc, real *work, integer *info);

/* sormrq.c */
extern int sormrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* sormrz.c */
extern int sormrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, real *a, integer *lda, real *tau, real *c__, 
	integer *ldc, real *work, integer *lwork, integer *info);

/* sormtr.c */
extern int sormtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, real *a, integer *lda, real *tau, real *c__, integer *ldc, 
	 real *work, integer *lwork, integer *info);

/* spbcon.c */
extern int spbcon_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, real *anorm, real *rcond, real *work, integer *iwork, 
	integer *info);

/* spbequ.c */
extern int spbequ_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, real *s, real *scond, real *amax, integer *info);

/* spbrfs.c */
extern int spbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *afb, integer *ldafb, real *b, 
	integer *ldb, real *x, integer *ldx, real *ferr, real *berr, real *
	work, integer *iwork, integer *info);

/* spbstf.c */
extern int spbstf_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, integer *info);

/* spbsv.c */
extern int spbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *b, integer *ldb, integer *info);

/* spbsvx.c */
extern int spbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, real *ab, integer *ldab, real *afb, integer *ldafb, 
	char *equed, real *s, real *b, integer *ldb, real *x, integer *ldx, 
	real *rcond, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* spbtf2.c */
extern int spbtf2_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, integer *info);

/* spbtrf.c */
extern int spbtrf_(char *uplo, integer *n, integer *kd, real *ab, 
	integer *ldab, integer *info);

/* spbtrs.c */
extern int spbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *b, integer *ldb, integer *info);

/* spftrf.c */
extern int spftrf_(char *transr, char *uplo, integer *n, real *a, 
	integer *info);

/* spftri.c */
extern int spftri_(char *transr, char *uplo, integer *n, real *a, 
	integer *info);

/* spftrs.c */
extern int spftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, real *a, real *b, integer *ldb, integer *info);

/* spocon.c */
extern int spocon_(char *uplo, integer *n, real *a, integer *lda, 
	real *anorm, real *rcond, real *work, integer *iwork, integer *info);

/* spoequ.c */
extern int spoequ_(integer *n, real *a, integer *lda, real *s, real 
	*scond, real *amax, integer *info);

/* spoequb.c */
extern int spoequb_(integer *n, real *a, integer *lda, real *s, 
	real *scond, real *amax, integer *info);

/* sporfs.c */
extern int sporfs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *af, integer *ldaf, real *b, integer *ldb, real *x, 
	 integer *ldx, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* sporfsx.c */
extern int sporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, real *s, real *
	b, integer *ldb, real *x, integer *ldx, real *rcond, real *berr, 
	integer *n_err_bnds__, real *err_bnds_norm__, real *err_bnds_comp__, 
	integer *nparams, real *params, real *work, integer *iwork, integer *
	info);

/* sposv.c */
extern int sposv_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* sposvx.c */
extern int sposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, char *equed, 
	real *s, real *b, integer *ldb, real *x, integer *ldx, real *rcond, 
	real *ferr, real *berr, real *work, integer *iwork, integer *info);

/* sposvxx.c */
extern int sposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, char *equed, 
	real *s, real *b, integer *ldb, real *x, integer *ldx, real *rcond, 
	real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, real *work, integer *iwork, integer *info);

/* spotf2.c */
extern int spotf2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* spotrf.c */
extern int spotrf_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* spotri.c */
extern int spotri_(char *uplo, integer *n, real *a, integer *lda, 
	integer *info);

/* spotrs.c */
extern int spotrs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* sppcon.c */
extern int sppcon_(char *uplo, integer *n, real *ap, real *anorm, 
	real *rcond, real *work, integer *iwork, integer *info);

/* sppequ.c */
extern int sppequ_(char *uplo, integer *n, real *ap, real *s, real *
	scond, real *amax, integer *info);

/* spprfs.c */
extern int spprfs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *afp, real *b, integer *ldb, real *x, integer *ldx, real *ferr, 
	real *berr, real *work, integer *iwork, integer *info);

/* sppsv.c */
extern int sppsv_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *b, integer *ldb, integer *info);

/* sppsvx.c */
extern int sppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *ap, real *afp, char *equed, real *s, real *b, integer *
	ldb, real *x, integer *ldx, real *rcond, real *ferr, real *berr, real 
	*work, integer *iwork, integer *info);

/* spptrf.c */
extern int spptrf_(char *uplo, integer *n, real *ap, integer *info);

/* spptri.c */
extern int spptri_(char *uplo, integer *n, real *ap, integer *info);

/* spptrs.c */
extern int spptrs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *b, integer *ldb, integer *info);

/* spstf2.c */
extern int spstf2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *piv, integer *rank, real *tol, real *work, integer *info);

/* spstrf.c */
extern int spstrf_(char *uplo, integer *n, real *a, integer *lda, 
	integer *piv, integer *rank, real *tol, real *work, integer *info);

/* sptcon.c */
extern int sptcon_(integer *n, real *d__, real *e, real *anorm, 
	real *rcond, real *work, integer *info);

/* spteqr.c */
extern int spteqr_(char *compz, integer *n, real *d__, real *e, 
	real *z__, integer *ldz, real *work, integer *info);

/* sptrfs.c */
extern int sptrfs_(integer *n, integer *nrhs, real *d__, real *e, 
	real *df, real *ef, real *b, integer *ldb, real *x, integer *ldx, 
	real *ferr, real *berr, real *work, integer *info);

/* sptsv.c */
extern int sptsv_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb, integer *info);

/* sptsvx.c */
extern int sptsvx_(char *fact, integer *n, integer *nrhs, real *d__, 
	 real *e, real *df, real *ef, real *b, integer *ldb, real *x, integer 
	*ldx, real *rcond, real *ferr, real *berr, real *work, integer *info);

/* spttrf.c */
extern int spttrf_(integer *n, real *d__, real *e, integer *info);

/* spttrs.c */
extern int spttrs_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb, integer *info);

/* sptts2.c */
extern int sptts2_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb);

/* srscl.c */
extern int srscl_(integer *n, real *sa, real *sx, integer *incx);

/* ssbev.c */
extern int ssbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	real *ab, integer *ldab, real *w, real *z__, integer *ldz, real *work, 
	 integer *info);

/* ssbevd.c */
extern int ssbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	real *ab, integer *ldab, real *w, real *z__, integer *ldz, real *work, 
	 integer *lwork, integer *iwork, integer *liwork, integer *info);

/* ssbevx.c */
extern int ssbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, real *ab, integer *ldab, real *q, integer *ldq, real *vl, 
	 real *vu, integer *il, integer *iu, real *abstol, integer *m, real *
	w, real *z__, integer *ldz, real *work, integer *iwork, integer *
	ifail, integer *info);

/* ssbgst.c */
extern int ssbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, real *ab, integer *ldab, real *bb, integer *ldbb, real *
	x, integer *ldx, real *work, integer *info);

/* ssbgv.c */
extern int ssbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real *ab, integer *ldab, real *bb, integer *ldbb, real *
	w, real *z__, integer *ldz, real *work, integer *info);

/* ssbgvd.c */
extern int ssbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, real *ab, integer *ldab, real *bb, integer *ldbb, real *
	w, real *z__, integer *ldz, real *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);

/* ssbgvx.c */
extern int ssbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, real *ab, integer *ldab, real *bb, integer *
	ldbb, real *q, integer *ldq, real *vl, real *vu, integer *il, integer 
	*iu, real *abstol, integer *m, real *w, real *z__, integer *ldz, real 
	*work, integer *iwork, integer *ifail, integer *info);

/* ssbtrd.c */
extern int ssbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	real *ab, integer *ldab, real *d__, real *e, real *q, integer *ldq, 
	real *work, integer *info);

/* ssfrk.c */
extern int ssfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, real *alpha, real *a, integer *lda, real *beta, real *
	c__);

/* sspcon.c */
extern int sspcon_(char *uplo, integer *n, real *ap, integer *ipiv, 
	real *anorm, real *rcond, real *work, integer *iwork, integer *info);

/* sspev.c */
extern int sspev_(char *jobz, char *uplo, integer *n, real *ap, 
	real *w, real *z__, integer *ldz, real *work, integer *info);

/* sspevd.c */
extern int sspevd_(char *jobz, char *uplo, integer *n, real *ap, 
	real *w, real *z__, integer *ldz, real *work, integer *lwork, integer 
	*iwork, integer *liwork, integer *info);

/* sspevx.c */
extern int sspevx_(char *jobz, char *range, char *uplo, integer *n, 
	real *ap, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, real *work, integer *
	iwork, integer *ifail, integer *info);

/* sspgst.c */
extern int sspgst_(integer *itype, char *uplo, integer *n, real *ap, 
	 real *bp, integer *info);

/* sspgv.c */
extern int sspgv_(integer *itype, char *jobz, char *uplo, integer *
	n, real *ap, real *bp, real *w, real *z__, integer *ldz, real *work, 
	integer *info);

/* sspgvd.c */
extern int sspgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, real *ap, real *bp, real *w, real *z__, integer *ldz, real *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* sspgvx.c */
extern int sspgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real *ap, real *bp, real *vl, real *vu, integer *il, 
	 integer *iu, real *abstol, integer *m, real *w, real *z__, integer *
	ldz, real *work, integer *iwork, integer *ifail, integer *info);

/* ssprfs.c */
extern int ssprfs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *afp, integer *ipiv, real *b, integer *ldb, real *x, integer *
	ldx, real *ferr, real *berr, real *work, integer *iwork, integer *
	info);

/* sspsv.c */
extern int sspsv_(char *uplo, integer *n, integer *nrhs, real *ap, 
	integer *ipiv, real *b, integer *ldb, integer *info);

/* sspsvx.c */
extern int sspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *ap, real *afp, integer *ipiv, real *b, integer *ldb, real 
	*x, integer *ldx, real *rcond, real *ferr, real *berr, real *work, 
	integer *iwork, integer *info);

/* ssptrd.c */
extern int ssptrd_(char *uplo, integer *n, real *ap, real *d__, 
	real *e, real *tau, integer *info);

/* ssptrf.c */
extern int ssptrf_(char *uplo, integer *n, real *ap, integer *ipiv, 
	integer *info);

/* ssptri.c */
extern int ssptri_(char *uplo, integer *n, real *ap, integer *ipiv, 
	real *work, integer *info);

/* ssptrs.c */
extern int ssptrs_(char *uplo, integer *n, integer *nrhs, real *ap, 
	integer *ipiv, real *b, integer *ldb, integer *info);

/* sstebz.c */
extern int sstebz_(char *range, char *order, integer *n, real *vl, 
	real *vu, integer *il, integer *iu, real *abstol, real *d__, real *e, 
	integer *m, integer *nsplit, real *w, integer *iblock, integer *
	isplit, real *work, integer *iwork, integer *info);

/* sstedc.c */
extern int sstedc_(char *compz, integer *n, real *d__, real *e, 
	real *z__, integer *ldz, real *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* sstegr.c */
extern int sstegr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, integer *isuppz, real *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);

/* sstein.c */
extern int sstein_(integer *n, real *d__, real *e, integer *m, real 
	*w, integer *iblock, integer *isplit, real *z__, integer *ldz, real *
	work, integer *iwork, integer *ifail, integer *info);

/* sstemr.c */
extern int sstemr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, integer *m, 
	real *w, real *z__, integer *ldz, integer *nzc, integer *isuppz, 
	logical *tryrac, real *work, integer *lwork, integer *iwork, integer *
	liwork, integer *info);

/* ssteqr.c */
extern int ssteqr_(char *compz, integer *n, real *d__, real *e, 
	real *z__, integer *ldz, real *work, integer *info);

/* ssterf.c */
extern int ssterf_(integer *n, real *d__, real *e, integer *info);

/* sstev.c */
extern int sstev_(char *jobz, integer *n, real *d__, real *e, real *
	z__, integer *ldz, real *work, integer *info);

/* sstevd.c */
extern int sstevd_(char *jobz, integer *n, real *d__, real *e, real 
	*z__, integer *ldz, real *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* sstevr.c */
extern int sstevr_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, integer *isuppz, real *
	work, integer *lwork, integer *iwork, integer *liwork, integer *info);

/* sstevx.c */
extern int sstevx_(char *jobz, char *range, integer *n, real *d__, 
	real *e, real *vl, real *vu, integer *il, integer *iu, real *abstol, 
	integer *m, real *w, real *z__, integer *ldz, real *work, integer *
	iwork, integer *ifail, integer *info);

/* ssycon.c */
extern int ssycon_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, real *anorm, real *rcond, real *work, integer *iwork, 
	integer *info);

/* ssyequb.c */
extern int ssyequb_(char *uplo, integer *n, real *a, integer *lda, 
	real *s, real *scond, real *amax, real *work, integer *info);

/* ssyev.c */
extern int ssyev_(char *jobz, char *uplo, integer *n, real *a, 
	integer *lda, real *w, real *work, integer *lwork, integer *info);

/* ssyevd.c */
extern int ssyevd_(char *jobz, char *uplo, integer *n, real *a, 
	integer *lda, real *w, real *work, integer *lwork, integer *iwork, 
	integer *liwork, integer *info);

/* ssyevr.c */
extern int ssyevr_(char *jobz, char *range, char *uplo, integer *n, 
	real *a, integer *lda, real *vl, real *vu, integer *il, integer *iu, 
	real *abstol, integer *m, real *w, real *z__, integer *ldz, integer *
	isuppz, real *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* ssyevx.c */
extern int ssyevx_(char *jobz, char *range, char *uplo, integer *n, 
	real *a, integer *lda, real *vl, real *vu, integer *il, integer *iu, 
	real *abstol, integer *m, real *w, real *z__, integer *ldz, real *
	work, integer *lwork, integer *iwork, integer *ifail, integer *info);

/* ssygs2.c */
extern int ssygs2_(integer *itype, char *uplo, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* ssygst.c */
extern int ssygst_(integer *itype, char *uplo, integer *n, real *a, 
	integer *lda, real *b, integer *ldb, integer *info);

/* ssygv.c */
extern int ssygv_(integer *itype, char *jobz, char *uplo, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *w, real *work, 
	integer *lwork, integer *info);

/* ssygvd.c */
extern int ssygvd_(integer *itype, char *jobz, char *uplo, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *w, real *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* ssygvx.c */
extern int ssygvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, real *a, integer *lda, real *b, integer *ldb, real *
	vl, real *vu, integer *il, integer *iu, real *abstol, integer *m, 
	real *w, real *z__, integer *ldz, real *work, integer *lwork, integer 
	*iwork, integer *ifail, integer *info);

/* ssyrfs.c */
extern int ssyrfs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *af, integer *ldaf, integer *ipiv, real *b, 
	integer *ldb, real *x, integer *ldx, real *ferr, real *berr, real *
	work, integer *iwork, integer *info);

/* ssyrfsx.c */
extern int ssyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	real *s, real *b, integer *ldb, real *x, integer *ldx, real *rcond, 
	real *berr, integer *n_err_bnds__, real *err_bnds_norm__, real *
	err_bnds_comp__, integer *nparams, real *params, real *work, integer *
	iwork, integer *info);

/* ssysv.c */
extern int ssysv_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, integer *ipiv, real *b, integer *ldb, real *work, 
	integer *lwork, integer *info);

/* ssysvx.c */
extern int ssysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	real *b, integer *ldb, real *x, integer *ldx, real *rcond, real *ferr, 
	 real *berr, real *work, integer *lwork, integer *iwork, integer *
	info);

/* ssysvxx.c */
extern int ssysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, real *a, integer *lda, real *af, integer *ldaf, integer *ipiv, 
	char *equed, real *s, real *b, integer *ldb, real *x, integer *ldx, 
	real *rcond, real *rpvgrw, real *berr, integer *n_err_bnds__, real *
	err_bnds_norm__, real *err_bnds_comp__, integer *nparams, real *
	params, real *work, integer *iwork, integer *info);

/* ssytd2.c */
extern int ssytd2_(char *uplo, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tau, integer *info);

/* ssytf2.c */
extern int ssytf2_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, integer *info);

/* ssytrd.c */
extern int ssytrd_(char *uplo, integer *n, real *a, integer *lda, 
	real *d__, real *e, real *tau, real *work, integer *lwork, integer *
	info);

/* ssytrf.c */
extern int ssytrf_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, real *work, integer *lwork, integer *info);

/* ssytri.c */
extern int ssytri_(char *uplo, integer *n, real *a, integer *lda, 
	integer *ipiv, real *work, integer *info);

/* ssytrs.c */
extern int ssytrs_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, integer *ipiv, real *b, integer *ldb, integer *info);

/* stbcon.c */
extern int stbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, real *ab, integer *ldab, real *rcond, real *work, 
	integer *iwork, integer *info);

/* stbrfs.c */
extern int stbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *b, integer 
	*ldb, real *x, integer *ldx, real *ferr, real *berr, real *work, 
	integer *iwork, integer *info);

/* stbtrs.c */
extern int stbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *b, integer 
	*ldb, integer *info);

/* stfsm.c */
extern int stfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, real *alpha, real *a, real *b, 
	integer *ldb);

/* stftri.c */
extern int stftri_(char *transr, char *uplo, char *diag, integer *n, 
	 real *a, integer *info);

/* stfttp.c */
extern int stfttp_(char *transr, char *uplo, integer *n, real *arf, 
	real *ap, integer *info);

/* stfttr.c */
extern int stfttr_(char *transr, char *uplo, integer *n, real *arf, 
	real *a, integer *lda, integer *info);

/* stgevc.c */
extern int stgevc_(char *side, char *howmny, logical *select, 
	integer *n, real *s, integer *lds, real *p, integer *ldp, real *vl, 
	integer *ldvl, real *vr, integer *ldvr, integer *mm, integer *m, real 
	*work, integer *info);

/* stgex2.c */
extern int stgex2_(logical *wantq, logical *wantz, integer *n, real 
	*a, integer *lda, real *b, integer *ldb, real *q, integer *ldq, real *
	z__, integer *ldz, integer *j1, integer *n1, integer *n2, real *work, 
	integer *lwork, integer *info);

/* stgexc.c */
extern int stgexc_(logical *wantq, logical *wantz, integer *n, real 
	*a, integer *lda, real *b, integer *ldb, real *q, integer *ldq, real *
	z__, integer *ldz, integer *ifst, integer *ilst, real *work, integer *
	lwork, integer *info);

/* stgsen.c */
extern int stgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, real *a, integer *lda, real *b, integer *
	ldb, real *alphar, real *alphai, real *beta, real *q, integer *ldq, 
	real *z__, integer *ldz, integer *m, real *pl, real *pr, real *dif, 
	real *work, integer *lwork, integer *iwork, integer *liwork, integer *
	info);

/* stgsja.c */
extern int stgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, real *a, integer *lda, 
	 real *b, integer *ldb, real *tola, real *tolb, real *alpha, real *
	beta, real *u, integer *ldu, real *v, integer *ldv, real *q, integer *
	ldq, real *work, integer *ncycle, integer *info);

/* stgsna.c */
extern int stgsna_(char *job, char *howmny, logical *select, 
	integer *n, real *a, integer *lda, real *b, integer *ldb, real *vl, 
	integer *ldvl, real *vr, integer *ldvr, real *s, real *dif, integer *
	mm, integer *m, real *work, integer *lwork, integer *iwork, integer *
	info);

/* stgsy2.c */
extern int stgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *c__, integer *
	ldc, real *d__, integer *ldd, real *e, integer *lde, real *f, integer 
	*ldf, real *scale, real *rdsum, real *rdscal, integer *iwork, integer 
	*pq, integer *info);

/* stgsyl.c */
extern int stgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, real *a, integer *lda, real *b, integer *ldb, real *c__, integer *
	ldc, real *d__, integer *ldd, real *e, integer *lde, real *f, integer 
	*ldf, real *scale, real *dif, real *work, integer *lwork, integer *
	iwork, integer *info);

/* stpcon.c */
extern int stpcon_(char *norm, char *uplo, char *diag, integer *n, 
	real *ap, real *rcond, real *work, integer *iwork, integer *info);

/* stprfs.c */
extern int stprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *b, integer *ldb, real *x, integer *ldx, 
	 real *ferr, real *berr, real *work, integer *iwork, integer *info);

/* stptri.c */
extern int stptri_(char *uplo, char *diag, integer *n, real *ap, 
	integer *info);

/* stptrs.c */
extern int stptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *b, integer *ldb, integer *info);

/* stpttf.c */
extern int stpttf_(char *transr, char *uplo, integer *n, real *ap, 
	real *arf, integer *info);

/* stpttr.c */
extern int stpttr_(char *uplo, integer *n, real *ap, real *a, 
	integer *lda, integer *info);

/* strcon.c */
extern int strcon_(char *norm, char *uplo, char *diag, integer *n, 
	real *a, integer *lda, real *rcond, real *work, integer *iwork, 
	integer *info);

/* strevc.c */
extern int strevc_(char *side, char *howmny, logical *select, 
	integer *n, real *t, integer *ldt, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, integer *mm, integer *m, real *work, integer *info);

/* strexc.c */
extern int strexc_(char *compq, integer *n, real *t, integer *ldt, 
	real *q, integer *ldq, integer *ifst, integer *ilst, real *work, 
	integer *info);

/* strrfs.c */
extern int strrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *b, integer *ldb, real *x, 
	integer *ldx, real *ferr, real *berr, real *work, integer *iwork, 
	integer *info);

/* strsen.c */
extern int strsen_(char *job, char *compq, logical *select, integer 
	*n, real *t, integer *ldt, real *q, integer *ldq, real *wr, real *wi, 
	integer *m, real *s, real *sep, real *work, integer *lwork, integer *
	iwork, integer *liwork, integer *info);

/* strsna.c */
extern int strsna_(char *job, char *howmny, logical *select, 
	integer *n, real *t, integer *ldt, real *vl, integer *ldvl, real *vr, 
	integer *ldvr, real *s, real *sep, integer *mm, integer *m, real *
	work, integer *ldwork, integer *iwork, integer *info);

/* strsyl.c */
extern int strsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, real *a, integer *lda, real *b, integer *ldb, real *
	c__, integer *ldc, real *scale, integer *info);

/* strti2.c */
extern int strti2_(char *uplo, char *diag, integer *n, real *a, 
	integer *lda, integer *info);

/* strtri.c */
extern int strtri_(char *uplo, char *diag, integer *n, real *a, 
	integer *lda, integer *info);

/* strtrs.c */
extern int strtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *b, integer *ldb, integer *
	info);

/* strttf.c */
extern int strttf_(char *transr, char *uplo, integer *n, real *a, 
	integer *lda, real *arf, integer *info);

/* strttp.c */
extern int strttp_(char *uplo, integer *n, real *a, integer *lda, 
	real *ap, integer *info);

/* stzrqf.c */
extern int stzrqf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, integer *info);

/* stzrzf.c */
extern int stzrzf_(integer *m, integer *n, real *a, integer *lda, 
	real *tau, real *work, integer *lwork, integer *info);

/* zbdsqr.c */
extern int zbdsqr_(char *uplo, integer *n, integer *ncvt, integer *
	nru, integer *ncc, doublereal *d__, doublereal *e, doublecomplex *vt, 
	integer *ldvt, doublecomplex *u, integer *ldu, doublecomplex *c__, 
	integer *ldc, doublereal *rwork, integer *info);

/* zcgesv.c */
extern int zcgesv_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *work, complex *swork, 
	doublereal *rwork, integer *iter, integer *info);

/* zcposv.c */
extern int zcposv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *work, complex *swork, 
	doublereal *rwork, integer *iter, integer *info);

/* zdrscl.c */
extern int zdrscl_(integer *n, doublereal *sa, doublecomplex *sx, 
	integer *incx);

/* zgbbrd.c */
extern int zgbbrd_(char *vect, integer *m, integer *n, integer *ncc, 
	 integer *kl, integer *ku, doublecomplex *ab, integer *ldab, 
	doublereal *d__, doublereal *e, doublecomplex *q, integer *ldq, 
	doublecomplex *pt, integer *ldpt, doublecomplex *c__, integer *ldc, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgbcon.c */
extern int zgbcon_(char *norm, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, integer *ipiv, doublereal *anorm, 
	doublereal *rcond, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zgbequ.c */
extern int zgbequ_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, integer *
	info);

/* zgbequb.c */
extern int zgbequb_(integer *m, integer *n, integer *kl, integer *
	ku, doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *
	c__, doublereal *rowcnd, doublereal *colcnd, doublereal *amax, 
	integer *info);

/* zgbrfs.c */
extern int zgbrfs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *
	afb, integer *ldafb, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgbrfsx.c */
extern int zgbrfsx_(char *trans, char *equed, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, doublereal *r__, 
	doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *rcond, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgbsv.c */
extern int zgbsv_(integer *n, integer *kl, integer *ku, integer *
	nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, doublecomplex *
	b, integer *ldb, integer *info);

/* zgbsvx.c */
extern int zgbsvx_(char *fact, char *trans, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zgbsvxx.c */
extern int zgbsvxx_(char *fact, char *trans, integer *n, integer *
	kl, integer *ku, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *afb, integer *ldafb, integer *ipiv, char *equed, 
	doublereal *r__, doublereal *c__, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, 
	 doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	 doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgbtf2.c */
extern int zgbtf2_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);

/* zgbtrf.c */
extern int zgbtrf_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, integer *ipiv, integer *info);

/* zgbtrs.c */
extern int zgbtrs_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);

/* zgebak.c */
extern int zgebak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *scale, integer *m, doublecomplex *v, 
	integer *ldv, integer *info);

/* zgebal.c */
extern int zgebal_(char *job, integer *n, doublecomplex *a, integer 
	*lda, integer *ilo, integer *ihi, doublereal *scale, integer *info);

/* zgebd2.c */
extern int zgebd2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *info);

/* zgebrd.c */
extern int zgebrd_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tauq, 
	doublecomplex *taup, doublecomplex *work, integer *lwork, integer *
	info);

/* zgecon.c */
extern int zgecon_(char *norm, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgeequ.c */
extern int zgeequ_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, integer *info);

/* zgeequb.c */
extern int zgeequb_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, integer *info);

/* zgees.c */
extern int zgees_(char *jobvs, char *sort, L_fp select, integer *n, 
	doublecomplex *a, integer *lda, integer *sdim, doublecomplex *w, 
	doublecomplex *vs, integer *ldvs, doublecomplex *work, integer *lwork, 
	 doublereal *rwork, logical *bwork, integer *info);

/* zgeesx.c */
extern int zgeesx_(char *jobvs, char *sort, L_fp select, char *
	sense, integer *n, doublecomplex *a, integer *lda, integer *sdim, 
	doublecomplex *w, doublecomplex *vs, integer *ldvs, doublereal *
	rconde, doublereal *rcondv, doublecomplex *work, integer *lwork, 
	doublereal *rwork, logical *bwork, integer *info);

/* zgeev.c */
extern int zgeev_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *w, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgeevx.c */
extern int zgeevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *w, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *scale, doublereal *abnrm, 
	doublereal *rconde, doublereal *rcondv, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *info);

/* zgegs.c */
extern int zgegs_(char *jobvsl, char *jobvsr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vsl, 
	integer *ldvsl, doublecomplex *vsr, integer *ldvsr, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *info);

/* zgegv.c */
extern int zgegv_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);

/* zgehd2.c */
extern int zgehd2_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zgehrd.c */
extern int zgehrd_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zgelq2.c */
extern int zgelq2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgelqf.c */
extern int zgelqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgels.c */
extern int zgels_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *work, integer *lwork, integer *info);

/* zgelsd.c */
extern int zgelsd_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *s, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *iwork, integer *info);

/* zgelss.c */
extern int zgelss_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *s, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgelsx.c */
extern int zgelsx_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	doublereal *rwork, integer *info);

/* zgelsy.c */
extern int zgelsy_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *jpvt, doublereal *rcond, integer *rank, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgeql2.c */
extern int zgeql2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgeqlf.c */
extern int zgeqlf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgeqp3.c */
extern int zgeqp3_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgeqpf.c */
extern int zgeqpf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *jpvt, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *info);

/* zgeqr2.c */
extern int zgeqr2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgeqrf.c */
extern int zgeqrf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgerfs.c */
extern int zgerfs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work, 
	 doublereal *rwork, integer *info);

/* zgerfsx.c */
extern int zgerfsx_(char *trans, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublereal *r__, doublereal *c__, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *rcond, 
	doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgerq2.c */
extern int zgerq2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgerqf.c */
extern int zgerqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zgesc2.c */
extern int zgesc2_(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *rhs, integer *ipiv, integer *jpiv, doublereal *scale);

/* zgesdd.c */
extern int zgesdd_(char *jobz, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublereal *s, doublecomplex *u, 
	integer *ldu, doublecomplex *vt, integer *ldvt, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *iwork, integer *info);

/* zgesv.c */
extern int zgesv_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *b, integer *ldb, integer *
	info);

/* zgesvd.c */
extern int zgesvd_(char *jobu, char *jobvt, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublereal *s, doublecomplex *u, 
	integer *ldu, doublecomplex *vt, integer *ldvt, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *info);

/* zgesvx.c */
extern int zgesvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgesvxx.c */
extern int zgesvxx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *r__, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *rpvgrw, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zgetc2.c */
extern int zgetc2_(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, integer *jpiv, integer *info);

/* zgetf2.c */
extern int zgetf2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zgetrf.c */
extern int zgetrf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zgetri.c */
extern int zgetri_(integer *n, doublecomplex *a, integer *lda, 
	integer *ipiv, doublecomplex *work, integer *lwork, integer *info);

/* zgetrs.c */
extern int zgetrs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* zggbak.c */
extern int zggbak_(char *job, char *side, integer *n, integer *ilo, 
	integer *ihi, doublereal *lscale, doublereal *rscale, integer *m, 
	doublecomplex *v, integer *ldv, integer *info);

/* zggbal.c */
extern int zggbal_(char *job, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *b, integer *ldb, integer *ilo, integer *ihi, 
	doublereal *lscale, doublereal *rscale, doublereal *work, integer *
	info);

/* zgges.c */
extern int zgges_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *sdim, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *vsl, integer *ldvsl, doublecomplex *vsr, integer 
	*ldvsr, doublecomplex *work, integer *lwork, doublereal *rwork, 
	logical *bwork, integer *info);

/* zggesx.c */
extern int zggesx_(char *jobvsl, char *jobvsr, char *sort, L_fp 
	selctg, char *sense, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, integer *sdim, doublecomplex *alpha, 
	doublecomplex *beta, doublecomplex *vsl, integer *ldvsl, 
	doublecomplex *vsr, integer *ldvsr, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, integer *liwork, logical *bwork, integer *info);

/* zggev.c */
extern int zggev_(char *jobvl, char *jobvr, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer 
	*ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer 
	*lwork, doublereal *rwork, integer *info);

/* zggevx.c */
extern int zggevx_(char *balanc, char *jobvl, char *jobvr, char *
	sense, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	integer *ilo, integer *ihi, doublereal *lscale, doublereal *rscale, 
	doublereal *abnrm, doublereal *bbnrm, doublereal *rconde, doublereal *
	rcondv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *iwork, logical *bwork, integer *info);

/* zggglm.c */
extern int zggglm_(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *d__, doublecomplex *x, doublecomplex *y, doublecomplex 
	*work, integer *lwork, integer *info);

/* zgghrd.c */
extern int zgghrd_(char *compq, char *compz, integer *n, integer *
	ilo, integer *ihi, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	integer *ldz, integer *info);

/* zgglse.c */
extern int zgglse_(integer *m, integer *n, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, doublecomplex *d__, doublecomplex *x, 
	doublecomplex *work, integer *lwork, integer *info);

/* zggqrf.c */
extern int zggqrf_(integer *n, integer *m, integer *p, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b, 
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);

/* zggrqf.c */
extern int zggrqf_(integer *m, integer *p, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *taua, doublecomplex *b, 
	 integer *ldb, doublecomplex *taub, doublecomplex *work, integer *
	lwork, integer *info);

/* zggsvd.c */
extern int zggsvd_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *n, integer *p, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *alpha, 
	doublereal *beta, doublecomplex *u, integer *ldu, doublecomplex *v, 
	integer *ldv, doublecomplex *q, integer *ldq, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *info);

/* zggsvp.c */
extern int zggsvp_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, doublecomplex *a, integer *lda, doublecomplex 
	*b, integer *ldb, doublereal *tola, doublereal *tolb, integer *k, 
	integer *l, doublecomplex *u, integer *ldu, doublecomplex *v, integer 
	*ldv, doublecomplex *q, integer *ldq, integer *iwork, doublereal *
	rwork, doublecomplex *tau, doublecomplex *work, integer *info);

/* zgtcon.c */
extern int zgtcon_(char *norm, integer *n, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *du2, integer *
	ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *work, 
	integer *info);

/* zgtrfs.c */
extern int zgtrfs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zgtsv.c */
extern int zgtsv_(integer *n, integer *nrhs, doublecomplex *dl, 
	doublecomplex *d__, doublecomplex *du, doublecomplex *b, integer *ldb, 
	 integer *info);

/* zgtsvx.c */
extern int zgtsvx_(char *fact, char *trans, integer *n, integer *
	nrhs, doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *dlf, doublecomplex *df, doublecomplex *duf, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zgttrf.c */
extern int zgttrf_(integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du, doublecomplex *du2, integer *ipiv, integer *
	info);

/* zgttrs.c */
extern int zgttrs_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zgtts2.c */
extern int zgtts2_(integer *itrans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *du2, integer *ipiv, doublecomplex *b, integer *ldb);

/* zhbev.c */
extern int zhbev_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, doublereal *rwork, integer *info);

/* zhbevd.c */
extern int zhbevd_(char *jobz, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *w, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, integer *info);

/* zhbevx.c */
extern int zhbevx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublecomplex *q, 
	integer *ldq, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__, 
	 integer *ldz, doublecomplex *work, doublereal *rwork, integer *iwork, 
	 integer *ifail, integer *info);

/* zhbgst.c */
extern int zhbgst_(char *vect, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublecomplex *x, integer *ldx, doublecomplex *work, 
	doublereal *rwork, integer *info);

/* zhbgv.c */
extern int zhbgv_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zhbgvd.c */
extern int zhbgvd_(char *jobz, char *uplo, integer *n, integer *ka, 
	integer *kb, doublecomplex *ab, integer *ldab, doublecomplex *bb, 
	integer *ldbb, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);

/* zhbgvx.c */
extern int zhbgvx_(char *jobz, char *range, char *uplo, integer *n, 
	integer *ka, integer *kb, doublecomplex *ab, integer *ldab, 
	doublecomplex *bb, integer *ldbb, doublecomplex *q, integer *ldq, 
	doublereal *vl, doublereal *vu, integer *il, integer *iu, doublereal *
	abstol, integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);

/* zhbtrd.c */
extern int zhbtrd_(char *vect, char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *d__, doublereal *e, 
	doublecomplex *q, integer *ldq, doublecomplex *work, integer *info);

/* zhecon.c */
extern int zhecon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);

/* zheequb.c */
extern int zheequb_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	doublecomplex *work, integer *info);

/* zheev.c */
extern int zheev_(char *jobz, char *uplo, integer *n, doublecomplex 
	*a, integer *lda, doublereal *w, doublecomplex *work, integer *lwork, 
	doublereal *rwork, integer *info);

/* zheevd.c */
extern int zheevd_(char *jobz, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *w, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);

/* zheevr.c */
extern int zheevr_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, integer *isuppz, doublecomplex *
	work, integer *lwork, doublereal *rwork, integer *lrwork, integer *
	iwork, integer *liwork, integer *info);

/* zheevx.c */
extern int zheevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublereal *vl, doublereal *vu, 
	integer *il, integer *iu, doublereal *abstol, integer *m, doublereal *
	w, doublecomplex *z__, integer *ldz, doublecomplex *work, integer *
	lwork, doublereal *rwork, integer *iwork, integer *ifail, integer *
	info);

/* zhegs2.c */
extern int zhegs2_(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhegst.c */
extern int zhegst_(integer *itype, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhegv.c */
extern int zhegv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *info);

/* zhegvd.c */
extern int zhegvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *w, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *lrwork, integer *iwork, integer *liwork, integer *info);

/* zhegvx.c */
extern int zhegvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublereal *vl, doublereal *vu, integer *il, integer *
	iu, doublereal *abstol, integer *m, doublereal *w, doublecomplex *z__, 
	 integer *ldz, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *iwork, integer *ifail, integer *info);

/* zherfs.c */
extern int zherfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work, 
	 doublereal *rwork, integer *info);

/* zherfsx.c */
extern int zherfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *berr, 
	integer *n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zhesv.c */
extern int zhesv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zhesvx.c */
extern int zhesvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);

/* zhesvxx.c */
extern int zhesvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *s, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *rcond, 
	doublereal *rpvgrw, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublecomplex *work, doublereal *rwork, 
	integer *info);

/* zhetd2.c */
extern int zhetd2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tau, 
	integer *info);

/* zhetf2.c */
extern int zhetf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zhetrd.c */
extern int zhetrd_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *d__, doublereal *e, doublecomplex *tau, 
	doublecomplex *work, integer *lwork, integer *info);

/* zhetrf.c */
extern int zhetrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);

/* zhetri.c */
extern int zhetri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);

/* zhetrs.c */
extern int zhetrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* zhfrk.c */
extern int zhfrk_(char *transr, char *uplo, char *trans, integer *n, 
	 integer *k, doublereal *alpha, doublecomplex *a, integer *lda, 
	doublereal *beta, doublecomplex *c__);

/* zhgeqz.c */
extern int zhgeqz_(char *job, char *compq, char *compz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *t, integer *ldt, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	info);

/* zhpcon.c */
extern int zhpcon_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);

/* zhpev.c */
extern int zhpev_(char *jobz, char *uplo, integer *n, doublecomplex 
	*ap, doublereal *w, doublecomplex *z__, integer *ldz, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zhpevd.c */
extern int zhpevd_(char *jobz, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, integer *info);

/* zhpevx.c */
extern int zhpevx_(char *jobz, char *range, char *uplo, integer *n, 
	doublecomplex *ap, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *ifail, integer *info);

/* zhpgst.c */
extern int zhpgst_(integer *itype, char *uplo, integer *n, 
	doublecomplex *ap, doublecomplex *bp, integer *info);

/* zhpgv.c */
extern int zhpgv_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zhpgvd.c */
extern int zhpgvd_(integer *itype, char *jobz, char *uplo, integer *
	n, doublecomplex *ap, doublecomplex *bp, doublereal *w, doublecomplex 
	*z__, integer *ldz, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, integer *
	info);

/* zhpgvx.c */
extern int zhpgvx_(integer *itype, char *jobz, char *range, char *
	uplo, integer *n, doublecomplex *ap, doublecomplex *bp, doublereal *
	vl, doublereal *vu, integer *il, integer *iu, doublereal *abstol, 
	integer *m, doublereal *w, doublecomplex *z__, integer *ldz, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *
	ifail, integer *info);

/* zhprfs.c */
extern int zhprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zhpsv.c */
extern int zhpsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhpsvx.c */
extern int zhpsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zhptrd.c */
extern int zhptrd_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *d__, doublereal *e, doublecomplex *tau, integer *info);

/* zhptrf.c */
extern int zhptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);

/* zhptri.c */
extern int zhptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);

/* zhptrs.c */
extern int zhptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zhsein.c */
extern int zhsein_(char *side, char *eigsrc, char *initv, logical *
	select, integer *n, doublecomplex *h__, integer *ldh, doublecomplex *
	w, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, 
	 integer *mm, integer *m, doublecomplex *work, doublereal *rwork, 
	integer *ifaill, integer *ifailr, integer *info);

/* zhseqr.c */
extern int zhseqr_(char *job, char *compz, integer *n, integer *ilo, 
	 integer *ihi, doublecomplex *h__, integer *ldh, doublecomplex *w, 
	doublecomplex *z__, integer *ldz, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zla_gbamv.c */
extern int zla_gbamv__(integer *trans, integer *m, integer *n, 
	integer *kl, integer *ku, doublereal *alpha, doublecomplex *ab, 
	integer *ldab, doublecomplex *x, integer *incx, doublereal *beta, 
	doublereal *y, integer *incy);

/* zla_gbrcond_c.c */
extern doublereal zla_gbrcond_c__(char *trans, integer *n, integer *kl, integer *ku, 
	doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *ldafb, 
	integer *ipiv, doublereal *c__, logical *capply, integer *info, 
	doublecomplex *work, doublereal *rwork, ftnlen trans_len);

/* zla_gbrcond_x.c */
extern doublereal zla_gbrcond_x__(char *trans, integer *n, integer *kl, integer *ku, 
	doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *ldafb, 
	integer *ipiv, doublecomplex *x, integer *info, doublecomplex *work, 
	doublereal *rwork, ftnlen trans_len);

/* zla_gbrfsx_extended.c */
extern int zla_gbrfsx_extended__(integer *prec_type__, integer *
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
extern doublereal zla_gbrpvgrw__(integer *n, integer *kl, integer *ku, integer *
	ncols, doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *
	ldafb);

/* zla_geamv.c */
extern int zla_geamv__(integer *trans, integer *m, integer *n, 
	doublereal *alpha, doublecomplex *a, integer *lda, doublecomplex *x, 
	integer *incx, doublereal *beta, doublereal *y, integer *incy);

/* zla_gercond_c.c */
extern doublereal zla_gercond_c__(char *trans, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublereal *
	c__, logical *capply, integer *info, doublecomplex *work, doublereal *
	rwork, ftnlen trans_len);

/* zla_gercond_x.c */
extern doublereal zla_gercond_x__(char *trans, integer *n, doublecomplex *a, integer 
	*lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublecomplex *
	x, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	trans_len);

/* zla_gerfsx_extended.c */
extern int zla_gerfsx_extended__(integer *prec_type__, integer *
	trans_type__, integer *n, integer *nrhs, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, logical *colequ,
	 doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *y, 
	integer *ldy, doublereal *berr_out__, integer *n_norms__, doublereal *
	errs_n__, doublereal *errs_c__, doublecomplex *res, doublereal *ayb, 
	doublecomplex *dy, doublecomplex *y_tail__, doublereal *rcond, 
	integer *ithresh, doublereal *rthresh, doublereal *dz_ub__, logical *
	ignore_cwise__, integer *info);

/* zla_heamv.c */
extern int zla_heamv__(integer *uplo, integer *n, doublereal *alpha,
	 doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* zla_hercond_c.c */
extern doublereal zla_hercond_c__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublereal *c__,
	 logical *capply, integer *info, doublecomplex *work, doublereal *
	rwork, ftnlen uplo_len);

/* zla_hercond_x.c */
extern doublereal zla_hercond_x__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublecomplex *
	x, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	uplo_len);

/* zla_herfsx_extended.c */
extern int zla_herfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *af, integer *ldaf, integer *ipiv, logical *colequ, 
	doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *y, 
	integer *ldy, doublereal *berr_out__, integer *n_norms__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, doublecomplex *res, 
	doublereal *ayb, doublecomplex *dy, doublecomplex *y_tail__, 
	doublereal *rcond, integer *ithresh, doublereal *rthresh, doublereal *
	dz_ub__, logical *ignore_cwise__, integer *info, ftnlen uplo_len);

/* zla_herpvgrw.c */
extern doublereal zla_herpvgrw__(char *uplo, integer *n, integer *info, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublereal *work, ftnlen uplo_len);

/* zla_lin_berr.c */
extern int zla_lin_berr__(integer *n, integer *nz, integer *nrhs, 
	doublecomplex *res, doublereal *ayb, doublereal *berr);

/* zla_porcond_c.c */
extern doublereal zla_porcond_c__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, doublereal *c__, logical *
	capply, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	uplo_len);

/* zla_porcond_x.c */
extern doublereal zla_porcond_x__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, doublecomplex *x, integer *
	info, doublecomplex *work, doublereal *rwork, ftnlen uplo_len);

/* zla_porfsx_extended.c */
extern int zla_porfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *af, integer *ldaf, logical *colequ, doublereal *c__, 
	doublecomplex *b, integer *ldb, doublecomplex *y, integer *ldy, 
	doublereal *berr_out__, integer *n_norms__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, doublecomplex *res, 
	doublereal *ayb, doublecomplex *dy, doublecomplex *y_tail__, 
	doublereal *rcond, integer *ithresh, doublereal *rthresh, doublereal *
	dz_ub__, logical *ignore_cwise__, integer *info, ftnlen uplo_len);

/* zla_porpvgrw.c */
extern doublereal zla_porpvgrw__(char *uplo, integer *ncols, doublecomplex *a, 
	integer *lda, doublecomplex *af, integer *ldaf, doublereal *work, 
	ftnlen uplo_len);

/* zla_rpvgrw.c */
extern doublereal zla_rpvgrw__(integer *n, integer *ncols, doublecomplex *a, integer 
	*lda, doublecomplex *af, integer *ldaf);

/* zla_syamv.c */
extern int zla_syamv__(integer *uplo, integer *n, doublereal *alpha,
	 doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy);

/* zla_syrcond_c.c */
extern doublereal zla_syrcond_c__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublereal *c__,
	 logical *capply, integer *info, doublecomplex *work, doublereal *
	rwork, ftnlen uplo_len);

/* zla_syrcond_x.c */
extern doublereal zla_syrcond_x__(char *uplo, integer *n, doublecomplex *a, integer *
	lda, doublecomplex *af, integer *ldaf, integer *ipiv, doublecomplex *
	x, integer *info, doublecomplex *work, doublereal *rwork, ftnlen 
	uplo_len);

/* zla_syrfsx_extended.c */
extern int zla_syrfsx_extended__(integer *prec_type__, char *uplo, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *af, integer *ldaf, integer *ipiv, logical *colequ, 
	doublereal *c__, doublecomplex *b, integer *ldb, doublecomplex *y, 
	integer *ldy, doublereal *berr_out__, integer *n_norms__, doublereal *
	err_bnds_norm__, doublereal *err_bnds_comp__, doublecomplex *res, 
	doublereal *ayb, doublecomplex *dy, doublecomplex *y_tail__, 
	doublereal *rcond, integer *ithresh, doublereal *rthresh, doublereal *
	dz_ub__, logical *ignore_cwise__, integer *info, ftnlen uplo_len);

/* zla_syrpvgrw.c */
extern doublereal zla_syrpvgrw__(char *uplo, integer *n, integer *info, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublereal *work, ftnlen uplo_len);

/* zla_wwaddw.c */
extern int zla_wwaddw__(integer *n, doublecomplex *x, doublecomplex 
	*y, doublecomplex *w);

/* zlabrd.c */
extern int zlabrd_(integer *m, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	doublecomplex *tauq, doublecomplex *taup, doublecomplex *x, integer *
	ldx, doublecomplex *y, integer *ldy);

/* zlacgv.c */
extern int zlacgv_(integer *n, doublecomplex *x, integer *incx);

/* zlacn2.c */
extern int zlacn2_(integer *n, doublecomplex *v, doublecomplex *x, 
	doublereal *est, integer *kase, integer *isave);

/* zlacon.c */
extern int zlacon_(integer *n, doublecomplex *v, doublecomplex *x, 
	doublereal *est, integer *kase);

/* zlacp2.c */
extern int zlacp2_(char *uplo, integer *m, integer *n, doublereal *
	a, integer *lda, doublecomplex *b, integer *ldb);

/* zlacpy.c */
extern int zlacpy_(char *uplo, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb);

/* zlacrm.c */
extern int zlacrm_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *b, integer *ldb, doublecomplex *c__, 
	integer *ldc, doublereal *rwork);

/* zlacrt.c */
extern int zlacrt_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublecomplex *c__, doublecomplex *
	s);

/* zladiv.c */
extern void zladiv_(doublecomplex * ret_val, doublecomplex *x, 
	doublecomplex *y);

/* zlaed0.c */
extern int zlaed0_(integer *qsiz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *q, integer *ldq, doublecomplex *qstore, 
	integer *ldqs, doublereal *rwork, integer *iwork, integer *info);

/* zlaed7.c */
extern int zlaed7_(integer *n, integer *cutpnt, integer *qsiz, 
	integer *tlvls, integer *curlvl, integer *curpbm, doublereal *d__, 
	doublecomplex *q, integer *ldq, doublereal *rho, integer *indxq, 
	doublereal *qstore, integer *qptr, integer *prmptr, integer *perm, 
	integer *givptr, integer *givcol, doublereal *givnum, doublecomplex *
	work, doublereal *rwork, integer *iwork, integer *info);

/* zlaed8.c */
extern int zlaed8_(integer *k, integer *n, integer *qsiz, 
	doublecomplex *q, integer *ldq, doublereal *d__, doublereal *rho, 
	integer *cutpnt, doublereal *z__, doublereal *dlamda, doublecomplex *
	q2, integer *ldq2, doublereal *w, integer *indxp, integer *indx, 
	integer *indxq, integer *perm, integer *givptr, integer *givcol, 
	doublereal *givnum, integer *info);

/* zlaein.c */
extern int zlaein_(logical *rightv, logical *noinit, integer *n, 
	doublecomplex *h__, integer *ldh, doublecomplex *w, doublecomplex *v, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *eps3, 
	doublereal *smlnum, integer *info);

/* zlaesy.c */
extern int zlaesy_(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublecomplex *rt1, doublecomplex *rt2, 
	doublecomplex *evscal, doublecomplex *cs1, doublecomplex *sn1);

/* zlaev2.c */
extern int zlaev2_(doublecomplex *a, doublecomplex *b, 
	doublecomplex *c__, doublereal *rt1, doublereal *rt2, doublereal *cs1, 
	 doublecomplex *sn1);

/* zlag2c.c */
extern int zlag2c_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, complex *sa, integer *ldsa, integer *info);

/* zlags2.c */
extern int zlags2_(logical *upper, doublereal *a1, doublecomplex *
	a2, doublereal *a3, doublereal *b1, doublecomplex *b2, doublereal *b3, 
	 doublereal *csu, doublecomplex *snu, doublereal *csv, doublecomplex *
	snv, doublereal *csq, doublecomplex *snq);

/* zlagtm.c */
extern int zlagtm_(char *trans, integer *n, integer *nrhs, 
	doublereal *alpha, doublecomplex *dl, doublecomplex *d__, 
	doublecomplex *du, doublecomplex *x, integer *ldx, doublereal *beta, 
	doublecomplex *b, integer *ldb);

/* zlahef.c */
extern int zlahef_(char *uplo, integer *n, integer *nb, integer *kb, 
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);

/* zlahqr.c */
extern int zlahqr_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *info);

/* zlahr2.c */
extern int zlahr2_(integer *n, integer *k, integer *nb, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *t, 
	integer *ldt, doublecomplex *y, integer *ldy);

/* zlahrd.c */
extern int zlahrd_(integer *n, integer *k, integer *nb, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *t, 
	integer *ldt, doublecomplex *y, integer *ldy);

/* zlaic1.c */
extern int zlaic1_(integer *job, integer *j, doublecomplex *x, 
	doublereal *sest, doublecomplex *w, doublecomplex *gamma, doublereal *
	sestpr, doublecomplex *s, doublecomplex *c__);

/* zlals0.c */
extern int zlals0_(integer *icompq, integer *nl, integer *nr, 
	integer *sqre, integer *nrhs, doublecomplex *b, integer *ldb, 
	doublecomplex *bx, integer *ldbx, integer *perm, integer *givptr, 
	integer *givcol, integer *ldgcol, doublereal *givnum, integer *ldgnum, 
	 doublereal *poles, doublereal *difl, doublereal *difr, doublereal *
	z__, integer *k, doublereal *c__, doublereal *s, doublereal *rwork, 
	integer *info);

/* zlalsa.c */
extern int zlalsa_(integer *icompq, integer *smlsiz, integer *n, 
	integer *nrhs, doublecomplex *b, integer *ldb, doublecomplex *bx, 
	integer *ldbx, doublereal *u, integer *ldu, doublereal *vt, integer *
	k, doublereal *difl, doublereal *difr, doublereal *z__, doublereal *
	poles, integer *givptr, integer *givcol, integer *ldgcol, integer *
	perm, doublereal *givnum, doublereal *c__, doublereal *s, doublereal *
	rwork, integer *iwork, integer *info);

/* zlalsd.c */
extern int zlalsd_(char *uplo, integer *smlsiz, integer *n, integer 
	*nrhs, doublereal *d__, doublereal *e, doublecomplex *b, integer *ldb, 
	 doublereal *rcond, integer *rank, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *info);

/* zlangb.c */
extern doublereal zlangb_(char *norm, integer *n, integer *kl, integer *ku, 
	doublecomplex *ab, integer *ldab, doublereal *work);

/* zlange.c */
extern doublereal zlange_(char *norm, integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *work);

/* zlangt.c */
extern doublereal zlangt_(char *norm, integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du);

/* zlanhb.c */
extern doublereal zlanhb_(char *norm, char *uplo, integer *n, integer *k, 
	doublecomplex *ab, integer *ldab, doublereal *work);

/* zlanhe.c */
extern doublereal zlanhe_(char *norm, char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *work);

/* zlanhf.c */
extern doublereal zlanhf_(char *norm, char *transr, char *uplo, integer *n, 
	doublecomplex *a, doublereal *work);

/* zlanhp.c */
extern doublereal zlanhp_(char *norm, char *uplo, integer *n, doublecomplex *ap, 
	doublereal *work);

/* zlanhs.c */
extern doublereal zlanhs_(char *norm, integer *n, doublecomplex *a, integer *lda, 
	doublereal *work);

/* zlanht.c */
extern doublereal zlanht_(char *norm, integer *n, doublereal *d__, doublecomplex *e);

/* zlansb.c */
extern doublereal zlansb_(char *norm, char *uplo, integer *n, integer *k, 
	doublecomplex *ab, integer *ldab, doublereal *work);

/* zlansp.c */
extern doublereal zlansp_(char *norm, char *uplo, integer *n, doublecomplex *ap, 
	doublereal *work);

/* zlansy.c */
extern doublereal zlansy_(char *norm, char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *work);

/* zlantb.c */
extern doublereal zlantb_(char *norm, char *uplo, char *diag, integer *n, integer *k, 
	 doublecomplex *ab, integer *ldab, doublereal *work);

/* zlantp.c */
extern doublereal zlantp_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublereal *work);

/* zlantr.c */
extern doublereal zlantr_(char *norm, char *uplo, char *diag, integer *m, integer *n, 
	 doublecomplex *a, integer *lda, doublereal *work);

/* zlapll.c */
extern int zlapll_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *ssmin);

/* zlapmt.c */
extern int zlapmt_(logical *forwrd, integer *m, integer *n, 
	doublecomplex *x, integer *ldx, integer *k);

/* zlaqgb.c */
extern int zlaqgb_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *ab, integer *ldab, doublereal *r__, doublereal *c__, 
	doublereal *rowcnd, doublereal *colcnd, doublereal *amax, char *equed);

/* zlaqge.c */
extern int zlaqge_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublereal *r__, doublereal *c__, doublereal *rowcnd, 
	doublereal *colcnd, doublereal *amax, char *equed);

/* zlaqhb.c */
extern int zlaqhb_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);

/* zlaqhe.c */
extern int zlaqhe_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);

/* zlaqhp.c */
extern int zlaqhp_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* zlaqp2.c */
extern int zlaqp2_(integer *m, integer *n, integer *offset, 
	doublecomplex *a, integer *lda, integer *jpvt, doublecomplex *tau, 
	doublereal *vn1, doublereal *vn2, doublecomplex *work);

/* zlaqps.c */
extern int zlaqps_(integer *m, integer *n, integer *offset, integer 
	*nb, integer *kb, doublecomplex *a, integer *lda, integer *jpvt, 
	doublecomplex *tau, doublereal *vn1, doublereal *vn2, doublecomplex *
	auxv, doublecomplex *f, integer *ldf);

/* zlaqr0.c */
extern int zlaqr0_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, integer *info);

/* zlaqr1.c */
extern int zlaqr1_(integer *n, doublecomplex *h__, integer *ldh, 
	doublecomplex *s1, doublecomplex *s2, doublecomplex *v);

/* zlaqr2.c */
extern int zlaqr2_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublecomplex *h__, 
	integer *ldh, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *ns, integer *nd, doublecomplex *sh, 
	doublecomplex *v, integer *ldv, integer *nh, doublecomplex *t, 
	integer *ldt, integer *nv, doublecomplex *wv, integer *ldwv, 
	doublecomplex *work, integer *lwork);

/* zlaqr3.c */
extern int zlaqr3_(logical *wantt, logical *wantz, integer *n, 
	integer *ktop, integer *kbot, integer *nw, doublecomplex *h__, 
	integer *ldh, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, integer *ns, integer *nd, doublecomplex *sh, 
	doublecomplex *v, integer *ldv, integer *nh, doublecomplex *t, 
	integer *ldt, integer *nv, doublecomplex *wv, integer *ldwv, 
	doublecomplex *work, integer *lwork);

/* zlaqr4.c */
extern int zlaqr4_(logical *wantt, logical *wantz, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *h__, integer *ldh, 
	doublecomplex *w, integer *iloz, integer *ihiz, doublecomplex *z__, 
	integer *ldz, doublecomplex *work, integer *lwork, integer *info);

/* zlaqr5.c */
extern int zlaqr5_(logical *wantt, logical *wantz, integer *kacc22, 
	integer *n, integer *ktop, integer *kbot, integer *nshfts, 
	doublecomplex *s, doublecomplex *h__, integer *ldh, integer *iloz, 
	integer *ihiz, doublecomplex *z__, integer *ldz, doublecomplex *v, 
	integer *ldv, doublecomplex *u, integer *ldu, integer *nv, 
	doublecomplex *wv, integer *ldwv, integer *nh, doublecomplex *wh, 
	integer *ldwh);

/* zlaqsb.c */
extern int zlaqsb_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, char *equed);

/* zlaqsp.c */
extern int zlaqsp_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, char *equed);

/* zlaqsy.c */
extern int zlaqsy_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	char *equed);

/* zlar1v.c */
extern int zlar1v_(integer *n, integer *b1, integer *bn, doublereal 
	*lambda, doublereal *d__, doublereal *l, doublereal *ld, doublereal *
	lld, doublereal *pivmin, doublereal *gaptol, doublecomplex *z__, 
	logical *wantnc, integer *negcnt, doublereal *ztz, doublereal *mingma, 
	 integer *r__, integer *isuppz, doublereal *nrminv, doublereal *resid, 
	 doublereal *rqcorr, doublereal *work);

/* zlar2v.c */
extern int zlar2v_(integer *n, doublecomplex *x, doublecomplex *y, 
	doublecomplex *z__, integer *incx, doublereal *c__, doublecomplex *s, 
	integer *incc);

/* zlarcm.c */
extern int zlarcm_(integer *m, integer *n, doublereal *a, integer *
	lda, doublecomplex *b, integer *ldb, doublecomplex *c__, integer *ldc, 
	 doublereal *rwork);

/* zlarf.c */
extern int zlarf_(char *side, integer *m, integer *n, doublecomplex 
	*v, integer *incv, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);

/* zlarfb.c */
extern int zlarfb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, doublecomplex *v, integer 
	*ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, integer *
	ldc, doublecomplex *work, integer *ldwork);

/* zlarfg.c */
extern int zlarfg_(integer *n, doublecomplex *alpha, doublecomplex *
	x, integer *incx, doublecomplex *tau);

/* zlarfp.c */
extern int zlarfp_(integer *n, doublecomplex *alpha, doublecomplex *
	x, integer *incx, doublecomplex *tau);

/* zlarft.c */
extern int zlarft_(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);

/* zlarfx.c */
extern int zlarfx_(char *side, integer *m, integer *n, 
	doublecomplex *v, doublecomplex *tau, doublecomplex *c__, integer *
	ldc, doublecomplex *work);

/* zlargv.c */
extern int zlargv_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, integer *incc);

/* zlarnv.c */
extern int zlarnv_(integer *idist, integer *iseed, integer *n, 
	doublecomplex *x);

/* zlarrv.c */
extern int zlarrv_(integer *n, doublereal *vl, doublereal *vu, 
	doublereal *d__, doublereal *l, doublereal *pivmin, integer *isplit, 
	integer *m, integer *dol, integer *dou, doublereal *minrgp, 
	doublereal *rtol1, doublereal *rtol2, doublereal *w, doublereal *werr, 
	 doublereal *wgap, integer *iblock, integer *indexw, doublereal *gers, 
	 doublecomplex *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *iwork, integer *info);

/* zlarscl2.c */
extern int zlarscl2_(integer *m, integer *n, doublereal *d__, 
	doublecomplex *x, integer *ldx);

/* zlartg.c */
extern int zlartg_(doublecomplex *f, doublecomplex *g, doublereal *
	cs, doublecomplex *sn, doublecomplex *r__);

/* zlartv.c */
extern int zlartv_(integer *n, doublecomplex *x, integer *incx, 
	doublecomplex *y, integer *incy, doublereal *c__, doublecomplex *s, 
	integer *incc);

/* zlarz.c */
extern int zlarz_(char *side, integer *m, integer *n, integer *l, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c__, integer *ldc, doublecomplex *work);

/* zlarzb.c */
extern int zlarzb_(char *side, char *trans, char *direct, char *
	storev, integer *m, integer *n, integer *k, integer *l, doublecomplex 
	*v, integer *ldv, doublecomplex *t, integer *ldt, doublecomplex *c__, 
	integer *ldc, doublecomplex *work, integer *ldwork);

/* zlarzt.c */
extern int zlarzt_(char *direct, char *storev, integer *n, integer *
	k, doublecomplex *v, integer *ldv, doublecomplex *tau, doublecomplex *
	t, integer *ldt);

/* zlascl.c */
extern int zlascl_(char *type__, integer *kl, integer *ku, 
	doublereal *cfrom, doublereal *cto, integer *m, integer *n, 
	doublecomplex *a, integer *lda, integer *info);

/* zlascl2.c */
extern int zlascl2_(integer *m, integer *n, doublereal *d__, 
	doublecomplex *x, integer *ldx);

/* zlaset.c */
extern int zlaset_(char *uplo, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *a, integer *
	lda);

/* zlasr.c */
extern int zlasr_(char *side, char *pivot, char *direct, integer *m, 
	 integer *n, doublereal *c__, doublereal *s, doublecomplex *a, 
	integer *lda);

/* zlassq.c */
extern int zlassq_(integer *n, doublecomplex *x, integer *incx, 
	doublereal *scale, doublereal *sumsq);

/* zlaswp.c */
extern int zlaswp_(integer *n, doublecomplex *a, integer *lda, 
	integer *k1, integer *k2, integer *ipiv, integer *incx);

/* zlasyf.c */
extern int zlasyf_(char *uplo, integer *n, integer *nb, integer *kb, 
	 doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *w, 
	integer *ldw, integer *info);

/* zlat2c.c */
extern int zlat2c_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, complex *sa, integer *ldsa, integer *info);

/* zlatbs.c */
extern int zlatbs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, integer *kd, doublecomplex *ab, integer *ldab, 
	doublecomplex *x, doublereal *scale, doublereal *cnorm, integer *info);

/* zlatdf.c */
extern int zlatdf_(integer *ijob, integer *n, doublecomplex *z__, 
	integer *ldz, doublecomplex *rhs, doublereal *rdsum, doublereal *
	rdscal, integer *ipiv, integer *jpiv);

/* zlatps.c */
extern int zlatps_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *ap, doublecomplex *x, doublereal *
	scale, doublereal *cnorm, integer *info);

/* zlatrd.c */
extern int zlatrd_(char *uplo, integer *n, integer *nb, 
	doublecomplex *a, integer *lda, doublereal *e, doublecomplex *tau, 
	doublecomplex *w, integer *ldw);

/* zlatrs.c */
extern int zlatrs_(char *uplo, char *trans, char *diag, char *
	normin, integer *n, doublecomplex *a, integer *lda, doublecomplex *x, 
	doublereal *scale, doublereal *cnorm, integer *info);

/* zlatrz.c */
extern int zlatrz_(integer *m, integer *n, integer *l, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work);

/* zlatzm.c */
extern int zlatzm_(char *side, integer *m, integer *n, 
	doublecomplex *v, integer *incv, doublecomplex *tau, doublecomplex *
	c1, doublecomplex *c2, integer *ldc, doublecomplex *work);

/* zlauu2.c */
extern int zlauu2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zlauum.c */
extern int zlauum_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpbcon.c */
extern int zpbcon_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *anorm, doublereal *
	rcond, doublecomplex *work, doublereal *rwork, integer *info);

/* zpbequ.c */
extern int zpbequ_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, doublereal *s, doublereal *scond, 
	doublereal *amax, integer *info);

/* zpbrfs.c */
extern int zpbrfs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, integer *
	ldafb, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	 doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* zpbstf.c */
extern int zpbstf_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);

/* zpbsv.c */
extern int zpbsv_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);

/* zpbsvx.c */
extern int zpbsvx_(char *fact, char *uplo, integer *n, integer *kd, 
	integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *afb, 
	integer *ldafb, char *equed, doublereal *s, doublecomplex *b, integer 
	*ldb, doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *
	ferr, doublereal *berr, doublecomplex *work, doublereal *rwork, 
	integer *info);

/* zpbtf2.c */
extern int zpbtf2_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);

/* zpbtrf.c */
extern int zpbtrf_(char *uplo, integer *n, integer *kd, 
	doublecomplex *ab, integer *ldab, integer *info);

/* zpbtrs.c */
extern int zpbtrs_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, integer *info);

/* zpftrf.c */
extern int zpftrf_(char *transr, char *uplo, integer *n, 
	doublecomplex *a, integer *info);

/* zpftri.c */
extern int zpftri_(char *transr, char *uplo, integer *n, 
	doublecomplex *a, integer *info);

/* zpftrs.c */
extern int zpftrs_(char *transr, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, doublecomplex *b, integer *ldb, integer *info);

/* zpocon.c */
extern int zpocon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zpoequ.c */
extern int zpoequ_(integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* zpoequb.c */
extern int zpoequb_(integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* zporfs.c */
extern int zporfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* zporfsx.c */
extern int zporfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, doublereal *s, doublecomplex *b, integer *ldb, doublecomplex *x, 
	 integer *ldx, doublereal *rcond, doublereal *berr, integer *
	n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zposv.c */
extern int zposv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zposvx.c */
extern int zposvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, char *equed, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zposvxx.c */
extern int zposvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, char *equed, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *rpvgrw, 
	 doublereal *berr, integer *n_err_bnds__, doublereal *err_bnds_norm__, 
	 doublereal *err_bnds_comp__, integer *nparams, doublereal *params, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zpotf2.c */
extern int zpotf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpotrf.c */
extern int zpotrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpotri.c */
extern int zpotri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *info);

/* zpotrs.c */
extern int zpotrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	integer *info);

/* zppcon.c */
extern int zppcon_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *anorm, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);

/* zppequ.c */
extern int zppequ_(char *uplo, integer *n, doublecomplex *ap, 
	doublereal *s, doublereal *scond, doublereal *amax, integer *info);

/* zpprfs.c */
extern int zpprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, doublecomplex *b, integer *ldb, 
	 doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* zppsv.c */
extern int zppsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);

/* zppsvx.c */
extern int zppsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, char *equed, doublereal *
	s, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zpptrf.c */
extern int zpptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);

/* zpptri.c */
extern int zpptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *info);

/* zpptrs.c */
extern int zpptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, integer *info);

/* zpstf2.c */
extern int zpstf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *piv, integer *rank, doublereal *tol, 
	doublereal *work, integer *info);

/* zpstrf.c */
extern int zpstrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *piv, integer *rank, doublereal *tol, 
	doublereal *work, integer *info);

/* zptcon.c */
extern int zptcon_(integer *n, doublereal *d__, doublecomplex *e, 
	doublereal *anorm, doublereal *rcond, doublereal *rwork, integer *
	info);

/* zpteqr.c */
extern int zpteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublereal *work, 
	integer *info);

/* zptrfs.c */
extern int zptrfs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* zptsv.c */
extern int zptsv_(integer *n, integer *nrhs, doublereal *d__, 
	doublecomplex *e, doublecomplex *b, integer *ldb, integer *info);

/* zptsvx.c */
extern int zptsvx_(char *fact, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zpttrf.c */
extern int zpttrf_(integer *n, doublereal *d__, doublecomplex *e, 
	integer *info);

/* zpttrs.c */
extern int zpttrs_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb, 
	integer *info);

/* zptts2.c */
extern int zptts2_(integer *iuplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, integer *ldb);

/* zrot.c */
extern int zrot_(integer *n, doublecomplex *cx, integer *incx, 
	doublecomplex *cy, integer *incy, doublereal *c__, doublecomplex *s);

/* zspcon.c */
extern int zspcon_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *
	work, integer *info);

/* zspmv.c */
extern int zspmv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *ap, doublecomplex *x, integer *incx, doublecomplex *
	beta, doublecomplex *y, integer *incy);

/* zspr.c */
extern int zspr_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *ap);

/* zsprfs.c */
extern int zsprfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *afp, integer *ipiv, doublecomplex *
	b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zspsv.c */
extern int zspsv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zspsvx.c */
extern int zspsvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *ap, doublecomplex *afp, integer *ipiv, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zsptrf.c */
extern int zsptrf_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, integer *info);

/* zsptri.c */
extern int zsptri_(char *uplo, integer *n, doublecomplex *ap, 
	integer *ipiv, doublecomplex *work, integer *info);

/* zsptrs.c */
extern int zsptrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, integer *ipiv, doublecomplex *b, integer *ldb, 
	integer *info);

/* zstedc.c */
extern int zstedc_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *lrwork, integer *iwork, 
	integer *liwork, integer *info);

/* zstegr.c */
extern int zstegr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, doublereal *abstol, integer *m, doublereal *w, 
	doublecomplex *z__, integer *ldz, integer *isuppz, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, integer *info);

/* zstein.c */
extern int zstein_(integer *n, doublereal *d__, doublereal *e, 
	integer *m, doublereal *w, integer *iblock, integer *isplit, 
	doublecomplex *z__, integer *ldz, doublereal *work, integer *iwork, 
	integer *ifail, integer *info);

/* zstemr.c */
extern int zstemr_(char *jobz, char *range, integer *n, doublereal *
	d__, doublereal *e, doublereal *vl, doublereal *vu, integer *il, 
	integer *iu, integer *m, doublereal *w, doublecomplex *z__, integer *
	ldz, integer *nzc, integer *isuppz, logical *tryrac, doublereal *work, 
	 integer *lwork, integer *iwork, integer *liwork, integer *info);

/* zsteqr.c */
extern int zsteqr_(char *compz, integer *n, doublereal *d__, 
	doublereal *e, doublecomplex *z__, integer *ldz, doublereal *work, 
	integer *info);

/* zsycon.c */
extern int zsycon_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublereal *anorm, doublereal *rcond, 
	doublecomplex *work, integer *info);

/* zsyequb.c */
extern int zsyequb_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublereal *s, doublereal *scond, doublereal *amax, 
	doublecomplex *work, integer *info);

/* zsymv.c */
extern int zsymv_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *incx, 
	doublecomplex *beta, doublecomplex *y, integer *incy);

/* zsyr.c */
extern int zsyr_(char *uplo, integer *n, doublecomplex *alpha, 
	doublecomplex *x, integer *incx, doublecomplex *a, integer *lda);

/* zsyrfs.c */
extern int zsyrfs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *af, integer *ldaf, 
	integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublereal *ferr, doublereal *berr, doublecomplex *work, 
	 doublereal *rwork, integer *info);

/* zsyrfsx.c */
extern int zsyrfsx_(char *uplo, char *equed, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublereal *s, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *berr, 
	integer *n_err_bnds__, doublereal *err_bnds_norm__, doublereal *
	err_bnds_comp__, integer *nparams, doublereal *params, doublecomplex *
	work, doublereal *rwork, integer *info);

/* zsysv.c */
extern int zsysv_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zsysvx.c */
extern int zsysvx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, doublecomplex *b, integer *ldb, doublecomplex *x, 
	 integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);

/* zsysvxx.c */
extern int zsysvxx_(char *fact, char *uplo, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *af, integer *
	ldaf, integer *ipiv, char *equed, doublereal *s, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *rcond, 
	doublereal *rpvgrw, doublereal *berr, integer *n_err_bnds__, 
	doublereal *err_bnds_norm__, doublereal *err_bnds_comp__, integer *
	nparams, doublereal *params, doublecomplex *work, doublereal *rwork, 
	integer *info);

/* zsytf2.c */
extern int zsytf2_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, integer *info);

/* zsytrf.c */
extern int zsytrf_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, 
	integer *info);

/* zsytri.c */
extern int zsytri_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, integer *ipiv, doublecomplex *work, integer *info);

/* zsytrs.c */
extern int zsytrs_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* ztbcon.c */
extern int ztbcon_(char *norm, char *uplo, char *diag, integer *n, 
	integer *kd, doublecomplex *ab, integer *ldab, doublereal *rcond, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* ztbrfs.c */
extern int ztbrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *
	rwork, integer *info);

/* ztbtrs.c */
extern int ztbtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, integer *info);

/* ztfsm.c */
extern int ztfsm_(char *transr, char *side, char *uplo, char *trans, 
	 char *diag, integer *m, integer *n, doublecomplex *alpha, 
	doublecomplex *a, doublecomplex *b, integer *ldb);

/* ztftri.c */
extern int ztftri_(char *transr, char *uplo, char *diag, integer *n, 
	 doublecomplex *a, integer *info);

/* ztfttp.c */
extern int ztfttp_(char *transr, char *uplo, integer *n, 
	doublecomplex *arf, doublecomplex *ap, integer *info);

/* ztfttr.c */
extern int ztfttr_(char *transr, char *uplo, integer *n, 
	doublecomplex *arf, doublecomplex *a, integer *lda, integer *info);

/* ztgevc.c */
extern int ztgevc_(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *s, integer *lds, doublecomplex *p, integer 
	*ldp, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, integer *mm, integer *m, doublecomplex *work, doublereal *rwork, 
	 integer *info);

/* ztgex2.c */
extern int ztgex2_(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *j1, integer *info);

/* ztgexc.c */
extern int ztgexc_(logical *wantq, logical *wantz, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *q, integer *ldq, doublecomplex *z__, integer *ldz, 
	integer *ifst, integer *ilst, integer *info);

/* ztgsen.c */
extern int ztgsen_(integer *ijob, logical *wantq, logical *wantz, 
	logical *select, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *q, integer *ldq, doublecomplex *z__, integer *
	ldz, integer *m, doublereal *pl, doublereal *pr, doublereal *dif, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *liwork, 
	integer *info);

/* ztgsja.c */
extern int ztgsja_(char *jobu, char *jobv, char *jobq, integer *m, 
	integer *p, integer *n, integer *k, integer *l, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublereal *tola, 
	doublereal *tolb, doublereal *alpha, doublereal *beta, doublecomplex *
	u, integer *ldu, doublecomplex *v, integer *ldv, doublecomplex *q, 
	integer *ldq, doublecomplex *work, integer *ncycle, integer *info);

/* ztgsna.c */
extern int ztgsna_(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *b, integer 
	*ldb, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *
	ldvr, doublereal *s, doublereal *dif, integer *mm, integer *m, 
	doublecomplex *work, integer *lwork, integer *iwork, integer *info);

/* ztgsy2.c */
extern int ztgsy2_(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *rdsum, doublereal *rdscal, integer *
	info);

/* ztgsyl.c */
extern int ztgsyl_(char *trans, integer *ijob, integer *m, integer *
	n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublereal *scale, doublereal *dif, doublecomplex *work, integer *
	lwork, integer *iwork, integer *info);

/* ztpcon.c */
extern int ztpcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublereal *rcond, doublecomplex *work, doublereal 
	*rwork, integer *info);

/* ztprfs.c */
extern int ztprfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublereal *ferr, doublereal *berr, 
	doublecomplex *work, doublereal *rwork, integer *info);

/* ztptri.c */
extern int ztptri_(char *uplo, char *diag, integer *n, 
	doublecomplex *ap, integer *info);

/* ztptrs.c */
extern int ztptrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	integer *info);

/* ztpttf.c */
extern int ztpttf_(char *transr, char *uplo, integer *n, 
	doublecomplex *ap, doublecomplex *arf, integer *info);

/* ztpttr.c */
extern int ztpttr_(char *uplo, integer *n, doublecomplex *ap, 
	doublecomplex *a, integer *lda, integer *info);

/* ztrcon.c */
extern int ztrcon_(char *norm, char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublereal *rcond, doublecomplex *
	work, doublereal *rwork, integer *info);

/* ztrevc.c */
extern int ztrevc_(char *side, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, integer *mm, integer 
	*m, doublecomplex *work, doublereal *rwork, integer *info);

/* ztrexc.c */
extern int ztrexc_(char *compq, integer *n, doublecomplex *t, 
	integer *ldt, doublecomplex *q, integer *ldq, integer *ifst, integer *
	ilst, integer *info);

/* ztrrfs.c */
extern int ztrrfs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublereal *ferr, 
	doublereal *berr, doublecomplex *work, doublereal *rwork, integer *
	info);

/* ztrsen.c */
extern int ztrsen_(char *job, char *compq, logical *select, integer 
	*n, doublecomplex *t, integer *ldt, doublecomplex *q, integer *ldq, 
	doublecomplex *w, integer *m, doublereal *s, doublereal *sep, 
	doublecomplex *work, integer *lwork, integer *info);

/* ztrsna.c */
extern int ztrsna_(char *job, char *howmny, logical *select, 
	integer *n, doublecomplex *t, integer *ldt, doublecomplex *vl, 
	integer *ldvl, doublecomplex *vr, integer *ldvr, doublereal *s, 
	doublereal *sep, integer *mm, integer *m, doublecomplex *work, 
	integer *ldwork, doublereal *rwork, integer *info);

/* ztrsyl.c */
extern int ztrsyl_(char *trana, char *tranb, integer *isgn, integer 
	*m, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *c__, integer *ldc, doublereal *scale, 
	integer *info);

/* ztrti2.c */
extern int ztrti2_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);

/* ztrtri.c */
extern int ztrtri_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, integer *info);

/* ztrtrs.c */
extern int ztrtrs_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, integer *info);

/* ztrttf.c */
extern int ztrttf_(char *transr, char *uplo, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *arf, integer *info);

/* ztrttp.c */
extern int ztrttp_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *ap, integer *info);

/* ztzrqf.c */
extern int ztzrqf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, integer *info);

/* ztzrzf.c */
extern int ztzrzf_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zung2l.c */
extern int zung2l_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zung2r.c */
extern int zung2r_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zungbr.c */
extern int zungbr_(char *vect, integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zunghr.c */
extern int zunghr_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungl2.c */
extern int zungl2_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zunglq.c */
extern int zunglq_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungql.c */
extern int zungql_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungqr.c */
extern int zungqr_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungr2.c */
extern int zungr2_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *info);

/* zungrq.c */
extern int zungrq_(integer *m, integer *n, integer *k, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, integer *info);

/* zungtr.c */
extern int zungtr_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *tau, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunm2l.c */
extern int zunm2l_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunm2r.c */
extern int zunm2r_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunmbr.c */
extern int zunmbr_(char *vect, char *side, char *trans, integer *m, 
	integer *n, integer *k, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);

/* zunmhr.c */
extern int zunmhr_(char *side, char *trans, integer *m, integer *n, 
	integer *ilo, integer *ihi, doublecomplex *a, integer *lda, 
	doublecomplex *tau, doublecomplex *c__, integer *ldc, doublecomplex *
	work, integer *lwork, integer *info);

/* zunml2.c */
extern int zunml2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunmlq.c */
extern int zunmlq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmql.c */
extern int zunmql_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmqr.c */
extern int zunmqr_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmr2.c */
extern int zunmr2_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *info);

/* zunmr3.c */
extern int zunmr3_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	info);

/* zunmrq.c */
extern int zunmrq_(char *side, char *trans, integer *m, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zunmrz.c */
extern int zunmrz_(char *side, char *trans, integer *m, integer *n, 
	integer *k, integer *l, doublecomplex *a, integer *lda, doublecomplex 
	*tau, doublecomplex *c__, integer *ldc, doublecomplex *work, integer *
	lwork, integer *info);

/* zunmtr.c */
extern int zunmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *tau, 
	doublecomplex *c__, integer *ldc, doublecomplex *work, integer *lwork, 
	 integer *info);

/* zupgtr.c */
extern int zupgtr_(char *uplo, integer *n, doublecomplex *ap, 
	doublecomplex *tau, doublecomplex *q, integer *ldq, doublecomplex *
	work, integer *info);

/* zupmtr.c */
extern int zupmtr_(char *side, char *uplo, char *trans, integer *m, 
	integer *n, doublecomplex *ap, doublecomplex *tau, doublecomplex *c__, 
	 integer *ldc, doublecomplex *work, integer *info);

#endif
