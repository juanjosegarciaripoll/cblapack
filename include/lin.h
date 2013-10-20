/* aladhd.c */
F2CSUB aladhd_(integer *iounit, char *path);

/* alaerh.c */
F2CSUB alaerh_(char *path, char *subnam, integer *info, integer 
	*infoe, char *opts, integer *m, integer *n, integer *kl, integer *ku, 
	integer *n5, integer *imat, integer *nfail, integer *nerrs, integer *
	nout);

/* alaesm.c */
F2CSUB alaesm_(char *path, logical *ok, integer *nout);

/* alahd.c */
F2CSUB alahd_(integer *iounit, char *path);

/* alareq.c */
F2CSUB alareq_(char *path, integer *nmats, logical *dotype, 
	integer *ntypes, integer *nin, integer *nout);

/* alasum.c */
F2CSUB alasum_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);

/* alasvm.c */
F2CSUB alasvm_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);

/* cchkeq.c */
F2CSUB cchkeq_(real *thresh, integer *nout);

/* cchkgb.c */
F2CSUB cchkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, complex *a, 
	integer *la, complex *afac, integer *lafac, complex *b, complex *x, 
	complex *xact, complex *work, real *rwork, integer *iwork, integer *
	nout);

/* cchkge.c */
F2CSUB cchkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *afac, complex *ainv, complex *b, complex *x, 
	complex *xact, complex *work, real *rwork, integer *iwork, integer *
	nout);

/* cchkgt.c */
F2CSUB cchkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, complex *
	a, complex *af, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchkhe.c */
F2CSUB cchkhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchkhp.c */
F2CSUB cchkhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *a, complex *afac, complex *ainv, complex *b, complex *
	x, complex *xact, complex *work, real *rwork, integer *iwork, integer 
	*nout);

/* cchklq.c */
F2CSUB cchklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *al, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchkpb.c */
F2CSUB cchkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *nout);

/* cchkpo.c */
F2CSUB cchkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *nout);

/* cchkpp.c */
F2CSUB cchkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *a, complex *afac, complex *ainv, complex *b, complex *
	x, complex *xact, complex *work, real *rwork, integer *nout);

/* cchkps.c */
F2CSUB cchkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *perm, integer *piv, complex *work, real *rwork, integer *
	nout);

/* cchkpt.c */
F2CSUB cchkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, complex *
	a, real *d__, complex *e, complex *b, complex *x, complex *xact, 
	complex *work, real *rwork, integer *nout);

/* cchkq3.c */
F2CSUB cchkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, real *thresh, complex *a, complex *copya, real *s, real *copys, 
	 complex *tau, complex *work, real *rwork, integer *iwork, integer *
	nout);

/* cchkql.c */
F2CSUB cchkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *al, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchkqp.c */
F2CSUB cchkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, complex *a, 
	 complex *copya, real *s, real *copys, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchkqr.c */
F2CSUB cchkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *ar, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchkrq.c */
F2CSUB cchkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *ar, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchksp.c */
F2CSUB cchksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *a, complex *afac, complex *ainv, complex *b, complex *
	x, complex *xact, complex *work, real *rwork, integer *iwork, integer 
	*nout);

/* cchksy.c */
F2CSUB cchksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *iwork, integer *nout);

/* cchktb.c */
F2CSUB cchktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *ab, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *nout);

/* cchktp.c */
F2CSUB cchktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *ap, complex *ainvp, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *nout);

/* cchktr.c */
F2CSUB cchktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *ainv, 
	complex *b, complex *x, complex *xact, complex *work, real *rwork, 
	integer *nout);

/* cchktz.c */
F2CSUB cchktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, complex *a, 
	 complex *copya, real *s, real *copys, complex *tau, complex *work, 
	real *rwork, integer *nout);

/* cdrvgb.c */
F2CSUB cdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, integer *la, 
	 complex *afb, integer *lafb, complex *asav, complex *b, complex *
	bsav, complex *x, complex *xact, real *s, complex *work, real *rwork, 
	integer *iwork, integer *nout);

/* cdrvgbx.c */
F2CSUB cdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, integer *la, 
	 complex *afb, integer *lafb, complex *asav, complex *b, complex *
	bsav, complex *x, complex *xact, real *s, complex *work, real *rwork, 
	integer *iwork, integer *nout);

/* cdrvge.c */
F2CSUB cdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *iwork, 
	 integer *nout);

/* cdrvgex.c */
F2CSUB cdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *iwork, 
	 integer *nout);

/* cdrvgt.c */
F2CSUB cdrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, complex *af, 
	 complex *b, complex *x, complex *xact, complex *work, real *rwork, 
	integer *iwork, integer *nout);

/* cdrvhe.c */
F2CSUB cdrvhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);

/* cdrvhp.c */
F2CSUB cdrvhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);

/* cdrvls.c */
F2CSUB cdrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, real *thresh, logical *tsterr, 
	complex *a, complex *copya, complex *b, complex *copyb, complex *c__, 
	real *s, real *copys, complex *work, real *rwork, integer *iwork, 
	integer *nout);

/* cdrvpb.c */
F2CSUB cdrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);

/* cdrvpo.c */
F2CSUB cdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);

/* cdrvpox.c */
F2CSUB cdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);

/* cdrvpp.c */
F2CSUB cdrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);

/* cdrvpt.c */
F2CSUB cdrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, real *d__, 
	complex *e, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *nout);

/* cdrvrf1.c */
F2CSUB cdrvrf1_(integer *nout, integer *nn, integer *nval, real 
	*thresh, complex *a, integer *lda, complex *arf, real *work);

/* cdrvrf2.c */
F2CSUB cdrvrf2_(integer *nout, integer *nn, integer *nval, 
	complex *a, integer *lda, complex *arf, complex *ap, complex *asav);

/* cdrvrf3.c */
F2CSUB cdrvrf3_(integer *nout, integer *nn, integer *nval, real 
	*thresh, complex *a, integer *lda, complex *arf, complex *b1, complex 
	*b2, real *s_work_clange__, complex *c_work_cgeqrf__, complex *tau);

/* cdrvrf4.c */
F2CSUB cdrvrf4_(integer *nout, integer *nn, integer *nval, real 
	*thresh, complex *c1, complex *c2, integer *ldc, complex *crf, 
	complex *a, integer *lda, real *s_work_clange__);

/* cdrvrfp.c */
F2CSUB cdrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, real *
	thresh, complex *a, complex *asav, complex *afac, complex *ainv, 
	complex *b, complex *bsav, complex *xact, complex *x, complex *arf, 
	complex *arfinv, complex *c_work_clatms__, complex *c_work_cpot01__, 
	complex *c_work_cpot02__, complex *c_work_cpot03__, real *
	s_work_clatms__, real *s_work_clanhe__, real *s_work_cpot02__, real *
	s_work_cpot03__);

/* cdrvsp.c */
F2CSUB cdrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);

/* cdrvsy.c */
F2CSUB cdrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);

/* cebchvxx.c */
F2CSUB cebchvxx_(real *thresh, char *path);

/* cerrge.c */
F2CSUB cerrge_(char *path, integer *nunit);

/* cerrgex.c */
F2CSUB cerrge_(char *path, integer *nunit);

/* cerrgt.c */
F2CSUB cerrgt_(char *path, integer *nunit);

/* cerrhe.c */
F2CSUB cerrhe_(char *path, integer *nunit);

/* cerrlq.c */
F2CSUB cerrlq_(char *path, integer *nunit);

/* cerrls.c */
F2CSUB cerrls_(char *path, integer *nunit);

/* cerrpo.c */
F2CSUB cerrpo_(char *path, integer *nunit);

/* cerrpox.c */
F2CSUB cerrpo_(char *path, integer *nunit);

/* cerrps.c */
F2CSUB cerrps_(char *path, integer *nunit);

/* cerrql.c */
F2CSUB cerrql_(char *path, integer *nunit);

/* cerrqp.c */
F2CSUB cerrqp_(char *path, integer *nunit);

/* cerrqr.c */
F2CSUB cerrqr_(char *path, integer *nunit);

/* cerrrfp.c */
F2CSUB cerrrfp_(integer *nunit);

/* cerrrq.c */
F2CSUB cerrrq_(char *path, integer *nunit);

/* cerrsy.c */
F2CSUB cerrsy_(char *path, integer *nunit);

/* cerrtr.c */
F2CSUB cerrtr_(char *path, integer *nunit);

/* cerrtz.c */
F2CSUB cerrtz_(char *path, integer *nunit);

/* cerrvx.c */
F2CSUB cerrvx_(char *path, integer *nunit);

/* cgbt01.c */
F2CSUB cgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *a, integer *lda, complex *afac, integer *ldafac, integer *
	ipiv, complex *work, real *resid);

/* cgbt02.c */
F2CSUB cgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, complex *a, integer *lda, complex *x, 
	integer *ldx, complex *b, integer *ldb, real *resid);

/* cgbt05.c */
F2CSUB cgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex *ab, integer *ldab, complex *b, integer *
	ldb, complex *x, integer *ldx, complex *xact, integer *ldxact, real *
	ferr, real *berr, real *reslts);

/* cgelqs.c */
F2CSUB cgelqs_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);

/* cgennd.c */
logical cgennd_(integer *m, integer *n, complex *a, integer *lda);

/* cgeqls.c */
F2CSUB cgeqls_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);

/* cgeqrs.c */
F2CSUB cgeqrs_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);

/* cgerqs.c */
F2CSUB cgerqs_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);

/* cget01.c */
F2CSUB cget01_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, integer *ipiv, real *rwork, real *
	resid);

/* cget02.c */
F2CSUB cget02_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);

/* cget03.c */
F2CSUB cget03_(integer *n, complex *a, integer *lda, complex *
	ainv, integer *ldainv, complex *work, integer *ldwork, real *rwork, 
	real *rcond, real *resid);

/* cget04.c */
F2CSUB cget04_(integer *n, integer *nrhs, complex *x, integer *
	ldx, complex *xact, integer *ldxact, real *rcond, real *resid);

/* cget07.c */
F2CSUB cget07_(char *trans, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, complex *x, integer *ldx, 
	complex *xact, integer *ldxact, real *ferr, logical *chkferr, real *
	berr, real *reslts);

/* cgtt01.c */
F2CSUB cgtt01_(integer *n, complex *dl, complex *d__, complex *
	du, complex *dlf, complex *df, complex *duf, complex *du2, integer *
	ipiv, complex *work, integer *ldwork, real *rwork, real *resid);

/* cgtt02.c */
F2CSUB cgtt02_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);

/* cgtt05.c */
F2CSUB cgtt05_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *b, integer *ldb, complex *x, 
	integer *ldx, complex *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);

/* chet01.c */
F2CSUB chet01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, integer *ipiv, complex *c__, integer 
	*ldc, real *rwork, real *resid);

/* chkxer.c */
F2CSUB chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);

/* chpt01.c */
F2CSUB chpt01_(char *uplo, integer *n, complex *a, complex *
	afac, integer *ipiv, complex *c__, integer *ldc, real *rwork, real *
	resid);

/* clahilb.c */
F2CSUB clahilb_(integer *n, integer *nrhs, complex *a, integer *
	lda, complex *x, integer *ldx, complex *b, integer *ldb, real *work, 
	integer *info, char *path);

/* claipd.c */
F2CSUB claipd_(integer *n, complex *a, integer *inda, integer *
	vinda);

/* claptm.c */
F2CSUB claptm_(char *uplo, integer *n, integer *nrhs, real *
	alpha, real *d__, complex *e, complex *x, integer *ldx, real *beta, 
	complex *b, integer *ldb);

/* clarhs.c */
F2CSUB clarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, integer *iseed, integer *info);

/* clatb4.c */
F2CSUB clatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, real *anorm, integer *mode, 
	 real *cndnum, char *dist);

/* clatb5.c */
F2CSUB clatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, real *anorm, integer *mode, real *
	cndnum, char *dist);

/* clatsp.c */
F2CSUB clatsp_(char *uplo, integer *n, complex *x, integer *
	iseed);

/* clatsy.c */
F2CSUB clatsy_(char *uplo, integer *n, complex *x, integer *ldx, 
	 integer *iseed);

/* clattb.c */
F2CSUB clattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, complex *ab, integer *
	ldab, complex *b, complex *work, real *rwork, integer *info);

/* clattp.c */
F2CSUB clattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, complex *ap, complex *b, complex *
	work, real *rwork, integer *info);

/* clattr.c */
F2CSUB clattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, complex *a, integer *lda, complex *
	b, complex *work, real *rwork, integer *info);

/* clavhe.c */
F2CSUB clavhe_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, integer *ipiv, complex *b, 
	integer *ldb, integer *info);

/* clavhp.c */
F2CSUB clavhp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *ipiv, complex *b, integer *ldb, 
	integer *info);

/* clavsp.c */
F2CSUB clavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *ipiv, complex *b, integer *ldb, 
	integer *info);

/* clavsy.c */
F2CSUB clavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, integer *ipiv, complex *b, 
	integer *ldb, integer *info);

/* clqt01.c */
F2CSUB clqt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *l, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);

/* clqt02.c */
F2CSUB clqt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *l, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* clqt03.c */
F2CSUB clqt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* cpbt01.c */
F2CSUB cpbt01_(char *uplo, integer *n, integer *kd, complex *a, 
	integer *lda, complex *afac, integer *ldafac, real *rwork, real *
	resid);

/* cpbt02.c */
F2CSUB cpbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);

/* cpbt05.c */
F2CSUB cpbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *b, integer *ldb, complex *
	x, integer *ldx, complex *xact, integer *ldxact, real *ferr, real *
	berr, real *reslts);

/* cpot01.c */
F2CSUB cpot01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, real *rwork, real *resid);

/* cpot02.c */
F2CSUB cpot02_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *x, integer *ldx, complex *b, integer *ldb, 
	real *rwork, real *resid);

/* cpot03.c */
F2CSUB cpot03_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *ainv, integer *ldainv, complex *work, integer *ldwork, real 
	*rwork, real *rcond, real *resid);

/* cpot05.c */
F2CSUB cpot05_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, complex *x, integer *ldx, 
	complex *xact, integer *ldxact, real *ferr, real *berr, real *reslts);

/* cppt01.c */
F2CSUB cppt01_(char *uplo, integer *n, complex *a, complex *
	afac, real *rwork, real *resid);

/* cppt02.c */
F2CSUB cppt02_(char *uplo, integer *n, integer *nrhs, complex *
	a, complex *x, integer *ldx, complex *b, integer *ldb, real *rwork, 
	real *resid);

/* cppt03.c */
F2CSUB cppt03_(char *uplo, integer *n, complex *a, complex *
	ainv, complex *work, integer *ldwork, real *rwork, real *rcond, real *
	resid);

/* cppt05.c */
F2CSUB cppt05_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *b, integer *ldb, complex *x, integer *ldx, complex *xact, 
	 integer *ldxact, real *ferr, real *berr, real *reslts);

/* cpst01.c */
F2CSUB cpst01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, complex *perm, integer *ldperm, 
	integer *piv, real *rwork, real *resid, integer *rank);

/* cptt01.c */
F2CSUB cptt01_(integer *n, real *d__, complex *e, real *df, 
	complex *ef, complex *work, real *resid);

/* cptt02.c */
F2CSUB cptt02_(char *uplo, integer *n, integer *nrhs, real *d__, 
	 complex *e, complex *x, integer *ldx, complex *b, integer *ldb, real 
	*resid);

/* cptt05.c */
F2CSUB cptt05_(integer *n, integer *nrhs, real *d__, complex *e, 
	 complex *b, integer *ldb, complex *x, integer *ldx, complex *xact, 
	integer *ldxact, real *ferr, real *berr, real *reslts);

/* cqlt01.c */
F2CSUB cqlt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *l, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);

/* cqlt02.c */
F2CSUB cqlt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *l, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* cqlt03.c */
F2CSUB cqlt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* cqpt01.c */
doublereal cqpt01_(integer *m, integer *n, integer *k, complex *a, complex *
	af, integer *lda, complex *tau, integer *jpvt, complex *work, integer 
	*lwork);

/* cqrt01.c */
F2CSUB cqrt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *r__, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);

/* cqrt02.c */
F2CSUB cqrt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* cqrt03.c */
F2CSUB cqrt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* cqrt11.c */
doublereal cqrt11_(integer *m, integer *k, complex *a, integer *lda, complex *
	tau, complex *work, integer *lwork);

/* cqrt12.c */
doublereal cqrt12_(integer *m, integer *n, complex *a, integer *lda, real *s, 
	complex *work, integer *lwork, real *rwork);

/* cqrt13.c */
F2CSUB cqrt13_(integer *scale, integer *m, integer *n, complex *
	a, integer *lda, real *norma, integer *iseed);

/* cqrt14.c */
doublereal cqrt14_(char *trans, integer *m, integer *n, integer *nrhs, 
	complex *a, integer *lda, complex *x, integer *ldx, complex *work, 
	integer *lwork);

/* cqrt15.c */
F2CSUB cqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *b, 
	integer *ldb, real *s, integer *rank, real *norma, real *normb, 
	integer *iseed, complex *work, integer *lwork);

/* cqrt16.c */
F2CSUB cqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);

/* cqrt17.c */
doublereal cqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *x, integer *ldx, 
	complex *b, integer *ldb, complex *c__, complex *work, integer *lwork);

/* crqt01.c */
F2CSUB crqt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *r__, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);

/* crqt02.c */
F2CSUB crqt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* crqt03.c */
F2CSUB crqt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);

/* crzt01.c */
doublereal crzt01_(integer *m, integer *n, complex *a, complex *af, integer *
	lda, complex *tau, complex *work, integer *lwork);

/* crzt02.c */
doublereal crzt02_(integer *m, integer *n, complex *af, integer *lda, complex 
	*tau, complex *work, integer *lwork);

/* csbmv.c */
F2CSUB csbmv_(char *uplo, integer *n, integer *k, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);

/* cspt01.c */
F2CSUB cspt01_(char *uplo, integer *n, complex *a, complex *
	afac, integer *ipiv, complex *c__, integer *ldc, real *rwork, real *
	resid);

/* cspt02.c */
F2CSUB cspt02_(char *uplo, integer *n, integer *nrhs, complex *
	a, complex *x, integer *ldx, complex *b, integer *ldb, real *rwork, 
	real *resid);

/* cspt03.c */
F2CSUB cspt03_(char *uplo, integer *n, complex *a, complex *
	ainv, complex *work, integer *ldw, real *rwork, real *rcond, real *
	resid);

/* csyt01.c */
F2CSUB csyt01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, integer *ipiv, complex *c__, integer 
	*ldc, real *rwork, real *resid);

/* csyt02.c */
F2CSUB csyt02_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *x, integer *ldx, complex *b, integer *ldb, 
	real *rwork, real *resid);

/* csyt03.c */
F2CSUB csyt03_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *ainv, integer *ldainv, complex *work, integer *ldwork, real 
	*rwork, real *rcond, real *resid);

/* ctbt02.c */
F2CSUB ctbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *x, 
	integer *ldx, complex *b, integer *ldb, complex *work, real *rwork, 
	real *resid);

/* ctbt03.c */
F2CSUB ctbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, real *scale, 
	real *cnorm, real *tscal, complex *x, integer *ldx, complex *b, 
	integer *ldb, complex *work, real *resid);

/* ctbt05.c */
F2CSUB ctbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *b, 
	integer *ldb, complex *x, integer *ldx, complex *xact, integer *
	ldxact, real *ferr, real *berr, real *reslts);

/* ctbt06.c */
F2CSUB ctbt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, integer *kd, complex *ab, integer *ldab, real *
	rwork, real *rat);

/* ctpt01.c */
F2CSUB ctpt01_(char *uplo, char *diag, integer *n, complex *ap, 
	complex *ainvp, real *rcond, real *rwork, real *resid);

/* ctpt02.c */
F2CSUB ctpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *x, integer *ldx, complex *b, 
	integer *ldb, complex *work, real *rwork, real *resid);

/* ctpt03.c */
F2CSUB ctpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, real *scale, real *cnorm, real *tscal, 
	complex *x, integer *ldx, complex *b, integer *ldb, complex *work, 
	real *resid);

/* ctpt05.c */
F2CSUB ctpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *b, integer *ldb, complex *x, 
	integer *ldx, complex *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);

/* ctpt06.c */
F2CSUB ctpt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, complex *ap, real *rwork, real *rat);

/* ctrt01.c */
F2CSUB ctrt01_(char *uplo, char *diag, integer *n, complex *a, 
	integer *lda, complex *ainv, integer *ldainv, real *rcond, real *
	rwork, real *resid);

/* ctrt02.c */
F2CSUB ctrt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *x, integer *ldx, 
	complex *b, integer *ldb, complex *work, real *rwork, real *resid);

/* ctrt03.c */
F2CSUB ctrt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, real *scale, real *cnorm, 
	real *tscal, complex *x, integer *ldx, complex *b, integer *ldb, 
	complex *work, real *resid);

/* ctrt05.c */
F2CSUB ctrt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *x, integer *ldx, complex *xact, integer *ldxact, real *ferr, 
	real *berr, real *reslts);

/* ctrt06.c */
F2CSUB ctrt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, complex *a, integer *lda, real *rwork, real *rat);

/* ctzt01.c */
doublereal ctzt01_(integer *m, integer *n, complex *a, complex *af, integer *
	lda, complex *tau, complex *work, integer *lwork);

/* ctzt02.c */
doublereal ctzt02_(integer *m, integer *n, complex *af, integer *lda, complex 
	*tau, complex *work, integer *lwork);

/* dchkeq.c */
F2CSUB dchkeq_(doublereal *thresh, integer *nout);

/* dchkgb.c */
F2CSUB dchkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, doublereal *
	a, integer *la, doublereal *afac, integer *lafac, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);

/* dchkge.c */
F2CSUB dchkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *afac, doublereal *ainv, doublereal *
	b, doublereal *x, doublereal *xact, doublereal *work, doublereal *
	rwork, integer *iwork, integer *nout);

/* dchkgt.c */
F2CSUB dchkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *af, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);

/* dchklq.c */
F2CSUB dchklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *al, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);

/* dchkpb.c */
F2CSUB dchkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *ainv, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);

/* dchkpo.c */
F2CSUB dchkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *ainv, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);

/* dchkpp.c */
F2CSUB dchkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *a, doublereal *afac, doublereal *ainv, 
	doublereal *b, doublereal *x, doublereal *xact, doublereal *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* dchkps.c */
F2CSUB dchkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *perm, integer *piv, doublereal *work, 
	doublereal *rwork, integer *nout);

/* dchkpt.c */
F2CSUB dchkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *d__, doublereal *e, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *nout);

/* dchkq3.c */
F2CSUB dchkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, doublereal *thresh, doublereal *a, doublereal *copya, 
	doublereal *s, doublereal *copys, doublereal *tau, doublereal *work, 
	integer *iwork, integer *nout);

/* dchkql.c */
F2CSUB dchkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *al, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);

/* dchkqp.c */
F2CSUB dchkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *copya, doublereal *s, doublereal *copys, 
	doublereal *tau, doublereal *work, integer *iwork, integer *nout);

/* dchkqr.c */
F2CSUB dchkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *ar, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);

/* dchkrq.c */
F2CSUB dchkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *ar, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);

/* dchksp.c */
F2CSUB dchksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *a, doublereal *afac, doublereal *ainv, 
	doublereal *b, doublereal *x, doublereal *xact, doublereal *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* dchksy.c */
F2CSUB dchksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *ainv, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);

/* dchktb.c */
F2CSUB dchktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *ab, doublereal *ainv, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);

/* dchktp.c */
F2CSUB dchktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *ap, doublereal *ainvp, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);

/* dchktr.c */
F2CSUB dchktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *ainv, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* dchktz.c */
F2CSUB dchktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *copya, doublereal *s, doublereal *copys, 
	doublereal *tau, doublereal *work, integer *nout);

/* ddrvab.c */
F2CSUB ddrvab_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *b, doublereal *x, 
	doublereal *work, doublereal *rwork, real *swork, integer *iwork, 
	integer *nout);

/* ddrvac.c */
F2CSUB ddrvac_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *b, doublereal *x, 
	doublereal *work, doublereal *rwork, real *swork, integer *nout);

/* ddrvgb.c */
F2CSUB ddrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	integer *la, doublereal *afb, integer *lafb, doublereal *asav, 
	doublereal *b, doublereal *bsav, doublereal *x, doublereal *xact, 
	doublereal *s, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);

/* ddrvgbx.c */
F2CSUB ddrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	integer *la, doublereal *afb, integer *lafb, doublereal *asav, 
	doublereal *b, doublereal *bsav, doublereal *x, doublereal *xact, 
	doublereal *s, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);

/* ddrvge.c */
F2CSUB ddrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* ddrvgex.c */
F2CSUB ddrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* ddrvgt.c */
F2CSUB ddrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	doublereal *af, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* ddrvls.c */
F2CSUB ddrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, doublereal *thresh, logical *
	tsterr, doublereal *a, doublereal *copya, doublereal *b, doublereal *
	copyb, doublereal *c__, doublereal *s, doublereal *copys, doublereal *
	work, integer *iwork, integer *nout);

/* ddrvpb.c */
F2CSUB ddrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* ddrvpo.c */
F2CSUB ddrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* ddrvpox.c */
F2CSUB ddrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* ddrvpp.c */
F2CSUB ddrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);

/* ddrvpt.c */
F2CSUB ddrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	doublereal *d__, doublereal *e, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *nout);

/* ddrvrf1.c */
F2CSUB ddrvrf1_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublereal *a, integer *lda, doublereal *arf, 
	doublereal *work);

/* ddrvrf2.c */
F2CSUB ddrvrf2_(integer *nout, integer *nn, integer *nval, 
	doublereal *a, integer *lda, doublereal *arf, doublereal *ap, 
	doublereal *asav);

/* ddrvrf3.c */
F2CSUB ddrvrf3_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublereal *a, integer *lda, doublereal *arf, 
	doublereal *b1, doublereal *b2, doublereal *d_work_dlange__, 
	doublereal *d_work_dgeqrf__, doublereal *tau);

/* ddrvrf4.c */
F2CSUB ddrvrf4_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublereal *c1, doublereal *c2, integer *ldc, 
	doublereal *crf, doublereal *a, integer *lda, doublereal *
	d_work_dlange__);

/* ddrvrfp.c */
F2CSUB ddrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, 
	doublereal *thresh, doublereal *a, doublereal *asav, doublereal *afac, 
	 doublereal *ainv, doublereal *b, doublereal *bsav, doublereal *xact, 
	doublereal *x, doublereal *arf, doublereal *arfinv, doublereal *
	d_work_dlatms__, doublereal *d_work_dpot01__, doublereal *
	d_temp_dpot02__, doublereal *d_temp_dpot03__, doublereal *
	d_work_dlansy__, doublereal *d_work_dpot02__, doublereal *
	d_work_dpot03__);

/* ddrvsp.c */
F2CSUB ddrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *ainv, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);

/* ddrvsy.c */
F2CSUB ddrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *ainv, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);

/* debchvxx.c */
F2CSUB debchvxx_(doublereal *thresh, char *path);

/* derrab.c */
F2CSUB derrab_(integer *nunit);

/* derrac.c */
F2CSUB derrac_(integer *nunit);

/* derrge.c */
F2CSUB derrge_(char *path, integer *nunit);

/* derrgex.c */
F2CSUB derrge_(char *path, integer *nunit);

/* derrgt.c */
F2CSUB derrgt_(char *path, integer *nunit);

/* derrlq.c */
F2CSUB derrlq_(char *path, integer *nunit);

/* derrls.c */
F2CSUB derrls_(char *path, integer *nunit);

/* derrpo.c */
F2CSUB derrpo_(char *path, integer *nunit);

/* derrpox.c */
F2CSUB derrpo_(char *path, integer *nunit);

/* derrps.c */
F2CSUB derrps_(char *path, integer *nunit);

/* derrql.c */
F2CSUB derrql_(char *path, integer *nunit);

/* derrqp.c */
F2CSUB derrqp_(char *path, integer *nunit);

/* derrqr.c */
F2CSUB derrqr_(char *path, integer *nunit);

/* derrrfp.c */
F2CSUB derrrfp_(integer *nunit);

/* derrrq.c */
F2CSUB derrrq_(char *path, integer *nunit);

/* derrsy.c */
F2CSUB derrsy_(char *path, integer *nunit);

/* derrtr.c */
F2CSUB derrtr_(char *path, integer *nunit);

/* derrtz.c */
F2CSUB derrtz_(char *path, integer *nunit);

/* derrvx.c */
F2CSUB derrvx_(char *path, integer *nunit);

/* dgbt01.c */
F2CSUB dgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *a, integer *lda, doublereal *afac, integer *ldafac, 
	integer *ipiv, doublereal *work, doublereal *resid);

/* dgbt02.c */
F2CSUB dgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublereal *a, integer *lda, doublereal *
	x, integer *ldx, doublereal *b, integer *ldb, doublereal *resid);

/* dgbt05.c */
F2CSUB dgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *xact, integer *
	ldxact, doublereal *ferr, doublereal *berr, doublereal *reslts);

/* dgelqs.c */
F2CSUB dgelqs_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);

/* dgennd.c */
logical dgennd_(integer *m, integer *n, doublereal *a, integer *lda);

/* dgeqls.c */
F2CSUB dgeqls_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);

/* dgeqrs.c */
F2CSUB dgeqrs_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);

/* dgerqs.c */
F2CSUB dgerqs_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);

/* dget01.c */
F2CSUB dget01_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, integer *ipiv, doublereal *
	rwork, doublereal *resid);

/* dget02.c */
F2CSUB dget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* dget03.c */
F2CSUB dget03_(integer *n, doublereal *a, integer *lda, 
	doublereal *ainv, integer *ldainv, doublereal *work, integer *ldwork, 
	doublereal *rwork, doublereal *rcond, doublereal *resid);

/* dget04.c */
F2CSUB dget04_(integer *n, integer *nrhs, doublereal *x, 
	integer *ldx, doublereal *xact, integer *ldxact, doublereal *rcond, 
	doublereal *resid);

/* dget06.c */
doublereal dget06_(doublereal *rcond, doublereal *rcondc);

/* dget07.c */
F2CSUB dget07_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *xact, integer *ldxact, doublereal *ferr, 
	logical *chkferr, doublereal *berr, doublereal *reslts);

/* dget08.c */
F2CSUB dget08_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* dgtt01.c */
F2CSUB dgtt01_(integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du, doublereal *dlf, doublereal *df, doublereal *duf, 
	doublereal *du2, integer *ipiv, doublereal *work, integer *ldwork, 
	doublereal *rwork, doublereal *resid);

/* dgtt02.c */
F2CSUB dgtt02_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *x, 
	integer *ldx, doublereal *b, integer *ldb, doublereal *rwork, 
	doublereal *resid);

/* dgtt05.c */
F2CSUB dgtt05_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *xact, integer *
	ldxact, doublereal *ferr, doublereal *berr, doublereal *reslts);

/* dlahilb.c */
F2CSUB dlahilb_(integer *n, integer *nrhs, doublereal *a, 
	integer *lda, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *work, integer *info);

/* dlaord.c */
F2CSUB dlaord_(char *job, integer *n, doublereal *x, integer *
	incx);

/* dlaptm.c */
F2CSUB dlaptm_(integer *n, integer *nrhs, doublereal *alpha, 
	doublereal *d__, doublereal *e, doublereal *x, integer *ldx, 
	doublereal *beta, doublereal *b, integer *ldb);

/* dlarhs.c */
F2CSUB dlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, integer *iseed, integer *info);

/* dlatb4.c */
F2CSUB dlatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, doublereal *anorm, integer 
	*mode, doublereal *cndnum, char *dist);

/* dlatb5.c */
F2CSUB dlatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, doublereal *anorm, integer *mode, 
	doublereal *cndnum, char *dist);

/* dlattb.c */
F2CSUB dlattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, doublereal *ab, 
	integer *ldab, doublereal *b, doublereal *work, integer *info);

/* dlattp.c */
F2CSUB dlattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublereal *a, doublereal *b, 
	doublereal *work, integer *info);

/* dlattr.c */
F2CSUB dlattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublereal *a, integer *lda, 
	doublereal *b, doublereal *work, integer *info);

/* dlavsp.c */
F2CSUB dlavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);

/* dlavsy.c */
F2CSUB dlavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, integer *ipiv, doublereal 
	*b, integer *ldb, integer *info);

/* dlqt01.c */
F2CSUB dlqt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dlqt02.c */
F2CSUB dlqt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dlqt03.c */
F2CSUB dlqt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dpbt01.c */
F2CSUB dpbt01_(char *uplo, integer *n, integer *kd, doublereal *
	a, integer *lda, doublereal *afac, integer *ldafac, doublereal *rwork, 
	 doublereal *resid);

/* dpbt02.c */
F2CSUB dpbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* dpbt05.c */
F2CSUB dpbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);

/* dpot01.c */
F2CSUB dpot01_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, doublereal *rwork, doublereal 
	*resid);

/* dpot02.c */
F2CSUB dpot02_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, doublereal *rwork, doublereal *resid);

/* dpot03.c */
F2CSUB dpot03_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *ainv, integer *ldainv, doublereal *work, integer *
	ldwork, doublereal *rwork, doublereal *rcond, doublereal *resid);

/* dpot05.c */
F2CSUB dpot05_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *xact, integer *ldxact, doublereal *ferr, 
	doublereal *berr, doublereal *reslts);

/* dpot06.c */
F2CSUB dpot06_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, doublereal *rwork, doublereal *resid);

/* dppt01.c */
F2CSUB dppt01_(char *uplo, integer *n, doublereal *a, 
	doublereal *afac, doublereal *rwork, doublereal *resid);

/* dppt02.c */
F2CSUB dppt02_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *rwork, doublereal *resid);

/* dppt03.c */
F2CSUB dppt03_(char *uplo, integer *n, doublereal *a, 
	doublereal *ainv, doublereal *work, integer *ldwork, doublereal *
	rwork, doublereal *rcond, doublereal *resid);

/* dppt05.c */
F2CSUB dppt05_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);

/* dpst01.c */
F2CSUB dpst01_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, doublereal *perm, integer *
	ldperm, integer *piv, doublereal *rwork, doublereal *resid, integer *
	rank);

/* dptt01.c */
F2CSUB dptt01_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *df, doublereal *ef, doublereal *work, doublereal *resid);

/* dptt02.c */
F2CSUB dptt02_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *resid);

/* dptt05.c */
F2CSUB dptt05_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);

/* dqlt01.c */
F2CSUB dqlt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dqlt02.c */
F2CSUB dqlt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dqlt03.c */
F2CSUB dqlt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dqpt01.c */
doublereal dqpt01_(integer *m, integer *n, integer *k, doublereal *a, 
	doublereal *af, integer *lda, doublereal *tau, integer *jpvt, 
	doublereal *work, integer *lwork);

/* dqrt01.c */
F2CSUB dqrt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dqrt02.c */
F2CSUB dqrt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dqrt03.c */
F2CSUB dqrt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* dqrt11.c */
doublereal dqrt11_(integer *m, integer *k, doublereal *a, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork);

/* dqrt12.c */
doublereal dqrt12_(integer *m, integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *work, integer *lwork);

/* dqrt13.c */
F2CSUB dqrt13_(integer *scale, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *norma, integer *iseed);

/* dqrt14.c */
doublereal dqrt14_(char *trans, integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	work, integer *lwork);

/* dqrt15.c */
F2CSUB dqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, doublereal *a, integer *lda, doublereal *b, 
	 integer *ldb, doublereal *s, integer *rank, doublereal *norma, 
	doublereal *normb, integer *iseed, doublereal *work, integer *lwork);

/* dqrt16.c */
F2CSUB dqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* dqrt17.c */
doublereal dqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *x, integer *
	ldx, doublereal *b, integer *ldb, doublereal *c__, doublereal *work, 
	integer *lwork);

/* drqt01.c */
F2CSUB drqt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* drqt02.c */
F2CSUB drqt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* drqt03.c */
F2CSUB drqt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);

/* drzt01.c */
doublereal drzt01_(integer *m, integer *n, doublereal *a, doublereal *af, 
	integer *lda, doublereal *tau, doublereal *work, integer *lwork);

/* drzt02.c */
doublereal drzt02_(integer *m, integer *n, doublereal *af, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork);

/* dspt01.c */
F2CSUB dspt01_(char *uplo, integer *n, doublereal *a, 
	doublereal *afac, integer *ipiv, doublereal *c__, integer *ldc, 
	doublereal *rwork, doublereal *resid);

/* dsyt01.c */
F2CSUB dsyt01_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, integer *ipiv, doublereal *
	c__, integer *ldc, doublereal *rwork, doublereal *resid);

/* dtbt02.c */
F2CSUB dtbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*x, integer *ldx, doublereal *b, integer *ldb, doublereal *work, 
	doublereal *resid);

/* dtbt03.c */
F2CSUB dtbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*scale, doublereal *cnorm, doublereal *tscal, doublereal *x, integer *
	ldx, doublereal *b, integer *ldb, doublereal *work, doublereal *resid);

/* dtbt05.c */
F2CSUB dtbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, doublereal *x, integer *ldx, doublereal *xact, 
	integer *ldxact, doublereal *ferr, doublereal *berr, doublereal *
	reslts);

/* dtbt06.c */
F2CSUB dtbt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, integer *kd, doublereal *ab, integer *
	ldab, doublereal *work, doublereal *rat);

/* dtpt01.c */
F2CSUB dtpt01_(char *uplo, char *diag, integer *n, doublereal *
	ap, doublereal *ainvp, doublereal *rcond, doublereal *work, 
	doublereal *resid);

/* dtpt02.c */
F2CSUB dtpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *work, doublereal *resid);

/* dtpt03.c */
F2CSUB dtpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *scale, doublereal *cnorm, 
	doublereal *tscal, doublereal *x, integer *ldx, doublereal *b, 
	integer *ldb, doublereal *work, doublereal *resid);

/* dtpt05.c */
F2CSUB dtpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);

/* dtpt06.c */
F2CSUB dtpt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublereal *ap, doublereal *work, 
	doublereal *rat);

/* dtrt01.c */
F2CSUB dtrt01_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, doublereal *ainv, integer *ldainv, doublereal *rcond, 
	 doublereal *work, doublereal *resid);

/* dtrt02.c */
F2CSUB dtrt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *x, integer *
	ldx, doublereal *b, integer *ldb, doublereal *work, doublereal *resid);

/* dtrt03.c */
F2CSUB dtrt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *scale, 
	doublereal *cnorm, doublereal *tscal, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *work, doublereal *resid);

/* dtrt05.c */
F2CSUB dtrt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);

/* dtrt06.c */
F2CSUB dtrt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublereal *a, integer *lda, doublereal 
	*work, doublereal *rat);

/* dtzt01.c */
doublereal dtzt01_(integer *m, integer *n, doublereal *a, doublereal *af, 
	integer *lda, doublereal *tau, doublereal *work, integer *lwork);

/* dtzt02.c */
doublereal dtzt02_(integer *m, integer *n, doublereal *af, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork);

/* icopy.c */
F2CSUB icopy_(integer *n, integer *sx, integer *incx, integer *
	sy, integer *incy);

/* ilaenv.c */
integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4);

/* schkeq.c */
F2CSUB schkeq_(real *thresh, integer *nout);

/* schkgb.c */
F2CSUB schkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, real *a, integer *
	la, real *afac, integer *lafac, real *b, real *x, real *xact, real *
	work, real *rwork, integer *iwork, integer *nout);

/* schkge.c */
F2CSUB schkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *afac, real *ainv, real *b, real *x, real *xact, real *
	work, real *rwork, integer *iwork, integer *nout);

/* schkgt.c */
F2CSUB schkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, real *a, 
	real *af, real *b, real *x, real *xact, real *work, real *rwork, 
	integer *iwork, integer *nout);

/* schklq.c */
F2CSUB schklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *al, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);

/* schkpb.c */
F2CSUB schkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	ainv, real *b, real *x, real *xact, real *work, real *rwork, integer *
	iwork, integer *nout);

/* schkpo.c */
F2CSUB schkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	ainv, real *b, real *x, real *xact, real *work, real *rwork, integer *
	iwork, integer *nout);

/* schkpp.c */
F2CSUB schkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *a, real *afac, real *ainv, real *b, real *x, real *xact, 
	real *work, real *rwork, integer *iwork, integer *nout);

/* schkps.c */
F2CSUB schkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	perm, integer *piv, real *work, real *rwork, integer *nout);

/* schkpt.c */
F2CSUB schkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, real *a, 
	real *d__, real *e, real *b, real *x, real *xact, real *work, real *
	rwork, integer *nout);

/* schkq3.c */
F2CSUB schkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, real *thresh, real *a, real *copya, real *s, real *copys, real 
	*tau, real *work, integer *iwork, integer *nout);

/* schkql.c */
F2CSUB schkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *al, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);

/* schkqp.c */
F2CSUB schkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, real *a, 
	real *copya, real *s, real *copys, real *tau, real *work, integer *
	iwork, integer *nout);

/* schkqr.c */
F2CSUB schkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *ar, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);

/* schkrq.c */
F2CSUB schkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *ar, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);

/* schksp.c */
F2CSUB schksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *a, real *afac, real *ainv, real *b, real *x, real *xact, 
	real *work, real *rwork, integer *iwork, integer *nout);

/* schksy.c */
F2CSUB schksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	ainv, real *b, real *x, real *xact, real *work, real *rwork, integer *
	iwork, integer *nout);

/* schktb.c */
F2CSUB schktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *ab, real *ainv, real *b, real *x, real *xact, real *work, 
	real *rwork, integer *iwork, integer *nout);

/* schktp.c */
F2CSUB schktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *ap, real *ainvp, real *b, real *x, real *xact, real *work, 
	 real *rwork, integer *iwork, integer *nout);

/* schktr.c */
F2CSUB schktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *ainv, real *b, 
	real *x, real *xact, real *work, real *rwork, integer *iwork, integer 
	*nout);

/* schktz.c */
F2CSUB schktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, real *a, 
	real *copya, real *s, real *copys, real *tau, real *work, integer *
	nout);

/* sdrvgb.c */
F2CSUB sdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, integer *la, 
	real *afb, integer *lafb, real *asav, real *b, real *bsav, real *x, 
	real *xact, real *s, real *work, real *rwork, integer *iwork, integer 
	*nout);

/* sdrvgbx.c */
F2CSUB sdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, integer *la, 
	real *afb, integer *lafb, real *asav, real *b, real *bsav, real *x, 
	real *xact, real *s, real *work, real *rwork, integer *iwork, integer 
	*nout);

/* sdrvge.c */
F2CSUB sdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);

/* sdrvgex.c */
F2CSUB sdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);

/* sdrvgt.c */
F2CSUB sdrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, real *af, real 
	*b, real *x, real *xact, real *work, real *rwork, integer *iwork, 
	integer *nout);

/* sdrvls.c */
F2CSUB sdrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, real *thresh, logical *tsterr, 
	real *a, real *copya, real *b, real *copyb, real *c__, real *s, real *
	copys, real *work, integer *iwork, integer *nout);

/* sdrvpb.c */
F2CSUB sdrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);

/* sdrvpo.c */
F2CSUB sdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);

/* sdrvpox.c */
F2CSUB sdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);

/* sdrvpp.c */
F2CSUB sdrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);

/* sdrvpt.c */
F2CSUB sdrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, real *d__, 
	real *e, real *b, real *x, real *xact, real *work, real *rwork, 
	integer *nout);

/* sdrvrf1.c */
F2CSUB sdrvrf1_(integer *nout, integer *nn, integer *nval, real 
	*thresh, real *a, integer *lda, real *arf, real *work);

/* sdrvrf2.c */
F2CSUB sdrvrf2_(integer *nout, integer *nn, integer *nval, real 
	*a, integer *lda, real *arf, real *ap, real *asav);

/* sdrvrf3.c */
F2CSUB sdrvrf3_(integer *nout, integer *nn, integer *nval, real 
	*thresh, real *a, integer *lda, real *arf, real *b1, real *b2, real *
	s_work_slange__, real *s_work_sgeqrf__, real *tau);

/* sdrvrf4.c */
F2CSUB sdrvrf4_(integer *nout, integer *nn, integer *nval, real 
	*thresh, real *c1, real *c2, integer *ldc, real *crf, real *a, 
	integer *lda, real *s_work_slange__);

/* sdrvrfp.c */
F2CSUB sdrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, real *
	thresh, real *a, real *asav, real *afac, real *ainv, real *b, real *
	bsav, real *xact, real *x, real *arf, real *arfinv, real *
	s_work_slatms__, real *s_work_spot01__, real *s_temp_spot02__, real *
	s_temp_spot03__, real *s_work_slansy__, real *s_work_spot02__, real *
	s_work_spot03__);

/* sdrvsp.c */
F2CSUB sdrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *ainv, real *b, real *x, real *xact, real *work, 
	real *rwork, integer *iwork, integer *nout);

/* sdrvsy.c */
F2CSUB sdrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *ainv, real *b, real *x, real *xact, real *work, 
	real *rwork, integer *iwork, integer *nout);

/* sebchvxx.c */
F2CSUB sebchvxx_(real *thresh, char *path);

/* serrge.c */
F2CSUB serrge_(char *path, integer *nunit);

/* serrgex.c */
F2CSUB serrge_(char *path, integer *nunit);

/* serrgt.c */
F2CSUB serrgt_(char *path, integer *nunit);

/* serrlq.c */
F2CSUB serrlq_(char *path, integer *nunit);

/* serrls.c */
F2CSUB serrls_(char *path, integer *nunit);

/* serrpo.c */
F2CSUB serrpo_(char *path, integer *nunit);

/* serrpox.c */
F2CSUB serrpo_(char *path, integer *nunit);

/* serrps.c */
F2CSUB serrps_(char *path, integer *nunit);

/* serrql.c */
F2CSUB serrql_(char *path, integer *nunit);

/* serrqp.c */
F2CSUB serrqp_(char *path, integer *nunit);

/* serrqr.c */
F2CSUB serrqr_(char *path, integer *nunit);

/* serrrfp.c */
F2CSUB serrrfp_(integer *nunit);

/* serrrq.c */
F2CSUB serrrq_(char *path, integer *nunit);

/* serrsy.c */
F2CSUB serrsy_(char *path, integer *nunit);

/* serrtr.c */
F2CSUB serrtr_(char *path, integer *nunit);

/* serrtz.c */
F2CSUB serrtz_(char *path, integer *nunit);

/* serrvx.c */
F2CSUB serrvx_(char *path, integer *nunit);

/* sgbt01.c */
F2CSUB sgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *a, integer *lda, real *afac, integer *ldafac, integer *ipiv, 
	real *work, real *resid);

/* sgbt02.c */
F2CSUB sgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, real *a, integer *lda, real *x, integer *
	ldx, real *b, integer *ldb, real *resid);

/* sgbt05.c */
F2CSUB sgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real *ab, integer *ldab, real *b, integer *ldb, 
	real *x, integer *ldx, real *xact, integer *ldxact, real *ferr, real *
	berr, real *reslts);

/* sgelqs.c */
F2CSUB sgelqs_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);

/* sgennd.c */
logical sgennd_(integer *m, integer *n, real *a, integer *lda);

/* sgeqls.c */
F2CSUB sgeqls_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);

/* sgeqrs.c */
F2CSUB sgeqrs_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);

/* sgerqs.c */
F2CSUB sgerqs_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);

/* sget01.c */
F2CSUB sget01_(integer *m, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, integer *ipiv, real *rwork, real *resid);

/* sget02.c */
F2CSUB sget02_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);

/* sget03.c */
F2CSUB sget03_(integer *n, real *a, integer *lda, real *ainv, 
	integer *ldainv, real *work, integer *ldwork, real *rwork, real *
	rcond, real *resid);

/* sget04.c */
F2CSUB sget04_(integer *n, integer *nrhs, real *x, integer *ldx, 
	 real *xact, integer *ldxact, real *rcond, real *resid);

/* sget06.c */
doublereal sget06_(real *rcond, real *rcondc);

/* sget07.c */
F2CSUB sget07_(char *trans, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *x, integer *ldx, real *
	xact, integer *ldxact, real *ferr, logical *chkferr, real *berr, real 
	*reslts);

/* sgtt01.c */
F2CSUB sgtt01_(integer *n, real *dl, real *d__, real *du, real *
	dlf, real *df, real *duf, real *du2, integer *ipiv, real *work, 
	integer *ldwork, real *rwork, real *resid);

/* sgtt02.c */
F2CSUB sgtt02_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *x, integer *ldx, real *b, integer *ldb, 
	real *rwork, real *resid);

/* sgtt05.c */
F2CSUB sgtt05_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *b, integer *ldb, real *x, integer *ldx, 
	real *xact, integer *ldxact, real *ferr, real *berr, real *reslts);

/* slahilb.c */
F2CSUB slahilb_(integer *n, integer *nrhs, real *a, integer *
	lda, real *x, integer *ldx, real *b, integer *ldb, real *work, 
	integer *info);

/* slaord.c */
F2CSUB slaord_(char *job, integer *n, real *x, integer *incx);

/* slaptm.c */
F2CSUB slaptm_(integer *n, integer *nrhs, real *alpha, real *
	d__, real *e, real *x, integer *ldx, real *beta, real *b, integer *
	ldb);

/* slarhs.c */
F2CSUB slarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	real *a, integer *lda, real *x, integer *ldx, real *b, integer *ldb, 
	integer *iseed, integer *info);

/* slatb4.c */
F2CSUB slatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, real *anorm, integer *mode, 
	 real *cndnum, char *dist);

/* slatb5.c */
F2CSUB slatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, real *anorm, integer *mode, real *
	cndnum, char *dist);

/* slattb.c */
F2CSUB slattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, real *ab, integer *
	ldab, real *b, real *work, integer *info);

/* slattp.c */
F2CSUB slattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, real *a, real *b, real *work, 
	integer *info);

/* slattr.c */
F2CSUB slattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, real *a, integer *lda, real *b, 
	real *work, integer *info);

/* slavsp.c */
F2CSUB slavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *ipiv, real *b, integer *ldb, integer 
	*info);

/* slavsy.c */
F2CSUB slavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, integer *ipiv, real *b, integer 
	*ldb, integer *info);

/* slqt01.c */
F2CSUB slqt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *l, integer *lda, real *tau, real *work, integer *lwork, real 
	*rwork, real *result);

/* slqt02.c */
F2CSUB slqt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *l, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* slqt03.c */
F2CSUB slqt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* spbt01.c */
F2CSUB spbt01_(char *uplo, integer *n, integer *kd, real *a, 
	integer *lda, real *afac, integer *ldafac, real *rwork, real *resid);

/* spbt02.c */
F2CSUB spbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);

/* spbt05.c */
F2CSUB spbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *b, integer *ldb, real *x, 
	integer *ldx, real *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);

/* spot01.c */
F2CSUB spot01_(char *uplo, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, real *rwork, real *resid);

/* spot02.c */
F2CSUB spot02_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *x, integer *ldx, real *b, integer *ldb, real *
	rwork, real *resid);

/* spot03.c */
F2CSUB spot03_(char *uplo, integer *n, real *a, integer *lda, 
	real *ainv, integer *ldainv, real *work, integer *ldwork, real *rwork, 
	 real *rcond, real *resid);

/* spot05.c */
F2CSUB spot05_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *x, integer *ldx, real *
	xact, integer *ldxact, real *ferr, real *berr, real *reslts);

/* sppt01.c */
F2CSUB sppt01_(char *uplo, integer *n, real *a, real *afac, 
	real *rwork, real *resid);

/* sppt02.c */
F2CSUB sppt02_(char *uplo, integer *n, integer *nrhs, real *a, 
	real *x, integer *ldx, real *b, integer *ldb, real *rwork, real *
	resid);

/* sppt03.c */
F2CSUB sppt03_(char *uplo, integer *n, real *a, real *ainv, 
	real *work, integer *ldwork, real *rwork, real *rcond, real *resid);

/* sppt05.c */
F2CSUB sppt05_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *b, integer *ldb, real *x, integer *ldx, real *xact, integer *
	ldxact, real *ferr, real *berr, real *reslts);

/* spst01.c */
F2CSUB spst01_(char *uplo, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, real *perm, integer *ldperm, integer *
	piv, real *rwork, real *resid, integer *rank);

/* sptt01.c */
F2CSUB sptt01_(integer *n, real *d__, real *e, real *df, real *
	ef, real *work, real *resid);

/* sptt02.c */
F2CSUB sptt02_(integer *n, integer *nrhs, real *d__, real *e, 
	real *x, integer *ldx, real *b, integer *ldb, real *resid);

/* sptt05.c */
F2CSUB sptt05_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb, real *x, integer *ldx, real *xact, integer *
	ldxact, real *ferr, real *berr, real *reslts);

/* sqlt01.c */
F2CSUB sqlt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *l, integer *lda, real *tau, real *work, integer *lwork, real 
	*rwork, real *result);

/* sqlt02.c */
F2CSUB sqlt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *l, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* sqlt03.c */
F2CSUB sqlt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* sqpt01.c */
doublereal sqpt01_(integer *m, integer *n, integer *k, real *a, real *af, 
	integer *lda, real *tau, integer *jpvt, real *work, integer *lwork);

/* sqrt01.c */
F2CSUB sqrt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *r__, integer *lda, real *tau, real *work, integer *lwork, 
	real *rwork, real *result);

/* sqrt02.c */
F2CSUB sqrt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *r__, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* sqrt03.c */
F2CSUB sqrt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* sqrt11.c */
doublereal sqrt11_(integer *m, integer *k, real *a, integer *lda, real *tau, 
	real *work, integer *lwork);

/* sqrt12.c */
doublereal sqrt12_(integer *m, integer *n, real *a, integer *lda, real *s, 
	real *work, integer *lwork);

/* sqrt13.c */
F2CSUB sqrt13_(integer *scale, integer *m, integer *n, real *a, 
	integer *lda, real *norma, integer *iseed);

/* sqrt14.c */
doublereal sqrt14_(char *trans, integer *m, integer *n, integer *nrhs, real *
	a, integer *lda, real *x, integer *ldx, real *work, integer *lwork);

/* sqrt15.c */
F2CSUB sqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, real *a, integer *lda, real *b, integer *
	ldb, real *s, integer *rank, real *norma, real *normb, integer *iseed, 
	 real *work, integer *lwork);

/* sqrt16.c */
F2CSUB sqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);

/* sqrt17.c */
doublereal sqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, 
	integer *ldb, real *c__, real *work, integer *lwork);

/* srqt01.c */
F2CSUB srqt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *r__, integer *lda, real *tau, real *work, integer *lwork, 
	real *rwork, real *result);

/* srqt02.c */
F2CSUB srqt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *r__, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* srqt03.c */
F2CSUB srqt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);

/* srzt01.c */
doublereal srzt01_(integer *m, integer *n, real *a, real *af, integer *lda, 
	real *tau, real *work, integer *lwork);

/* srzt02.c */
doublereal srzt02_(integer *m, integer *n, real *af, integer *lda, real *tau, 
	real *work, integer *lwork);

/* sspt01.c */
F2CSUB sspt01_(char *uplo, integer *n, real *a, real *afac, 
	integer *ipiv, real *c__, integer *ldc, real *rwork, real *resid);

/* ssyt01.c */
F2CSUB ssyt01_(char *uplo, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, integer *ipiv, real *c__, integer *ldc, 
	real *rwork, real *resid);

/* stbt02.c */
F2CSUB stbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *x, integer 
	*ldx, real *b, integer *ldb, real *work, real *resid);

/* stbt03.c */
F2CSUB stbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *scale, 
	real *cnorm, real *tscal, real *x, integer *ldx, real *b, integer *
	ldb, real *work, real *resid);

/* stbt05.c */
F2CSUB stbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *b, integer 
	*ldb, real *x, integer *ldx, real *xact, integer *ldxact, real *ferr, 
	real *berr, real *reslts);

/* stbt06.c */
F2CSUB stbt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, integer *kd, real *ab, integer *ldab, real *work, 
	real *rat);

/* stpt01.c */
F2CSUB stpt01_(char *uplo, char *diag, integer *n, real *ap, 
	real *ainvp, real *rcond, real *work, real *resid);

/* stpt02.c */
F2CSUB stpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *x, integer *ldx, real *b, integer *ldb, 
	 real *work, real *resid);

/* stpt03.c */
F2CSUB stpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *scale, real *cnorm, real *tscal, real *
	x, integer *ldx, real *b, integer *ldb, real *work, real *resid);

/* stpt05.c */
F2CSUB stpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *b, integer *ldb, real *x, integer *ldx, 
	 real *xact, integer *ldxact, real *ferr, real *berr, real *reslts);

/* stpt06.c */
F2CSUB stpt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, real *ap, real *work, real *rat);

/* strt01.c */
F2CSUB strt01_(char *uplo, char *diag, integer *n, real *a, 
	integer *lda, real *ainv, integer *ldainv, real *rcond, real *work, 
	real *resid);

/* strt02.c */
F2CSUB strt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, 
	integer *ldb, real *work, real *resid);

/* strt03.c */
F2CSUB strt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *scale, real *cnorm, real *
	tscal, real *x, integer *ldx, real *b, integer *ldb, real *work, real 
	*resid);

/* strt05.c */
F2CSUB strt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *b, integer *ldb, real *x, 
	integer *ldx, real *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);

/* strt06.c */
F2CSUB strt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, real *a, integer *lda, real *work, real *rat);

/* stzt01.c */
doublereal stzt01_(integer *m, integer *n, real *a, real *af, integer *lda, 
	real *tau, real *work, integer *lwork);

/* stzt02.c */
doublereal stzt02_(integer *m, integer *n, real *af, integer *lda, real *tau, 
	real *work, integer *lwork);

/* xerbla.c */
F2CSUB this_xerbla_(char *srname, integer *info);

/* xlaenv.c */
F2CSUB xlaenv_(integer *ispec, integer *nvalue);

/* zchkeq.c */
F2CSUB zchkeq_(doublereal *thresh, integer *nout);

/* zchkgb.c */
F2CSUB zchkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, integer *la, doublecomplex *afac, integer *lafac, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zchkge.c */
F2CSUB zchkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zchkgt.c */
F2CSUB zchkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublecomplex *af, doublecomplex *b, doublecomplex *
	x, doublecomplex *xact, doublecomplex *work, doublereal *rwork, 
	integer *iwork, integer *nout);

/* zchkhe.c */
F2CSUB zchkhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* zchkhp.c */
F2CSUB zchkhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *
	ainv, doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zchklq.c */
F2CSUB zchklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *al, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* zchkpb.c */
F2CSUB zchkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);

/* zchkpo.c */
F2CSUB zchkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);

/* zchkpp.c */
F2CSUB zchkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *
	ainv, doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *nout);

/* zchkps.c */
F2CSUB zchkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *perm, integer *piv, doublecomplex 
	*work, doublereal *rwork, integer *nout);

/* zchkpt.c */
F2CSUB zchkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublereal *d__, doublecomplex *e, doublecomplex *b, 
	 doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);

/* zchkq3.c */
F2CSUB zchkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, doublereal *thresh, doublecomplex *a, doublecomplex *copya, 
	doublereal *s, doublereal *copys, doublecomplex *tau, doublecomplex *
	work, doublereal *rwork, integer *iwork, integer *nout);

/* zchkql.c */
F2CSUB zchkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *al, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* zchkqp.c */
F2CSUB zchkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublecomplex *copya, doublereal *s, doublereal *
	copys, doublecomplex *tau, doublecomplex *work, doublereal *rwork, 
	integer *iwork, integer *nout);

/* zchkqr.c */
F2CSUB zchkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *ar, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* Main program */ int MAIN__(void);

/* zchkrq.c */
F2CSUB zchkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *ar, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* zchksp.c */
F2CSUB zchksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *
	ainv, doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zchksy.c */
F2CSUB zchksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);

/* zchktb.c */
F2CSUB zchktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *ab, doublecomplex *ainv, doublecomplex *
	b, doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);

/* zchktp.c */
F2CSUB zchktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *ap, doublecomplex *ainvp, doublecomplex 
	*b, doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);

/* zchktr.c */
F2CSUB zchktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *ainv, doublecomplex *b, doublecomplex *x, 
	doublecomplex *xact, doublecomplex *work, doublereal *rwork, integer *
	nout);

/* zchktz.c */
F2CSUB zchktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublecomplex *copya, doublereal *s, doublereal *
	copys, doublecomplex *tau, doublecomplex *work, doublereal *rwork, 
	integer *nout);

/* zdrvab.c */
F2CSUB zdrvab_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *b, 
	doublecomplex *x, doublecomplex *work, doublereal *rwork, complex *
	swork, integer *iwork, integer *nout);

/* zdrvac.c */
F2CSUB zdrvac_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *b, 
	doublecomplex *x, doublecomplex *work, doublereal *rwork, complex *
	swork, integer *nout);

/* zdrvgb.c */
F2CSUB zdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	integer *la, doublecomplex *afb, integer *lafb, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);

/* zdrvgbx.c */
F2CSUB zdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	integer *la, doublecomplex *afb, integer *lafb, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);

/* zdrvge.c */
F2CSUB zdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);

/* zdrvgex.c */
F2CSUB zdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);

/* zdrvgt.c */
F2CSUB zdrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	doublecomplex *af, doublecomplex *b, doublecomplex *x, doublecomplex *
	xact, doublecomplex *work, doublereal *rwork, integer *iwork, integer 
	*nout);

/* zdrvhe.c */
F2CSUB zdrvhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zdrvhp.c */
F2CSUB zdrvhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zdrvls.c */
F2CSUB zdrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, doublereal *thresh, logical *
	tsterr, doublecomplex *a, doublecomplex *copya, doublecomplex *b, 
	doublecomplex *copyb, doublecomplex *c__, doublereal *s, doublereal *
	copys, doublecomplex *work, doublereal *rwork, integer *iwork, 
	integer *nout);

/* zdrvpb.c */
F2CSUB zdrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);

/* zdrvpo.c */
F2CSUB zdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);

/* zdrvpox.c */
F2CSUB zdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);

/* zdrvpp.c */
F2CSUB zdrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);

/* zdrvpt.c */
F2CSUB zdrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, doublecomplex *x, 
	 doublecomplex *xact, doublecomplex *work, doublereal *rwork, integer 
	*nout);

/* zdrvrf1.c */
F2CSUB zdrvrf1_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublecomplex *a, integer *lda, doublecomplex *
	arf, doublereal *work);

/* zdrvrf2.c */
F2CSUB zdrvrf2_(integer *nout, integer *nn, integer *nval, 
	doublecomplex *a, integer *lda, doublecomplex *arf, doublecomplex *ap, 
	 doublecomplex *asav);

/* zdrvrf3.c */
F2CSUB zdrvrf3_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublecomplex *a, integer *lda, doublecomplex *
	arf, doublecomplex *b1, doublecomplex *b2, doublereal *
	d_work_zlange__, doublecomplex *z_work_zgeqrf__, doublecomplex *tau);

/* zdrvrf4.c */
F2CSUB zdrvrf4_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublecomplex *c1, doublecomplex *c2, integer *
	ldc, doublecomplex *crf, doublecomplex *a, integer *lda, doublereal *
	d_work_zlange__);

/* zdrvrfp.c */
F2CSUB zdrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, 
	doublereal *thresh, doublecomplex *a, doublecomplex *asav, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *bsav, doublecomplex *xact, doublecomplex *x, 
	doublecomplex *arf, doublecomplex *arfinv, doublecomplex *
	z_work_zlatms__, doublecomplex *z_work_zpot01__, doublecomplex *
	z_work_zpot02__, doublecomplex *z_work_zpot03__, doublereal *
	d_work_zlatms__, doublereal *d_work_zlanhe__, doublereal *
	d_work_zpot02__, doublereal *d_work_zpot03__);

/* zdrvsp.c */
F2CSUB zdrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zdrvsy.c */
F2CSUB zdrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);

/* zebchvxx.c */
F2CSUB zebchvxx_(doublereal *thresh, char *path);

/* zerrab.c */
F2CSUB zerrab_(integer *nunit);

/* zerrac.c */
F2CSUB zerrac_(integer *nunit);

/* zerrge.c */
F2CSUB zerrge_(char *path, integer *nunit);

/* zerrgex.c */
F2CSUB zerrge_(char *path, integer *nunit);

/* zerrgt.c */
F2CSUB zerrgt_(char *path, integer *nunit);

/* zerrhe.c */
F2CSUB zerrhe_(char *path, integer *nunit);

/* zerrlq.c */
F2CSUB zerrlq_(char *path, integer *nunit);

/* zerrls.c */
F2CSUB zerrls_(char *path, integer *nunit);

/* zerrpo.c */
F2CSUB zerrpo_(char *path, integer *nunit);

/* zerrpox.c */
F2CSUB zerrpo_(char *path, integer *nunit);

/* zerrps.c */
F2CSUB zerrps_(char *path, integer *nunit);

/* zerrql.c */
F2CSUB zerrql_(char *path, integer *nunit);

/* zerrqp.c */
F2CSUB zerrqp_(char *path, integer *nunit);

/* zerrqr.c */
F2CSUB zerrqr_(char *path, integer *nunit);

/* zerrrfp.c */
F2CSUB zerrrfp_(integer *nunit);

/* zerrrq.c */
F2CSUB zerrrq_(char *path, integer *nunit);

/* zerrsy.c */
F2CSUB zerrsy_(char *path, integer *nunit);

/* zerrtr.c */
F2CSUB zerrtr_(char *path, integer *nunit);

/* zerrtz.c */
F2CSUB zerrtz_(char *path, integer *nunit);

/* zerrvx.c */
F2CSUB zerrvx_(char *path, integer *nunit);

/* zgbt01.c */
F2CSUB zgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *a, integer *lda, doublecomplex *afac, integer *ldafac, 
	 integer *ipiv, doublecomplex *work, doublereal *resid);

/* zgbt02.c */
F2CSUB zgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublereal *resid);

/* zgbt05.c */
F2CSUB zgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, 
	 integer *ldb, doublecomplex *x, integer *ldx, doublecomplex *xact, 
	integer *ldxact, doublereal *ferr, doublereal *berr, doublereal *
	reslts);

/* zgelqs.c */
F2CSUB zgelqs_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zgennd.c */
logical zgennd_(integer *m, integer *n, doublecomplex *a, integer *lda);

/* zgeqls.c */
F2CSUB zgeqls_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zgeqrs.c */
F2CSUB zgeqrs_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zgerqs.c */
F2CSUB zgerqs_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);

/* zget01.c */
F2CSUB zget01_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, integer *ipiv, 
	doublereal *rwork, doublereal *resid);

/* zget02.c */
F2CSUB zget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zget03.c */
F2CSUB zget03_(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *ainv, integer *ldainv, doublecomplex *work, integer *
	ldwork, doublereal *rwork, doublereal *rcond, doublereal *resid);

/* zget04.c */
F2CSUB zget04_(integer *n, integer *nrhs, doublecomplex *x, 
	integer *ldx, doublecomplex *xact, integer *ldxact, doublereal *rcond, 
	 doublereal *resid);

/* zget07.c */
F2CSUB zget07_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *xact, integer *ldxact, 
	doublereal *ferr, logical *chkferr, doublereal *berr, doublereal *
	reslts);

/* zget08.c */
F2CSUB zget08_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zgtt01.c */
F2CSUB zgtt01_(integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du, doublecomplex *dlf, doublecomplex *df, 
	doublecomplex *duf, doublecomplex *du2, integer *ipiv, doublecomplex *
	work, integer *ldwork, doublereal *rwork, doublereal *resid);

/* zgtt02.c */
F2CSUB zgtt02_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublereal *rwork, doublereal *resid);

/* zgtt05.c */
F2CSUB zgtt05_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublecomplex *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);

/* zhet01.c */
F2CSUB zhet01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, integer *ipiv, 
	doublecomplex *c__, integer *ldc, doublereal *rwork, doublereal *
	resid);

/* zhpt01.c */
F2CSUB zhpt01_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *afac, integer *ipiv, doublecomplex *c__, integer *ldc, 
	doublereal *rwork, doublereal *resid);

/* zlahilb.c */
F2CSUB zlahilb_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *work, integer *info, char *path);

/* zlaipd.c */
F2CSUB zlaipd_(integer *n, doublecomplex *a, integer *inda, 
	integer *vinda);

/* zlaptm.c */
F2CSUB zlaptm_(char *uplo, integer *n, integer *nrhs, 
	doublereal *alpha, doublereal *d__, doublecomplex *e, doublecomplex *
	x, integer *ldx, doublereal *beta, doublecomplex *b, integer *ldb);

/* zlarhs.c */
F2CSUB zlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, integer *iseed, integer *info);

/* zlatb4.c */
F2CSUB zlatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, doublereal *anorm, integer 
	*mode, doublereal *cndnum, char *dist);

/* zlatb5.c */
F2CSUB zlatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, doublereal *anorm, integer *mode, 
	doublereal *cndnum, char *dist);

/* zlatsp.c */
F2CSUB zlatsp_(char *uplo, integer *n, doublecomplex *x, 
	integer *iseed);

/* zlatsy.c */
F2CSUB zlatsy_(char *uplo, integer *n, doublecomplex *x, 
	integer *ldx, integer *iseed);

/* zlattb.c */
F2CSUB zlattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, doublecomplex *ab, 
	integer *ldab, doublecomplex *b, doublecomplex *work, doublereal *
	rwork, integer *info);

/* zlattp.c */
F2CSUB zlattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublecomplex *ap, doublecomplex *b, 
	 doublecomplex *work, doublereal *rwork, integer *info);

/* zlattr.c */
F2CSUB zlattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *work, doublereal *rwork, integer *
	info);

/* zlavhe.c */
F2CSUB zlavhe_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);

/* zlavhp.c */
F2CSUB zlavhp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* zlavsp.c */
F2CSUB zlavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);

/* zlavsy.c */
F2CSUB zlavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);

/* zlqt01.c */
F2CSUB zlqt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *l, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);

/* zlqt02.c */
F2CSUB zlqt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	l, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);

/* zlqt03.c */
F2CSUB zlqt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);

/* zpbt01.c */
F2CSUB zpbt01_(char *uplo, integer *n, integer *kd, 
	doublecomplex *a, integer *lda, doublecomplex *afac, integer *ldafac, 
	doublereal *rwork, doublereal *resid);

/* zpbt02.c */
F2CSUB zpbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zpbt05.c */
F2CSUB zpbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, doublecomplex *x, integer *ldx, doublecomplex *xact, integer *
	ldxact, doublereal *ferr, doublereal *berr, doublereal *reslts);

/* zpot01.c */
F2CSUB zpot01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, doublereal *rwork, 
	 doublereal *resid);

/* zpot02.c */
F2CSUB zpot02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zpot03.c */
F2CSUB zpot03_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *ainv, integer *ldainv, doublecomplex *
	work, integer *ldwork, doublereal *rwork, doublereal *rcond, 
	doublereal *resid);

/* zpot05.c */
F2CSUB zpot05_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);

/* zpot06.c */
F2CSUB zpot06_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zppt01.c */
F2CSUB zppt01_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *afac, doublereal *rwork, doublereal *resid);

/* zppt02.c */
F2CSUB zppt02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *rwork, doublereal *resid);

/* zppt03.c */
F2CSUB zppt03_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *ainv, doublecomplex *work, integer *ldwork, doublereal 
	*rwork, doublereal *rcond, doublereal *resid);

/* zppt05.c */
F2CSUB zppt05_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublecomplex *xact, integer *ldxact, doublereal *ferr, 
	doublereal *berr, doublereal *reslts);

/* zpst01.c */
F2CSUB zpst01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, doublecomplex *
	perm, integer *ldperm, integer *piv, doublereal *rwork, doublereal *
	resid, integer *rank);

/* zptt01.c */
F2CSUB zptt01_(integer *n, doublereal *d__, doublecomplex *e, 
	doublereal *df, doublecomplex *ef, doublecomplex *work, doublereal *
	resid);

/* zptt02.c */
F2CSUB zptt02_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *resid);

/* zptt05.c */
F2CSUB zptt05_(integer *n, integer *nrhs, doublereal *d__, 
	doublecomplex *e, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublecomplex *xact, integer *ldxact, doublereal *ferr, 
	doublereal *berr, doublereal *reslts);

/* zqlt01.c */
F2CSUB zqlt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *l, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);

/* zqlt02.c */
F2CSUB zqlt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	l, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);

/* zqlt03.c */
F2CSUB zqlt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);

/* zqpt01.c */
doublereal zqpt01_(integer *m, integer *n, integer *k, doublecomplex *a, 
	doublecomplex *af, integer *lda, doublecomplex *tau, integer *jpvt, 
	doublecomplex *work, integer *lwork);

/* zqrt01.c */
F2CSUB zqrt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *r__, integer *lda, 
	 doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);

/* zqrt02.c */
F2CSUB zqrt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);

/* zqrt03.c */
F2CSUB zqrt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);

/* zqrt11.c */
doublereal zqrt11_(integer *m, integer *k, doublecomplex *a, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork);

/* zqrt12.c */
doublereal zqrt12_(integer *m, integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublecomplex *work, integer *lwork, doublereal *rwork);

/* zqrt13.c */
F2CSUB zqrt13_(integer *scale, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublereal *norma, integer *iseed);

/* zqrt14.c */
doublereal zqrt14_(char *trans, integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *work, integer *lwork);

/* zqrt15.c */
F2CSUB zqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublereal *s, integer *rank, 
	doublereal *norma, doublereal *normb, integer *iseed, doublecomplex *
	work, integer *lwork);

/* zqrt16.c */
F2CSUB zqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zqrt17.c */
doublereal zqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *x, 
	integer *ldx, doublecomplex *b, integer *ldb, doublecomplex *c__, 
	doublecomplex *work, integer *lwork);

/* zrqt01.c */
F2CSUB zrqt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *r__, integer *lda, 
	 doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);

/* zrqt02.c */
F2CSUB zrqt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);

/* zrqt03.c */
F2CSUB zrqt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);

/* zrzt01.c */
doublereal zrzt01_(integer *m, integer *n, doublecomplex *a, doublecomplex *
	af, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork);

/* zrzt02.c */
doublereal zrzt02_(integer *m, integer *n, doublecomplex *af, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork);

/* zsbmv.c */
F2CSUB zsbmv_(char *uplo, integer *n, integer *k, doublecomplex 
	*alpha, doublecomplex *a, integer *lda, doublecomplex *x, integer *
	incx, doublecomplex *beta, doublecomplex *y, integer *incy);

/* zspt01.c */
F2CSUB zspt01_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *afac, integer *ipiv, doublecomplex *c__, integer *ldc, 
	doublereal *rwork, doublereal *resid);

/* zspt02.c */
F2CSUB zspt02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *rwork, doublereal *resid);

/* zspt03.c */
F2CSUB zspt03_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *ainv, doublecomplex *work, integer *ldw, doublereal *
	rwork, doublereal *rcond, doublereal *resid);

/* zsyt01.c */
F2CSUB zsyt01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, integer *ipiv, 
	doublecomplex *c__, integer *ldc, doublereal *rwork, doublereal *
	resid);

/* zsyt02.c */
F2CSUB zsyt02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);

/* zsyt03.c */
F2CSUB zsyt03_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *ainv, integer *ldainv, doublecomplex *
	work, integer *ldwork, doublereal *rwork, doublereal *rcond, 
	doublereal *resid);

/* ztbt02.c */
F2CSUB ztbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublecomplex *work, doublereal *rwork, doublereal *resid);

/* ztbt03.c */
F2CSUB ztbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublereal *scale, doublereal *cnorm, doublereal *tscal, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublecomplex *work, doublereal *resid);

/* ztbt05.c */
F2CSUB ztbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublecomplex *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);

/* ztbt06.c */
F2CSUB ztbt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, integer *kd, doublecomplex *ab, integer 
	*ldab, doublereal *rwork, doublereal *rat);

/* ztpt01.c */
F2CSUB ztpt01_(char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublecomplex *ainvp, doublereal *rcond, 
	doublereal *rwork, doublereal *resid);

/* ztpt02.c */
F2CSUB ztpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublecomplex *work, doublereal *
	rwork, doublereal *resid);

/* ztpt03.c */
F2CSUB ztpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublereal *scale, doublereal *
	cnorm, doublereal *tscal, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublecomplex *work, doublereal *
	resid);

/* ztpt05.c */
F2CSUB ztpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);

/* ztpt06.c */
F2CSUB ztpt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublecomplex *ap, doublereal *rwork, 
	doublereal *rat);

/* ztrt01.c */
F2CSUB ztrt01_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *ainv, integer *ldainv, 
	doublereal *rcond, doublereal *rwork, doublereal *resid);

/* ztrt02.c */
F2CSUB ztrt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *x, 
	integer *ldx, doublecomplex *b, integer *ldb, doublecomplex *work, 
	doublereal *rwork, doublereal *resid);

/* ztrt03.c */
F2CSUB ztrt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublereal *scale, 
	doublereal *cnorm, doublereal *tscal, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublecomplex *work, doublereal *
	resid);

/* ztrt05.c */
F2CSUB ztrt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublecomplex *xact, 
	integer *ldxact, doublereal *ferr, doublereal *berr, doublereal *
	reslts);

/* ztrt06.c */
F2CSUB ztrt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublecomplex *a, integer *lda, 
	doublereal *rwork, doublereal *rat);

/* ztzt01.c */
doublereal ztzt01_(integer *m, integer *n, doublecomplex *a, doublecomplex *
	af, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork);

/* ztzt02.c */
doublereal ztzt02_(integer *m, integer *n, doublecomplex *af, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork);

