/* alahdg.c */
F2CSUB alahdg_(integer *iounit, char *path);

/* alareq.c */
F2CSUB alareq_(char *path, integer *nmats, logical *dotype, 
	integer *ntypes, integer *nin, integer *nout);

/* alarqg.c */
F2CSUB alarqg_(char *path, integer *nmats, logical *dotype, 
	integer *ntypes, integer *nin, integer *nout);

/* alasmg.c */
F2CSUB alasmg_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);

/* alasum.c */
F2CSUB alasum_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);

/* alasvm.c */
F2CSUB alasvm_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);

/* cbdt01.c */
F2CSUB cbdt01_(integer *m, integer *n, integer *kd, complex *a, 
	integer *lda, complex *q, integer *ldq, real *d__, real *e, complex *
	pt, integer *ldpt, complex *work, real *rwork, real *resid);

/* cbdt02.c */
F2CSUB cbdt02_(integer *m, integer *n, complex *b, integer *ldb, 
	 complex *c__, integer *ldc, complex *u, integer *ldu, complex *work, 
	real *rwork, real *resid);

/* cbdt03.c */
F2CSUB cbdt03_(char *uplo, integer *n, integer *kd, real *d__, 
	real *e, complex *u, integer *ldu, real *s, complex *vt, integer *
	ldvt, complex *work, real *resid);

/* cchkbb.c */
F2CSUB cchkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, real *thresh, integer *nounit, complex 
	*a, integer *lda, complex *ab, integer *ldab, real *bd, real *be, 
	complex *q, integer *ldq, complex *p, integer *ldp, complex *c__, 
	integer *ldc, complex *cc, complex *work, integer *lwork, real *rwork, 
	 real *result, integer *info);

/* cchkbd.c */
F2CSUB cchkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, real 
	*thresh, complex *a, integer *lda, real *bd, real *be, real *s1, real 
	*s2, complex *x, integer *ldx, complex *y, complex *z__, complex *q, 
	integer *ldq, complex *pt, integer *ldpt, complex *u, complex *vt, 
	complex *work, integer *lwork, real *rwork, integer *nout, integer *
	info);

/* cchkbk.c */
F2CSUB cchkbk_(integer *nin, integer *nout);

/* cchkbl.c */
F2CSUB cchkbl_(integer *nin, integer *nout);

/* cchkec.c */
F2CSUB cchkec_(real *thresh, logical *tsterr, integer *nin, 
	integer *nout);

/* Main program */ int MAIN__(void);

/* cchkgg.c */
F2CSUB cchkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, logical *tstdif, real *
	thrshn, integer *nounit, complex *a, integer *lda, complex *b, 
	complex *h__, complex *t, complex *s1, complex *s2, complex *p1, 
	complex *p2, complex *u, integer *ldu, complex *v, complex *q, 
	complex *z__, complex *alpha1, complex *beta1, complex *alpha3, 
	complex *beta3, complex *evectl, complex *evectr, complex *work, 
	integer *lwork, real *rwork, logical *llwork, real *result, integer *
	info);

/* cchkgk.c */
F2CSUB cchkgk_(integer *nin, integer *nout);

/* cchkgl.c */
F2CSUB cchkgl_(integer *nin, integer *nout);

/* cchkhb.c */
F2CSUB cchkhb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, real *
	thresh, integer *nounit, complex *a, integer *lda, real *sd, real *se, 
	 complex *u, integer *ldu, complex *work, integer *lwork, real *rwork, 
	 real *result, integer *info);

/* cchkhs.c */
F2CSUB cchkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *h__, complex *t1, complex *t2, 
	complex *u, integer *ldu, complex *z__, complex *uz, complex *w1, 
	complex *w3, complex *evectl, complex *evectr, complex *evecty, 
	complex *evectx, complex *uu, complex *tau, complex *work, integer *
	nwork, real *rwork, integer *iwork, logical *select, real *result, 
	integer *info);

/* cchkst.c */
F2CSUB cchkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *ap, real *sd, real *se, real *d1, 
	real *d2, real *d3, real *d4, real *d5, real *wa1, real *wa2, real *
	wa3, real *wr, complex *u, integer *ldu, complex *v, complex *vp, 
	complex *tau, complex *z__, complex *work, integer *lwork, real *
	rwork, integer *lrwork, integer *iwork, integer *liwork, real *result, 
	 integer *info);

/* cckglm.c */
F2CSUB cckglm_(integer *nn, integer *nval, integer *mval, 
	integer *pval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, complex *a, complex *af, complex *b, complex *bf, complex *x, 
	complex *work, real *rwork, integer *nin, integer *nout, integer *
	info);

/* cckgqr.c */
F2CSUB cckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	real *thresh, integer *nmax, complex *a, complex *af, complex *aq, 
	complex *ar, complex *taua, complex *b, complex *bf, complex *bz, 
	complex *bt, complex *bwk, complex *taub, complex *work, real *rwork, 
	integer *nin, integer *nout, integer *info);

/* cckgsv.c */
F2CSUB cckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, complex *a, complex *af, complex *b, complex *bf, complex *u, 
	complex *v, complex *q, real *alpha, real *beta, complex *r__, 
	integer *iwork, complex *work, real *rwork, integer *nin, integer *
	nout, integer *info);

/* ccklse.c */
F2CSUB ccklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, complex *a, complex *af, complex *b, complex *bf, complex *x, 
	complex *work, real *rwork, integer *nin, integer *nout, integer *
	info);

/* cdrges.c */
F2CSUB cdrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *b, complex *s, complex *t, complex 
	*q, integer *ldq, complex *z__, complex *alpha, complex *beta, 
	complex *work, integer *lwork, real *rwork, real *result, logical *
	bwork, integer *info);

/* cdrgev.c */
F2CSUB cdrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *b, complex *s, complex *t, complex 
	*q, integer *ldq, complex *z__, complex *qe, integer *ldqe, complex *
	alpha, complex *beta, complex *alpha1, complex *beta1, complex *work, 
	integer *lwork, real *rwork, real *result, integer *info);

/* cdrgsx.c */
F2CSUB cdrgsx_(integer *nsize, integer *ncmax, real *thresh, 
	integer *nin, integer *nout, complex *a, integer *lda, complex *b, 
	complex *ai, complex *bi, complex *z__, complex *q, complex *alpha, 
	complex *beta, complex *c__, integer *ldc, real *s, complex *work, 
	integer *lwork, real *rwork, integer *iwork, integer *liwork, logical 
	*bwork, integer *info);

/* cdrgvx.c */
F2CSUB cdrgvx_(integer *nsize, real *thresh, integer *nin, 
	integer *nout, complex *a, integer *lda, complex *b, complex *ai, 
	complex *bi, complex *alpha, complex *beta, complex *vl, complex *vr, 
	integer *ilo, integer *ihi, real *lscale, real *rscale, real *s, real 
	*stru, real *dif, real *diftru, complex *work, integer *lwork, real *
	rwork, integer *iwork, integer *liwork, real *result, logical *bwork, 
	integer *info);

/* cdrvbd.c */
F2CSUB cdrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, real *thresh, 
	complex *a, integer *lda, complex *u, integer *ldu, complex *vt, 
	integer *ldvt, complex *asav, complex *usav, complex *vtsav, real *s, 
	real *ssav, real *e, complex *work, integer *lwork, real *rwork, 
	integer *iwork, integer *nounit, integer *info);

/* cdrves.c */
F2CSUB cdrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *h__, complex *ht, complex *w, 
	complex *wt, complex *vs, integer *ldvs, real *result, complex *work, 
	integer *nwork, real *rwork, integer *iwork, logical *bwork, integer *
	info);

/* cdrvev.c */
F2CSUB cdrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *h__, complex *w, complex *w1, 
	complex *vl, integer *ldvl, complex *vr, integer *ldvr, complex *lre, 
	integer *ldlre, real *result, complex *work, integer *nwork, real *
	rwork, integer *iwork, integer *info);

/* cdrvgg.c */
F2CSUB cdrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, real *thrshn, integer *
	nounit, complex *a, integer *lda, complex *b, complex *s, complex *t, 
	complex *s2, complex *t2, complex *q, integer *ldq, complex *z__, 
	complex *alpha1, complex *beta1, complex *alpha2, complex *beta2, 
	complex *vl, complex *vr, complex *work, integer *lwork, real *rwork, 
	real *result, integer *info);

/* cdrvsg.c */
F2CSUB cdrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, complex *b, integer *ldb, real *d__, 
	complex *z__, integer *ldz, complex *ab, complex *bb, complex *ap, 
	complex *bp, complex *work, integer *nwork, real *rwork, integer *
	lrwork, integer *iwork, integer *liwork, real *result, integer *info);

/* cdrvst.c */
F2CSUB cdrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, 
	complex *a, integer *lda, real *d1, real *d2, real *d3, real *wa1, 
	real *wa2, real *wa3, complex *u, integer *ldu, complex *v, complex *
	tau, complex *z__, complex *work, integer *lwork, real *rwork, 
	integer *lrwork, integer *iwork, integer *liwork, real *result, 
	integer *info);

/* cdrvsx.c */
F2CSUB cdrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, complex *a, integer *lda, complex *h__, complex *ht, 
	complex *w, complex *wt, complex *wtmp, complex *vs, integer *ldvs, 
	complex *vs1, real *result, complex *work, integer *lwork, real *
	rwork, logical *bwork, integer *info);

/* cdrvvx.c */
F2CSUB cdrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, complex *a, integer *lda, complex *h__, complex *w, 
	complex *w1, complex *vl, integer *ldvl, complex *vr, integer *ldvr, 
	complex *lre, integer *ldlre, real *rcondv, real *rcndv1, real *
	rcdvin, real *rconde, real *rcnde1, real *rcdein, real *scale, real *
	scale1, real *result, complex *work, integer *nwork, real *rwork, 
	integer *info);

/* cerrbd.c */
F2CSUB cerrbd_(char *path, integer *nunit);

/* cerrec.c */
F2CSUB cerrec_(char *path, integer *nunit);

/* cerred.c */
F2CSUB cerred_(char *path, integer *nunit);

/* cerrgg.c */
F2CSUB cerrgg_(char *path, integer *nunit);

/* cerrhs.c */
F2CSUB cerrhs_(char *path, integer *nunit);

/* cerrst.c */
F2CSUB cerrst_(char *path, integer *nunit);

/* cget02.c */
F2CSUB cget02_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);

/* cget10.c */
F2CSUB cget10_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *b, integer *ldb, complex *work, real *rwork, real *result);

/* cget22.c */
F2CSUB cget22_(char *transa, char *transe, char *transw, 
	integer *n, complex *a, integer *lda, complex *e, integer *lde, 
	complex *w, complex *work, real *rwork, real *result);

/* cget23.c */
F2CSUB cget23_(logical *comp, integer *isrt, char *balanc, 
	integer *jtype, real *thresh, integer *iseed, integer *nounit, 
	integer *n, complex *a, integer *lda, complex *h__, complex *w, 
	complex *w1, complex *vl, integer *ldvl, complex *vr, integer *ldvr, 
	complex *lre, integer *ldlre, real *rcondv, real *rcndv1, real *
	rcdvin, real *rconde, real *rcnde1, real *rcdein, real *scale, real *
	scale1, real *result, complex *work, integer *lwork, real *rwork, 
	integer *info);

/* cget24.c */
F2CSUB cget24_(logical *comp, integer *jtype, real *thresh, 
	integer *iseed, integer *nounit, integer *n, complex *a, integer *lda, 
	 complex *h__, complex *ht, complex *w, complex *wt, complex *wtmp, 
	complex *vs, integer *ldvs, complex *vs1, real *rcdein, real *rcdvin, 
	integer *nslct, integer *islct, integer *isrt, real *result, complex *
	work, integer *lwork, real *rwork, logical *bwork, integer *info);

/* cget35.c */
F2CSUB cget35_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* cget36.c */
F2CSUB cget36_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* cget37.c */
F2CSUB cget37_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* cget38.c */
F2CSUB cget38_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* cget51.c */
F2CSUB cget51_(integer *itype, integer *n, complex *a, integer *
	lda, complex *b, integer *ldb, complex *u, integer *ldu, complex *v, 
	integer *ldv, complex *work, real *rwork, real *result);

/* cget52.c */
F2CSUB cget52_(logical *left, integer *n, complex *a, integer *
	lda, complex *b, integer *ldb, complex *e, integer *lde, complex *
	alpha, complex *beta, complex *work, real *rwork, real *result);

/* cget54.c */
F2CSUB cget54_(integer *n, complex *a, integer *lda, complex *b, 
	 integer *ldb, complex *s, integer *lds, complex *t, integer *ldt, 
	complex *u, integer *ldu, complex *v, integer *ldv, complex *work, 
	real *result);

/* cglmts.c */
F2CSUB cglmts_(integer *n, integer *m, integer *p, complex *a, 
	complex *af, integer *lda, complex *b, complex *bf, integer *ldb, 
	complex *d__, complex *df, complex *x, complex *u, complex *work, 
	integer *lwork, real *rwork, real *result);

/* cgqrts.c */
F2CSUB cgqrts_(integer *n, integer *m, integer *p, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *taua, 
	complex *b, complex *bf, complex *z__, complex *t, complex *bwk, 
	integer *ldb, complex *taub, complex *work, integer *lwork, real *
	rwork, real *result);

/* cgrqts.c */
F2CSUB cgrqts_(integer *m, integer *p, integer *n, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *taua, 
	complex *b, complex *bf, complex *z__, complex *t, complex *bwk, 
	integer *ldb, complex *taub, complex *work, integer *lwork, real *
	rwork, real *result);

/* cgsvts.c */
F2CSUB cgsvts_(integer *m, integer *p, integer *n, complex *a, 
	complex *af, integer *lda, complex *b, complex *bf, integer *ldb, 
	complex *u, integer *ldu, complex *v, integer *ldv, complex *q, 
	integer *ldq, real *alpha, real *beta, complex *r__, integer *ldr, 
	integer *iwork, complex *work, integer *lwork, real *rwork, real *
	result);

/* chbt21.c */
F2CSUB chbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 complex *a, integer *lda, real *d__, real *e, complex *u, integer *
	ldu, complex *work, real *rwork, real *result);

/* chet21.c */
F2CSUB chet21_(integer *itype, char *uplo, integer *n, integer *
	kband, complex *a, integer *lda, real *d__, real *e, complex *u, 
	integer *ldu, complex *v, integer *ldv, complex *tau, complex *work, 
	real *rwork, real *result);

/* chet22.c */
F2CSUB chet22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, complex *a, integer *lda, real *d__, real *e, 
	complex *u, integer *ldu, complex *v, integer *ldv, complex *tau, 
	complex *work, real *rwork, real *result);

/* chkxer.c */
F2CSUB chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);

/* chpt21.c */
F2CSUB chpt21_(integer *itype, char *uplo, integer *n, integer *
	kband, complex *ap, real *d__, real *e, complex *u, integer *ldu, 
	complex *vp, complex *tau, complex *work, real *rwork, real *result);

/* chst01.c */
F2CSUB chst01_(integer *n, integer *ilo, integer *ihi, complex *
	a, integer *lda, complex *h__, integer *ldh, complex *q, integer *ldq, 
	 complex *work, integer *lwork, real *rwork, real *result);

/* clarfy.c */
F2CSUB clarfy_(char *uplo, integer *n, complex *v, integer *
	incv, complex *tau, complex *c__, integer *ldc, complex *work);

/* clarhs.c */
F2CSUB clarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, integer *iseed, integer *info);

/* clatm4.c */
F2CSUB clatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, logical *rsign, real *amagn, real *rcond, real *triang, 
	integer *idist, integer *iseed, complex *a, integer *lda);

/* clctes.c */
logical clctes_(complex *z__, complex *d__);

/* clctsx.c */
logical clctsx_(complex *alpha, complex *beta);

/* clsets.c */
F2CSUB clsets_(integer *m, integer *p, integer *n, complex *a, 
	complex *af, integer *lda, complex *b, complex *bf, integer *ldb, 
	complex *c__, complex *cf, complex *d__, complex *df, complex *x, 
	complex *work, integer *lwork, real *rwork, real *result);

/* csbmv.c */
F2CSUB csbmv_(char *uplo, integer *n, integer *k, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);

/* csgt01.c */
F2CSUB csgt01_(integer *itype, char *uplo, integer *n, integer *
	m, complex *a, integer *lda, complex *b, integer *ldb, complex *z__, 
	integer *ldz, real *d__, complex *work, real *rwork, real *result);

/* cslect.c */
logical cslect_(complex *z__);

/* cstt21.c */
F2CSUB cstt21_(integer *n, integer *kband, real *ad, real *ae, 
	real *sd, real *se, complex *u, integer *ldu, complex *work, real *
	rwork, real *result);

/* cstt22.c */
F2CSUB cstt22_(integer *n, integer *m, integer *kband, real *ad, 
	 real *ae, real *sd, real *se, complex *u, integer *ldu, complex *
	work, integer *ldwork, real *rwork, real *result);

/* cunt01.c */
F2CSUB cunt01_(char *rowcol, integer *m, integer *n, complex *u, 
	 integer *ldu, complex *work, integer *lwork, real *rwork, real *
	resid);

/* cunt03.c */
F2CSUB cunt03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, complex *u, integer *ldu, complex *v, integer *ldv, 
	complex *work, integer *lwork, real *rwork, real *result, integer *
	info);

/* dbdt01.c */
F2CSUB dbdt01_(integer *m, integer *n, integer *kd, doublereal *
	a, integer *lda, doublereal *q, integer *ldq, doublereal *d__, 
	doublereal *e, doublereal *pt, integer *ldpt, doublereal *work, 
	doublereal *resid);

/* dbdt02.c */
F2CSUB dbdt02_(integer *m, integer *n, doublereal *b, integer *
	ldb, doublereal *c__, integer *ldc, doublereal *u, integer *ldu, 
	doublereal *work, doublereal *resid);

/* dbdt03.c */
F2CSUB dbdt03_(char *uplo, integer *n, integer *kd, doublereal *
	d__, doublereal *e, doublereal *u, integer *ldu, doublereal *s, 
	doublereal *vt, integer *ldvt, doublereal *work, doublereal *resid);

/* dchkbb.c */
F2CSUB dchkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *ab, integer *ldab, 
	doublereal *bd, doublereal *be, doublereal *q, integer *ldq, 
	doublereal *p, integer *ldp, doublereal *c__, integer *ldc, 
	doublereal *cc, doublereal *work, integer *lwork, doublereal *result, 
	integer *info);

/* dchkbd.c */
F2CSUB dchkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, 
	doublereal *thresh, doublereal *a, integer *lda, doublereal *bd, 
	doublereal *be, doublereal *s1, doublereal *s2, doublereal *x, 
	integer *ldx, doublereal *y, doublereal *z__, doublereal *q, integer *
	ldq, doublereal *pt, integer *ldpt, doublereal *u, doublereal *vt, 
	doublereal *work, integer *lwork, integer *iwork, integer *nout, 
	integer *info);

/* dchkbk.c */
F2CSUB dchkbk_(integer *nin, integer *nout);

/* dchkbl.c */
F2CSUB dchkbl_(integer *nin, integer *nout);

/* dchkec.c */
F2CSUB dchkec_(doublereal *thresh, logical *tsterr, integer *
	nin, integer *nout);

/* dchkgg.c */
F2CSUB dchkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, logical *tstdif, 
	doublereal *thrshn, integer *nounit, doublereal *a, integer *lda, 
	doublereal *b, doublereal *h__, doublereal *t, doublereal *s1, 
	doublereal *s2, doublereal *p1, doublereal *p2, doublereal *u, 
	integer *ldu, doublereal *v, doublereal *q, doublereal *z__, 
	doublereal *alphr1, doublereal *alphi1, doublereal *beta1, doublereal 
	*alphr3, doublereal *alphi3, doublereal *beta3, doublereal *evectl, 
	doublereal *evectr, doublereal *work, integer *lwork, logical *llwork, 
	 doublereal *result, integer *info);

/* dchkgk.c */
F2CSUB dchkgk_(integer *nin, integer *nout);

/* dchkgl.c */
F2CSUB dchkgl_(integer *nin, integer *nout);

/* dchkhs.c */
F2CSUB dchkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *t1, 
	doublereal *t2, doublereal *u, integer *ldu, doublereal *z__, 
	doublereal *uz, doublereal *wr1, doublereal *wi1, doublereal *wr3, 
	doublereal *wi3, doublereal *evectl, doublereal *evectr, doublereal *
	evecty, doublereal *evectx, doublereal *uu, doublereal *tau, 
	doublereal *work, integer *nwork, integer *iwork, logical *select, 
	doublereal *result, integer *info);

/* dchksb.c */
F2CSUB dchksb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, 
	doublereal *thresh, integer *nounit, doublereal *a, integer *lda, 
	doublereal *sd, doublereal *se, doublereal *u, integer *ldu, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);

/* dchkst.c */
F2CSUB dchkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *ap, doublereal *sd, 
	doublereal *se, doublereal *d1, doublereal *d2, doublereal *d3, 
	doublereal *d4, doublereal *d5, doublereal *wa1, doublereal *wa2, 
	doublereal *wa3, doublereal *wr, doublereal *u, integer *ldu, 
	doublereal *v, doublereal *vp, doublereal *tau, doublereal *z__, 
	doublereal *work, integer *lwork, integer *iwork, integer *liwork, 
	doublereal *result, integer *info);

/* dckglm.c */
F2CSUB dckglm_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublereal *a, doublereal *af, doublereal *b, 
	doublereal *bf, doublereal *x, doublereal *work, doublereal *rwork, 
	integer *nin, integer *nout, integer *info);

/* dckgqr.c */
F2CSUB dckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	doublereal *thresh, integer *nmax, doublereal *a, doublereal *af, 
	doublereal *aq, doublereal *ar, doublereal *taua, doublereal *b, 
	doublereal *bf, doublereal *bz, doublereal *bt, doublereal *bwk, 
	doublereal *taub, doublereal *work, doublereal *rwork, integer *nin, 
	integer *nout, integer *info);

/* dckgsv.c */
F2CSUB dckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublereal *a, doublereal *af, doublereal *b, 
	doublereal *bf, doublereal *u, doublereal *v, doublereal *q, 
	doublereal *alpha, doublereal *beta, doublereal *r__, integer *iwork, 
	doublereal *work, doublereal *rwork, integer *nin, integer *nout, 
	integer *info);

/* dcklse.c */
F2CSUB dcklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublereal *a, doublereal *af, doublereal *b, 
	doublereal *bf, doublereal *x, doublereal *work, doublereal *rwork, 
	integer *nin, integer *nout, integer *info);

/* ddrges.c */
F2CSUB ddrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *b, doublereal *s, doublereal 
	*t, doublereal *q, integer *ldq, doublereal *z__, doublereal *alphar, 
	doublereal *alphai, doublereal *beta, doublereal *work, integer *
	lwork, doublereal *result, logical *bwork, integer *info);

/* ddrgev.c */
F2CSUB ddrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *b, doublereal *s, doublereal 
	*t, doublereal *q, integer *ldq, doublereal *z__, doublereal *qe, 
	integer *ldqe, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *alphr1, doublereal *alphi1, doublereal *beta1, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);

/* ddrgsx.c */
F2CSUB ddrgsx_(integer *nsize, integer *ncmax, doublereal *
	thresh, integer *nin, integer *nout, doublereal *a, integer *lda, 
	doublereal *b, doublereal *ai, doublereal *bi, doublereal *z__, 
	doublereal *q, doublereal *alphar, doublereal *alphai, doublereal *
	beta, doublereal *c__, integer *ldc, doublereal *s, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, logical *bwork, 
	integer *info);

/* ddrgvx.c */
F2CSUB ddrgvx_(integer *nsize, doublereal *thresh, integer *nin, 
	 integer *nout, doublereal *a, integer *lda, doublereal *b, 
	doublereal *ai, doublereal *bi, doublereal *alphar, doublereal *
	alphai, doublereal *beta, doublereal *vl, doublereal *vr, integer *
	ilo, integer *ihi, doublereal *lscale, doublereal *rscale, doublereal 
	*s, doublereal *dtru, doublereal *dif, doublereal *diftru, doublereal 
	*work, integer *lwork, integer *iwork, integer *liwork, doublereal *
	result, logical *bwork, integer *info);

/* ddrvbd.c */
F2CSUB ddrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, doublereal *thresh, 
	doublereal *a, integer *lda, doublereal *u, integer *ldu, doublereal *
	vt, integer *ldvt, doublereal *asav, doublereal *usav, doublereal *
	vtsav, doublereal *s, doublereal *ssav, doublereal *e, doublereal *
	work, integer *lwork, integer *iwork, integer *nout, integer *info);

/* ddrves.c */
F2CSUB ddrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *ht, 
	doublereal *wr, doublereal *wi, doublereal *wrt, doublereal *wit, 
	doublereal *vs, integer *ldvs, doublereal *result, doublereal *work, 
	integer *nwork, integer *iwork, logical *bwork, integer *info);

/* ddrvev.c */
F2CSUB ddrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *wr, 
	doublereal *wi, doublereal *wr1, doublereal *wi1, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *lre, 
	integer *ldlre, doublereal *result, doublereal *work, integer *nwork, 
	integer *iwork, integer *info);

/* ddrvgg.c */
F2CSUB ddrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, doublereal *
	thrshn, integer *nounit, doublereal *a, integer *lda, doublereal *b, 
	doublereal *s, doublereal *t, doublereal *s2, doublereal *t2, 
	doublereal *q, integer *ldq, doublereal *z__, doublereal *alphr1, 
	doublereal *alphi1, doublereal *beta1, doublereal *alphr2, doublereal 
	*alphi2, doublereal *beta2, doublereal *vl, doublereal *vr, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);

/* ddrvsg.c */
F2CSUB ddrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	d__, doublereal *z__, integer *ldz, doublereal *ab, doublereal *bb, 
	doublereal *ap, doublereal *bp, doublereal *work, integer *nwork, 
	integer *iwork, integer *liwork, doublereal *result, integer *info);

/* ddrvst.c */
F2CSUB ddrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublereal *a, integer *lda, doublereal *d1, doublereal *d2, 
	doublereal *d3, doublereal *d4, doublereal *eveigs, doublereal *wa1, 
	doublereal *wa2, doublereal *wa3, doublereal *u, integer *ldu, 
	doublereal *v, doublereal *tau, doublereal *z__, doublereal *work, 
	integer *lwork, integer *iwork, integer *liwork, doublereal *result, 
	integer *info);

/* ddrvsx.c */
F2CSUB ddrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublereal *a, integer *lda, doublereal *h__, 
	doublereal *ht, doublereal *wr, doublereal *wi, doublereal *wrt, 
	doublereal *wit, doublereal *wrtmp, doublereal *witmp, doublereal *vs, 
	 integer *ldvs, doublereal *vs1, doublereal *result, doublereal *work, 
	 integer *lwork, integer *iwork, logical *bwork, integer *info);

/* ddrvvx.c */
F2CSUB ddrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublereal *a, integer *lda, doublereal *h__, 
	doublereal *wr, doublereal *wi, doublereal *wr1, doublereal *wi1, 
	doublereal *vl, integer *ldvl, doublereal *vr, integer *ldvr, 
	doublereal *lre, integer *ldlre, doublereal *rcondv, doublereal *
	rcndv1, doublereal *rcdvin, doublereal *rconde, doublereal *rcnde1, 
	doublereal *rcdein, doublereal *scale, doublereal *scale1, doublereal 
	*result, doublereal *work, integer *nwork, integer *iwork, integer *
	info);

/* derrbd.c */
F2CSUB derrbd_(char *path, integer *nunit);

/* derrec.c */
F2CSUB derrec_(char *path, integer *nunit);

/* derred.c */
F2CSUB derred_(char *path, integer *nunit);

/* derrgg.c */
F2CSUB derrgg_(char *path, integer *nunit);

/* derrhs.c */
F2CSUB derrhs_(char *path, integer *nunit);

/* derrst.c */
F2CSUB derrst_(char *path, integer *nunit);

/* dget02.c */
F2CSUB dget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* dget10.c */
F2CSUB dget10_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *b, integer *ldb, doublereal *work, doublereal *
	result);

/* dget22.c */
F2CSUB dget22_(char *transa, char *transe, char *transw, 
	integer *n, doublereal *a, integer *lda, doublereal *e, integer *lde, 
	doublereal *wr, doublereal *wi, doublereal *work, doublereal *result);

/* dget23.c */
F2CSUB dget23_(logical *comp, char *balanc, integer *jtype, 
	doublereal *thresh, integer *iseed, integer *nounit, integer *n, 
	doublereal *a, integer *lda, doublereal *h__, doublereal *wr, 
	doublereal *wi, doublereal *wr1, doublereal *wi1, doublereal *vl, 
	integer *ldvl, doublereal *vr, integer *ldvr, doublereal *lre, 
	integer *ldlre, doublereal *rcondv, doublereal *rcndv1, doublereal *
	rcdvin, doublereal *rconde, doublereal *rcnde1, doublereal *rcdein, 
	doublereal *scale, doublereal *scale1, doublereal *result, doublereal 
	*work, integer *lwork, integer *iwork, integer *info);

/* dget24.c */
F2CSUB dget24_(logical *comp, integer *jtype, doublereal *
	thresh, integer *iseed, integer *nounit, integer *n, doublereal *a, 
	integer *lda, doublereal *h__, doublereal *ht, doublereal *wr, 
	doublereal *wi, doublereal *wrt, doublereal *wit, doublereal *wrtmp, 
	doublereal *witmp, doublereal *vs, integer *ldvs, doublereal *vs1, 
	doublereal *rcdein, doublereal *rcdvin, integer *nslct, integer *
	islct, doublereal *result, doublereal *work, integer *lwork, integer *
	iwork, logical *bwork, integer *info);

/* dget31.c */
F2CSUB dget31_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* dget32.c */
F2CSUB dget32_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* dget33.c */
F2CSUB dget33_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* dget34.c */
F2CSUB dget34_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* dget35.c */
F2CSUB dget35_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* dget36.c */
F2CSUB dget36_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* dget37.c */
F2CSUB dget37_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* dget38.c */
F2CSUB dget38_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* dget39.c */
F2CSUB dget39_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* dget51.c */
F2CSUB dget51_(integer *itype, integer *n, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *u, integer *
	ldu, doublereal *v, integer *ldv, doublereal *work, doublereal *
	result);

/* dget52.c */
F2CSUB dget52_(logical *left, integer *n, doublereal *a, 
	integer *lda, doublereal *b, integer *ldb, doublereal *e, integer *
	lde, doublereal *alphar, doublereal *alphai, doublereal *beta, 
	doublereal *work, doublereal *result);

/* dget53.c */
F2CSUB dget53_(doublereal *a, integer *lda, doublereal *b, 
	integer *ldb, doublereal *scale, doublereal *wr, doublereal *wi, 
	doublereal *result, integer *info);

/* dget54.c */
F2CSUB dget54_(integer *n, doublereal *a, integer *lda, 
	doublereal *b, integer *ldb, doublereal *s, integer *lds, doublereal *
	t, integer *ldt, doublereal *u, integer *ldu, doublereal *v, integer *
	ldv, doublereal *work, doublereal *result);

/* dglmts.c */
F2CSUB dglmts_(integer *n, integer *m, integer *p, doublereal *
	a, doublereal *af, integer *lda, doublereal *b, doublereal *bf, 
	integer *ldb, doublereal *d__, doublereal *df, doublereal *x, 
	doublereal *u, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dgqrts.c */
F2CSUB dgqrts_(integer *n, integer *m, integer *p, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *taua, doublereal *b, doublereal *bf, doublereal *z__, 
	doublereal *t, doublereal *bwk, integer *ldb, doublereal *taub, 
	doublereal *work, integer *lwork, doublereal *rwork, doublereal *
	result);

/* dgrqts.c */
F2CSUB dgrqts_(integer *m, integer *p, integer *n, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *taua, doublereal *b, doublereal *bf, doublereal *z__, 
	doublereal *t, doublereal *bwk, integer *ldb, doublereal *taub, 
	doublereal *work, integer *lwork, doublereal *rwork, doublereal *
	result);

/* dgsvts.c */
F2CSUB dgsvts_(integer *m, integer *p, integer *n, doublereal *
	a, doublereal *af, integer *lda, doublereal *b, doublereal *bf, 
	integer *ldb, doublereal *u, integer *ldu, doublereal *v, integer *
	ldv, doublereal *q, integer *ldq, doublereal *alpha, doublereal *beta, 
	 doublereal *r__, integer *ldr, integer *iwork, doublereal *work, 
	integer *lwork, doublereal *rwork, doublereal *result);

/* dhst01.c */
F2CSUB dhst01_(integer *n, integer *ilo, integer *ihi, 
	doublereal *a, integer *lda, doublereal *h__, integer *ldh, 
	doublereal *q, integer *ldq, doublereal *work, integer *lwork, 
	doublereal *result);

/* dlafts.c */
F2CSUB dlafts_(char *type__, integer *m, integer *n, integer *
	imat, integer *ntests, doublereal *result, integer *iseed, doublereal 
	*thresh, integer *iounit, integer *ie);

/* dlahd2.c */
F2CSUB dlahd2_(integer *iounit, char *path);

/* dlarfy.c */
F2CSUB dlarfy_(char *uplo, integer *n, doublereal *v, integer *
	incv, doublereal *tau, doublereal *c__, integer *ldc, doublereal *
	work);

/* dlarhs.c */
F2CSUB dlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, integer *iseed, integer *info);

/* dlasum.c */
F2CSUB dlasum_(char *type__, integer *iounit, integer *ie, 
	integer *nrun);

/* dlatb9.c */
F2CSUB dlatb9_(char *path, integer *imat, integer *m, integer *
	p, integer *n, char *type__, integer *kla, integer *kua, integer *klb, 
	 integer *kub, doublereal *anorm, doublereal *bnorm, integer *modea, 
	integer *modeb, doublereal *cndnma, doublereal *cndnmb, char *dista, 
	char *distb);

/* dlatm4.c */
F2CSUB dlatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, integer *isign, doublereal *amagn, doublereal *rcond, 
	doublereal *triang, integer *idist, integer *iseed, doublereal *a, 
	integer *lda);

/* dlctes.c */
logical dlctes_(doublereal *zr, doublereal *zi, doublereal *d__);

/* dlctsx.c */
logical dlctsx_(doublereal *ar, doublereal *ai, doublereal *beta);

/* dlsets.c */
F2CSUB dlsets_(integer *m, integer *p, integer *n, doublereal *
	a, doublereal *af, integer *lda, doublereal *b, doublereal *bf, 
	integer *ldb, doublereal *c__, doublereal *cf, doublereal *d__, 
	doublereal *df, doublereal *x, doublereal *work, integer *lwork, 
	doublereal *rwork, doublereal *result);

/* dort01.c */
F2CSUB dort01_(char *rowcol, integer *m, integer *n, doublereal 
	*u, integer *ldu, doublereal *work, integer *lwork, doublereal *resid);

/* dort03.c */
F2CSUB dort03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, doublereal *u, integer *ldu, doublereal *v, integer *ldv, 
	doublereal *work, integer *lwork, doublereal *result, integer *info);

/* dsbt21.c */
F2CSUB dsbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 doublereal *a, integer *lda, doublereal *d__, doublereal *e, 
	doublereal *u, integer *ldu, doublereal *work, doublereal *result);

/* dsgt01.c */
F2CSUB dsgt01_(integer *itype, char *uplo, integer *n, integer *
	m, doublereal *a, integer *lda, doublereal *b, integer *ldb, 
	doublereal *z__, integer *ldz, doublereal *d__, doublereal *work, 
	doublereal *result);

/* dslect.c */
logical dslect_(doublereal *zr, doublereal *zi);

/* dspt21.c */
F2CSUB dspt21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublereal *ap, doublereal *d__, doublereal *e, doublereal *u, 
	integer *ldu, doublereal *vp, doublereal *tau, doublereal *work, 
	doublereal *result);

/* dstech.c */
F2CSUB dstech_(integer *n, doublereal *a, doublereal *b, 
	doublereal *eig, doublereal *tol, doublereal *work, integer *info);

/* dstect.c */
F2CSUB dstect_(integer *n, doublereal *a, doublereal *b, 
	doublereal *shift, integer *num);

/* dstt21.c */
F2CSUB dstt21_(integer *n, integer *kband, doublereal *ad, 
	doublereal *ae, doublereal *sd, doublereal *se, doublereal *u, 
	integer *ldu, doublereal *work, doublereal *result);

/* dstt22.c */
F2CSUB dstt22_(integer *n, integer *m, integer *kband, 
	doublereal *ad, doublereal *ae, doublereal *sd, doublereal *se, 
	doublereal *u, integer *ldu, doublereal *work, integer *ldwork, 
	doublereal *result);

/* dsvdch.c */
F2CSUB dsvdch_(integer *n, doublereal *s, doublereal *e, 
	doublereal *svd, doublereal *tol, integer *info);

/* dsvdct.c */
F2CSUB dsvdct_(integer *n, doublereal *s, doublereal *e, 
	doublereal *shift, integer *num);

/* dsxt1.c */
doublereal dsxt1_(integer *ijob, doublereal *d1, integer *n1, doublereal *d2, 
	integer *n2, doublereal *abstol, doublereal *ulp, doublereal *unfl);

/* dsyt21.c */
F2CSUB dsyt21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublereal *a, integer *lda, doublereal *d__, doublereal *e, 
	doublereal *u, integer *ldu, doublereal *v, integer *ldv, doublereal *
	tau, doublereal *work, doublereal *result);

/* dsyt22.c */
F2CSUB dsyt22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, doublereal *a, integer *lda, doublereal *d__, 
	doublereal *e, doublereal *u, integer *ldu, doublereal *v, integer *
	ldv, doublereal *tau, doublereal *work, doublereal *result);

/* ilaenv.c */
integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4);

integer iparmq_(integer *ispec, char *name__, char *opts, integer *n, integer 
	*ilo, integer *ihi, integer *lwork);

/* sbdt01.c */
F2CSUB sbdt01_(integer *m, integer *n, integer *kd, real *a, 
	integer *lda, real *q, integer *ldq, real *d__, real *e, real *pt, 
	integer *ldpt, real *work, real *resid);

/* sbdt02.c */
F2CSUB sbdt02_(integer *m, integer *n, real *b, integer *ldb, 
	real *c__, integer *ldc, real *u, integer *ldu, real *work, real *
	resid);

/* sbdt03.c */
F2CSUB sbdt03_(char *uplo, integer *n, integer *kd, real *d__, 
	real *e, real *u, integer *ldu, real *s, real *vt, integer *ldvt, 
	real *work, real *resid);

/* schkbb.c */
F2CSUB schkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, real *thresh, integer *nounit, real *a, 
	 integer *lda, real *ab, integer *ldab, real *bd, real *be, real *q, 
	integer *ldq, real *p, integer *ldp, real *c__, integer *ldc, real *
	cc, real *work, integer *lwork, real *result, integer *info);

/* schkbd.c */
F2CSUB schkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, real 
	*thresh, real *a, integer *lda, real *bd, real *be, real *s1, real *
	s2, real *x, integer *ldx, real *y, real *z__, real *q, integer *ldq, 
	real *pt, integer *ldpt, real *u, real *vt, real *work, integer *
	lwork, integer *iwork, integer *nout, integer *info);

/* schkbk.c */
F2CSUB schkbk_(integer *nin, integer *nout);

/* schkbl.c */
F2CSUB schkbl_(integer *nin, integer *nout);

/* schkec.c */
F2CSUB schkec_(real *thresh, logical *tsterr, integer *nin, 
	integer *nout);

/* schkgg.c */
F2CSUB schkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, logical *tstdif, real *
	thrshn, integer *nounit, real *a, integer *lda, real *b, real *h__, 
	real *t, real *s1, real *s2, real *p1, real *p2, real *u, integer *
	ldu, real *v, real *q, real *z__, real *alphr1, real *alphi1, real *
	beta1, real *alphr3, real *alphi3, real *beta3, real *evectl, real *
	evectr, real *work, integer *lwork, logical *llwork, real *result, 
	integer *info);

/* schkgk.c */
F2CSUB schkgk_(integer *nin, integer *nout);

/* schkgl.c */
F2CSUB schkgl_(integer *nin, integer *nout);

/* schkhs.c */
F2CSUB schkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *h__, real *t1, real *t2, real *u, integer *ldu, 
	 real *z__, real *uz, real *wr1, real *wi1, real *wr3, real *wi3, 
	real *evectl, real *evectr, real *evecty, real *evectx, real *uu, 
	real *tau, real *work, integer *nwork, integer *iwork, logical *
	select, real *result, integer *info);

/* schksb.c */
F2CSUB schksb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, real *
	thresh, integer *nounit, real *a, integer *lda, real *sd, real *se, 
	real *u, integer *ldu, real *work, integer *lwork, real *result, 
	integer *info);

/* schkst.c */
F2CSUB schkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *ap, real *sd, real *se, real *d1, real *d2, 
	real *d3, real *d4, real *d5, real *wa1, real *wa2, real *wa3, real *
	wr, real *u, integer *ldu, real *v, real *vp, real *tau, real *z__, 
	real *work, integer *lwork, integer *iwork, integer *liwork, real *
	result, integer *info);

/* sckglm.c */
F2CSUB sckglm_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, real *a, real *af, real *b, real *bf, real *x, real *work, real 
	*rwork, integer *nin, integer *nout, integer *info);

/* sckgqr.c */
F2CSUB sckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	real *thresh, integer *nmax, real *a, real *af, real *aq, real *ar, 
	real *taua, real *b, real *bf, real *bz, real *bt, real *bwk, real *
	taub, real *work, real *rwork, integer *nin, integer *nout, integer *
	info);

/* sckgsv.c */
F2CSUB sckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, real *a, real *af, real *b, real *bf, real *u, real *v, real *q, 
	 real *alpha, real *beta, real *r__, integer *iwork, real *work, real 
	*rwork, integer *nin, integer *nout, integer *info);

/* scklse.c */
F2CSUB scklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, real *thresh, integer *
	nmax, real *a, real *af, real *b, real *bf, real *x, real *work, real 
	*rwork, integer *nin, integer *nout, integer *info);

/* sdrges.c */
F2CSUB sdrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *b, real *s, real *t, real *q, integer *ldq, 
	real *z__, real *alphar, real *alphai, real *beta, real *work, 
	integer *lwork, real *result, logical *bwork, integer *info);

/* sdrgev.c */
F2CSUB sdrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *b, real *s, real *t, real *q, integer *ldq, 
	real *z__, real *qe, integer *ldqe, real *alphar, real *alphai, real *
	beta, real *alphr1, real *alphi1, real *beta1, real *work, integer *
	lwork, real *result, integer *info);

/* sdrgsx.c */
F2CSUB sdrgsx_(integer *nsize, integer *ncmax, real *thresh, 
	integer *nin, integer *nout, real *a, integer *lda, real *b, real *ai, 
	 real *bi, real *z__, real *q, real *alphar, real *alphai, real *beta, 
	 real *c__, integer *ldc, real *s, real *work, integer *lwork, 
	integer *iwork, integer *liwork, logical *bwork, integer *info);

/* sdrgvx.c */
F2CSUB sdrgvx_(integer *nsize, real *thresh, integer *nin, 
	integer *nout, real *a, integer *lda, real *b, real *ai, real *bi, 
	real *alphar, real *alphai, real *beta, real *vl, real *vr, integer *
	ilo, integer *ihi, real *lscale, real *rscale, real *s, real *stru, 
	real *dif, real *diftru, real *work, integer *lwork, integer *iwork, 
	integer *liwork, real *result, logical *bwork, integer *info);

/* sdrvbd.c */
F2CSUB sdrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, real *thresh, real *
	a, integer *lda, real *u, integer *ldu, real *vt, integer *ldvt, real 
	*asav, real *usav, real *vtsav, real *s, real *ssav, real *e, real *
	work, integer *lwork, integer *iwork, integer *nout, integer *info);

/* sdrves.c */
F2CSUB sdrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *h__, real *ht, real *wr, real *wi, real *wrt, 
	real *wit, real *vs, integer *ldvs, real *result, real *work, integer 
	*nwork, integer *iwork, logical *bwork, integer *info);

/* sdrvev.c */
F2CSUB sdrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *h__, real *wr, real *wi, real *wr1, real *wi1, 
	real *vl, integer *ldvl, real *vr, integer *ldvr, real *lre, integer *
	ldlre, real *result, real *work, integer *nwork, integer *iwork, 
	integer *info);

/* sdrvgg.c */
F2CSUB sdrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, real *thrshn, integer *
	nounit, real *a, integer *lda, real *b, real *s, real *t, real *s2, 
	real *t2, real *q, integer *ldq, real *z__, real *alphr1, real *
	alphi1, real *beta1, real *alphr2, real *alphi2, real *beta2, real *
	vl, real *vr, real *work, integer *lwork, real *result, integer *info);

/* sdrvsg.c */
F2CSUB sdrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *b, integer *ldb, real *d__, real *z__, integer 
	*ldz, real *ab, real *bb, real *ap, real *bp, real *work, integer *
	nwork, integer *iwork, integer *liwork, real *result, integer *info);

/* sdrvst.c */
F2CSUB sdrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *nounit, real *
	a, integer *lda, real *d1, real *d2, real *d3, real *d4, real *eveigs, 
	 real *wa1, real *wa2, real *wa3, real *u, integer *ldu, real *v, 
	real *tau, real *z__, real *work, integer *lwork, integer *iwork, 
	integer *liwork, real *result, integer *info);

/* sdrvsx.c */
F2CSUB sdrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, real *a, integer *lda, real *h__, real *ht, real *wr, 
	 real *wi, real *wrt, real *wit, real *wrtmp, real *witmp, real *vs, 
	integer *ldvs, real *vs1, real *result, real *work, integer *lwork, 
	integer *iwork, logical *bwork, integer *info);

/* sdrvvx.c */
F2CSUB sdrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, real *thresh, integer *niunit, 
	integer *nounit, real *a, integer *lda, real *h__, real *wr, real *wi, 
	 real *wr1, real *wi1, real *vl, integer *ldvl, real *vr, integer *
	ldvr, real *lre, integer *ldlre, real *rcondv, real *rcndv1, real *
	rcdvin, real *rconde, real *rcnde1, real *rcdein, real *scale, real *
	scale1, real *result, real *work, integer *nwork, integer *iwork, 
	integer *info);

/* serrbd.c */
F2CSUB serrbd_(char *path, integer *nunit);

/* serrec.c */
F2CSUB serrec_(char *path, integer *nunit);

/* serred.c */
F2CSUB serred_(char *path, integer *nunit);

/* serrgg.c */
F2CSUB serrgg_(char *path, integer *nunit);

/* serrhs.c */
F2CSUB serrhs_(char *path, integer *nunit);

/* serrst.c */
F2CSUB serrst_(char *path, integer *nunit);

/* sget02.c */
F2CSUB sget02_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);

/* sget10.c */
F2CSUB sget10_(integer *m, integer *n, real *a, integer *lda, 
	real *b, integer *ldb, real *work, real *result);

/* sget22.c */
F2CSUB sget22_(char *transa, char *transe, char *transw, 
	integer *n, real *a, integer *lda, real *e, integer *lde, real *wr, 
	real *wi, real *work, real *result);

/* sget23.c */
F2CSUB sget23_(logical *comp, char *balanc, integer *jtype, 
	real *thresh, integer *iseed, integer *nounit, integer *n, real *a, 
	integer *lda, real *h__, real *wr, real *wi, real *wr1, real *wi1, 
	real *vl, integer *ldvl, real *vr, integer *ldvr, real *lre, integer *
	ldlre, real *rcondv, real *rcndv1, real *rcdvin, real *rconde, real *
	rcnde1, real *rcdein, real *scale, real *scale1, real *result, real *
	work, integer *lwork, integer *iwork, integer *info);

/* sget24.c */
F2CSUB sget24_(logical *comp, integer *jtype, real *thresh, 
	integer *iseed, integer *nounit, integer *n, real *a, integer *lda, 
	real *h__, real *ht, real *wr, real *wi, real *wrt, real *wit, real *
	wrtmp, real *witmp, real *vs, integer *ldvs, real *vs1, real *rcdein, 
	real *rcdvin, integer *nslct, integer *islct, real *result, real *
	work, integer *lwork, integer *iwork, logical *bwork, integer *info);

/* sget31.c */
F2CSUB sget31_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* sget32.c */
F2CSUB sget32_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* sget33.c */
F2CSUB sget33_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* sget34.c */
F2CSUB sget34_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* sget35.c */
F2CSUB sget35_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* sget36.c */
F2CSUB sget36_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* sget37.c */
F2CSUB sget37_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* sget38.c */
F2CSUB sget38_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* sget39.c */
F2CSUB sget39_(real *rmax, integer *lmax, integer *ninfo, 
	integer *knt);

/* sget51.c */
F2CSUB sget51_(integer *itype, integer *n, real *a, integer *
	lda, real *b, integer *ldb, real *u, integer *ldu, real *v, integer *
	ldv, real *work, real *result);

/* sget52.c */
F2CSUB sget52_(logical *left, integer *n, real *a, integer *lda, 
	 real *b, integer *ldb, real *e, integer *lde, real *alphar, real *
	alphai, real *beta, real *work, real *result);

/* sget53.c */
F2CSUB sget53_(real *a, integer *lda, real *b, integer *ldb, 
	real *scale, real *wr, real *wi, real *result, integer *info);

/* sget54.c */
F2CSUB sget54_(integer *n, real *a, integer *lda, real *b, 
	integer *ldb, real *s, integer *lds, real *t, integer *ldt, real *u, 
	integer *ldu, real *v, integer *ldv, real *work, real *result);

/* sglmts.c */
F2CSUB sglmts_(integer *n, integer *m, integer *p, real *a, 
	real *af, integer *lda, real *b, real *bf, integer *ldb, real *d__, 
	real *df, real *x, real *u, real *work, integer *lwork, real *rwork, 
	real *result);

/* sgqrts.c */
F2CSUB sgqrts_(integer *n, integer *m, integer *p, real *a, 
	real *af, real *q, real *r__, integer *lda, real *taua, real *b, real 
	*bf, real *z__, real *t, real *bwk, integer *ldb, real *taub, real *
	work, integer *lwork, real *rwork, real *result);

/* sgrqts.c */
F2CSUB sgrqts_(integer *m, integer *p, integer *n, real *a, 
	real *af, real *q, real *r__, integer *lda, real *taua, real *b, real 
	*bf, real *z__, real *t, real *bwk, integer *ldb, real *taub, real *
	work, integer *lwork, real *rwork, real *result);

/* sgsvts.c */
F2CSUB sgsvts_(integer *m, integer *p, integer *n, real *a, 
	real *af, integer *lda, real *b, real *bf, integer *ldb, real *u, 
	integer *ldu, real *v, integer *ldv, real *q, integer *ldq, real *
	alpha, real *beta, real *r__, integer *ldr, integer *iwork, real *
	work, integer *lwork, real *rwork, real *result);

/* shst01.c */
F2CSUB shst01_(integer *n, integer *ilo, integer *ihi, real *a, 
	integer *lda, real *h__, integer *ldh, real *q, integer *ldq, real *
	work, integer *lwork, real *result);

/* slafts.c */
F2CSUB slafts_(char *type__, integer *m, integer *n, integer *
	imat, integer *ntests, real *result, integer *iseed, real *thresh, 
	integer *iounit, integer *ie);

/* slahd2.c */
F2CSUB slahd2_(integer *iounit, char *path);

/* slarfy.c */
F2CSUB slarfy_(char *uplo, integer *n, real *v, integer *incv, 
	real *tau, real *c__, integer *ldc, real *work);

/* slarhs.c */
F2CSUB slarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	real *a, integer *lda, real *x, integer *ldx, real *b, integer *ldb, 
	integer *iseed, integer *info);

/* slasum.c */
F2CSUB slasum_(char *type__, integer *iounit, integer *ie, 
	integer *nrun);

/* slatb9.c */
F2CSUB slatb9_(char *path, integer *imat, integer *m, integer *
	p, integer *n, char *type__, integer *kla, integer *kua, integer *klb, 
	 integer *kub, real *anorm, real *bnorm, integer *modea, integer *
	modeb, real *cndnma, real *cndnmb, char *dista, char *distb);

/* slatm4.c */
F2CSUB slatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, integer *isign, real *amagn, real *rcond, real *triang, 
	integer *idist, integer *iseed, real *a, integer *lda);

/* slctes.c */
logical slctes_(real *zr, real *zi, real *d__);

/* slctsx.c */
logical slctsx_(real *ar, real *ai, real *beta);

/* slsets.c */
F2CSUB slsets_(integer *m, integer *p, integer *n, real *a, 
	real *af, integer *lda, real *b, real *bf, integer *ldb, real *c__, 
	real *cf, real *d__, real *df, real *x, real *work, integer *lwork, 
	real *rwork, real *result);

/* sort01.c */
F2CSUB sort01_(char *rowcol, integer *m, integer *n, real *u, 
	integer *ldu, real *work, integer *lwork, real *resid);

/* sort03.c */
F2CSUB sort03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, real *u, integer *ldu, real *v, integer *ldv, real *work, 
	integer *lwork, real *result, integer *info);

/* ssbt21.c */
F2CSUB ssbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 real *a, integer *lda, real *d__, real *e, real *u, integer *ldu, 
	real *work, real *result);

/* ssgt01.c */
F2CSUB ssgt01_(integer *itype, char *uplo, integer *n, integer *
	m, real *a, integer *lda, real *b, integer *ldb, real *z__, integer *
	ldz, real *d__, real *work, real *result);

/* sslect.c */
logical sslect_(real *zr, real *zi);

/* sspt21.c */
F2CSUB sspt21_(integer *itype, char *uplo, integer *n, integer *
	kband, real *ap, real *d__, real *e, real *u, integer *ldu, real *vp, 
	real *tau, real *work, real *result);

/* sstech.c */
F2CSUB sstech_(integer *n, real *a, real *b, real *eig, real *
	tol, real *work, integer *info);

/* sstect.c */
F2CSUB sstect_(integer *n, real *a, real *b, real *shift, 
	integer *num);

/* sstt21.c */
F2CSUB sstt21_(integer *n, integer *kband, real *ad, real *ae, 
	real *sd, real *se, real *u, integer *ldu, real *work, real *result);

/* sstt22.c */
F2CSUB sstt22_(integer *n, integer *m, integer *kband, real *ad, 
	 real *ae, real *sd, real *se, real *u, integer *ldu, real *work, 
	integer *ldwork, real *result);

/* ssvdch.c */
F2CSUB ssvdch_(integer *n, real *s, real *e, real *svd, real *
	tol, integer *info);

/* ssvdct.c */
F2CSUB ssvdct_(integer *n, real *s, real *e, real *shift, 
	integer *num);

/* ssxt1.c */
doublereal ssxt1_(integer *ijob, real *d1, integer *n1, real *d2, integer *n2, 
	 real *abstol, real *ulp, real *unfl);

/* ssyt21.c */
F2CSUB ssyt21_(integer *itype, char *uplo, integer *n, integer *
	kband, real *a, integer *lda, real *d__, real *e, real *u, integer *
	ldu, real *v, integer *ldv, real *tau, real *work, real *result);

/* ssyt22.c */
F2CSUB ssyt22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, real *a, integer *lda, real *d__, real *e, real *u, 
	 integer *ldu, real *v, integer *ldv, real *tau, real *work, real *
	result);

/* xerbla.c */
F2CSUB xerbla_(const char *srname, const integer *info);

/* xlaenv.c */
F2CSUB xlaenv_(integer *ispec, integer *nvalue);

/* zbdt01.c */
F2CSUB zbdt01_(integer *m, integer *n, integer *kd, 
	doublecomplex *a, integer *lda, doublecomplex *q, integer *ldq, 
	doublereal *d__, doublereal *e, doublecomplex *pt, integer *ldpt, 
	doublecomplex *work, doublereal *rwork, doublereal *resid);

/* zbdt02.c */
F2CSUB zbdt02_(integer *m, integer *n, doublecomplex *b, 
	integer *ldb, doublecomplex *c__, integer *ldc, doublecomplex *u, 
	integer *ldu, doublecomplex *work, doublereal *rwork, doublereal *
	resid);

/* zbdt03.c */
F2CSUB zbdt03_(char *uplo, integer *n, integer *kd, doublereal *
	d__, doublereal *e, doublecomplex *u, integer *ldu, doublereal *s, 
	doublecomplex *vt, integer *ldvt, doublecomplex *work, doublereal *
	resid);

/* zchkbb.c */
F2CSUB zchkbb_(integer *nsizes, integer *mval, integer *nval, 
	integer *nwdths, integer *kk, integer *ntypes, logical *dotype, 
	integer *nrhs, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *ab, integer *ldab, 
	doublereal *bd, doublereal *be, doublecomplex *q, integer *ldq, 
	doublecomplex *p, integer *ldp, doublecomplex *c__, integer *ldc, 
	doublecomplex *cc, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result, integer *info);

/* zchkbd.c */
F2CSUB zchkbd_(integer *nsizes, integer *mval, integer *nval, 
	integer *ntypes, logical *dotype, integer *nrhs, integer *iseed, 
	doublereal *thresh, doublecomplex *a, integer *lda, doublereal *bd, 
	doublereal *be, doublereal *s1, doublereal *s2, doublecomplex *x, 
	integer *ldx, doublecomplex *y, doublecomplex *z__, doublecomplex *q, 
	integer *ldq, doublecomplex *pt, integer *ldpt, doublecomplex *u, 
	doublecomplex *vt, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *nout, integer *info);

/* zchkbk.c */
F2CSUB zchkbk_(integer *nin, integer *nout);

/* zchkbl.c */
F2CSUB zchkbl_(integer *nin, integer *nout);

/* zchkec.c */
F2CSUB zchkec_(doublereal *thresh, logical *tsterr, integer *
	nin, integer *nout);

/* zchkgg.c */
F2CSUB zchkgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, logical *tstdif, 
	doublereal *thrshn, integer *nounit, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *h__, doublecomplex *t, doublecomplex 
	*s1, doublecomplex *s2, doublecomplex *p1, doublecomplex *p2, 
	doublecomplex *u, integer *ldu, doublecomplex *v, doublecomplex *q, 
	doublecomplex *z__, doublecomplex *alpha1, doublecomplex *beta1, 
	doublecomplex *alpha3, doublecomplex *beta3, doublecomplex *evectl, 
	doublecomplex *evectr, doublecomplex *work, integer *lwork, 
	doublereal *rwork, logical *llwork, doublereal *result, integer *info);

/* zchkgk.c */
F2CSUB zchkgk_(integer *nin, integer *nout);

/* zchkgl.c */
F2CSUB zchkgl_(integer *nin, integer *nout);

/* zchkhb.c */
F2CSUB zchkhb_(integer *nsizes, integer *nn, integer *nwdths, 
	integer *kk, integer *ntypes, logical *dotype, integer *iseed, 
	doublereal *thresh, integer *nounit, doublecomplex *a, integer *lda, 
	doublereal *sd, doublereal *se, doublecomplex *u, integer *ldu, 
	doublecomplex *work, integer *lwork, doublereal *rwork, doublereal *
	result, integer *info);

/* zchkhs.c */
F2CSUB zchkhs_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *h__, doublecomplex *t1, 
	 doublecomplex *t2, doublecomplex *u, integer *ldu, doublecomplex *
	z__, doublecomplex *uz, doublecomplex *w1, doublecomplex *w3, 
	doublecomplex *evectl, doublecomplex *evectr, doublecomplex *evecty, 
	doublecomplex *evectx, doublecomplex *uu, doublecomplex *tau, 
	doublecomplex *work, integer *nwork, doublereal *rwork, integer *
	iwork, logical *select, doublereal *result, integer *info);

/* zchkst.c */
F2CSUB zchkst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *ap, doublereal *sd, 
	doublereal *se, doublereal *d1, doublereal *d2, doublereal *d3, 
	doublereal *d4, doublereal *d5, doublereal *wa1, doublereal *wa2, 
	doublereal *wa3, doublereal *wr, doublecomplex *u, integer *ldu, 
	doublecomplex *v, doublecomplex *vp, doublecomplex *tau, 
	doublecomplex *z__, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, doublereal *
	result, integer *info);

/* zckglm.c */
F2CSUB zckglm_(integer *nn, integer *nval, integer *mval, 
	integer *pval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublecomplex *a, doublecomplex *af, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *x, doublecomplex *work, doublereal *
	rwork, integer *nin, integer *nout, integer *info);

/* zckgqr.c */
F2CSUB zckgqr_(integer *nm, integer *mval, integer *np, integer 
	*pval, integer *nn, integer *nval, integer *nmats, integer *iseed, 
	doublereal *thresh, integer *nmax, doublecomplex *a, doublecomplex *
	af, doublecomplex *aq, doublecomplex *ar, doublecomplex *taua, 
	doublecomplex *b, doublecomplex *bf, doublecomplex *bz, doublecomplex 
	*bt, doublecomplex *bwk, doublecomplex *taub, doublecomplex *work, 
	doublereal *rwork, integer *nin, integer *nout, integer *info);

/* zckgsv.c */
F2CSUB zckgsv_(integer *nm, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublecomplex *a, doublecomplex *af, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *u, doublecomplex *v, doublecomplex *
	q, doublereal *alpha, doublereal *beta, doublecomplex *r__, integer *
	iwork, doublecomplex *work, doublereal *rwork, integer *nin, integer *
	nout, integer *info);

/* zcklse.c */
F2CSUB zcklse_(integer *nn, integer *mval, integer *pval, 
	integer *nval, integer *nmats, integer *iseed, doublereal *thresh, 
	integer *nmax, doublecomplex *a, doublecomplex *af, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *x, doublecomplex *work, doublereal *
	rwork, integer *nin, integer *nout, integer *info);

/* zdrges.c */
F2CSUB zdrges_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *b, doublecomplex *s, 
	doublecomplex *t, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	doublecomplex *alpha, doublecomplex *beta, doublecomplex *work, 
	integer *lwork, doublereal *rwork, doublereal *result, logical *bwork, 
	 integer *info);

/* zdrgev.c */
F2CSUB zdrgev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *b, doublecomplex *s, 
	doublecomplex *t, doublecomplex *q, integer *ldq, doublecomplex *z__, 
	doublecomplex *qe, integer *ldqe, doublecomplex *alpha, doublecomplex 
	*beta, doublecomplex *alpha1, doublecomplex *beta1, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result, integer *
	info);

/* zdrgsx.c */
F2CSUB zdrgsx_(integer *nsize, integer *ncmax, doublereal *
	thresh, integer *nin, integer *nout, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *ai, doublecomplex *bi, doublecomplex 
	*z__, doublecomplex *q, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *c__, integer *ldc, doublereal *s, doublecomplex *work, 
	integer *lwork, doublereal *rwork, integer *iwork, integer *liwork, 
	logical *bwork, integer *info);

/* zdrgvx.c */
F2CSUB zdrgvx_(integer *nsize, doublereal *thresh, integer *nin, 
	 integer *nout, doublecomplex *a, integer *lda, doublecomplex *b, 
	doublecomplex *ai, doublecomplex *bi, doublecomplex *alpha, 
	doublecomplex *beta, doublecomplex *vl, doublecomplex *vr, integer *
	ilo, integer *ihi, doublereal *lscale, doublereal *rscale, doublereal 
	*s, doublereal *dtru, doublereal *dif, doublereal *diftru, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *
	iwork, integer *liwork, doublereal *result, logical *bwork, integer *
	info);

/* zdrvbd.c */
F2CSUB zdrvbd_(integer *nsizes, integer *mm, integer *nn, 
	integer *ntypes, logical *dotype, integer *iseed, doublereal *thresh, 
	doublecomplex *a, integer *lda, doublecomplex *u, integer *ldu, 
	doublecomplex *vt, integer *ldvt, doublecomplex *asav, doublecomplex *
	usav, doublecomplex *vtsav, doublereal *s, doublereal *ssav, 
	doublereal *e, doublecomplex *work, integer *lwork, doublereal *rwork, 
	 integer *iwork, integer *nounit, integer *info);

/* zdrves.c */
F2CSUB zdrves_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *h__, doublecomplex *ht, 
	 doublecomplex *w, doublecomplex *wt, doublecomplex *vs, integer *
	ldvs, doublereal *result, doublecomplex *work, integer *nwork, 
	doublereal *rwork, integer *iwork, logical *bwork, integer *info);

/* zdrvev.c */
F2CSUB zdrvev_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *h__, doublecomplex *w, 
	doublecomplex *w1, doublecomplex *vl, integer *ldvl, doublecomplex *
	vr, integer *ldvr, doublecomplex *lre, integer *ldlre, doublereal *
	result, doublecomplex *work, integer *nwork, doublereal *rwork, 
	integer *iwork, integer *info);

/* zdrvgg.c */
F2CSUB zdrvgg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, doublereal *
	thrshn, integer *nounit, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *s, doublecomplex *t, doublecomplex *
	s2, doublecomplex *t2, doublecomplex *q, integer *ldq, doublecomplex *
	z__, doublecomplex *alpha1, doublecomplex *beta1, doublecomplex *
	alpha2, doublecomplex *beta2, doublecomplex *vl, doublecomplex *vr, 
	doublecomplex *work, integer *lwork, doublereal *rwork, doublereal *
	result, integer *info);

/* zdrvsg.c */
F2CSUB zdrvsg_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublereal *d__, doublecomplex *z__, integer *ldz, doublecomplex *ab, 
	doublecomplex *bb, doublecomplex *ap, doublecomplex *bp, 
	doublecomplex *work, integer *nwork, doublereal *rwork, integer *
	lrwork, integer *iwork, integer *liwork, doublereal *result, integer *
	info);

/* zdrvst.c */
F2CSUB zdrvst_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *nounit, 
	doublecomplex *a, integer *lda, doublereal *d1, doublereal *d2, 
	doublereal *d3, doublereal *wa1, doublereal *wa2, doublereal *wa3, 
	doublecomplex *u, integer *ldu, doublecomplex *v, doublecomplex *tau, 
	doublecomplex *z__, doublecomplex *work, integer *lwork, doublereal *
	rwork, integer *lrwork, integer *iwork, integer *liwork, doublereal *
	result, integer *info);

/* zdrvsx.c */
F2CSUB zdrvsx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublecomplex *a, integer *lda, doublecomplex *h__, 
	doublecomplex *ht, doublecomplex *w, doublecomplex *wt, doublecomplex 
	*wtmp, doublecomplex *vs, integer *ldvs, doublecomplex *vs1, 
	doublereal *result, doublecomplex *work, integer *lwork, doublereal *
	rwork, logical *bwork, integer *info);

/* zdrvvx.c */
F2CSUB zdrvvx_(integer *nsizes, integer *nn, integer *ntypes, 
	logical *dotype, integer *iseed, doublereal *thresh, integer *niunit, 
	integer *nounit, doublecomplex *a, integer *lda, doublecomplex *h__, 
	doublecomplex *w, doublecomplex *w1, doublecomplex *vl, integer *ldvl, 
	 doublecomplex *vr, integer *ldvr, doublecomplex *lre, integer *ldlre, 
	 doublereal *rcondv, doublereal *rcndv1, doublereal *rcdvin, 
	doublereal *rconde, doublereal *rcnde1, doublereal *rcdein, 
	doublereal *scale, doublereal *scale1, doublereal *result, 
	doublecomplex *work, integer *nwork, doublereal *rwork, integer *info);

/* zerrbd.c */
F2CSUB zerrbd_(char *path, integer *nunit);

/* zerrec.c */
F2CSUB zerrec_(char *path, integer *nunit);

/* zerred.c */
F2CSUB zerred_(char *path, integer *nunit);

/* zerrgg.c */
F2CSUB zerrgg_(char *path, integer *nunit);

/* zerrhs.c */
F2CSUB zerrhs_(char *path, integer *nunit);

/* zerrst.c */
F2CSUB zerrst_(char *path, integer *nunit);

/* zget02.c */
F2CSUB zget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zget10.c */
F2CSUB zget10_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublecomplex *work, 
	doublereal *rwork, doublereal *result);

/* zget22.c */
F2CSUB zget22_(char *transa, char *transe, char *transw, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *e, integer 
	*lde, doublecomplex *w, doublecomplex *work, doublereal *rwork, 
	doublereal *result);

/* zget23.c */
F2CSUB zget23_(logical *comp, integer *isrt, char *balanc, 
	integer *jtype, doublereal *thresh, integer *iseed, integer *nounit, 
	integer *n, doublecomplex *a, integer *lda, doublecomplex *h__, 
	doublecomplex *w, doublecomplex *w1, doublecomplex *vl, integer *ldvl, 
	 doublecomplex *vr, integer *ldvr, doublecomplex *lre, integer *ldlre, 
	 doublereal *rcondv, doublereal *rcndv1, doublereal *rcdvin, 
	doublereal *rconde, doublereal *rcnde1, doublereal *rcdein, 
	doublereal *scale, doublereal *scale1, doublereal *result, 
	doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);

/* zget24.c */
F2CSUB zget24_(logical *comp, integer *jtype, doublereal *
	thresh, integer *iseed, integer *nounit, integer *n, doublecomplex *a, 
	 integer *lda, doublecomplex *h__, doublecomplex *ht, doublecomplex *
	w, doublecomplex *wt, doublecomplex *wtmp, doublecomplex *vs, integer 
	*ldvs, doublecomplex *vs1, doublereal *rcdein, doublereal *rcdvin, 
	integer *nslct, integer *islct, integer *isrt, doublereal *result, 
	doublecomplex *work, integer *lwork, doublereal *rwork, logical *
	bwork, integer *info);

/* zget35.c */
F2CSUB zget35_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* zget36.c */
F2CSUB zget36_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* zget37.c */
F2CSUB zget37_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* zget38.c */
F2CSUB zget38_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin);

/* zget51.c */
F2CSUB zget51_(integer *itype, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublecomplex *u, 
	integer *ldu, doublecomplex *v, integer *ldv, doublecomplex *work, 
	doublereal *rwork, doublereal *result);

/* zget52.c */
F2CSUB zget52_(logical *left, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, integer *ldb, doublecomplex *e, 
	integer *lde, doublecomplex *alpha, doublecomplex *beta, 
	doublecomplex *work, doublereal *rwork, doublereal *result);

/* zget54.c */
F2CSUB zget54_(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *s, integer *lds, 
	doublecomplex *t, integer *ldt, doublecomplex *u, integer *ldu, 
	doublecomplex *v, integer *ldv, doublecomplex *work, doublereal *
	result);

/* zglmts.c */
F2CSUB zglmts_(integer *n, integer *m, integer *p, 
	doublecomplex *a, doublecomplex *af, integer *lda, doublecomplex *b, 
	doublecomplex *bf, integer *ldb, doublecomplex *d__, doublecomplex *
	df, doublecomplex *x, doublecomplex *u, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);

/* zgqrts.c */
F2CSUB zgqrts_(integer *n, integer *m, integer *p, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *taua, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *z__, doublecomplex *t, 
	doublecomplex *bwk, integer *ldb, doublecomplex *taub, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);

/* zgrqts.c */
F2CSUB zgrqts_(integer *m, integer *p, integer *n, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *taua, doublecomplex *b, 
	doublecomplex *bf, doublecomplex *z__, doublecomplex *t, 
	doublecomplex *bwk, integer *ldb, doublecomplex *taub, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);

/* zgsvts.c */
F2CSUB zgsvts_(integer *m, integer *p, integer *n, 
	doublecomplex *a, doublecomplex *af, integer *lda, doublecomplex *b, 
	doublecomplex *bf, integer *ldb, doublecomplex *u, integer *ldu, 
	doublecomplex *v, integer *ldv, doublecomplex *q, integer *ldq, 
	doublereal *alpha, doublereal *beta, doublecomplex *r__, integer *ldr, 
	 integer *iwork, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);

/* zhbt21.c */
F2CSUB zhbt21_(char *uplo, integer *n, integer *ka, integer *ks, 
	 doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	doublecomplex *u, integer *ldu, doublecomplex *work, doublereal *
	rwork, doublereal *result);

/* zhet21.c */
F2CSUB zhet21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublecomplex *a, integer *lda, doublereal *d__, doublereal *e, 
	 doublecomplex *u, integer *ldu, doublecomplex *v, integer *ldv, 
	doublecomplex *tau, doublecomplex *work, doublereal *rwork, 
	doublereal *result);

/* zhet22.c */
F2CSUB zhet22_(integer *itype, char *uplo, integer *n, integer *
	m, integer *kband, doublecomplex *a, integer *lda, doublereal *d__, 
	doublereal *e, doublecomplex *u, integer *ldu, doublecomplex *v, 
	integer *ldv, doublecomplex *tau, doublecomplex *work, doublereal *
	rwork, doublereal *result);

/* zhpt21.c */
F2CSUB zhpt21_(integer *itype, char *uplo, integer *n, integer *
	kband, doublecomplex *ap, doublereal *d__, doublereal *e, 
	doublecomplex *u, integer *ldu, doublecomplex *vp, doublecomplex *tau, 
	 doublecomplex *work, doublereal *rwork, doublereal *result);

/* zhst01.c */
F2CSUB zhst01_(integer *n, integer *ilo, integer *ihi, 
	doublecomplex *a, integer *lda, doublecomplex *h__, integer *ldh, 
	doublecomplex *q, integer *ldq, doublecomplex *work, integer *lwork, 
	doublereal *rwork, doublereal *result);

/* zlarfy.c */
F2CSUB zlarfy_(char *uplo, integer *n, doublecomplex *v, 
	integer *incv, doublecomplex *tau, doublecomplex *c__, integer *ldc, 
	doublecomplex *work);

/* zlarhs.c */
F2CSUB zlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, integer *iseed, integer *info);

/* zlatm4.c */
F2CSUB zlatm4_(integer *itype, integer *n, integer *nz1, 
	integer *nz2, logical *rsign, doublereal *amagn, doublereal *rcond, 
	doublereal *triang, integer *idist, integer *iseed, doublecomplex *a, 
	integer *lda);

/* zlctes.c */
logical zlctes_(doublecomplex *z__, doublecomplex *d__);

/* zlctsx.c */
logical zlctsx_(doublecomplex *alpha, doublecomplex *beta);

/* zlsets.c */
F2CSUB zlsets_(integer *m, integer *p, integer *n, 
	doublecomplex *a, doublecomplex *af, integer *lda, doublecomplex *b, 
	doublecomplex *bf, integer *ldb, doublecomplex *c__, doublecomplex *
	cf, doublecomplex *d__, doublecomplex *df, doublecomplex *x, 
	doublecomplex *work, integer *lwork, doublereal *rwork, doublereal *
	result);

/* zsbmv.c */
F2CSUB zsbmv_(char *uplo, integer *n, integer *k, doublecomplex 
	*alpha, doublecomplex *a, integer *lda, doublecomplex *x, integer *
	incx, doublecomplex *beta, doublecomplex *y, integer *incy);

/* zsgt01.c */
F2CSUB zsgt01_(integer *itype, char *uplo, integer *n, integer *
	m, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *z__, integer *ldz, doublereal *d__, doublecomplex *
	work, doublereal *rwork, doublereal *result);

/* zslect.c */
logical zslect_(doublecomplex *z__);

/* zstt21.c */
F2CSUB zstt21_(integer *n, integer *kband, doublereal *ad, 
	doublereal *ae, doublereal *sd, doublereal *se, doublecomplex *u, 
	integer *ldu, doublecomplex *work, doublereal *rwork, doublereal *
	result);

/* zstt22.c */
F2CSUB zstt22_(integer *n, integer *m, integer *kband, 
	doublereal *ad, doublereal *ae, doublereal *sd, doublereal *se, 
	doublecomplex *u, integer *ldu, doublecomplex *work, integer *ldwork, 
	doublereal *rwork, doublereal *result);

/* zunt01.c */
F2CSUB zunt01_(char *rowcol, integer *m, integer *n, 
	doublecomplex *u, integer *ldu, doublecomplex *work, integer *lwork, 
	doublereal *rwork, doublereal *resid);

/* zunt03.c */
F2CSUB zunt03_(char *rc, integer *mu, integer *mv, integer *n, 
	integer *k, doublecomplex *u, integer *ldu, doublecomplex *v, integer 
	*ldv, doublecomplex *work, integer *lwork, doublereal *rwork, 
	doublereal *result, integer *info);

