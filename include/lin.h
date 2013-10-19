#ifndef CBLAPACK_LIN_H
#define CBLAPACK_LIN_H

extern /* Subroutine */ int aladhd_(integer *iounit, char *path);
extern /* Subroutine */ int alaerh_(char *path, char *subnam, integer *info, integer 
	*infoe, char *opts, integer *m, integer *n, integer *kl, integer *ku, 
	integer *n5, integer *imat, integer *nfail, integer *nerrs, integer *
	nout);
extern /* Subroutine */ int alaesm_(char *path, logical *ok, integer *nout);
extern /* Subroutine */ int alahd_(integer *iounit, char *path);
extern /* Subroutine */ int alareq_(char *path, integer *nmats, logical *dotype, 
	integer *ntypes, integer *nin, integer *nout);
extern /* Subroutine */ int alasum_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);
extern /* Subroutine */ int alasvm_(char *type__, integer *nout, integer *nfail, 
	integer *nrun, integer *nerrs);
extern /* Subroutine */ int cchkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, complex *a, 
	integer *la, complex *afac, integer *lafac, complex *b, complex *x, 
	complex *xact, complex *work, real *rwork, integer *iwork, integer *
	nout);
extern /* Subroutine */ int cchkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *afac, complex *ainv, complex *b, complex *x, 
	complex *xact, complex *work, real *rwork, integer *iwork, integer *
	nout);
extern /* Subroutine */ int cchkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, complex *
	a, complex *af, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchkhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchkhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *a, complex *afac, complex *ainv, complex *b, complex *
	x, complex *xact, complex *work, real *rwork, integer *iwork, integer 
	*nout);
extern /* Subroutine */ int cchklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *al, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *nout);
extern /* Subroutine */ int cchkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *nout);
extern /* Subroutine */ int cchkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *a, complex *afac, complex *ainv, complex *b, complex *
	x, complex *xact, complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cchkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *perm, integer *piv, complex *work, real *rwork, integer *
	nout);
extern /* Subroutine */ int cchkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, complex *
	a, real *d__, complex *e, complex *b, complex *x, complex *xact, 
	complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cchkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, real *thresh, complex *a, complex *copya, real *s, real *copys, 
	 complex *tau, complex *work, real *rwork, integer *iwork, integer *
	nout);
extern /* Subroutine */ int cchkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *al, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, complex *a, 
	 complex *copya, real *s, real *copys, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *ar, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	complex *a, complex *af, complex *aq, complex *ar, complex *ac, 
	complex *b, complex *x, complex *xact, complex *tau, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *a, complex *afac, complex *ainv, complex *b, complex *
	x, complex *xact, complex *work, real *rwork, integer *iwork, integer 
	*nout);
extern /* Subroutine */ int cchksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *afac, 
	complex *ainv, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cchktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *ab, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cchktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, complex *ap, complex *ainvp, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cchktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, complex *a, complex *ainv, 
	complex *b, complex *x, complex *xact, complex *work, real *rwork, 
	integer *nout);
extern /* Subroutine */ int cchktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, complex *a, 
	 complex *copya, real *s, real *copys, complex *tau, complex *work, 
	real *rwork, integer *nout);
extern /* Subroutine */ int cdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, integer *la, 
	 complex *afb, integer *lafb, complex *asav, complex *b, complex *
	bsav, complex *x, complex *xact, real *s, complex *work, real *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int cdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, integer *la, 
	 complex *afb, integer *lafb, complex *asav, complex *b, complex *
	bsav, complex *x, complex *xact, real *s, complex *work, real *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int cdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *iwork, 
	 integer *nout);
extern /* Subroutine */ int cdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *iwork, 
	 integer *nout);
extern /* Subroutine */ int cdrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, complex *af, 
	 complex *b, complex *x, complex *xact, complex *work, real *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int cdrvhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cdrvhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cdrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, real *thresh, logical *tsterr, 
	complex *a, complex *copya, complex *b, complex *copyb, complex *c__, 
	real *s, real *copys, complex *work, real *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int cdrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cdrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *asav, complex *b, complex *bsav, complex *
	x, complex *xact, real *s, complex *work, real *rwork, integer *nout);
extern /* Subroutine */ int cdrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, complex *a, real *d__, 
	complex *e, complex *b, complex *x, complex *xact, complex *work, 
	real *rwork, integer *nout);
extern /* Subroutine */ int cdrvrf1_(integer *nout, integer *nn, integer *nval, real 
	*thresh, complex *a, integer *lda, complex *arf, real *work);
extern /* Subroutine */ int cdrvrf2_(integer *nout, integer *nn, integer *nval, 
	complex *a, integer *lda, complex *arf, complex *ap, complex *asav);
extern /* Subroutine */ int cdrvrf3_(integer *nout, integer *nn, integer *nval, real 
	*thresh, complex *a, integer *lda, complex *arf, complex *b1, complex 
	*b2, real *s_work_clange__, complex *c_work_cgeqrf__, complex *tau);
extern /* Subroutine */ int cdrvrf4_(integer *nout, integer *nn, integer *nval, real 
	*thresh, complex *c1, complex *c2, integer *ldc, complex *crf, 
	complex *a, integer *lda, real *s_work_clange__);
extern /* Subroutine */ int cdrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, real *
	thresh, complex *a, complex *asav, complex *afac, complex *ainv, 
	complex *b, complex *bsav, complex *xact, complex *x, complex *arf, 
	complex *arfinv, complex *c_work_clatms__, complex *c_work_cpot01__, 
	complex *c_work_cpot02__, complex *c_work_cpot03__, real *
	s_work_clatms__, real *s_work_clanhe__, real *s_work_cpot02__, real *
	s_work_cpot03__);
extern /* Subroutine */ int cdrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cdrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, complex *
	a, complex *afac, complex *ainv, complex *b, complex *x, complex *
	xact, complex *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int cebchvxx_(real *thresh, char *path);
extern /* Subroutine */ int cerrge_(char *path, integer *nunit);
extern /* Subroutine */ int cerrge_(char *path, integer *nunit);
extern /* Subroutine */ int cerrgt_(char *path, integer *nunit);
extern /* Subroutine */ int cerrhe_(char *path, integer *nunit);
extern /* Subroutine */ int cerrlq_(char *path, integer *nunit);
extern /* Subroutine */ int cerrls_(char *path, integer *nunit);
extern /* Subroutine */ int cerrpo_(char *path, integer *nunit);
extern /* Subroutine */ int cerrpo_(char *path, integer *nunit);
extern /* Subroutine */ int cerrps_(char *path, integer *nunit);
extern /* Subroutine */ int cerrql_(char *path, integer *nunit);
extern /* Subroutine */ int cerrqp_(char *path, integer *nunit);
extern /* Subroutine */ int cerrqr_(char *path, integer *nunit);
extern /* Subroutine */ int cerrrfp_(integer *nunit);
extern /* Subroutine */ int cerrrq_(char *path, integer *nunit);
extern /* Subroutine */ int cerrsy_(char *path, integer *nunit);
extern /* Subroutine */ int cerrtr_(char *path, integer *nunit);
extern /* Subroutine */ int cerrtz_(char *path, integer *nunit);
extern /* Subroutine */ int cerrvx_(char *path, integer *nunit);
extern /* Subroutine */ int cgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 complex *a, integer *lda, complex *afac, integer *ldafac, integer *
	ipiv, complex *work, real *resid);
extern /* Subroutine */ int cgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, complex *a, integer *lda, complex *x, 
	integer *ldx, complex *b, integer *ldb, real *resid);
extern /* Subroutine */ int cgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, complex *ab, integer *ldab, complex *b, integer *
	ldb, complex *x, integer *ldx, complex *xact, integer *ldxact, real *
	ferr, real *berr, real *reslts);
extern /* Subroutine */ int cgelqs_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);
extern logical cgennd_(integer *m, integer *n, complex *a, integer *lda);
extern /* Subroutine */ int cgeqls_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);
extern /* Subroutine */ int cgeqrs_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);
extern /* Subroutine */ int cgerqs_(integer *m, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *tau, complex *b, integer *ldb, complex *
	work, integer *lwork, integer *info);
extern /* Subroutine */ int cget01_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, integer *ipiv, real *rwork, real *
	resid);
extern /* Subroutine */ int cget02_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);
extern /* Subroutine */ int cget03_(integer *n, complex *a, integer *lda, complex *
	ainv, integer *ldainv, complex *work, integer *ldwork, real *rwork, 
	real *rcond, real *resid);
extern /* Subroutine */ int cget04_(integer *n, integer *nrhs, complex *x, integer *
	ldx, complex *xact, integer *ldxact, real *rcond, real *resid);
extern /* Subroutine */ int cget07_(char *trans, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, complex *x, integer *ldx, 
	complex *xact, integer *ldxact, real *ferr, logical *chkferr, real *
	berr, real *reslts);
extern /* Subroutine */ int cgtt01_(integer *n, complex *dl, complex *d__, complex *
	du, complex *dlf, complex *df, complex *duf, complex *du2, integer *
	ipiv, complex *work, integer *ldwork, real *rwork, real *resid);
extern /* Subroutine */ int cgtt02_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);
extern /* Subroutine */ int cgtt05_(char *trans, integer *n, integer *nrhs, complex *
	dl, complex *d__, complex *du, complex *b, integer *ldb, complex *x, 
	integer *ldx, complex *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);
extern /* Subroutine */ int chet01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, integer *ipiv, complex *c__, integer 
	*ldc, real *rwork, real *resid);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int chpt01_(char *uplo, integer *n, complex *a, complex *
	afac, integer *ipiv, complex *c__, integer *ldc, real *rwork, real *
	resid);
extern /* Subroutine */ int clahilb_(integer *n, integer *nrhs, complex *a, integer *
	lda, complex *x, integer *ldx, complex *b, integer *ldb, real *work, 
	integer *info, char *path);
extern /* Subroutine */ int claipd_(integer *n, complex *a, integer *inda, integer *
	vinda);
extern /* Subroutine */ int claptm_(char *uplo, integer *n, integer *nrhs, real *
	alpha, real *d__, complex *e, complex *x, integer *ldx, real *beta, 
	complex *b, integer *ldb);
extern /* Subroutine */ int clarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, integer *iseed, integer *info);
extern /* Subroutine */ int clatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, real *anorm, integer *mode, 
	 real *cndnum, char *dist);
extern /* Subroutine */ int clatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, real *anorm, integer *mode, real *
	cndnum, char *dist);
extern /* Subroutine */ int clatsp_(char *uplo, integer *n, complex *x, integer *
	iseed);
extern /* Subroutine */ int clatsy_(char *uplo, integer *n, complex *x, integer *ldx, 
	 integer *iseed);
extern /* Subroutine */ int clattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, complex *ab, integer *
	ldab, complex *b, complex *work, real *rwork, integer *info);
extern /* Subroutine */ int clattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, complex *ap, complex *b, complex *
	work, real *rwork, integer *info);
extern /* Subroutine */ int clattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, complex *a, integer *lda, complex *
	b, complex *work, real *rwork, integer *info);
extern /* Subroutine */ int clavhe_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, integer *ipiv, complex *b, 
	integer *ldb, integer *info);
extern /* Subroutine */ int clavhp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *ipiv, complex *b, integer *ldb, 
	integer *info);
extern /* Subroutine */ int clavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *ipiv, complex *b, integer *ldb, 
	integer *info);
extern /* Subroutine */ int clavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, integer *ipiv, complex *b, 
	integer *ldb, integer *info);
extern /* Subroutine */ int clqt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *l, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int clqt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *l, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int clqt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int cpbt01_(char *uplo, integer *n, integer *kd, complex *a, 
	integer *lda, complex *afac, integer *ldafac, real *rwork, real *
	resid);
extern /* Subroutine */ int cpbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);
extern /* Subroutine */ int cpbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, complex *ab, integer *ldab, complex *b, integer *ldb, complex *
	x, integer *ldx, complex *xact, integer *ldxact, real *ferr, real *
	berr, real *reslts);
extern /* Subroutine */ int cpot01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, real *rwork, real *resid);
extern /* Subroutine */ int cpot02_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *x, integer *ldx, complex *b, integer *ldb, 
	real *rwork, real *resid);
extern /* Subroutine */ int cpot03_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *ainv, integer *ldainv, complex *work, integer *ldwork, real 
	*rwork, real *rcond, real *resid);
extern /* Subroutine */ int cpot05_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *b, integer *ldb, complex *x, integer *ldx, 
	complex *xact, integer *ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int cppt01_(char *uplo, integer *n, complex *a, complex *
	afac, real *rwork, real *resid);
extern /* Subroutine */ int cppt02_(char *uplo, integer *n, integer *nrhs, complex *
	a, complex *x, integer *ldx, complex *b, integer *ldb, real *rwork, 
	real *resid);
extern /* Subroutine */ int cppt03_(char *uplo, integer *n, complex *a, complex *
	ainv, complex *work, integer *ldwork, real *rwork, real *rcond, real *
	resid);
extern /* Subroutine */ int cppt05_(char *uplo, integer *n, integer *nrhs, complex *
	ap, complex *b, integer *ldb, complex *x, integer *ldx, complex *xact, 
	 integer *ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int cpst01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, complex *perm, integer *ldperm, 
	integer *piv, real *rwork, real *resid, integer *rank);
extern /* Subroutine */ int cptt01_(integer *n, real *d__, complex *e, real *df, 
	complex *ef, complex *work, real *resid);
extern /* Subroutine */ int cptt02_(char *uplo, integer *n, integer *nrhs, real *d__, 
	 complex *e, complex *x, integer *ldx, complex *b, integer *ldb, real 
	*resid);
extern /* Subroutine */ int cptt05_(integer *n, integer *nrhs, real *d__, complex *e, 
	 complex *b, integer *ldb, complex *x, integer *ldx, complex *xact, 
	integer *ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int cqlt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *l, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int cqlt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *l, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int cqlt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern doublereal cqpt01_(integer *m, integer *n, integer *k, complex *a, complex *
	af, integer *lda, complex *tau, integer *jpvt, complex *work, integer 
	*lwork);
extern /* Subroutine */ int cqrt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *r__, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int cqrt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int cqrt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern doublereal cqrt11_(integer *m, integer *k, complex *a, integer *lda, complex *
	tau, complex *work, integer *lwork);
extern doublereal cqrt12_(integer *m, integer *n, complex *a, integer *lda, real *s, 
	complex *work, integer *lwork, real *rwork);
extern /* Subroutine */ int cqrt13_(integer *scale, integer *m, integer *n, complex *
	a, integer *lda, real *norma, integer *iseed);
extern doublereal cqrt14_(char *trans, integer *m, integer *n, integer *nrhs, 
	complex *a, integer *lda, complex *x, integer *ldx, complex *work, 
	integer *lwork);
extern /* Subroutine */ int cqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, complex *a, integer *lda, complex *b, 
	integer *ldb, real *s, integer *rank, real *norma, real *normb, 
	integer *iseed, complex *work, integer *lwork);
extern /* Subroutine */ int cqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, complex *a, integer *lda, complex *x, integer *ldx, complex *b, 
	integer *ldb, real *rwork, real *resid);
extern doublereal cqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *x, integer *ldx, 
	complex *b, integer *ldb, complex *c__, complex *work, integer *lwork);
extern /* Subroutine */ int crqt01_(integer *m, integer *n, complex *a, complex *af, 
	complex *q, complex *r__, integer *lda, complex *tau, complex *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int crqt02_(integer *m, integer *n, integer *k, complex *a, 
	complex *af, complex *q, complex *r__, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int crqt03_(integer *m, integer *n, integer *k, complex *af, 
	complex *c__, complex *cc, complex *q, integer *lda, complex *tau, 
	complex *work, integer *lwork, real *rwork, real *result);
extern doublereal crzt01_(integer *m, integer *n, complex *a, complex *af, integer *
	lda, complex *tau, complex *work, integer *lwork);
extern doublereal crzt02_(integer *m, integer *n, complex *af, integer *lda, complex 
	*tau, complex *work, integer *lwork);
extern /* Subroutine */ int csbmv_(char *uplo, integer *n, integer *k, complex *
	alpha, complex *a, integer *lda, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy);
extern /* Subroutine */ int cspt01_(char *uplo, integer *n, complex *a, complex *
	afac, integer *ipiv, complex *c__, integer *ldc, real *rwork, real *
	resid);
extern /* Subroutine */ int cspt02_(char *uplo, integer *n, integer *nrhs, complex *
	a, complex *x, integer *ldx, complex *b, integer *ldb, real *rwork, 
	real *resid);
extern /* Subroutine */ int cspt03_(char *uplo, integer *n, complex *a, complex *
	ainv, complex *work, integer *ldw, real *rwork, real *rcond, real *
	resid);
extern /* Subroutine */ int csyt01_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *afac, integer *ldafac, integer *ipiv, complex *c__, integer 
	*ldc, real *rwork, real *resid);
extern /* Subroutine */ int csyt02_(char *uplo, integer *n, integer *nrhs, complex *
	a, integer *lda, complex *x, integer *ldx, complex *b, integer *ldb, 
	real *rwork, real *resid);
extern /* Subroutine */ int csyt03_(char *uplo, integer *n, complex *a, integer *lda, 
	 complex *ainv, integer *ldainv, complex *work, integer *ldwork, real 
	*rwork, real *rcond, real *resid);
extern /* Subroutine */ int ctbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *x, 
	integer *ldx, complex *b, integer *ldb, complex *work, real *rwork, 
	real *resid);
extern /* Subroutine */ int ctbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, real *scale, 
	real *cnorm, real *tscal, complex *x, integer *ldx, complex *b, 
	integer *ldb, complex *work, real *resid);
extern /* Subroutine */ int ctbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, complex *ab, integer *ldab, complex *b, 
	integer *ldb, complex *x, integer *ldx, complex *xact, integer *
	ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int ctbt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, integer *kd, complex *ab, integer *ldab, real *
	rwork, real *rat);
extern /* Subroutine */ int ctpt01_(char *uplo, char *diag, integer *n, complex *ap, 
	complex *ainvp, real *rcond, real *rwork, real *resid);
extern /* Subroutine */ int ctpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *x, integer *ldx, complex *b, 
	integer *ldb, complex *work, real *rwork, real *resid);
extern /* Subroutine */ int ctpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, real *scale, real *cnorm, real *tscal, 
	complex *x, integer *ldx, complex *b, integer *ldb, complex *work, 
	real *resid);
extern /* Subroutine */ int ctpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *ap, complex *b, integer *ldb, complex *x, 
	integer *ldx, complex *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);
extern /* Subroutine */ int ctpt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, complex *ap, real *rwork, real *rat);
extern /* Subroutine */ int ctrt01_(char *uplo, char *diag, integer *n, complex *a, 
	integer *lda, complex *ainv, integer *ldainv, real *rcond, real *
	rwork, real *resid);
extern /* Subroutine */ int ctrt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *x, integer *ldx, 
	complex *b, integer *ldb, complex *work, real *rwork, real *resid);
extern /* Subroutine */ int ctrt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, real *scale, real *cnorm, 
	real *tscal, complex *x, integer *ldx, complex *b, integer *ldb, 
	complex *work, real *resid);
extern /* Subroutine */ int ctrt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, 
	complex *x, integer *ldx, complex *xact, integer *ldxact, real *ferr, 
	real *berr, real *reslts);
extern /* Subroutine */ int ctrt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, complex *a, integer *lda, real *rwork, real *rat);
extern doublereal ctzt01_(integer *m, integer *n, complex *a, complex *af, integer *
	lda, complex *tau, complex *work, integer *lwork);
extern doublereal ctzt02_(integer *m, integer *n, complex *af, integer *lda, complex 
	*tau, complex *work, integer *lwork);
extern /* Subroutine */ int dchkeq_(doublereal *thresh, integer *nout);
extern /* Subroutine */ int dchkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, doublereal *
	a, integer *la, doublereal *afac, integer *lafac, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int dchkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *afac, doublereal *ainv, doublereal *
	b, doublereal *x, doublereal *xact, doublereal *work, doublereal *
	rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int dchkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *af, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);
extern /* Subroutine */ int dchklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *al, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int dchkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *ainv, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);
extern /* Subroutine */ int dchkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *ainv, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);
extern /* Subroutine */ int dchkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *a, doublereal *afac, doublereal *ainv, 
	doublereal *b, doublereal *x, doublereal *xact, doublereal *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int dchkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *perm, integer *piv, doublereal *work, 
	doublereal *rwork, integer *nout);
extern /* Subroutine */ int dchkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *d__, doublereal *e, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *nout);
extern /* Subroutine */ int dchkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, doublereal *thresh, doublereal *a, doublereal *copya, 
	doublereal *s, doublereal *copys, doublereal *tau, doublereal *work, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int dchkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *al, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int dchkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *copya, doublereal *s, doublereal *copys, 
	doublereal *tau, doublereal *work, integer *iwork, integer *nout);
extern /* Subroutine */ int dchkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *ar, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int dchkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublereal *a, doublereal *af, doublereal *aq, doublereal *ar, 
	doublereal *ac, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *tau, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int dchksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *a, doublereal *afac, doublereal *ainv, 
	doublereal *b, doublereal *x, doublereal *xact, doublereal *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int dchksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *afac, doublereal *ainv, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *iwork, 
	 integer *nout);
extern /* Subroutine */ int dchktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *ab, doublereal *ainv, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int dchktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublereal *ap, doublereal *ainvp, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int dchktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublereal *a, 
	doublereal *ainv, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int dchktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublereal *a, doublereal *copya, doublereal *s, doublereal *copys, 
	doublereal *tau, doublereal *work, integer *nout);
extern /* Subroutine */ int ddrvab_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *b, doublereal *x, 
	doublereal *work, doublereal *rwork, real *swork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int ddrvac_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *b, doublereal *x, 
	doublereal *work, doublereal *rwork, real *swork, integer *nout);
extern /* Subroutine */ int ddrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	integer *la, doublereal *afb, integer *lafb, doublereal *asav, 
	doublereal *b, doublereal *bsav, doublereal *x, doublereal *xact, 
	doublereal *s, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int ddrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	integer *la, doublereal *afb, integer *lafb, doublereal *asav, 
	doublereal *b, doublereal *bsav, doublereal *x, doublereal *xact, 
	doublereal *s, doublereal *work, doublereal *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int ddrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	doublereal *af, doublereal *b, doublereal *x, doublereal *xact, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, doublereal *thresh, logical *
	tsterr, doublereal *a, doublereal *copya, doublereal *b, doublereal *
	copyb, doublereal *c__, doublereal *s, doublereal *copys, doublereal *
	work, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *asav, doublereal *b, 
	doublereal *bsav, doublereal *x, doublereal *xact, doublereal *s, 
	doublereal *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublereal *a, 
	doublereal *d__, doublereal *e, doublereal *b, doublereal *x, 
	doublereal *xact, doublereal *work, doublereal *rwork, integer *nout);
extern /* Subroutine */ int ddrvrf1_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublereal *a, integer *lda, doublereal *arf, 
	doublereal *work);
extern /* Subroutine */ int ddrvrf2_(integer *nout, integer *nn, integer *nval, 
	doublereal *a, integer *lda, doublereal *arf, doublereal *ap, 
	doublereal *asav);
extern /* Subroutine */ int ddrvrf3_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublereal *a, integer *lda, doublereal *arf, 
	doublereal *b1, doublereal *b2, doublereal *d_work_dlange__, 
	doublereal *d_work_dgeqrf__, doublereal *tau);
extern /* Subroutine */ int ddrvrf4_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublereal *c1, doublereal *c2, integer *ldc, 
	doublereal *crf, doublereal *a, integer *lda, doublereal *
	d_work_dlange__);
extern /* Subroutine */ int ddrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, 
	doublereal *thresh, doublereal *a, doublereal *asav, doublereal *afac, 
	 doublereal *ainv, doublereal *b, doublereal *bsav, doublereal *xact, 
	doublereal *x, doublereal *arf, doublereal *arfinv, doublereal *
	d_work_dlatms__, doublereal *d_work_dpot01__, doublereal *
	d_temp_dpot02__, doublereal *d_temp_dpot03__, doublereal *
	d_work_dlansy__, doublereal *d_work_dpot02__, doublereal *
	d_work_dpot03__);
extern /* Subroutine */ int ddrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *ainv, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int ddrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublereal *a, doublereal *afac, doublereal *ainv, doublereal *b, 
	doublereal *x, doublereal *xact, doublereal *work, doublereal *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int debchvxx_(doublereal *thresh, char *path);
extern /* Subroutine */ int derrab_(integer *nunit);
extern /* Subroutine */ int derrac_(integer *nunit);
extern /* Subroutine */ int derrge_(char *path, integer *nunit);
extern /* Subroutine */ int derrge_(char *path, integer *nunit);
extern /* Subroutine */ int derrgt_(char *path, integer *nunit);
extern /* Subroutine */ int derrlq_(char *path, integer *nunit);
extern /* Subroutine */ int derrls_(char *path, integer *nunit);
extern /* Subroutine */ int derrpo_(char *path, integer *nunit);
extern /* Subroutine */ int derrpo_(char *path, integer *nunit);
extern /* Subroutine */ int derrps_(char *path, integer *nunit);
extern /* Subroutine */ int derrql_(char *path, integer *nunit);
extern /* Subroutine */ int derrqp_(char *path, integer *nunit);
extern /* Subroutine */ int derrqr_(char *path, integer *nunit);
extern /* Subroutine */ int derrrfp_(integer *nunit);
extern /* Subroutine */ int derrrq_(char *path, integer *nunit);
extern /* Subroutine */ int derrsy_(char *path, integer *nunit);
extern /* Subroutine */ int derrtr_(char *path, integer *nunit);
extern /* Subroutine */ int derrtz_(char *path, integer *nunit);
extern /* Subroutine */ int derrvx_(char *path, integer *nunit);
extern /* Subroutine */ int dgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *a, integer *lda, doublereal *afac, integer *ldafac, 
	integer *ipiv, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublereal *a, integer *lda, doublereal *
	x, integer *ldx, doublereal *b, integer *ldb, doublereal *resid);
extern /* Subroutine */ int dgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublereal *ab, integer *ldab, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *xact, integer *
	ldxact, doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int dgelqs_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);
extern logical dgennd_(integer *m, integer *n, doublereal *a, integer *lda);
extern /* Subroutine */ int dgeqls_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);
extern /* Subroutine */ int dgeqrs_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);
extern /* Subroutine */ int dgerqs_(integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *tau, doublereal *b, integer *
	ldb, doublereal *work, integer *lwork, integer *info);
extern /* Subroutine */ int dget01_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, integer *ipiv, doublereal *
	rwork, doublereal *resid);
extern /* Subroutine */ int dget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dget03_(integer *n, doublereal *a, integer *lda, 
	doublereal *ainv, integer *ldainv, doublereal *work, integer *ldwork, 
	doublereal *rwork, doublereal *rcond, doublereal *resid);
extern /* Subroutine */ int dget04_(integer *n, integer *nrhs, doublereal *x, 
	integer *ldx, doublereal *xact, integer *ldxact, doublereal *rcond, 
	doublereal *resid);
extern doublereal dget06_(doublereal *rcond, doublereal *rcondc);
extern /* Subroutine */ int dget07_(char *trans, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *xact, integer *ldxact, doublereal *ferr, 
	logical *chkferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int dget08_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dgtt01_(integer *n, doublereal *dl, doublereal *d__, 
	doublereal *du, doublereal *dlf, doublereal *df, doublereal *duf, 
	doublereal *du2, integer *ipiv, doublereal *work, integer *ldwork, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dgtt02_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *x, 
	integer *ldx, doublereal *b, integer *ldb, doublereal *rwork, 
	doublereal *resid);
extern /* Subroutine */ int dgtt05_(char *trans, integer *n, integer *nrhs, 
	doublereal *dl, doublereal *d__, doublereal *du, doublereal *b, 
	integer *ldb, doublereal *x, integer *ldx, doublereal *xact, integer *
	ldxact, doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int dlahilb_(integer *n, integer *nrhs, doublereal *a, 
	integer *lda, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *work, integer *info);
extern /* Subroutine */ int dlaord_(char *job, integer *n, doublereal *x, integer *
	incx);
extern /* Subroutine */ int dlaptm_(integer *n, integer *nrhs, doublereal *alpha, 
	doublereal *d__, doublereal *e, doublereal *x, integer *ldx, 
	doublereal *beta, doublereal *b, integer *ldb);
extern /* Subroutine */ int dlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, integer *iseed, integer *info);
extern /* Subroutine */ int dlatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, doublereal *anorm, integer 
	*mode, doublereal *cndnum, char *dist);
extern /* Subroutine */ int dlatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, doublereal *anorm, integer *mode, 
	doublereal *cndnum, char *dist);
extern /* Subroutine */ int dlattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, doublereal *ab, 
	integer *ldab, doublereal *b, doublereal *work, integer *info);
extern /* Subroutine */ int dlattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublereal *a, doublereal *b, 
	doublereal *work, integer *info);
extern /* Subroutine */ int dlattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublereal *a, integer *lda, 
	doublereal *b, doublereal *work, integer *info);
extern /* Subroutine */ int dlavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *ipiv, doublereal *b, integer *
	ldb, integer *info);
extern /* Subroutine */ int dlavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, integer *ipiv, doublereal 
	*b, integer *ldb, integer *info);
extern /* Subroutine */ int dlqt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dlqt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dlqt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dpbt01_(char *uplo, integer *n, integer *kd, doublereal *
	a, integer *lda, doublereal *afac, integer *ldafac, doublereal *rwork, 
	 doublereal *resid);
extern /* Subroutine */ int dpbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dpbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublereal *ab, integer *ldab, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int dpot01_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, doublereal *rwork, doublereal 
	*resid);
extern /* Subroutine */ int dpot02_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dpot03_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *ainv, integer *ldainv, doublereal *work, integer *
	ldwork, doublereal *rwork, doublereal *rcond, doublereal *resid);
extern /* Subroutine */ int dpot05_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	x, integer *ldx, doublereal *xact, integer *ldxact, doublereal *ferr, 
	doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int dpot06_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dppt01_(char *uplo, integer *n, doublereal *a, 
	doublereal *afac, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dppt02_(char *uplo, integer *n, integer *nrhs, 
	doublereal *a, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dppt03_(char *uplo, integer *n, doublereal *a, 
	doublereal *ainv, doublereal *work, integer *ldwork, doublereal *
	rwork, doublereal *rcond, doublereal *resid);
extern /* Subroutine */ int dppt05_(char *uplo, integer *n, integer *nrhs, 
	doublereal *ap, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);
extern /* Subroutine */ int dpst01_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, doublereal *perm, integer *
	ldperm, integer *piv, doublereal *rwork, doublereal *resid, integer *
	rank);
extern /* Subroutine */ int dptt01_(integer *n, doublereal *d__, doublereal *e, 
	doublereal *df, doublereal *ef, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dptt02_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *resid);
extern /* Subroutine */ int dptt05_(integer *n, integer *nrhs, doublereal *d__, 
	doublereal *e, doublereal *b, integer *ldb, doublereal *x, integer *
	ldx, doublereal *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);
extern /* Subroutine */ int dqlt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dqlt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *l, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dqlt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern doublereal dqpt01_(integer *m, integer *n, integer *k, doublereal *a, 
	doublereal *af, integer *lda, doublereal *tau, integer *jpvt, 
	doublereal *work, integer *lwork);
extern /* Subroutine */ int dqrt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dqrt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int dqrt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern doublereal dqrt11_(integer *m, integer *k, doublereal *a, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork);
extern doublereal dqrt12_(integer *m, integer *n, doublereal *a, integer *lda, 
	doublereal *s, doublereal *work, integer *lwork);
extern /* Subroutine */ int dqrt13_(integer *scale, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *norma, integer *iseed);
extern doublereal dqrt14_(char *trans, integer *m, integer *n, integer *nrhs, 
	doublereal *a, integer *lda, doublereal *x, integer *ldx, doublereal *
	work, integer *lwork);
extern /* Subroutine */ int dqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, doublereal *a, integer *lda, doublereal *b, 
	 integer *ldb, doublereal *s, integer *rank, doublereal *norma, 
	doublereal *normb, integer *iseed, doublereal *work, integer *lwork);
extern /* Subroutine */ int dqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, doublereal *a, integer *lda, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern doublereal dqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *x, integer *
	ldx, doublereal *b, integer *ldb, doublereal *c__, doublereal *work, 
	integer *lwork);
extern /* Subroutine */ int drqt01_(integer *m, integer *n, doublereal *a, 
	doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int drqt02_(integer *m, integer *n, integer *k, doublereal *
	a, doublereal *af, doublereal *q, doublereal *r__, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern /* Subroutine */ int drqt03_(integer *m, integer *n, integer *k, doublereal *
	af, doublereal *c__, doublereal *cc, doublereal *q, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork, doublereal *rwork, 
	doublereal *result);
extern doublereal drzt01_(integer *m, integer *n, doublereal *a, doublereal *af, 
	integer *lda, doublereal *tau, doublereal *work, integer *lwork);
extern doublereal drzt02_(integer *m, integer *n, doublereal *af, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork);
extern /* Subroutine */ int dspt01_(char *uplo, integer *n, doublereal *a, 
	doublereal *afac, integer *ipiv, doublereal *c__, integer *ldc, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dsyt01_(char *uplo, integer *n, doublereal *a, integer *
	lda, doublereal *afac, integer *ldafac, integer *ipiv, doublereal *
	c__, integer *ldc, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int dtbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*x, integer *ldx, doublereal *b, integer *ldb, doublereal *work, 
	doublereal *resid);
extern /* Subroutine */ int dtbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*scale, doublereal *cnorm, doublereal *tscal, doublereal *x, integer *
	ldx, doublereal *b, integer *ldb, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dtbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublereal *ab, integer *ldab, doublereal 
	*b, integer *ldb, doublereal *x, integer *ldx, doublereal *xact, 
	integer *ldxact, doublereal *ferr, doublereal *berr, doublereal *
	reslts);
extern /* Subroutine */ int dtbt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, integer *kd, doublereal *ab, integer *
	ldab, doublereal *work, doublereal *rat);
extern /* Subroutine */ int dtpt01_(char *uplo, char *diag, integer *n, doublereal *
	ap, doublereal *ainvp, doublereal *rcond, doublereal *work, 
	doublereal *resid);
extern /* Subroutine */ int dtpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dtpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *scale, doublereal *cnorm, 
	doublereal *tscal, doublereal *x, integer *ldx, doublereal *b, 
	integer *ldb, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dtpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *ap, doublereal *b, integer *ldb, 
	doublereal *x, integer *ldx, doublereal *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int dtpt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublereal *ap, doublereal *work, 
	doublereal *rat);
extern /* Subroutine */ int dtrt01_(char *uplo, char *diag, integer *n, doublereal *
	a, integer *lda, doublereal *ainv, integer *ldainv, doublereal *rcond, 
	 doublereal *work, doublereal *resid);
extern /* Subroutine */ int dtrt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *x, integer *
	ldx, doublereal *b, integer *ldb, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dtrt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *scale, 
	doublereal *cnorm, doublereal *tscal, doublereal *x, integer *ldx, 
	doublereal *b, integer *ldb, doublereal *work, doublereal *resid);
extern /* Subroutine */ int dtrt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublereal *a, integer *lda, doublereal *b, integer *
	ldb, doublereal *x, integer *ldx, doublereal *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int dtrt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublereal *a, integer *lda, doublereal 
	*work, doublereal *rat);
extern doublereal dtzt01_(integer *m, integer *n, doublereal *a, doublereal *af, 
	integer *lda, doublereal *tau, doublereal *work, integer *lwork);
extern doublereal dtzt02_(integer *m, integer *n, doublereal *af, integer *lda, 
	doublereal *tau, doublereal *work, integer *lwork);
extern /* Subroutine */ int icopy_(integer *n, integer *sx, integer *incx, integer *
	sy, integer *incy);
extern integer ilaenv_(integer *ispec, char *name__, char *opts, integer *n1, 
	integer *n2, integer *n3, integer *n4);
extern /* Subroutine */ int schkeq_(real *thresh, integer *nout);
extern /* Subroutine */ int schkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, real *a, integer *
	la, real *afac, integer *lafac, real *b, real *x, real *xact, real *
	work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int schkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *afac, real *ainv, real *b, real *x, real *xact, real *
	work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int schkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, real *a, 
	real *af, real *b, real *x, real *xact, real *work, real *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int schklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *al, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int schkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	ainv, real *b, real *x, real *xact, real *work, real *rwork, integer *
	iwork, integer *nout);
extern /* Subroutine */ int schkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	ainv, real *b, real *x, real *xact, real *work, real *rwork, integer *
	iwork, integer *nout);
extern /* Subroutine */ int schkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *a, real *afac, real *ainv, real *b, real *x, real *xact, 
	real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int schkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	perm, integer *piv, real *work, real *rwork, integer *nout);
extern /* Subroutine */ int schkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, real *a, 
	real *d__, real *e, real *b, real *x, real *xact, real *work, real *
	rwork, integer *nout);
extern /* Subroutine */ int schkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, real *thresh, real *a, real *copya, real *s, real *copys, real 
	*tau, real *work, integer *iwork, integer *nout);
extern /* Subroutine */ int schkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *al, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int schkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, real *a, 
	real *copya, real *s, real *copys, real *tau, real *work, integer *
	iwork, integer *nout);
extern /* Subroutine */ int schkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *ar, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int schkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, real *thresh, logical *tsterr, integer *nmax, 
	real *a, real *af, real *aq, real *ar, real *ac, real *b, real *x, 
	real *xact, real *tau, real *work, real *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int schksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *a, real *afac, real *ainv, real *b, real *x, real *xact, 
	real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int schksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *afac, real *
	ainv, real *b, real *x, real *xact, real *work, real *rwork, integer *
	iwork, integer *nout);
extern /* Subroutine */ int schktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *ab, real *ainv, real *b, real *x, real *xact, real *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int schktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, real *thresh, logical *tsterr, integer *
	nmax, real *ap, real *ainvp, real *b, real *x, real *xact, real *work, 
	 real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int schktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, real *
	thresh, logical *tsterr, integer *nmax, real *a, real *ainv, real *b, 
	real *x, real *xact, real *work, real *rwork, integer *iwork, integer 
	*nout);
extern /* Subroutine */ int schktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, real *thresh, logical *tsterr, real *a, 
	real *copya, real *s, real *copys, real *tau, real *work, integer *
	nout);
extern /* Subroutine */ int sdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, integer *la, 
	real *afb, integer *lafb, real *asav, real *b, real *bsav, real *x, 
	real *xact, real *s, real *work, real *rwork, integer *iwork, integer 
	*nout);
extern /* Subroutine */ int sdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, integer *la, 
	real *afb, integer *lafb, real *asav, real *b, real *bsav, real *x, 
	real *xact, real *s, real *work, real *rwork, integer *iwork, integer 
	*nout);
extern /* Subroutine */ int sdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, real *af, real 
	*b, real *x, real *xact, real *work, real *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int sdrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, real *thresh, logical *tsterr, 
	real *a, real *copya, real *b, real *copyb, real *c__, real *s, real *
	copys, real *work, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *asav, real *b, real *bsav, real *x, real *xact, 
	real *s, real *work, real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, real *a, real *d__, 
	real *e, real *b, real *x, real *xact, real *work, real *rwork, 
	integer *nout);
extern /* Subroutine */ int sdrvrf1_(integer *nout, integer *nn, integer *nval, real 
	*thresh, real *a, integer *lda, real *arf, real *work);
extern /* Subroutine */ int sdrvrf2_(integer *nout, integer *nn, integer *nval, real 
	*a, integer *lda, real *arf, real *ap, real *asav);
extern /* Subroutine */ int sdrvrf3_(integer *nout, integer *nn, integer *nval, real 
	*thresh, real *a, integer *lda, real *arf, real *b1, real *b2, real *
	s_work_slange__, real *s_work_sgeqrf__, real *tau);
extern /* Subroutine */ int sdrvrf4_(integer *nout, integer *nn, integer *nval, real 
	*thresh, real *c1, real *c2, integer *ldc, real *crf, real *a, 
	integer *lda, real *s_work_slange__);
extern /* Subroutine */ int sdrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, real *
	thresh, real *a, real *asav, real *afac, real *ainv, real *b, real *
	bsav, real *xact, real *x, real *arf, real *arfinv, real *
	s_work_slatms__, real *s_work_spot01__, real *s_temp_spot02__, real *
	s_temp_spot03__, real *s_work_slansy__, real *s_work_spot02__, real *
	s_work_spot03__);
extern /* Subroutine */ int sdrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *ainv, real *b, real *x, real *xact, real *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sdrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, real *thresh, logical *tsterr, integer *nmax, real *a, 
	real *afac, real *ainv, real *b, real *x, real *xact, real *work, 
	real *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int sebchvxx_(real *thresh, char *path);
extern /* Subroutine */ int serrge_(char *path, integer *nunit);
extern /* Subroutine */ int serrge_(char *path, integer *nunit);
extern /* Subroutine */ int serrgt_(char *path, integer *nunit);
extern /* Subroutine */ int serrlq_(char *path, integer *nunit);
extern /* Subroutine */ int serrls_(char *path, integer *nunit);
extern /* Subroutine */ int serrpo_(char *path, integer *nunit);
extern /* Subroutine */ int serrpo_(char *path, integer *nunit);
extern /* Subroutine */ int serrps_(char *path, integer *nunit);
extern /* Subroutine */ int serrql_(char *path, integer *nunit);
extern /* Subroutine */ int serrqp_(char *path, integer *nunit);
extern /* Subroutine */ int serrqr_(char *path, integer *nunit);
extern /* Subroutine */ int serrrfp_(integer *nunit);
extern /* Subroutine */ int serrrq_(char *path, integer *nunit);
extern /* Subroutine */ int serrsy_(char *path, integer *nunit);
extern /* Subroutine */ int serrtr_(char *path, integer *nunit);
extern /* Subroutine */ int serrtz_(char *path, integer *nunit);
extern /* Subroutine */ int serrvx_(char *path, integer *nunit);
extern /* Subroutine */ int sgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *a, integer *lda, real *afac, integer *ldafac, integer *ipiv, 
	real *work, real *resid);
extern /* Subroutine */ int sgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, real *a, integer *lda, real *x, integer *
	ldx, real *b, integer *ldb, real *resid);
extern /* Subroutine */ int sgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, real *ab, integer *ldab, real *b, integer *ldb, 
	real *x, integer *ldx, real *xact, integer *ldxact, real *ferr, real *
	berr, real *reslts);
extern /* Subroutine */ int sgelqs_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);
extern logical sgennd_(integer *m, integer *n, real *a, integer *lda);
extern /* Subroutine */ int sgeqls_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);
extern /* Subroutine */ int sgeqrs_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);
extern /* Subroutine */ int sgerqs_(integer *m, integer *n, integer *nrhs, real *a, 
	integer *lda, real *tau, real *b, integer *ldb, real *work, integer *
	lwork, integer *info);
extern /* Subroutine */ int sget01_(integer *m, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, integer *ipiv, real *rwork, real *resid);
extern /* Subroutine */ int sget02_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);
extern /* Subroutine */ int sget03_(integer *n, real *a, integer *lda, real *ainv, 
	integer *ldainv, real *work, integer *ldwork, real *rwork, real *
	rcond, real *resid);
extern /* Subroutine */ int sget04_(integer *n, integer *nrhs, real *x, integer *ldx, 
	 real *xact, integer *ldxact, real *rcond, real *resid);
extern doublereal sget06_(real *rcond, real *rcondc);
extern /* Subroutine */ int sget07_(char *trans, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *x, integer *ldx, real *
	xact, integer *ldxact, real *ferr, logical *chkferr, real *berr, real 
	*reslts);
extern /* Subroutine */ int sgtt01_(integer *n, real *dl, real *d__, real *du, real *
	dlf, real *df, real *duf, real *du2, integer *ipiv, real *work, 
	integer *ldwork, real *rwork, real *resid);
extern /* Subroutine */ int sgtt02_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *x, integer *ldx, real *b, integer *ldb, 
	real *rwork, real *resid);
extern /* Subroutine */ int sgtt05_(char *trans, integer *n, integer *nrhs, real *dl, 
	 real *d__, real *du, real *b, integer *ldb, real *x, integer *ldx, 
	real *xact, integer *ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int slahilb_(integer *n, integer *nrhs, real *a, integer *
	lda, real *x, integer *ldx, real *b, integer *ldb, real *work, 
	integer *info);
extern /* Subroutine */ int slaord_(char *job, integer *n, real *x, integer *incx);
extern /* Subroutine */ int slaptm_(integer *n, integer *nrhs, real *alpha, real *
	d__, real *e, real *x, integer *ldx, real *beta, real *b, integer *
	ldb);
extern /* Subroutine */ int slarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	real *a, integer *lda, real *x, integer *ldx, real *b, integer *ldb, 
	integer *iseed, integer *info);
extern /* Subroutine */ int slatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, real *anorm, integer *mode, 
	 real *cndnum, char *dist);
extern /* Subroutine */ int slatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, real *anorm, integer *mode, real *
	cndnum, char *dist);
extern /* Subroutine */ int slattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, real *ab, integer *
	ldab, real *b, real *work, integer *info);
extern /* Subroutine */ int slattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, real *a, real *b, real *work, 
	integer *info);
extern /* Subroutine */ int slattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, real *a, integer *lda, real *b, 
	real *work, integer *info);
extern /* Subroutine */ int slavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *ipiv, real *b, integer *ldb, integer 
	*info);
extern /* Subroutine */ int slavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, integer *ipiv, real *b, integer 
	*ldb, integer *info);
extern /* Subroutine */ int slqt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *l, integer *lda, real *tau, real *work, integer *lwork, real 
	*rwork, real *result);
extern /* Subroutine */ int slqt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *l, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int slqt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int spbt01_(char *uplo, integer *n, integer *kd, real *a, 
	integer *lda, real *afac, integer *ldafac, real *rwork, real *resid);
extern /* Subroutine */ int spbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);
extern /* Subroutine */ int spbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, real *ab, integer *ldab, real *b, integer *ldb, real *x, 
	integer *ldx, real *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);
extern /* Subroutine */ int spot01_(char *uplo, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, real *rwork, real *resid);
extern /* Subroutine */ int spot02_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *x, integer *ldx, real *b, integer *ldb, real *
	rwork, real *resid);
extern /* Subroutine */ int spot03_(char *uplo, integer *n, real *a, integer *lda, 
	real *ainv, integer *ldainv, real *work, integer *ldwork, real *rwork, 
	 real *rcond, real *resid);
extern /* Subroutine */ int spot05_(char *uplo, integer *n, integer *nrhs, real *a, 
	integer *lda, real *b, integer *ldb, real *x, integer *ldx, real *
	xact, integer *ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int sppt01_(char *uplo, integer *n, real *a, real *afac, 
	real *rwork, real *resid);
extern /* Subroutine */ int sppt02_(char *uplo, integer *n, integer *nrhs, real *a, 
	real *x, integer *ldx, real *b, integer *ldb, real *rwork, real *
	resid);
extern /* Subroutine */ int sppt03_(char *uplo, integer *n, real *a, real *ainv, 
	real *work, integer *ldwork, real *rwork, real *rcond, real *resid);
extern /* Subroutine */ int sppt05_(char *uplo, integer *n, integer *nrhs, real *ap, 
	real *b, integer *ldb, real *x, integer *ldx, real *xact, integer *
	ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int spst01_(char *uplo, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, real *perm, integer *ldperm, integer *
	piv, real *rwork, real *resid, integer *rank);
extern /* Subroutine */ int sptt01_(integer *n, real *d__, real *e, real *df, real *
	ef, real *work, real *resid);
extern /* Subroutine */ int sptt02_(integer *n, integer *nrhs, real *d__, real *e, 
	real *x, integer *ldx, real *b, integer *ldb, real *resid);
extern /* Subroutine */ int sptt05_(integer *n, integer *nrhs, real *d__, real *e, 
	real *b, integer *ldb, real *x, integer *ldx, real *xact, integer *
	ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int sqlt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *l, integer *lda, real *tau, real *work, integer *lwork, real 
	*rwork, real *result);
extern /* Subroutine */ int sqlt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *l, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int sqlt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern doublereal sqpt01_(integer *m, integer *n, integer *k, real *a, real *af, 
	integer *lda, real *tau, integer *jpvt, real *work, integer *lwork);
extern /* Subroutine */ int sqrt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *r__, integer *lda, real *tau, real *work, integer *lwork, 
	real *rwork, real *result);
extern /* Subroutine */ int sqrt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *r__, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int sqrt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern doublereal sqrt11_(integer *m, integer *k, real *a, integer *lda, real *tau, 
	real *work, integer *lwork);
extern doublereal sqrt12_(integer *m, integer *n, real *a, integer *lda, real *s, 
	real *work, integer *lwork);
extern /* Subroutine */ int sqrt13_(integer *scale, integer *m, integer *n, real *a, 
	integer *lda, real *norma, integer *iseed);
extern doublereal sqrt14_(char *trans, integer *m, integer *n, integer *nrhs, real *
	a, integer *lda, real *x, integer *ldx, real *work, integer *lwork);
extern /* Subroutine */ int sqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, real *a, integer *lda, real *b, integer *
	ldb, real *s, integer *rank, real *norma, real *normb, integer *iseed, 
	 real *work, integer *lwork);
extern /* Subroutine */ int sqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, integer *
	ldb, real *rwork, real *resid);
extern doublereal sqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, 
	integer *ldb, real *c__, real *work, integer *lwork);
extern /* Subroutine */ int srqt01_(integer *m, integer *n, real *a, real *af, real *
	q, real *r__, integer *lda, real *tau, real *work, integer *lwork, 
	real *rwork, real *result);
extern /* Subroutine */ int srqt02_(integer *m, integer *n, integer *k, real *a, 
	real *af, real *q, real *r__, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern /* Subroutine */ int srqt03_(integer *m, integer *n, integer *k, real *af, 
	real *c__, real *cc, real *q, integer *lda, real *tau, real *work, 
	integer *lwork, real *rwork, real *result);
extern doublereal srzt01_(integer *m, integer *n, real *a, real *af, integer *lda, 
	real *tau, real *work, integer *lwork);
extern doublereal srzt02_(integer *m, integer *n, real *af, integer *lda, real *tau, 
	real *work, integer *lwork);
extern /* Subroutine */ int sspt01_(char *uplo, integer *n, real *a, real *afac, 
	integer *ipiv, real *c__, integer *ldc, real *rwork, real *resid);
extern /* Subroutine */ int ssyt01_(char *uplo, integer *n, real *a, integer *lda, 
	real *afac, integer *ldafac, integer *ipiv, real *c__, integer *ldc, 
	real *rwork, real *resid);
extern /* Subroutine */ int stbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *x, integer 
	*ldx, real *b, integer *ldb, real *work, real *resid);
extern /* Subroutine */ int stbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *scale, 
	real *cnorm, real *tscal, real *x, integer *ldx, real *b, integer *
	ldb, real *work, real *resid);
extern /* Subroutine */ int stbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, real *ab, integer *ldab, real *b, integer 
	*ldb, real *x, integer *ldx, real *xact, integer *ldxact, real *ferr, 
	real *berr, real *reslts);
extern /* Subroutine */ int stbt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, integer *kd, real *ab, integer *ldab, real *work, 
	real *rat);
extern /* Subroutine */ int stpt01_(char *uplo, char *diag, integer *n, real *ap, 
	real *ainvp, real *rcond, real *work, real *resid);
extern /* Subroutine */ int stpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *x, integer *ldx, real *b, integer *ldb, 
	 real *work, real *resid);
extern /* Subroutine */ int stpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *scale, real *cnorm, real *tscal, real *
	x, integer *ldx, real *b, integer *ldb, real *work, real *resid);
extern /* Subroutine */ int stpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *ap, real *b, integer *ldb, real *x, integer *ldx, 
	 real *xact, integer *ldxact, real *ferr, real *berr, real *reslts);
extern /* Subroutine */ int stpt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, real *ap, real *work, real *rat);
extern /* Subroutine */ int strt01_(char *uplo, char *diag, integer *n, real *a, 
	integer *lda, real *ainv, integer *ldainv, real *rcond, real *work, 
	real *resid);
extern /* Subroutine */ int strt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *x, integer *ldx, real *b, 
	integer *ldb, real *work, real *resid);
extern /* Subroutine */ int strt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *scale, real *cnorm, real *
	tscal, real *x, integer *ldx, real *b, integer *ldb, real *work, real 
	*resid);
extern /* Subroutine */ int strt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, real *a, integer *lda, real *b, integer *ldb, real *x, 
	integer *ldx, real *xact, integer *ldxact, real *ferr, real *berr, 
	real *reslts);
extern /* Subroutine */ int strt06_(real *rcond, real *rcondc, char *uplo, char *
	diag, integer *n, real *a, integer *lda, real *work, real *rat);
extern doublereal stzt01_(integer *m, integer *n, real *a, real *af, integer *lda, 
	real *tau, real *work, integer *lwork);
extern doublereal stzt02_(integer *m, integer *n, real *af, integer *lda, real *tau, 
	real *work, integer *lwork);
extern /* Subroutine */ int xlaenv_(integer *ispec, integer *nvalue);
extern /* Subroutine */ int zchkeq_(doublereal *thresh, integer *nout);
extern /* Subroutine */ int zchkgb_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, integer *la, doublecomplex *afac, integer *lafac, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchkge_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nns, integer *nsval, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchkgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublecomplex *af, doublecomplex *b, doublecomplex *
	x, doublecomplex *xact, doublecomplex *work, doublereal *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int zchkhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchkhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *
	ainv, doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchklq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *al, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchkpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);
extern /* Subroutine */ int zchkpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);
extern /* Subroutine */ int zchkpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *
	ainv, doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *nout);
extern /* Subroutine */ int zchkps_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nrank, integer *rankval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *perm, integer *piv, doublecomplex 
	*work, doublereal *rwork, integer *nout);
extern /* Subroutine */ int zchkpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublereal *d__, doublecomplex *e, doublecomplex *b, 
	 doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);
extern /* Subroutine */ int zchkq3_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, doublereal *thresh, doublecomplex *a, doublecomplex *copya, 
	doublereal *s, doublereal *copys, doublecomplex *tau, doublecomplex *
	work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchkql_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *al, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchkqp_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublecomplex *copya, doublereal *s, doublereal *
	copys, doublecomplex *tau, doublecomplex *work, doublereal *rwork, 
	integer *iwork, integer *nout);
extern /* Subroutine */ int zchkqr_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *ar, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchkrq_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nnb, integer *nbval, integer *
	nxval, integer *nrhs, doublereal *thresh, logical *tsterr, integer *
	nmax, doublecomplex *a, doublecomplex *af, doublecomplex *aq, 
	doublecomplex *ar, doublecomplex *ac, doublecomplex *b, doublecomplex 
	*x, doublecomplex *xact, doublecomplex *tau, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchksp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *a, doublecomplex *afac, doublecomplex *
	ainv, doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchksy_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zchktb_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *ab, doublecomplex *ainv, doublecomplex *
	b, doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);
extern /* Subroutine */ int zchktp_(logical *dotype, integer *nn, integer *nval, 
	integer *nns, integer *nsval, doublereal *thresh, logical *tsterr, 
	integer *nmax, doublecomplex *ap, doublecomplex *ainvp, doublecomplex 
	*b, doublecomplex *x, doublecomplex *xact, doublecomplex *work, 
	doublereal *rwork, integer *nout);
extern /* Subroutine */ int zchktr_(logical *dotype, integer *nn, integer *nval, 
	integer *nnb, integer *nbval, integer *nns, integer *nsval, 
	doublereal *thresh, logical *tsterr, integer *nmax, doublecomplex *a, 
	doublecomplex *ainv, doublecomplex *b, doublecomplex *x, 
	doublecomplex *xact, doublecomplex *work, doublereal *rwork, integer *
	nout);
extern /* Subroutine */ int zchktz_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, doublereal *thresh, logical *tsterr, 
	doublecomplex *a, doublecomplex *copya, doublereal *s, doublereal *
	copys, doublecomplex *tau, doublecomplex *work, doublereal *rwork, 
	integer *nout);
extern /* Subroutine */ int zdrvab_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *b, 
	doublecomplex *x, doublecomplex *work, doublereal *rwork, complex *
	swork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvac_(logical *dotype, integer *nm, integer *mval, 
	integer *nns, integer *nsval, doublereal *thresh, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *b, 
	doublecomplex *x, doublecomplex *work, doublereal *rwork, complex *
	swork, integer *nout);
extern /* Subroutine */ int zdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	integer *la, doublecomplex *afb, integer *lafb, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvgb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	integer *la, doublecomplex *afb, integer *lafb, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvge_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvgt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	doublecomplex *af, doublecomplex *b, doublecomplex *x, doublecomplex *
	xact, doublecomplex *work, doublereal *rwork, integer *iwork, integer 
	*nout);
extern /* Subroutine */ int zdrvhe_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvhp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvls_(logical *dotype, integer *nm, integer *mval, 
	integer *nn, integer *nval, integer *nns, integer *nsval, integer *
	nnb, integer *nbval, integer *nxval, doublereal *thresh, logical *
	tsterr, doublecomplex *a, doublecomplex *copya, doublecomplex *b, 
	doublecomplex *copyb, doublecomplex *c__, doublereal *s, doublereal *
	copys, doublecomplex *work, doublereal *rwork, integer *iwork, 
	integer *nout);
extern /* Subroutine */ int zdrvpb_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);
extern /* Subroutine */ int zdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);
extern /* Subroutine */ int zdrvpo_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);
extern /* Subroutine */ int zdrvpp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *asav, 
	doublecomplex *b, doublecomplex *bsav, doublecomplex *x, 
	doublecomplex *xact, doublereal *s, doublecomplex *work, doublereal *
	rwork, integer *nout);
extern /* Subroutine */ int zdrvpt_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, doublecomplex *a, 
	doublereal *d__, doublecomplex *e, doublecomplex *b, doublecomplex *x, 
	 doublecomplex *xact, doublecomplex *work, doublereal *rwork, integer 
	*nout);
extern /* Subroutine */ int zdrvrf1_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublecomplex *a, integer *lda, doublecomplex *
	arf, doublereal *work);
extern /* Subroutine */ int zdrvrf2_(integer *nout, integer *nn, integer *nval, 
	doublecomplex *a, integer *lda, doublecomplex *arf, doublecomplex *ap, 
	 doublecomplex *asav);
extern /* Subroutine */ int zdrvrf3_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublecomplex *a, integer *lda, doublecomplex *
	arf, doublecomplex *b1, doublecomplex *b2, doublereal *
	d_work_zlange__, doublecomplex *z_work_zgeqrf__, doublecomplex *tau);
extern /* Subroutine */ int zdrvrf4_(integer *nout, integer *nn, integer *nval, 
	doublereal *thresh, doublecomplex *c1, doublecomplex *c2, integer *
	ldc, doublecomplex *crf, doublecomplex *a, integer *lda, doublereal *
	d_work_zlange__);
extern /* Subroutine */ int zdrvrfp_(integer *nout, integer *nn, integer *nval, 
	integer *nns, integer *nsval, integer *nnt, integer *ntval, 
	doublereal *thresh, doublecomplex *a, doublecomplex *asav, 
	doublecomplex *afac, doublecomplex *ainv, doublecomplex *b, 
	doublecomplex *bsav, doublecomplex *xact, doublecomplex *x, 
	doublecomplex *arf, doublecomplex *arfinv, doublecomplex *
	z_work_zlatms__, doublecomplex *z_work_zpot01__, doublecomplex *
	z_work_zpot02__, doublecomplex *z_work_zpot03__, doublereal *
	d_work_zlatms__, doublereal *d_work_zlanhe__, doublereal *
	d_work_zpot02__, doublereal *d_work_zpot03__);
extern /* Subroutine */ int zdrvsp_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zdrvsy_(logical *dotype, integer *nn, integer *nval, 
	integer *nrhs, doublereal *thresh, logical *tsterr, integer *nmax, 
	doublecomplex *a, doublecomplex *afac, doublecomplex *ainv, 
	doublecomplex *b, doublecomplex *x, doublecomplex *xact, 
	doublecomplex *work, doublereal *rwork, integer *iwork, integer *nout);
extern /* Subroutine */ int zebchvxx_(doublereal *thresh, char *path);
extern /* Subroutine */ int zerrab_(integer *nunit);
extern /* Subroutine */ int zerrac_(integer *nunit);
extern /* Subroutine */ int zerrge_(char *path, integer *nunit);
extern /* Subroutine */ int zerrge_(char *path, integer *nunit);
extern /* Subroutine */ int zerrgt_(char *path, integer *nunit);
extern /* Subroutine */ int zerrhe_(char *path, integer *nunit);
extern /* Subroutine */ int zerrlq_(char *path, integer *nunit);
extern /* Subroutine */ int zerrls_(char *path, integer *nunit);
extern /* Subroutine */ int zerrpo_(char *path, integer *nunit);
extern /* Subroutine */ int zerrpo_(char *path, integer *nunit);
extern /* Subroutine */ int zerrps_(char *path, integer *nunit);
extern /* Subroutine */ int zerrql_(char *path, integer *nunit);
extern /* Subroutine */ int zerrqp_(char *path, integer *nunit);
extern /* Subroutine */ int zerrqr_(char *path, integer *nunit);
extern /* Subroutine */ int zerrrfp_(integer *nunit);
extern /* Subroutine */ int zerrrq_(char *path, integer *nunit);
extern /* Subroutine */ int zerrsy_(char *path, integer *nunit);
extern /* Subroutine */ int zerrtr_(char *path, integer *nunit);
extern /* Subroutine */ int zerrtz_(char *path, integer *nunit);
extern /* Subroutine */ int zerrvx_(char *path, integer *nunit);
extern /* Subroutine */ int zgbt01_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublecomplex *a, integer *lda, doublecomplex *afac, integer *ldafac, 
	 integer *ipiv, doublecomplex *work, doublereal *resid);
extern /* Subroutine */ int zgbt02_(char *trans, integer *m, integer *n, integer *kl, 
	 integer *ku, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublereal *resid);
extern /* Subroutine */ int zgbt05_(char *trans, integer *n, integer *kl, integer *
	ku, integer *nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, 
	 integer *ldb, doublecomplex *x, integer *ldx, doublecomplex *xact, 
	integer *ldxact, doublereal *ferr, doublereal *berr, doublereal *
	reslts);
extern /* Subroutine */ int zgelqs_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
extern logical zgennd_(integer *m, integer *n, doublecomplex *a, integer *lda);
extern /* Subroutine */ int zgeqls_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
extern /* Subroutine */ int zgeqrs_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
extern /* Subroutine */ int zgerqs_(integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *tau, doublecomplex *b, 
	integer *ldb, doublecomplex *work, integer *lwork, integer *info);
extern /* Subroutine */ int zget01_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, integer *ipiv, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zget02_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zget03_(integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *ainv, integer *ldainv, doublecomplex *work, integer *
	ldwork, doublereal *rwork, doublereal *rcond, doublereal *resid);
extern /* Subroutine */ int zget04_(integer *n, integer *nrhs, doublecomplex *x, 
	integer *ldx, doublecomplex *xact, integer *ldxact, doublereal *rcond, 
	 doublereal *resid);
extern /* Subroutine */ int zget07_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *xact, integer *ldxact, 
	doublereal *ferr, logical *chkferr, doublereal *berr, doublereal *
	reslts);
extern /* Subroutine */ int zget08_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zgtt01_(integer *n, doublecomplex *dl, doublecomplex *
	d__, doublecomplex *du, doublecomplex *dlf, doublecomplex *df, 
	doublecomplex *duf, doublecomplex *du2, integer *ipiv, doublecomplex *
	work, integer *ldwork, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zgtt02_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zgtt05_(char *trans, integer *n, integer *nrhs, 
	doublecomplex *dl, doublecomplex *d__, doublecomplex *du, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublecomplex *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);
extern /* Subroutine */ int zhet01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, integer *ipiv, 
	doublecomplex *c__, integer *ldc, doublereal *rwork, doublereal *
	resid);
extern /* Subroutine */ int zhpt01_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *afac, integer *ipiv, doublecomplex *c__, integer *ldc, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zlahilb_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *work, integer *info, char *path);
extern /* Subroutine */ int zlaipd_(integer *n, doublecomplex *a, integer *inda, 
	integer *vinda);
extern /* Subroutine */ int zlaptm_(char *uplo, integer *n, integer *nrhs, 
	doublereal *alpha, doublereal *d__, doublecomplex *e, doublecomplex *
	x, integer *ldx, doublereal *beta, doublecomplex *b, integer *ldb);
extern /* Subroutine */ int zlarhs_(char *path, char *xtype, char *uplo, char *trans, 
	 integer *m, integer *n, integer *kl, integer *ku, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, integer *iseed, integer *info);
extern /* Subroutine */ int zlatb4_(char *path, integer *imat, integer *m, integer *
	n, char *type__, integer *kl, integer *ku, doublereal *anorm, integer 
	*mode, doublereal *cndnum, char *dist);
extern /* Subroutine */ int zlatb5_(char *path, integer *imat, integer *n, char *
	type__, integer *kl, integer *ku, doublereal *anorm, integer *mode, 
	doublereal *cndnum, char *dist);
extern /* Subroutine */ int zlatsp_(char *uplo, integer *n, doublecomplex *x, 
	integer *iseed);
extern /* Subroutine */ int zlatsy_(char *uplo, integer *n, doublecomplex *x, 
	integer *ldx, integer *iseed);
extern /* Subroutine */ int zlattb_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, integer *kd, doublecomplex *ab, 
	integer *ldab, doublecomplex *b, doublecomplex *work, doublereal *
	rwork, integer *info);
extern /* Subroutine */ int zlattp_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublecomplex *ap, doublecomplex *b, 
	 doublecomplex *work, doublereal *rwork, integer *info);
extern /* Subroutine */ int zlattr_(integer *imat, char *uplo, char *trans, char *
	diag, integer *iseed, integer *n, doublecomplex *a, integer *lda, 
	doublecomplex *b, doublecomplex *work, doublereal *rwork, integer *
	info);
extern /* Subroutine */ int zlavhe_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);
extern /* Subroutine */ int zlavhp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
extern /* Subroutine */ int zlavsp_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *ipiv, doublecomplex *b, 
	integer *ldb, integer *info);
extern /* Subroutine */ int zlavsy_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, integer *ipiv, 
	doublecomplex *b, integer *ldb, integer *info);
extern /* Subroutine */ int zlqt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *l, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);
extern /* Subroutine */ int zlqt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	l, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zlqt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zpbt01_(char *uplo, integer *n, integer *kd, 
	doublecomplex *a, integer *lda, doublecomplex *afac, integer *ldafac, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zpbt02_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zpbt05_(char *uplo, integer *n, integer *kd, integer *
	nrhs, doublecomplex *ab, integer *ldab, doublecomplex *b, integer *
	ldb, doublecomplex *x, integer *ldx, doublecomplex *xact, integer *
	ldxact, doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int zpot01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, doublereal *rwork, 
	 doublereal *resid);
extern /* Subroutine */ int zpot02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zpot03_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *ainv, integer *ldainv, doublecomplex *
	work, integer *ldwork, doublereal *rwork, doublereal *rcond, 
	doublereal *resid);
extern /* Subroutine */ int zpot05_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int zpot06_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zppt01_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *afac, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zppt02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zppt03_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *ainv, doublecomplex *work, integer *ldwork, doublereal 
	*rwork, doublereal *rcond, doublereal *resid);
extern /* Subroutine */ int zppt05_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *ap, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublecomplex *xact, integer *ldxact, doublereal *ferr, 
	doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int zpst01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, doublecomplex *
	perm, integer *ldperm, integer *piv, doublereal *rwork, doublereal *
	resid, integer *rank);
extern /* Subroutine */ int zptt01_(integer *n, doublereal *d__, doublecomplex *e, 
	doublereal *df, doublecomplex *ef, doublecomplex *work, doublereal *
	resid);
extern /* Subroutine */ int zptt02_(char *uplo, integer *n, integer *nrhs, 
	doublereal *d__, doublecomplex *e, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *resid);
extern /* Subroutine */ int zptt05_(integer *n, integer *nrhs, doublereal *d__, 
	doublecomplex *e, doublecomplex *b, integer *ldb, doublecomplex *x, 
	integer *ldx, doublecomplex *xact, integer *ldxact, doublereal *ferr, 
	doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int zqlt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *l, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);
extern /* Subroutine */ int zqlt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	l, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zqlt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);
extern doublereal zqpt01_(integer *m, integer *n, integer *k, doublecomplex *a, 
	doublecomplex *af, integer *lda, doublecomplex *tau, integer *jpvt, 
	doublecomplex *work, integer *lwork);
extern /* Subroutine */ int zqrt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *r__, integer *lda, 
	 doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);
extern /* Subroutine */ int zqrt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zqrt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);
extern doublereal zqrt11_(integer *m, integer *k, doublecomplex *a, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork);
extern doublereal zqrt12_(integer *m, integer *n, doublecomplex *a, integer *lda, 
	doublereal *s, doublecomplex *work, integer *lwork, doublereal *rwork);
extern /* Subroutine */ int zqrt13_(integer *scale, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublereal *norma, integer *iseed);
extern doublereal zqrt14_(char *trans, integer *m, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *work, integer *lwork);
extern /* Subroutine */ int zqrt15_(integer *scale, integer *rksel, integer *m, 
	integer *n, integer *nrhs, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublereal *s, integer *rank, 
	doublereal *norma, doublereal *normb, integer *iseed, doublecomplex *
	work, integer *lwork);
extern /* Subroutine */ int zqrt16_(char *trans, integer *m, integer *n, integer *
	nrhs, doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern doublereal zqrt17_(char *trans, integer *iresid, integer *m, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *x, 
	integer *ldx, doublecomplex *b, integer *ldb, doublecomplex *c__, 
	doublecomplex *work, integer *lwork);
extern /* Subroutine */ int zrqt01_(integer *m, integer *n, doublecomplex *a, 
	doublecomplex *af, doublecomplex *q, doublecomplex *r__, integer *lda, 
	 doublecomplex *tau, doublecomplex *work, integer *lwork, doublereal *
	rwork, doublereal *result);
extern /* Subroutine */ int zrqt02_(integer *m, integer *n, integer *k, 
	doublecomplex *a, doublecomplex *af, doublecomplex *q, doublecomplex *
	r__, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork, doublereal *rwork, doublereal *result);
extern /* Subroutine */ int zrqt03_(integer *m, integer *n, integer *k, 
	doublecomplex *af, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *q, integer *lda, doublecomplex *tau, doublecomplex *
	work, integer *lwork, doublereal *rwork, doublereal *result);
extern doublereal zrzt01_(integer *m, integer *n, doublecomplex *a, doublecomplex *
	af, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork);
extern doublereal zrzt02_(integer *m, integer *n, doublecomplex *af, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork);
extern /* Subroutine */ int zsbmv_(char *uplo, integer *n, integer *k, doublecomplex 
	*alpha, doublecomplex *a, integer *lda, doublecomplex *x, integer *
	incx, doublecomplex *beta, doublecomplex *y, integer *incy);
extern /* Subroutine */ int zspt01_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *afac, integer *ipiv, doublecomplex *c__, integer *ldc, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zspt02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zspt03_(char *uplo, integer *n, doublecomplex *a, 
	doublecomplex *ainv, doublecomplex *work, integer *ldw, doublereal *
	rwork, doublereal *rcond, doublereal *resid);
extern /* Subroutine */ int zsyt01_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *afac, integer *ldafac, integer *ipiv, 
	doublecomplex *c__, integer *ldc, doublereal *rwork, doublereal *
	resid);
extern /* Subroutine */ int zsyt02_(char *uplo, integer *n, integer *nrhs, 
	doublecomplex *a, integer *lda, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int zsyt03_(char *uplo, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *ainv, integer *ldainv, doublecomplex *
	work, integer *ldwork, doublereal *rwork, doublereal *rcond, 
	doublereal *resid);
extern /* Subroutine */ int ztbt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublecomplex *work, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int ztbt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublereal *scale, doublereal *cnorm, doublereal *tscal, 
	doublecomplex *x, integer *ldx, doublecomplex *b, integer *ldb, 
	doublecomplex *work, doublereal *resid);
extern /* Subroutine */ int ztbt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *kd, integer *nrhs, doublecomplex *ab, integer *ldab, 
	doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, 
	doublecomplex *xact, integer *ldxact, doublereal *ferr, doublereal *
	berr, doublereal *reslts);
extern /* Subroutine */ int ztbt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, integer *kd, doublecomplex *ab, integer 
	*ldab, doublereal *rwork, doublereal *rat);
extern /* Subroutine */ int ztpt01_(char *uplo, char *diag, integer *n, 
	doublecomplex *ap, doublecomplex *ainvp, doublereal *rcond, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int ztpt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublecomplex *work, doublereal *
	rwork, doublereal *resid);
extern /* Subroutine */ int ztpt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublereal *scale, doublereal *
	cnorm, doublereal *tscal, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublecomplex *work, doublereal *
	resid);
extern /* Subroutine */ int ztpt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *ap, doublecomplex *b, integer *ldb, 
	doublecomplex *x, integer *ldx, doublecomplex *xact, integer *ldxact, 
	doublereal *ferr, doublereal *berr, doublereal *reslts);
extern /* Subroutine */ int ztpt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublecomplex *ap, doublereal *rwork, 
	doublereal *rat);
extern /* Subroutine */ int ztrt01_(char *uplo, char *diag, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *ainv, integer *ldainv, 
	doublereal *rcond, doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int ztrt02_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *x, 
	integer *ldx, doublecomplex *b, integer *ldb, doublecomplex *work, 
	doublereal *rwork, doublereal *resid);
extern /* Subroutine */ int ztrt03_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublereal *scale, 
	doublereal *cnorm, doublereal *tscal, doublecomplex *x, integer *ldx, 
	doublecomplex *b, integer *ldb, doublecomplex *work, doublereal *
	resid);
extern /* Subroutine */ int ztrt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublecomplex *xact, 
	integer *ldxact, doublereal *ferr, doublereal *berr, doublereal *
	reslts);
extern /* Subroutine */ int ztrt06_(doublereal *rcond, doublereal *rcondc, char *
	uplo, char *diag, integer *n, doublecomplex *a, integer *lda, 
	doublereal *rwork, doublereal *rat);
extern doublereal ztzt01_(integer *m, integer *n, doublecomplex *a, doublecomplex *
	af, integer *lda, doublecomplex *tau, doublecomplex *work, integer *
	lwork);
extern doublereal ztzt02_(integer *m, integer *n, doublecomplex *af, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork);

#endif
