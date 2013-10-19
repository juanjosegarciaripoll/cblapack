#ifndef CBLAPACK_EIG_H
#define CBLAPACK_EIG_H

extern /* Subroutine */ int alahdg_(integer *iounit, char *path);
extern /* Subroutine */ int alareq_(char *path, integer *nmats, logical *dotype, 
	integer *ntypes, integer *nin, integer *nout);
extern /* Subroutine */ int alarqg_(char *path, integer *nmats, logical *dotype, 
	integer *ntypes, integer *nin, integer *nout);
extern /* Subroutine */ int alasmg_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);
extern /* Subroutine */ int alasum_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);
extern /* Subroutine */ int alasvm_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);
extern /* Subroutine */ int cbdt01_(integer *m, integer *n, integer *kd, complex *a, 
	integer *lda, complex *q, integer *ldq, real *d__, real *e, complex *
	pt, integer *ldpt, complex *work, real *rwork, real *resid);
extern /* Subroutine */ int cbdt02_(integer *m, integer *n, complex *b, integer *ldb, 
	 complex *c__, integer *ldc, complex *u, integer *ldu, complex *work, 
	real *rwork, real *resid);
extern /* Subroutine */ int cbdt03_(char *uplo, integer *n, integer *kd, real *d__, 
	real *e, complex *u, integer *ldu, real *s, complex *vt, integer *
	ldvt, complex *work, real *resid);
extern /* Subroutine */ int cchkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, real *thresh, integer *nounit, complex 
	*a, integer *lda, complex *ab, integer *ldab, real *bd, real *be, 
	complex *q, integer *ldq, complex *p, integer *ldp, complex *c__, 
	integer *ldc, complex *cc, complex *work, integer *lwork, real *rwork, 
	 real *result, integer *info);
extern /* Subroutine */ int cchkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, real 
	*thresh, complex *a, integer *lda, real *bd, real *be, real *s1, real 
	*s2, complex *x, integer *ldx, complex *y, complex *z__, complex *q, 
	integer *ldq, complex *pt, integer *ldpt, complex *u, complex *vt, 
	complex *work, integer *lwork, real *rwork, integer *nout, integer *
	info);
extern /* Subroutine */ int cchkbk_(integer *nin, integer *nout);
extern /* Subroutine */ int cchkbl_(integer *nin, integer *nout);
extern /* Subroutine */ int cchkec_(real *thresh, logical *tsterr, integer *nin, 
	integer *nout);
extern /* Subroutine */ int cchkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, logical *tstdif, real *
	thrshn, integer *nounit, complex *a, integer *lda, complex *b, 
	complex *h__, complex *t, complex *s1, complex *s2, complex *p1, 
	complex *p2, complex *u, integer *ldu, complex *v, complex *q, 
	complex *z__, complex *alpha1, complex *beta1, complex *alpha3, 
	complex *beta3, complex *evectl, complex *evectr, complex *work, 
	integer *lwork, real *rwork, logical *llwork, real *result, integer *
	info);
extern /* Subroutine */ int cchkgk_(integer *nin, integer *nout);
extern /* Subroutine */ int cchkgl_(integer *nin, integer *nout);
extern /* Subroutine */ int cchkhb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, real *
	thresh, integer *nounit, complex *a, integer *lda, real *sd, real *se, 
	 complex *u, integer *ldu, complex *work, integer *lwork, real *rwork, 
	 real *result, integer *info);
extern /* Subroutine */ int cchkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *h__, complex *t1, complex *t2, 
	complex *u, integer *ldu, complex *z__, complex *uz, complex *w1, 
	complex *w3, complex *evectl, complex *evectr, complex *evecty, 
	complex *evectx, complex *uu, complex *tau, complex *work, integer *
	nwork, real *rwork, integer *iwork, logical *select, real *result, 
	integer *info);
extern /* Subroutine */ int cchkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *ap, real *sd, real *se, real *d1, 
	real *d2, real *d3, real *d4, real *d5, real *wa1, real *wa2, real *
	wa3, real *wr, complex *u, integer *ldu, complex *v, complex *vp, 
	complex *tau, complex *z__, complex *work, integer *lwork, real *
	rwork, integer *lrwork, integer *iwork, integer *liwork, real *result, 
	 integer *info);
extern /* Subroutine */ int cckglm_(integer *nn, integer *nval, integer *mval, 
	integer *pval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, complex *a, complex *af, complex *b, complex *bf, complex *x, 
	complex *work, real *rwork, integer *nin, integer *nout, integer *
	info);
extern /* Subroutine */ int cckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	real *thresh, integer *nmax, complex *a, complex *af, complex *aq, 
	complex *ar, complex *taua, complex *b, complex *bf, complex *bz, 
	complex *bt, complex *bwk, complex *taub, complex *work, real *rwork, 
	integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int cckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, complex *a, complex *af, complex *b, complex *bf, complex *u, 
	complex *v, complex *q, real *alpha, real *beta, complex *r__, 
	integer *iwork, complex *work, real *rwork, integer *nin, integer *
	nout, integer *info);
extern /* Subroutine */ int ccklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, complex *a, complex *af, complex *b, complex *bf, complex *x, 
	complex *work, real *rwork, integer *nin, integer *nout, integer *
	info);
extern /* Subroutine */ int cdrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *b, complex *s, complex *t, complex 
	*q, integer *ldq, complex *z__, complex *alpha, complex *beta, 
	complex *work, integer *lwork, real *rwork, real *result, logical *
	bwork, integer *info);
extern /* Subroutine */ int cdrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *b, complex *s, complex *t, complex 
	*q, integer *ldq, complex *z__, complex *qe, integer *ldqe, complex *
	alpha, complex *beta, complex *alpha1, complex *beta1, complex *work, 
	integer *lwork, real *rwork, real *result, integer *info);
extern /* Subroutine */ int cdrgsx_(integer *nsize, integer *ncmax, real *thresh, 
	integer *nin, integer *nout, complex *a, integer *lda, complex *b, 
	complex *ai, complex *bi, complex *z__, complex *q, complex *alpha, 
	complex *beta, complex *c__, integer *ldc, real *s, complex *work, 
	integer *lwork, real *rwork, integer *iwork, integer *liwork, logical 
	*bwork, integer *info);
extern /* Subroutine */ int cdrgvx_(integer *nsize, real *thresh, integer *nin, 
	integer *nout, complex *a, integer *lda, complex *b, complex *ai, 
	complex *bi, complex *alpha, complex *beta, complex *vl, complex *vr, 
	integer *ilo, integer *ihi, real *lscale, real *rscale, real *s, real 
	*stru, real *dif, real *diftru, complex *work, integer *lwork, real *
	rwork, integer *iwork, integer *liwork, real *result, logical *bwork, 
	integer *info);
extern /* Subroutine */ int cdrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, real *thresh, 
	complex *a, integer *lda, complex *u, integer *ldu, complex *vt, 
	integer *ldvt, complex *asav, complex *usav, complex *vtsav, real *s, 
	real *ssav, real *e, complex *work, integer *lwork, real *rwork, 
	integer *iwork, integer *nounit, integer *info);
extern /* Subroutine */ int cdrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *h__, complex *ht, complex *w, 
	complex *wt, complex *vs, integer *ldvs, real *result, complex *work, 
	integer *nwork, real *rwork, integer *iwork, logical *bwork, integer *
	info);
extern /* Subroutine */ int cdrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *h__, complex *w, complex *w1, 
	complex *vl, integer *ldvl, complex *vr, integer *ldvr, complex *lre, 
	integer *ldlre, real *result, complex *work, integer *nwork, real *
	rwork, integer *iwork, integer *info);
extern /* Subroutine */ int cdrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, real *thrshn, integer *
	nounit, complex *a, integer *lda, complex *b, complex *s, complex *t, 
	complex *s2, complex *t2, complex *q, integer *ldq, complex *z__, 
	complex *alpha1, complex *beta1, complex *alpha2, complex *beta2, 
	complex *vl, complex *vr, complex *work, integer *lwork, real *rwork, 
	real *result, integer *info);
extern /* Subroutine */ int cdrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *b, integer *ldb, real *d__, 
	complex *z__, integer *ldz, complex *ab, complex *bb, complex *ap, 
	complex *bp, complex *work, integer *nwork, real *rwork, integer *
	lrwork, integer *iwork, integer *liwork, real *result, integer *info);
extern /* Subroutine */ int cdrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, real *d1, real *d2, real *d3, real *wa1, 
	real *wa2, real *wa3, complex *u, integer *ldu, complex *v, complex *
	tau, complex *z__, complex *work, integer *lwork, real *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, real *result, 
	integer *info);
extern /* Subroutine */ int cdrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, complex *a, integer *lda, complex *h__, complex *ht, 
	complex *w, complex *wt, complex *wtmp, complex *vs, integer *ldvs, 
	complex *vs1, real *result, complex *work, integer *lwork, real *
	rwork, logical *bwork, integer *info);
extern /* Subroutine */ int cdrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, complex *a, integer *lda, complex *h__, complex *w, 
	complex *w1, complex *vl, integer *ldvl, complex *vr, integer *ldvr, 
	complex *lre, integer *ldlre, real *rcondv, real *rcndv1, real *
	rcdvin, real *rconde, real *rcnde1, real *rcdein, real *scale, real *
	scale1, real *result, complex *work, integer *nwork, real *rwork, 
	integer *info);
extern /* Subroutine */ int cerrbd_(char *path, integer *nunit);
extern /* Subroutine */ int cerrec_(char *path, integer *nunit);
extern /* Subroutine */ int cerred_(char *path, integer *nunit);
extern /* Subroutine */ int cerrgg_(char *path, integer *nunit);
extern /* Subroutine */ int cerrhs_(char *path, integer *nunit);
extern /* Subroutine */ int cerrst_(char *path, integer *nunit);
extern /* Subroutine */ int cget02_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);
extern /* Subroutine */ int cget10_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *b, integer *ldb, complex *work, real *rwork, real *result);
extern /* Subroutine */ int cget22_(char *transa, char *transe, char *transw, 
	integer *n, complex *a, integer *lda, complex *e, integer *lde, 
	complex *w, complex *work, real *rwork, real *result);
extern /* Subroutine */ int cget23_(logical *comp, integer *isrt, char *balanc, 
	integer *jtype, real *thresh, integer *iseed, integer *nounit, 
	integer *n, complex *a, integer *lda, complex *h__, complex *w, 
	complex *w1, complex *vl, integer *ldvl, complex *vr, integer *ldvr, 
	complex *lre, integer *ldlre, real *rcondv, real *rcndv1, real *
	rcdvin, real *rconde, real *rcnde1, real *rcdein, real *scale, real *
	scale1, real *result, complex *work, integer *lwork, real *rwork, 
	integer *info);
extern /* Subroutine */ int cget24_(logical *comp, integer *jtype, real *thresh, 
	integer *iseed, integer *nounit, integer *n, complex *a, integer *lda, 
	 complex *h__, complex *ht, complex *w, complex *wt, complex *wtmp, 
	complex *vs, integer *ldvs, complex *vs1, real *rcdein, real *rcdvin, 
	integer *nslct, integer *islct, integer *isrt, real *result, complex *
	work, integer *lwork, real *rwork, logical *bwork, integer *info);
extern /* Subroutine */ int cget35_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int cget36_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int cget37_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int cget38_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int cget51_(integer *itype, integer *n, complex *a, integer *
	lda, complex *b, integer *ldb, complex *u, integer *ldu, complex *v, 
	integer *ldv, complex *work, real *rwork, real *result);
extern /* Subroutine */ int cget52_(logical *left, integer *n, complex *a, integer *
	lda, complex *b, integer *ldb, complex *e, integer *lde, complex *
	alpha, complex *beta, complex *work, real *rwork, real *result);
extern /* Subroutine */ int cget54_(integer *n, complex *a, integer *lda, complex *b, 
	 integer *ldb, complex *s, integer *lds, complex *t, integer *ldt, 
	complex *u, integer *ldu, complex *v, integer *ldv, complex *work, 
	real *result);
extern /* Subroutine */ int cglmts_(integer *n, integer *m, integer *p, complex *a, 
	complex *af, integer *lda, complex *b, complex *bf, integer *ldb, 
	complex *d__, complex *df, complex *x, complex *u, complex *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int cgqrts_(integer *n, integer *m, integer *p, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *taua, 
	complex *b, complex *bf, complex *z__, complex *t, complex *bwk, 
	integer *ldb, complex *taub, complex *work, integer *lwork, real *
	rwork, real *result);
extern /* Subroutine */ int cgrqts_(integer *m, integer *p, integer *n, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *taua, 
	complex *b, complex *bf, complex *z__, complex *t, complex *bwk, 
	integer *ldb, complex *taub, complex *work, integer *lwork, real *
	rwork, real *result);
extern /* Subroutine */ int cgsvts_(integer *m, integer *p, integer *n, complex *a, 
	complex *af, integer *lda, complex *b, complex *bf, integer *ldb, 
	complex *u, integer *ldu, complex *v, integer *ldv, complex *q, 
	integer *ldq, real *alpha, real *beta, complex *r__, integer *ldr, 
	integer *iwork, complex *work, integer *lwork, real *rwork, real *
	result);
extern /* Subroutine */ int chbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 complex *a, integer *lda, real *d__, real *e, complex *u, integer *
	ldu, complex *work, real *rwork, real *result);
extern /* Subroutine */ int chet21_(integer *itype, char *uplo, integer *n, integer *
	kband, complex *a, integer *lda, real *d__, real *e, complex *u, 
	integer *ldu, complex *v, integer *ldv, complex *tau, complex *work, 
	real *rwork, real *result);
extern /* Subroutine */ int chet22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, complex *a, integer *lda, real *d__, real *e, 
	complex *u, integer *ldu, complex *v, integer *ldv, complex *tau, 
	complex *work, real *rwork, real *result);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int chpt21_(integer *itype, char *uplo, integer *n, integer *
	kband, complex *ap, real *d__, real *e, complex *u, integer *ldu, 
	complex *vp, complex *tau, complex *work, real *rwork, real *result);
extern /* Subroutine */ int chst01_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *h__, integer *ldh, complex *q, integer *ldq, 
	 complex *work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int clarfy_(char *uplo, integer *n, complex *v, integer *
	incv, complex *tau, complex *c__, integer *ldc, complex *work);
extern /* Subroutine */ int clarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, integer *iseed, integer *info);
extern /* Subroutine */ int clatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, logical *rsign, real *amagn, real *rcond, real *triang, 
	integer *idist, integer *iseed, complex *a, integer *lda);
extern logical clctes_(complex *z__, complex *d__);
extern logical clctsx_(complex *alpha, complex *beta);
extern /* Subroutine */ int clsets_(integer *m, integer *p, integer *n, complex *a, 
	complex *af, integer *lda, complex *b, complex *bf, integer *ldb, 
	complex *c__, complex *cf, complex *d__, complex *df, complex *x, 
	complex *work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int csbmv_(char *uplo, integer *n, integer *k, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);
extern /* Subroutine */ int csgt01_(integer *itype, char *uplo, integer *n, integer *
	m, complex *a, integer *lda, complex *b, integer *ldb, complex *z__, 
	integer *ldz, real *d__, complex *work, real *rwork, real *result);
extern logical cslect_(complex *z__);
extern /* Subroutine */ int cstt21_(integer *n, integer *kband, real *ad, real *ae, 
	real *sd, real *se, complex *u, integer *ldu, complex *work, real *
	rwork, real *result);
extern /* Subroutine */ int cstt22_(integer *n, integer *m, integer *kband, real *ad, 
	 real *ae, real *sd, real *se, complex *u, integer *ldu, complex *
	work, integer *ldwork, real *rwork, real *result);
extern /* Subroutine */ int cunt01_(char *rowcol, integer *m, integer *n, complex *u, 
	 integer *ldu, complex *work, integer *lwork, real *rwork, real *
	resid);
extern /* Subroutine */ int cunt03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, complex *u, integer *ldu, complex *v, integer *ldv, 
	complex *work, integer *lwork, real *rwork, real *result, integer *
	info);
extern /* Subroutine */ int dbdt01_(integer *m, integer *n, integer *kd, doublereal *
	a, integer *lda, doublereal *q, integer *ldq, doublereal *d__, 
	doublereal *e, doublereal *pt, integer *ldpt, doublereal *work, 
	doublereal *resid);
extern /* Subroutine */ int dbdt02_(integer *m, integer *n, doublereal *b, integer *
	ldb, doublereal *c__, integer *ldc, doublereal *u, integer *ldu, 
	doublereal *work, doublereal *resid);
extern /* Subroutine */ int dbdt03_(char *uplo, integer *n, integer *kd, doublereal *
	d__, doublereal *e, doublereal *u, integer *ldu, doublereal *s, 
	doublereal *vt, integer *ldvt, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dchkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *ab, integer *ldab, 
	doublereal *bd, doublereal *be, doublereal *q, integer *ldq, 
	doublereal *p, integer *ldp, doublereal *c__, integer *ldc, 
	doublereal *cc, doublereal *work, integer *lwork, doublereal *result, 
	integer *info);
extern /* Subroutine */ int dchkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, 
	doublereal *thresh, doublereal *a, integer *lda, doublereal *bd, 
	doublereal *be, doublereal *s1, doublereal *s2, doublereal *x, 
	integer *ldx, doublereal *y, doublereal *z__, doublereal *q, integer *
	ldq, doublereal *pt, integer *ldpt, doublereal *u, doublereal *vt, 
	doublereal *work, integer *lwork, integer *iwork, integer *nout, 
	integer *info);
extern /* Subroutine */ int dchkbk_(integer *nin, integer *nout);
extern /* Subroutine */ int dchkbl_(integer *nin, integer *nout);
extern /* Subroutine */ int dchkec_(doublereal *thresh, logical *tsterr, integer *
	nin, integer *nout);
extern /* Subroutine */ int dchkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, logical *tstdif, 
	doublereal *thrshn, integer *nounit, doublereal *a, integer *lda, 
	doublereal *b, doublereal *h__, doublereal *t, doublereal *s1, 
	doublereal *s2, doublereal *p1, doublereal *p2, doublereal *u, 
	integer *ldu, doublereal *v, doublereal *q, doublereal *z__, 
	doublereal *alphr1, doublereal *alphi1, doublereal *beta1, doublereal 
	*alphr3, doublereal *alphi3, doublereal *beta3, doublereal *evectl, 
	doublereal *evectr, doublereal *work, integer *lwork, logical *llwork, 
	 doublereal *result, integer *info);
extern /* Subroutine */ int dchkgk_(integer *nin, integer *nout);
extern /* Subroutine */ int dchkgl_(integer *nin, integer *nout);
extern /* Subroutine */ int dchkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *t1, 
	doublereal *t2, doublereal *u, integer *ldu, doublereal *z__, 
	doublereal *uz, doublereal *wr1, doublereal *wi1, doublereal *wr3, 
	doublereal *wi3, doublereal *evectl, doublereal *evectr, doublereal *
	evecty, doublereal *evectx, doublereal *uu, doublereal *tau, 
	doublereal *work, integer *nwork, integer *iwork, logical *select, 
	doublereal *result, integer *info);
extern /* Subroutine */ int dchksb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, 
	doublereal *thresh, integer *nounit, doublereal *a, integer *lda, 
	doublereal *sd, doublereal *se, doublereal *u, integer *ldu, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);
extern /* Subroutine */ int dchkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *ap, doublereal *sd, 
	doublereal *se, doublereal *d1, doublereal *d2, doublereal *d3, 
	doublereal *d4, doublereal *d5, doublereal *wa1, doublereal *wa2, 
	doublereal *wa3, doublereal *wr, doublereal *u, integer *ldu, 
	doublereal *v, doublereal *vp, doublereal *tau, doublereal *z__, 
	doublereal *work, integer *lwork, integer *iwork, integer *liwork, 
	doublereal *result, integer *info);
extern /* Subroutine */ int dckglm_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublereal *a, doublereal *af, doublereal *b, 
	doublereal *bf, doublereal *x, doublereal *work, doublereal *rwork, 
	integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int dckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	doublereal *thresh, integer *nmax, doublereal *a, doublereal *af, 
	doublereal *aq, doublereal *ar, doublereal *taua, doublereal *b, 
	doublereal *bf, doublereal *bz, doublereal *bt, doublereal *bwk, 
	doublereal *taub, doublereal *work, doublereal *rwork, integer *nin, 
	integer *nout, integer *info);
extern /* Subroutine */ int dckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublereal *a, doublereal *af, doublereal *b, 
	doublereal *bf, doublereal *u, doublereal *v, doublereal *q, 
	doublereal *alpha, doublereal *beta, doublereal *r__, integer *iwork, 
	doublereal *work, doublereal *rwork, integer *nin, integer *nout, 
	integer *info);
extern /* Subroutine */ int dcklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublereal *a, doublereal *af, doublereal *b, 
	doublereal *bf, doublereal *x, doublereal *work, doublereal *rwork, 
	integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int ddrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *b, doublereal *s, doublereal 
	*t, doublereal *q, integer *ldq, doublereal *z__, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *work, integer *
	lwork, doublereal *result, logical *bwork, integer *info);
extern /* Subroutine */ int ddrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *b, doublereal *s, doublereal 
	*t, doublereal *q, integer *ldq, doublereal *z__, doublereal *qe, 
	integer *ldqe, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *alphr1, doublereal *alphi1, doublereal *beta1, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);
extern /* Subroutine */ int ddrgsx_(integer *nsize, integer *ncmax, doublereal *
	thresh, integer *nin, integer *nout, doublereal *a, integer *lda, 
	doublereal *b, doublereal *ai, doublereal *bi, doublereal *z__, 
	doublereal *q, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *c__, integer *ldc, doublereal *s, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, logical *bwork, 
	integer *info);
extern /* Subroutine */ int ddrgvx_(integer *nsize, doublereal *thresh, integer *nin, 
	 integer *nout, doublereal *a, integer *lda, doublereal *b, 
	doublereal *ai, doublereal *bi, doublereal *alphar, doublereal *
	alphai, doublereal *beta, doublereal *vl, doublereal *vr, integer *
	ilo, integer *ihi, doublereal *lscale, doublereal *rscale, doublereal 
	*s, doublereal *dtru, doublereal *dif, doublereal *diftru, doublereal 
	*work, integer *lwork, integer *iwork, integer *liwork, doublereal *
	result, logical *bwork, integer *info);
extern /* Subroutine */ int ddrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, doublereal *thresh, 
	doublereal *a, integer *lda, doublereal *u, integer *ldu, doublereal *
	vt, integer *ldvt, doublereal *asav, doublereal *usav, doublereal *
	vtsav, doublereal *s, doublereal *ssav, doublereal *e, doublereal *
	work, integer *lwork, integer *iwork, integer *nout, integer *info);
extern /* Subroutine */ int ddrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *ht, 
	doublereal *wr, doublereal *wi, doublereal *wrt, doublereal *wit, 
	doublereal *vs, integer *ldvs, doublereal *result, doublereal *work, 
	integer *nwork, integer *iwork, logical *bwork, integer *info);
extern /* Subroutine */ int ddrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *wr, 
	doublereal *wi, doublereal *wr1, doublereal *wi1, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *lre, 
	integer *ldlre, doublereal *result, doublereal *work, integer *nwork, 
	integer *iwork, integer *info);
extern /* Subroutine */ int ddrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, doublereal *
	thrshn, integer *nounit, doublereal *a, integer *lda, doublereal *b, 
	doublereal *s, doublereal *t, doublereal *s2, doublereal *t2, 
	doublereal *q, integer *ldq, doublereal *z__, doublereal *alphr1, 
	doublereal *alphi1, doublereal *beta1, doublereal *alphr2, doublereal 
	*alphi2, doublereal *beta2, doublereal *vl, doublereal *vr, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);
extern /* Subroutine */ int ddrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	d__, doublereal *z__, integer *ldz, doublereal *ab, doublereal *bb, 
	doublereal *ap, doublereal *bp, doublereal *work, integer *nwork, 
	integer *iwork, integer *liwork, doublereal *result, integer *info);
extern /* Subroutine */ int ddrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *d1, doublereal *d2, 
	doublereal *d3, doublereal *d4, doublereal *eveigs, doublereal *wa1, 
	doublereal *wa2, doublereal *wa3, doublereal *u, integer *ldu, 
	doublereal *v, doublereal *tau, doublereal *z__, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, doublereal *result, 
	integer *info);
extern /* Subroutine */ int ddrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublereal *a, integer *lda, doublereal *h__, 
	doublereal *ht, doublereal *wr, doublereal *wi, doublereal *wrt, 
	doublereal *wit, doublereal *wrtmp, doublereal *witmp, doublereal *vs, 
	 integer *ldvs, doublereal *vs1, doublereal *result, doublereal *work, 
	 integer *lwork, integer *iwork, logical *bwork, integer *info);
extern /* Subroutine */ int ddrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublereal *a, integer *lda, doublereal *h__, 
	doublereal *wr, doublereal *wi, doublereal *wr1, doublereal *wi1, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	doublereal *lre, integer *ldlre, doublereal *rcondv, doublereal *
	rcndv1, doublereal *rcdvin, doublereal *rconde, doublereal *rcnde1, 
	doublereal *rcdein, doublereal *scale, doublereal *scale1, doublereal 
	*result, doublereal *work, integer *nwork, integer *iwork, integer *
	info);
extern /* Subroutine */ int derrbd_(char *path, integer *nunit);
extern /* Subroutine */ int derrec_(char *path, integer *nunit);
extern /* Subroutine */ int derred_(char *path, integer *nunit);
extern /* Subroutine */ int derrgg_(char *path, integer *nunit);
extern /* Subroutine */ int derrhs_(char *path, integer *nunit);
extern /* Subroutine */ int derrst_(char *path, integer *nunit);
extern /* Subroutine */ int dget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dget10_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *b, integer *ldb, doublereal *work, doublereal *
	result);
extern /* Subroutine */ int dget22_(char *transa, char *transe, char *transw, 
	integer *n, doublereal *a, integer *lda, doublereal *e, integer *lde, 
	doublereal *wr, doublereal *wi, doublereal *work, doublereal *result);
extern /* Subroutine */ int dget23_(logical *comp, char *balanc, integer *jtype, 
	doublereal *thresh, integer *iseed, integer *nounit, integer *n, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *wr, 
	doublereal *wi, doublereal *wr1, doublereal *wi1, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *lre, 
	integer *ldlre, doublereal *rcondv, doublereal *rcndv1, doublereal *
	rcdvin, doublereal *rconde, doublereal *rcnde1, doublereal *rcdein, 
	doublereal *scale, doublereal *scale1, doublereal *result, doublereal 
	*work, integer *lwork, integer *iwork, integer *info);
extern /* Subroutine */ int dget24_(logical *comp, integer *jtype, doublereal *
	thresh, integer *iseed, integer *nounit, integer *n, doublereal *a, 
	integer *lda, doublereal *h__, doublereal *ht, doublereal *wr, 
	doublereal *wi, doublereal *wrt, doublereal *wit, doublereal *wrtmp, 
	doublereal *witmp, doublereal *vs, integer *ldvs, doublereal *vs1, 
	doublereal *rcdein, doublereal *rcdvin, integer *nslct, integer *
	islct, doublereal *result, doublereal *work, integer *lwork, integer *
	iwork, logical *bwork, integer *info);
extern /* Subroutine */ int dget31_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int dget32_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int dget33_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int dget34_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int dget35_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int dget36_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int dget37_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int dget38_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int dget39_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int dget51_(integer *itype, integer *n, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *u, integer *
	ldu, doublereal *v, integer *ldv, doublereal *work, doublereal *
	result);
extern /* Subroutine */ int dget52_(logical *left, integer *n, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *e, integer *
	lde, doublereal *alphar, doublereal *alphai, doublereal *beta, 
	doublereal *work, doublereal *result);
extern /* Subroutine */ int dget53_(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *scale, doublereal *wr, doublereal *wi, 
	doublereal *result, integer *info);
extern /* Subroutine */ int dget54_(integer *n, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, doublereal *s, integer *lds, doublereal *
	t, integer *ldt, doublereal *u, integer *ldu, doublereal *v, integer *
	ldv, doublereal *work, doublereal *result);
extern /* Subroutine */ int dglmts_(integer *n, integer *m, integer *p, doublereal *
	a, doublereal *af, integer *lda, doublereal *b, doublereal *bf, 
	integer *ldb, doublereal *d__, doublereal *df, doublereal *x, 
	doublereal *u, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dgqrts_(integer *n, integer *m, integer *p, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *taua, doublereal *b, doublereal *bf, doublereal *z__, 
	doublereal *t, doublereal *bwk, integer *ldb, doublereal *taub, 
	doublereal *work, integer *lwork, doublereal *rwork, doublereal *
	result);
extern /* Subroutine */ int dgrqts_(integer *m, integer *p, integer *n, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *taua, doublereal *b, doublereal *bf, doublereal *z__, 
	doublereal *t, doublereal *bwk, integer *ldb, doublereal *taub, 
	doublereal *work, integer *lwork, doublereal *rwork, doublereal *
	result);
extern /* Subroutine */ int dgsvts_(integer *m, integer *p, integer *n, doublereal *
	a, doublereal *af, integer *lda, doublereal *b, doublereal *bf, 
	integer *ldb, doublereal *u, integer *ldu, doublereal *v, integer *
	ldv, doublereal *q, integer *ldq, doublereal *alpha, doublereal *beta, 
	 doublereal *r__, integer *ldr, integer *iwork, doublereal *work, 
	integer *lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int dhst01_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *h__, integer *ldh, 
	doublereal *q, integer *ldq, doublereal *work, integer *lwork, 
	doublereal *result);
extern /* Subroutine */ int dlafts_(char *type__, integer *m, integer *n, integer *
	imat, integer *ntests, doublereal *result, integer *iseed, doublereal 
	*thresh, integer *iounit, integer *ie);
extern /* Subroutine */ int dlahd2_(integer *iounit, char *path);
extern /* Subroutine */ int dlarfy_(char *uplo, integer *n, doublereal *v, integer *
	incv, doublereal *tau, doublereal *c__, integer *ldc, doublereal *
	work);
extern /* Subroutine */ int dlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, integer *iseed, integer *info);
extern /* Subroutine */ int dlasum_(char *type__, integer *iounit, integer *ie, 
	integer *nrun);
extern /* Subroutine */ int dlatb9_(char *path, integer *imat, integer *m, integer *
	p, integer *n, char *type__, integer *kla, integer *kua, integer *klb, 
	 integer *kub, doublereal *anorm, doublereal *bnorm, integer *modea, 
	integer *modeb, doublereal *cndnma, doublereal *cndnmb, char *dista, 
	char *distb);
extern /* Subroutine */ int dlatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, integer *isign, doublereal *amagn, doublereal *rcond, 
	doublereal *triang, integer *idist, integer *iseed, doublereal *a, 
	integer *lda);
extern logical dlctes_(doublereal *zr, doublereal *zi, doublereal *d__);
extern logical dlctsx_(doublereal *ar, doublereal *ai, doublereal *beta);
extern /* Subroutine */ int dlsets_(integer *m, integer *p, integer *n, doublereal *
	a, doublereal *af, integer *lda, doublereal *b, doublereal *bf, 
	integer *ldb, doublereal *c__, doublereal *cf, doublereal *d__, 
	doublereal *df, doublereal *x, doublereal *work, integer *lwork, 
	doublereal *rwork, doublereal *result);
extern /* Subroutine */ int dort01_(char *rowcol, integer *m, integer *n, doublereal 
	*u, integer *ldu, doublereal *work, integer *lwork, doublereal *resid);
extern /* Subroutine */ int dort03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, doublereal *u, integer *ldu, doublereal *v, integer *ldv, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);
extern /* Subroutine */ int dsbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 doublereal *a, integer *lda, doublereal *d__, doublereal *e, 
	doublereal *u, integer *ldu, doublereal *work, doublereal *result);
extern /* Subroutine */ int dsgt01_(integer *itype, char *uplo, integer *n, integer *
	m, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *z__, integer *ldz, doublereal *d__, doublereal *work, 
	doublereal *result);
extern logical dslect_(doublereal *zr, doublereal *zi);
extern /* Subroutine */ int dspt21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublereal *ap, doublereal *d__, doublereal *e, doublereal *u, 
	integer *ldu, doublereal *vp, doublereal *tau, doublereal *work, 
	doublereal *result);
extern /* Subroutine */ int dstech_(integer *n, doublereal *a, doublereal *b, 
	doublereal *eig, doublereal *tol, doublereal *work, integer *info);
extern /* Subroutine */ int dstect_(integer *n, doublereal *a, doublereal *b, 
	doublereal *shift, integer *num);
extern /* Subroutine */ int dstt21_(integer *n, integer *kband, doublereal *ad, 
	doublereal *ae, doublereal *sd, doublereal *se, doublereal *u, 
	integer *ldu, doublereal *work, doublereal *result);
extern /* Subroutine */ int dstt22_(integer *n, integer *m, integer *kband, 
	doublereal *ad, doublereal *ae, doublereal *sd, doublereal *se, 
	doublereal *u, integer *ldu, doublereal *work, integer *ldwork, 
	doublereal *result);
extern /* Subroutine */ int dsvdch_(integer *n, doublereal *s, doublereal *e, 
	doublereal *svd, doublereal *tol, integer *info);
extern /* Subroutine */ int dsvdct_(integer *n, doublereal *s, doublereal *e, 
	doublereal *shift, integer *num);
extern doublereal dsxt1_(integer *ijob, doublereal *d1, integer *n1, doublereal *d2, 
	integer *n2, doublereal *abstol, doublereal *ulp, doublereal *unfl);
extern /* Subroutine */ int dsyt21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublereal *a, integer *lda, doublereal *d__, doublereal *e, 
	doublereal *u, integer *ldu, doublereal *v, integer *ldv, doublereal *
	tau, doublereal *work, doublereal *result);
extern /* Subroutine */ int dsyt22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, doublereal *a, integer *lda, doublereal *d__, 
	doublereal *e, doublereal *u, integer *ldu, doublereal *v, integer *
	ldv, doublereal *tau, doublereal *work, doublereal *result);
extern integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4);
extern integer iparmq_(integer *ispec, char *name__, char *opts, integer *n, integer 
	*ilo, integer *ihi, integer *lwork);
extern int MAIN__(void);
extern /* Subroutine */ int sbdt01_(integer *m, integer *n, integer *kd, real *a, 
	integer *lda, real *q, integer *ldq, real *d__, real *e, real *pt, 
	integer *ldpt, real *work, real *resid);
extern /* Subroutine */ int sbdt02_(integer *m, integer *n, real *b, integer *ldb, 
	real *c__, integer *ldc, real *u, integer *ldu, real *work, real *
	resid);
extern /* Subroutine */ int sbdt03_(char *uplo, integer *n, integer *kd, real *d__, 
	real *e, real *u, integer *ldu, real *s, real *vt, integer *ldvt, 
	real *work, real *resid);
extern /* Subroutine */ int schkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, real *thresh, integer *nounit, real *a, 
	 integer *lda, real *ab, integer *ldab, real *bd, real *be, real *q, 
	integer *ldq, real *p, integer *ldp, real *c__, integer *ldc, real *
	cc, real *work, integer *lwork, real *result, integer *info);
extern /* Subroutine */ int schkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, real 
	*thresh, real *a, integer *lda, real *bd, real *be, real *s1, real *
	s2, real *x, integer *ldx, real *y, real *z__, real *q, integer *ldq, 
	real *pt, integer *ldpt, real *u, real *vt, real *work, integer *
	lwork, integer *iwork, integer *nout, integer *info);
extern /* Subroutine */ int schkbk_(integer *nin, integer *nout);
extern /* Subroutine */ int schkbl_(integer *nin, integer *nout);
extern /* Subroutine */ int schkec_(real *thresh, logical *tsterr, integer *nin, 
	integer *nout);
extern /* Subroutine */ int schkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, logical *tstdif, real *
	thrshn, integer *nounit, real *a, integer *lda, real *b, real *h__, 
	real *t, real *s1, real *s2, real *p1, real *p2, real *u, integer *
	ldu, real *v, real *q, real *z__, real *alphr1, real *alphi1, real *
	beta1, real *alphr3, real *alphi3, real *beta3, real *evectl, real *
	evectr, real *work, integer *lwork, logical *llwork, real *result, 
	integer *info);
extern /* Subroutine */ int schkgk_(integer *nin, integer *nout);
extern /* Subroutine */ int schkgl_(integer *nin, integer *nout);
extern /* Subroutine */ int schkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *h__, real *t1, real *t2, real *u, integer *ldu, 
	 real *z__, real *uz, real *wr1, real *wi1, real *wr3, real *wi3, 
	real *evectl, real *evectr, real *evecty, real *evectx, real *uu, 
	real *tau, real *work, integer *nwork, integer *iwork, logical *
	select, real *result, integer *info);
extern /* Subroutine */ int schksb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, real *
	thresh, integer *nounit, real *a, integer *lda, real *sd, real *se, 
	real *u, integer *ldu, real *work, integer *lwork, real *result, 
	integer *info);
extern /* Subroutine */ int schkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *ap, real *sd, real *se, real *d1, real *d2, 
	real *d3, real *d4, real *d5, real *wa1, real *wa2, real *wa3, real *
	wr, real *u, integer *ldu, real *v, real *vp, real *tau, real *z__, 
	real *work, integer *lwork, integer *iwork, integer *liwork, real *
	result, integer *info);
extern /* Subroutine */ int sckglm_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, real *a, real *af, real *b, real *bf, real *x, real *work, real 
	*rwork, integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int sckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	real *thresh, integer *nmax, real *a, real *af, real *aq, real *ar, 
	real *taua, real *b, real *bf, real *bz, real *bt, real *bwk, real *
	taub, real *work, real *rwork, integer *nin, integer *nout, integer *
	info);
extern /* Subroutine */ int sckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, real *a, real *af, real *b, real *bf, real *u, real *v, real *q, 
	 real *alpha, real *beta, real *r__, integer *iwork, real *work, real 
	*rwork, integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int scklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, real *a, real *af, real *b, real *bf, real *x, real *work, real 
	*rwork, integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int sdrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *b, real *s, real *t, real *q, integer *ldq, 
	real *z__, real *alphar, real *alphai, real *beta, real *work, 
	integer *lwork, real *result, logical *bwork, integer *info);
extern /* Subroutine */ int sdrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *b, real *s, real *t, real *q, integer *ldq, 
	real *z__, real *qe, integer *ldqe, real *alphar, real *alphai, real *
	beta, real *alphr1, real *alphi1, real *beta1, real *work, integer *
	lwork, real *result, integer *info);
extern /* Subroutine */ int sdrgsx_(integer *nsize, integer *ncmax, real *thresh, 
	integer *nin, integer *nout, real *a, integer *lda, real *b, real *ai, 
	 real *bi, real *z__, real *q, real *alphar, real *alphai, real *beta, 
	 real *c__, integer *ldc, real *s, real *work, integer *lwork, 
	integer *iwork, integer *liwork, logical *bwork, integer *info);
extern /* Subroutine */ int sdrgvx_(integer *nsize, real *thresh, integer *nin, 
	integer *nout, real *a, integer *lda, real *b, real *ai, real *bi, 
	real *alphar, real *alphai, real *beta, real *vl, real *vr, integer *
	ilo, integer *ihi, real *lscale, real *rscale, real *s, real *stru, 
	real *dif, real *diftru, real *work, integer *lwork, integer *iwork, 
	integer *liwork, real *result, logical *bwork, integer *info);
extern /* Subroutine */ int sdrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, real *thresh, real *
	a, integer *lda, real *u, integer *ldu, real *vt, integer *ldvt, real 
	*asav, real *usav, real *vtsav, real *s, real *ssav, real *e, real *
	work, integer *lwork, integer *iwork, integer *nout, integer *info);
extern /* Subroutine */ int sdrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *h__, real *ht, real *wr, real *wi, real *wrt, 
	real *wit, real *vs, integer *ldvs, real *result, real *work, integer 
	*nwork, integer *iwork, logical *bwork, integer *info);
extern /* Subroutine */ int sdrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *h__, real *wr, real *wi, real *wr1, real *wi1, 
	real *vl, integer *ldvl, real *vr, integer *ldvr, real *lre, integer *
	ldlre, real *result, real *work, integer *nwork, integer *iwork, 
	integer *info);
extern /* Subroutine */ int sdrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, real *thrshn, integer *
	nounit, real *a, integer *lda, real *b, real *s, real *t, real *s2, 
	real *t2, real *q, integer *ldq, real *z__, real *alphr1, real *
	alphi1, real *beta1, real *alphr2, real *alphi2, real *beta2, real *
	vl, real *vr, real *work, integer *lwork, real *result, integer *info);
extern /* Subroutine */ int sdrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *b, integer *ldb, real *d__, real *z__, integer 
	*ldz, real *ab, real *bb, real *ap, real *bp, real *work, integer *
	nwork, integer *iwork, integer *liwork, real *result, integer *info);
extern /* Subroutine */ int sdrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *d1, real *d2, real *d3, real *d4, real *eveigs, 
	 real *wa1, real *wa2, real *wa3, real *u, integer *ldu, real *v, 
	real *tau, real *z__, real *work, integer *lwork, integer *iwork, 
	integer *liwork, real *result, integer *info);
extern /* Subroutine */ int sdrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, real *a, integer *lda, real *h__, real *ht, real *wr, 
	 real *wi, real *wrt, real *wit, real *wrtmp, real *witmp, real *vs, 
	integer *ldvs, real *vs1, real *result, real *work, integer *lwork, 
	integer *iwork, logical *bwork, integer *info);
extern /* Subroutine */ int sdrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, real *a, integer *lda, real *h__, real *wr, real *wi, 
	 real *wr1, real *wi1, real *vl, integer *ldvl, real *vr, integer *
	ldvr, real *lre, integer *ldlre, real *rcondv, real *rcndv1, real *
	rcdvin, real *rconde, real *rcnde1, real *rcdein, real *scale, real *
	scale1, real *result, real *work, integer *nwork, integer *iwork, 
	integer *info);
extern /* Subroutine */ int serrbd_(char *path, integer *nunit);
extern /* Subroutine */ int serrec_(char *path, integer *nunit);
extern /* Subroutine */ int serred_(char *path, integer *nunit);
extern /* Subroutine */ int serrgg_(char *path, integer *nunit);
extern /* Subroutine */ int serrhs_(char *path, integer *nunit);
extern /* Subroutine */ int serrst_(char *path, integer *nunit);
extern /* Subroutine */ int sget02_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);
extern /* Subroutine */ int sget10_(integer *m, integer *n, real *a, integer *lda, 
	real *b, integer *ldb, real *work, real *result);
extern /* Subroutine */ int sget22_(char *transa, char *transe, char *transw, 
	integer *n, real *a, integer *lda, real *e, integer *lde, real *wr, 
	real *wi, real *work, real *result);
extern /* Subroutine */ int sget23_(logical *comp, char *balanc, integer *jtype, 
	real *thresh, integer *iseed, integer *nounit, integer *n, real *a, 
	integer *lda, real *h__, real *wr, real *wi, real *wr1, real *wi1, 
	real *vl, integer *ldvl, real *vr, integer *ldvr, real *lre, integer *
	ldlre, real *rcondv, real *rcndv1, real *rcdvin, real *rconde, real *
	rcnde1, real *rcdein, real *scale, real *scale1, real *result, real *
	work, integer *lwork, integer *iwork, integer *info);
extern /* Subroutine */ int sget24_(logical *comp, integer *jtype, real *thresh, 
	integer *iseed, integer *nounit, integer *n, real *a, integer *lda, 
	real *h__, real *ht, real *wr, real *wi, real *wrt, real *wit, real *
	wrtmp, real *witmp, real *vs, integer *ldvs, real *vs1, real *rcdein, 
	real *rcdvin, integer *nslct, integer *islct, real *result, real *
	work, integer *lwork, integer *iwork, logical *bwork, integer *info);
extern /* Subroutine */ int sget31_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int sget32_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int sget33_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int sget34_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int sget35_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int sget36_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int sget37_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int sget38_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int sget39_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);
extern /* Subroutine */ int sget51_(integer *itype, integer *n, real *a, integer *
	lda, real *b, integer *ldb, real *u, integer *ldu, real *v, integer *
	ldv, real *work, real *result);
extern /* Subroutine */ int sget52_(logical *left, integer *n, real *a, integer *lda, 
	 real *b, integer *ldb, real *e, integer *lde, real *alphar, real *
	alphai, real *beta, real *work, real *result);
extern /* Subroutine */ int sget53_(real *a, integer *lda, real *b, integer *ldb, 
	real *scale, real *wr, real *wi, real *result, integer *info);
extern /* Subroutine */ int sget54_(integer *n, real *a, integer *lda, real *b, 
	integer *ldb, real *s, integer *lds, real *t, integer *ldt, real *u, 
	integer *ldu, real *v, integer *ldv, real *work, real *result);
extern /* Subroutine */ int sglmts_(integer *n, integer *m, integer *p, real *a, 
	real *af, integer *lda, real *b, real *bf, integer *ldb, real *d__, 
	real *df, real *x, real *u, real *work, integer *lwork, real *rwork, 
	real *result);
extern /* Subroutine */ int sgqrts_(integer *n, integer *m, integer *p, real *a, 
	real *af, real *q, real *r__, integer *lda, real *taua, real *b, real 
	*bf, real *z__, real *t, real *bwk, integer *ldb, real *taub, real *
	work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int sgrqts_(integer *m, integer *p, integer *n, real *a, 
	real *af, real *q, real *r__, integer *lda, real *taua, real *b, real 
	*bf, real *z__, real *t, real *bwk, integer *ldb, real *taub, real *
	work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int sgsvts_(integer *m, integer *p, integer *n, real *a, 
	real *af, integer *lda, real *b, real *bf, integer *ldb, real *u, 
	integer *ldu, real *v, integer *ldv, real *q, integer *ldq, real *
	alpha, real *beta, real *r__, integer *ldr, integer *iwork, real *
	work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int shst01_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *h__, integer *ldh, real *q, integer *ldq, real *
	work, integer *lwork, real *result);
extern /* Subroutine */ int slafts_(char *type__, integer *m, integer *n, integer *
	imat, integer *ntests, real *result, integer *iseed, real *thresh, 
	integer *iounit, integer *ie);
extern /* Subroutine */ int slahd2_(integer *iounit, char *path);
extern /* Subroutine */ int slarfy_(char *uplo, integer *n, real *v, integer *incv, 
	real *tau, real *c__, integer *ldc, real *work);
extern /* Subroutine */ int slarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	real *a, integer *lda, real *x, integer *ldx, real *b, integer *ldb, 
	integer *iseed, integer *info);
extern /* Subroutine */ int slasum_(char *type__, integer *iounit, integer *ie, 
	integer *nrun);
extern /* Subroutine */ int slatb9_(char *path, integer *imat, integer *m, integer *
	p, integer *n, char *type__, integer *kla, integer *kua, integer *klb, 
	 integer *kub, real *anorm, real *bnorm, integer *modea, integer *
	modeb, real *cndnma, real *cndnmb, char *dista, char *distb);
extern /* Subroutine */ int slatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, integer *isign, real *amagn, real *rcond, real *triang, 
	integer *idist, integer *iseed, real *a, integer *lda);
extern logical slctes_(real *zr, real *zi, real *d__);
extern logical slctsx_(real *ar, real *ai, real *beta);
extern /* Subroutine */ int slsets_(integer *m, integer *p, integer *n, real *a, 
	real *af, integer *lda, real *b, real *bf, integer *ldb, real *c__, 
	real *cf, real *d__, real *df, real *x, real *work, integer *lwork, 
	real *rwork, real *result);
extern /* Subroutine */ int sort01_(char *rowcol, integer *m, integer *n, real *u, 
	integer *ldu, real *work, integer *lwork, real *resid);
extern /* Subroutine */ int sort03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, real *u, integer *ldu, real *v, integer *ldv, real *work, 
	integer *lwork, real *result, integer *info);
extern /* Subroutine */ int ssbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 real *a, integer *lda, real *d__, real *e, real *u, integer *ldu, 
	real *work, real *result);
extern /* Subroutine */ int ssgt01_(integer *itype, char *uplo, integer *n, integer *
	m, real *a, integer *lda, real *b, integer *ldb, real *z__, integer *
	ldz, real *d__, real *work, real *result);
extern logical sslect_(real *zr, real *zi);
extern /* Subroutine */ int sspt21_(integer *itype, char *uplo, integer *n, integer *
	kband, real *ap, real *d__, real *e, real *u, integer *ldu, real *vp, 
	real *tau, real *work, real *result);
extern /* Subroutine */ int sstech_(integer *n, real *a, real *b, real *eig, real *
	tol, real *work, integer *info);
extern /* Subroutine */ int sstect_(integer *n, real *a, real *b, real *shift, 
	integer *num);
extern /* Subroutine */ int sstt21_(integer *n, integer *kband, real *ad, real *ae, 
	real *sd, real *se, real *u, integer *ldu, real *work, real *result);
extern /* Subroutine */ int sstt22_(integer *n, integer *m, integer *kband, real *ad, 
	 real *ae, real *sd, real *se, real *u, integer *ldu, real *work, 
	integer *ldwork, real *result);
extern /* Subroutine */ int ssvdch_(integer *n, real *s, real *e, real *svd, real *
	tol, integer *info);
extern /* Subroutine */ int ssvdct_(integer *n, real *s, real *e, real *shift, 
	integer *num);
extern doublereal ssxt1_(integer *ijob, real *d1, integer *n1, real *d2, integer *n2, 
	 real *abstol, real *ulp, real *unfl);
extern /* Subroutine */ int ssyt21_(integer *itype, char *uplo, integer *n, integer *
	kband, real *a, integer *lda, real *d__, real *e, real *u, integer *
	ldu, real *v, integer *ldv, real *tau, real *work, real *result);
extern /* Subroutine */ int ssyt22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, real *a, integer *lda, real *d__, real *e, real *u, 
	 integer *ldu, real *v, integer *ldv, real *tau, real *work, real *
	result);
extern /* Subroutine */ int xlaenv_(integer *ispec, integer *nvalue);
extern /* Subroutine */ int zbdt01_(integer *m, integer *n, integer *kd, 
	doublecomplex *a, integer *lda, doublecomplex *q, integer *ldq, 
	doublereal *d__, doublereal *e, doublecomplex *pt, integer *ldpt, 
	doublecomplex *work, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zbdt02_(integer *m, integer *n, doublecomplex *b, 
	integer *ldb, doublecomplex *c__, integer *ldc, doublecomplex *u, 
	integer *ldu, doublecomplex *work, doublereal *rwork, doublereal *
	resid);
extern /* Subroutine */ int zbdt03_(char *uplo, integer *n, integer *kd, doublereal *
	d__, doublereal *e, doublecomplex *u, integer *ldu, doublereal *s, 
	doublecomplex *vt, integer *ldvt, doublecomplex *work, doublereal *
	resid);
extern /* Subroutine */ int zchkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *ab, integer *ldab, 
	doublereal *bd, doublereal *be, doublecomplex *q, integer *ldq, 
	doublecomplex *p, integer *ldp, doublecomplex *c__, integer *ldc, 
	doublecomplex *cc, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result, integer *info);
extern /* Subroutine */ int zchkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, 
	doublereal *thresh, doublecomplex *a, integer *lda, doublereal *bd, 
	doublereal *be, doublereal *s1, doublereal *s2, doublecomplex *x, 
	integer *ldx, doublecomplex *y, doublecomplex *z__, doublecomplex *q, 
	integer *ldq, doublecomplex *pt, integer *ldpt, doublecomplex *u, 
	doublecomplex *vt, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *nout, integer *info);
extern /* Subroutine */ int zchkbk_(integer *nin, integer *nout);
extern /* Subroutine */ int zchkbl_(integer *nin, integer *nout);
extern /* Subroutine */ int zchkec_(doublereal *thresh, logical *tsterr, integer *
	nin, integer *nout);
extern /* Subroutine */ int zchkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, logical *tstdif, 
	doublereal *thrshn, integer *nounit, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *h__, doublecomplex *t, doublecomplex 
	*s1, doublecomplex *s2, doublecomplex *p1, doublecomplex *p2, 
	doublecomplex *u, integer *ldu, doublecomplex *v, doublecomplex *q, 
	doublecomplex *z__, doublecomplex *alpha1, doublecomplex *beta1, 
	doublecomplex *alpha3, doublecomplex *beta3, doublecomplex *evectl, 
	doublecomplex *evectr, doublecomplex *work, integer *lwork, 
	doublereal *rwork, logical *llwork, doublereal *result, integer *info);
extern /* Subroutine */ int zchkgk_(integer *nin, integer *nout);
extern /* Subroutine */ int zchkgl_(integer *nin, integer *nout);
extern /* Subroutine */ int zchkhb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, 
	doublereal *thresh, integer *nounit, doublecomplex *a, integer *lda, 
	doublereal *sd, doublereal *se, doublecomplex *u, integer *ldu, 
	doublecomplex *work, integer *lwork, doublereal *rwork, doublereal *
	result, integer *info);
extern /* Subroutine */ int zchkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *h__, doublecomplex *t1, 
	 doublecomplex *t2, doublecomplex *u, integer *ldu, doublecomplex *
	z__, doublecomplex *uz, doublecomplex *w1, doublecomplex *w3, 
	doublecomplex *evectl, doublecomplex *evectr, doublecomplex *evecty, 
	doublecomplex *evectx, doublecomplex *uu, doublecomplex *tau, 
	doublecomplex *work, integer *nwork, doublereal *rwork, integer *
	iwork, logical *select, doublereal *result, integer *info);
extern /* Subroutine */ int zchkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *ap, doublereal *sd, 
	doublereal *se, doublereal *d1, doublereal *d2, doublereal *d3, 
	doublereal *d4, doublereal *d5, doublereal *wa1, doublereal *wa2, 
	doublereal *wa3, doublereal *wr, doublecomplex *u, integer *ldu, 
	doublecomplex *v, doublecomplex *vp, doublecomplex *tau, 
	doublecomplex *z__, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, doublereal *
	result, integer *info);
extern /* Subroutine */ int zckglm_(integer *nn, integer *nval, integer *mval, 
	integer *pval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublecomplex *a, doublecomplex *af, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *x, doublecomplex *work, doublereal *
	rwork, integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int zckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	doublereal *thresh, integer *nmax, doublecomplex *a, doublecomplex *
	af, doublecomplex *aq, doublecomplex *ar, doublecomplex *taua, 
	doublecomplex *b, doublecomplex *bf, doublecomplex *bz, doublecomplex 
	*bt, doublecomplex *bwk, doublecomplex *taub, doublecomplex *work, 
	doublereal *rwork, integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int zckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublecomplex *a, doublecomplex *af, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *u, doublecomplex *v, doublecomplex *
	q, doublereal *alpha, doublereal *beta, doublecomplex *r__, integer *
	iwork, doublecomplex *work, doublereal *rwork, integer *nin, integer *
	nout, integer *info);
extern /* Subroutine */ int zcklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublecomplex *a, doublecomplex *af, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *x, doublecomplex *work, doublereal *
	rwork, integer *nin, integer *nout, integer *info);
extern /* Subroutine */ int zdrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *b, doublecomplex *s, 
	doublecomplex *t, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *work, 
	integer *lwork, doublereal *rwork, doublereal *result, logical *bwork, 
	 integer *info);
extern /* Subroutine */ int zdrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *b, doublecomplex *s, 
	doublecomplex *t, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	doublecomplex *qe, integer *ldqe, doublecomplex *alpha, doublecomplex 
	*beta, doublecomplex *alpha1, doublecomplex *beta1, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result, integer *
	info);
extern /* Subroutine */ int zdrgsx_(integer *nsize, integer *ncmax, doublereal *
	thresh, integer *nin, integer *nout, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *ai, doublecomplex *bi, doublecomplex 
	*z__, doublecomplex *q, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *c__, integer *ldc, doublereal *s, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *iwork, integer *liwork, 
	logical *bwork, integer *info);
extern /* Subroutine */ int zdrgvx_(integer *nsize, doublereal *thresh, integer *nin, 
	 integer *nout, doublecomplex *a, integer *lda, doublecomplex *b, 
	doublecomplex *ai, doublecomplex *bi, doublecomplex *alpha, 
	doublecomplex *beta, doublecomplex *vl, doublecomplex *vr, integer *
	ilo, integer *ihi, doublereal *lscale, doublereal *rscale, doublereal 
	*s, doublereal *dtru, doublereal *dif, doublereal *diftru, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	iwork, integer *liwork, doublereal *result, logical *bwork, integer *
	info);
extern /* Subroutine */ int zdrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, doublereal *thresh, 
	doublecomplex *a, integer *lda, doublecomplex *u, integer *ldu, 
	doublecomplex *vt, integer *ldvt, doublecomplex *asav, doublecomplex *
	usav, doublecomplex *vtsav, doublereal *s, doublereal *ssav, 
	doublereal *e, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *iwork, integer *nounit, integer *info);
extern /* Subroutine */ int zdrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *h__, doublecomplex *ht, 
	 doublecomplex *w, doublecomplex *wt, doublecomplex *vs, integer *
	ldvs, doublereal *result, doublecomplex *work, integer *nwork, 
	doublereal *rwork, integer *iwork, logical *bwork, integer *info);
extern /* Subroutine */ int zdrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *h__, doublecomplex *w, 
	doublecomplex *w1, doublecomplex *vl, integer *ldvl, doublecomplex *
	vr, integer *ldvr, doublecomplex *lre, integer *ldlre, doublereal *
	result, doublecomplex *work, integer *nwork, doublereal *rwork, 
	integer *iwork, integer *info);
extern /* Subroutine */ int zdrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, doublereal *
	thrshn, integer *nounit, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *s, doublecomplex *t, doublecomplex *
	s2, doublecomplex *t2, doublecomplex *q, integer *ldq, doublecomplex *
	z__, doublecomplex *alpha1, doublecomplex *beta1, doublecomplex *
	alpha2, doublecomplex *beta2, doublecomplex *vl, doublecomplex *vr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, doublereal *
	result, integer *info);
extern /* Subroutine */ int zdrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *d__, doublecomplex *z__, integer *ldz, doublecomplex *ab, 
	doublecomplex *bb, doublecomplex *ap, doublecomplex *bp, 
	doublecomplex *work, integer *nwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, doublereal *result, integer *
	info);
extern /* Subroutine */ int zdrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublereal *d1, doublereal *d2, 
	doublereal *d3, doublereal *wa1, doublereal *wa2, doublereal *wa3, 
	doublecomplex *u, integer *ldu, doublecomplex *v, doublecomplex *tau, 
	doublecomplex *z__, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, doublereal *
	result, integer *info);
extern /* Subroutine */ int zdrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublecomplex *a, integer *lda, doublecomplex *h__, 
	doublecomplex *ht, doublecomplex *w, doublecomplex *wt, doublecomplex 
	*wtmp, doublecomplex *vs, integer *ldvs, doublecomplex *vs1, 
	doublereal *result, doublecomplex *work, integer *lwork, doublereal *
	rwork, logical *bwork, integer *info);
extern /* Subroutine */ int zdrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublecomplex *a, integer *lda, doublecomplex *h__, 
	doublecomplex *w, doublecomplex *w1, doublecomplex *vl, integer *ldvl, 
	 doublecomplex *vr, integer *ldvr, doublecomplex *lre, integer *ldlre, 
	 doublereal *rcondv, doublereal *rcndv1, doublereal *rcdvin, 
	doublereal *rconde, doublereal *rcnde1, doublereal *rcdein, 
	doublereal *scale, doublereal *scale1, doublereal *result, 
	doublecomplex *work, integer *nwork, doublereal *rwork, integer *info);
extern /* Subroutine */ int zerrbd_(char *path, integer *nunit);
extern /* Subroutine */ int zerrec_(char *path, integer *nunit);
extern /* Subroutine */ int zerred_(char *path, integer *nunit);
extern /* Subroutine */ int zerrgg_(char *path, integer *nunit);
extern /* Subroutine */ int zerrhs_(char *path, integer *nunit);
extern /* Subroutine */ int zerrst_(char *path, integer *nunit);
extern /* Subroutine */ int zget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zget10_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublecomplex *work, 
	doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zget22_(char *transa, char *transe, char *transw, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *e, integer 
	*lde, doublecomplex *w, doublecomplex *work, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int zget23_(logical *comp, integer *isrt, char *balanc, 
	integer *jtype, doublereal *thresh, integer *iseed, integer *nounit, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *h__, 
	doublecomplex *w, doublecomplex *w1, doublecomplex *vl, integer *ldvl, 
	 doublecomplex *vr, integer *ldvr, doublecomplex *lre, integer *ldlre, 
	 doublereal *rcondv, doublereal *rcndv1, doublereal *rcdvin, 
	doublereal *rconde, doublereal *rcnde1, doublereal *rcdein, 
	doublereal *scale, doublereal *scale1, doublereal *result, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);
extern /* Subroutine */ int zget24_(logical *comp, integer *jtype, doublereal *
	thresh, integer *iseed, integer *nounit, integer *n, doublecomplex *a, 
	 integer *lda, doublecomplex *h__, doublecomplex *ht, doublecomplex *
	w, doublecomplex *wt, doublecomplex *wtmp, doublecomplex *vs, integer 
	*ldvs, doublecomplex *vs1, doublereal *rcdein, doublereal *rcdvin, 
	integer *nslct, integer *islct, integer *isrt, doublereal *result, 
	doublecomplex *work, integer *lwork, doublereal *rwork, logical *
	bwork, integer *info);
extern /* Subroutine */ int zget35_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int zget36_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int zget37_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int zget38_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);
extern /* Subroutine */ int zget51_(integer *itype, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublecomplex *u, 
	integer *ldu, doublecomplex *v, integer *ldv, doublecomplex *work, 
	doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zget52_(logical *left, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublecomplex *e, 
	integer *lde, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *work, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zget54_(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *s, integer *lds, 
	doublecomplex *t, integer *ldt, doublecomplex *u, integer *ldu, 
	doublecomplex *v, integer *ldv, doublecomplex *work, doublereal *
	result);
extern /* Subroutine */ int zglmts_(integer *n, integer *m, integer *p, 
	doublecomplex *a, doublecomplex *af, integer *lda, doublecomplex *b, 
	doublecomplex *bf, integer *ldb, doublecomplex *d__, doublecomplex *
	df, doublecomplex *x, doublecomplex *u, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zgqrts_(integer *n, integer *m, integer *p, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *taua, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *z__, doublecomplex *t, 
	doublecomplex *bwk, integer *ldb, doublecomplex *taub, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zgrqts_(integer *m, integer *p, integer *n, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *taua, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *z__, doublecomplex *t, 
	doublecomplex *bwk, integer *ldb, doublecomplex *taub, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zgsvts_(integer *m, integer *p, integer *n, 
	doublecomplex *a, doublecomplex *af, integer *lda, doublecomplex *b, 
	doublecomplex *bf, integer *ldb, doublecomplex *u, integer *ldu, 
	doublecomplex *v, integer *ldv, doublecomplex *q, integer *ldq, 
	doublereal *alpha, doublereal *beta, doublecomplex *r__, integer *ldr, 
	 integer *iwork, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);
extern /* Subroutine */ int zhbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	doublecomplex *u, integer *ldu, doublecomplex *work, doublereal *
	rwork, doublereal *result);
extern /* Subroutine */ int zhet21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	 doublecomplex *u, integer *ldu, doublecomplex *v, integer *ldv, 
	doublecomplex *tau, doublecomplex *work, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int zhet22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, doublecomplex *a, integer *lda, doublereal *d__, 
	doublereal *e, doublecomplex *u, integer *ldu, doublecomplex *v, 
	integer *ldv, doublecomplex *tau, doublecomplex *work, doublereal *
	rwork, doublereal *result);
extern /* Subroutine */ int zhpt21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublecomplex *ap, doublereal *d__, doublereal *e, 
	doublecomplex *u, integer *ldu, doublecomplex *vp, doublecomplex *tau, 
	 doublecomplex *work, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zhst01_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *h__, integer *ldh, 
	doublecomplex *q, integer *ldq, doublecomplex *work, integer *lwork, 
	doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zlarfy_(char *uplo, integer *n, doublecomplex *v, 
	integer *incv, doublecomplex *tau, doublecomplex *c__, integer *ldc, 
	doublecomplex *work);
extern /* Subroutine */ int zlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, integer *iseed, integer *info);
extern /* Subroutine */ int zlatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, logical *rsign, doublereal *amagn, doublereal *rcond, 
	doublereal *triang, integer *idist, integer *iseed, doublecomplex *a, 
	integer *lda);
extern logical zlctes_(doublecomplex *z__, doublecomplex *d__);
extern logical zlctsx_(doublecomplex *alpha, doublecomplex *beta);
extern /* Subroutine */ int zlsets_(integer *m, integer *p, integer *n, 
	doublecomplex *a, doublecomplex *af, integer *lda, doublecomplex *b, 
	doublecomplex *bf, integer *ldb, doublecomplex *c__, doublecomplex *
	cf, doublecomplex *d__, doublecomplex *df, doublecomplex *x, 
	doublecomplex *work, integer *lwork, doublereal *rwork, doublereal *
	result);
extern /* Subroutine */ int zsbmv_(char *uplo, integer *n, integer *k, doublecomplex 
	*alpha, doublecomplex *a, integer *lda, doublecomplex *x, integer *
	incx, doublecomplex *beta, doublecomplex *y, integer *incy);
extern /* Subroutine */ int zsgt01_(integer *itype, char *uplo, integer *n, integer *
	m, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *z__, integer *ldz, doublereal *d__, doublecomplex *
	work, doublereal *rwork, doublereal *result);
extern logical zslect_(doublecomplex *z__);
extern /* Subroutine */ int zstt21_(integer *n, integer *kband, doublereal *ad, 
	doublereal *ae, doublereal *sd, doublereal *se, doublecomplex *u, 
	integer *ldu, doublecomplex *work, doublereal *rwork, doublereal *
	result);
extern /* Subroutine */ int zstt22_(integer *n, integer *m, integer *kband, 
	doublereal *ad, doublereal *ae, doublereal *sd, doublereal *se, 
	doublecomplex *u, integer *ldu, doublecomplex *work, integer *ldwork, 
	doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zunt01_(char *rowcol, integer *m, integer *n, 
	doublecomplex *u, integer *ldu, doublecomplex *work, integer *lwork, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zunt03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, doublecomplex *u, integer *ldu, doublecomplex *v, integer 
	*ldv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	doublereal *result, integer *info);
#endif
