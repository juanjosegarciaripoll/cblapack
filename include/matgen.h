#ifndef CBLAPACK_MATGEN_H
#define CBLAPACK_MATGEN_H

extern /* Subroutine */ int clagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *d__, complex *a, integer *lda, integer *iseed, complex *work, 
	integer *info);
extern /* Subroutine */ int claghe_(integer *n, integer *k, real *d__, complex *a, 
	integer *lda, integer *iseed, complex *work, integer *info);
extern /* Subroutine */ int clagsy_(integer *n, integer *k, real *d__, complex *a, 
	integer *lda, integer *iseed, complex *work, integer *info);
extern /* Subroutine */ int clahilb_(integer *n, integer *nrhs, complex *a, integer *
	lda, complex *x, integer *ldx, complex *b, integer *ldb, real *work, 
	integer *info, char *path);
extern /* Subroutine */ int clakf2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *b, complex *d__, complex *e, complex *z__, integer *ldz);
extern /* Subroutine */ int clarge_(integer *n, complex *a, integer *lda, integer *
	iseed, complex *work, integer *info);
extern /* Complex */ void clarnd_(complex * ret_val, integer *idist, integer *iseed);
extern /* Subroutine */ int claror_(char *side, char *init, integer *m, integer *n, 
	complex *a, integer *lda, integer *iseed, complex *x, integer *info);
extern /* Subroutine */ int clarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, complex *c__, complex *s, complex *a, integer *lda, 
	complex *xleft, complex *xright);
extern /* Subroutine */ int clatm1_(integer *mode, real *cond, integer *irsign, 
	integer *idist, integer *iseed, complex *d__, integer *n, integer *
	info);
extern /* Complex */ void clatm2_(complex * ret_val, integer *m, integer *n, integer 
	*i__, integer *j, integer *kl, integer *ku, integer *idist, integer *
	iseed, complex *d__, integer *igrade, complex *dl, complex *dr, 
	integer *ipvtng, integer *iwork, real *sparse);
extern /* Complex */ void clatm3_(complex * ret_val, integer *m, integer *n, integer 
	*i__, integer *j, integer *isub, integer *jsub, integer *kl, integer *
	ku, integer *idist, integer *iseed, complex *d__, integer *igrade, 
	complex *dl, complex *dr, integer *ipvtng, integer *iwork, real *
	sparse);
extern /* Subroutine */ int clatm5_(integer *prtype, integer *m, integer *n, complex 
	*a, integer *lda, complex *b, integer *ldb, complex *c__, integer *
	ldc, complex *d__, integer *ldd, complex *e, integer *lde, complex *f, 
	 integer *ldf, complex *r__, integer *ldr, complex *l, integer *ldl, 
	real *alpha, integer *qblcka, integer *qblckb);
extern /* Subroutine */ int clatm6_(integer *type__, integer *n, complex *a, integer 
	*lda, complex *b, complex *x, integer *ldx, complex *y, integer *ldy, 
	complex *alpha, complex *beta, complex *wx, complex *wy, real *s, 
	real *dif);
extern /* Subroutine */ int clatme_(integer *n, char *dist, integer *iseed, complex *
	d__, integer *mode, real *cond, complex *dmax__, char *ei, char *
	rsign, char *upper, char *sim, real *ds, integer *modes, real *conds, 
	integer *kl, integer *ku, real *anorm, complex *a, integer *lda, 
	complex *work, integer *info);
extern /* Subroutine */ int clatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, complex *d__, integer *mode, real *cond, complex *
	dmax__, char *rsign, char *grade, complex *dl, integer *model, real *
	condl, complex *dr, integer *moder, real *condr, char *pivtng, 
	integer *ipivot, integer *kl, integer *ku, real *sparse, real *anorm, 
	char *pack, complex *a, integer *lda, integer *iwork, integer *info);
extern /* Subroutine */ int clatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *kl, integer *ku, char *pack, complex *a, integer *lda, 
	complex *work, integer *info);
extern /* Subroutine */ int clatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *rank, integer *kl, integer *ku, char *pack, complex *a, 
	integer *lda, complex *work, integer *info);
extern /* Subroutine */ int dlagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *d__, doublereal *a, integer *lda, integer *iseed, 
	doublereal *work, integer *info);
extern /* Subroutine */ int dlagsy_(integer *n, integer *k, doublereal *d__, 
	doublereal *a, integer *lda, integer *iseed, doublereal *work, 
	integer *info);
extern /* Subroutine */ int dlahilb_(integer *n, integer *nrhs, doublereal *a, 
	integer *lda, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *work, integer *info);
extern /* Subroutine */ int dlakf2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *b, doublereal *d__, doublereal *e, doublereal *z__, 
	integer *ldz);
extern doublereal dlaran_(integer *iseed);
extern /* Subroutine */ int dlarge_(integer *n, doublereal *a, integer *lda, integer 
	*iseed, doublereal *work, integer *info);
extern doublereal dlarnd_(integer *idist, integer *iseed);
extern /* Subroutine */ int dlaror_(char *side, char *init, integer *m, integer *n, 
	doublereal *a, integer *lda, integer *iseed, doublereal *x, integer *
	info);
extern /* Subroutine */ int dlarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, doublereal *c__, doublereal *s, doublereal *a, integer *
	lda, doublereal *xleft, doublereal *xright);
extern /* Subroutine */ int dlatm1_(integer *mode, doublereal *cond, integer *irsign, 
	 integer *idist, integer *iseed, doublereal *d__, integer *n, integer 
	*info);
extern doublereal dlatm2_(integer *m, integer *n, integer *i__, integer *j, integer *
	kl, integer *ku, integer *idist, integer *iseed, doublereal *d__, 
	integer *igrade, doublereal *dl, doublereal *dr, integer *ipvtng, 
	integer *iwork, doublereal *sparse);
extern doublereal dlatm3_(integer *m, integer *n, integer *i__, integer *j, integer *
	isub, integer *jsub, integer *kl, integer *ku, integer *idist, 
	integer *iseed, doublereal *d__, integer *igrade, doublereal *dl, 
	doublereal *dr, integer *ipvtng, integer *iwork, doublereal *sparse);
extern /* Subroutine */ int dlatm5_(integer *prtype, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	c__, integer *ldc, doublereal *d__, integer *ldd, doublereal *e, 
	integer *lde, doublereal *f, integer *ldf, doublereal *r__, integer *
	ldr, doublereal *l, integer *ldl, doublereal *alpha, integer *qblcka, 
	integer *qblckb);
extern /* Subroutine */ int dlatm6_(integer *type__, integer *n, doublereal *a, 
	integer *lda, doublereal *b, doublereal *x, integer *ldx, doublereal *
	y, integer *ldy, doublereal *alpha, doublereal *beta, doublereal *wx, 
	doublereal *wy, doublereal *s, doublereal *dif);
extern /* Subroutine */ int dlatm7_(integer *mode, doublereal *cond, integer *irsign, 
	 integer *idist, integer *iseed, doublereal *d__, integer *n, integer 
	*rank, integer *info);
extern /* Subroutine */ int dlatme_(integer *n, char *dist, integer *iseed, 
	doublereal *d__, integer *mode, doublereal *cond, doublereal *dmax__, 
	char *ei, char *rsign, char *upper, char *sim, doublereal *ds, 
	integer *modes, doublereal *conds, integer *kl, integer *ku, 
	doublereal *anorm, doublereal *a, integer *lda, doublereal *work, 
	integer *info);
extern /* Subroutine */ int dlatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, char *rsign, char *grade, doublereal *dl, integer 
	*model, doublereal *condl, doublereal *dr, integer *moder, doublereal 
	*condr, char *pivtng, integer *ipivot, integer *kl, integer *ku, 
	doublereal *sparse, doublereal *anorm, char *pack, doublereal *a, 
	integer *lda, integer *iwork, integer *info);
extern /* Subroutine */ int dlatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *kl, integer *ku, char *pack, doublereal *
	a, integer *lda, doublereal *work, integer *info);
extern /* Subroutine */ int dlatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *rank, integer *kl, integer *ku, char *
	pack, doublereal *a, integer *lda, doublereal *work, integer *info);
extern /* Subroutine */ int slagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *d__, real *a, integer *lda, integer *iseed, real *work, 
	integer *info);
extern /* Subroutine */ int slagsy_(integer *n, integer *k, real *d__, real *a, 
	integer *lda, integer *iseed, real *work, integer *info);
extern /* Subroutine */ int slahilb_(integer *n, integer *nrhs, real *a, integer *
	lda, real *x, integer *ldx, real *b, integer *ldb, real *work, 
	integer *info);
extern /* Subroutine */ int slakf2_(integer *m, integer *n, real *a, integer *lda, 
	real *b, real *d__, real *e, real *z__, integer *ldz);
extern doublereal slaran_(integer *iseed);
extern /* Subroutine */ int slarge_(integer *n, real *a, integer *lda, integer *
	iseed, real *work, integer *info);
extern doublereal slarnd_(integer *idist, integer *iseed);
extern /* Subroutine */ int slaror_(char *side, char *init, integer *m, integer *n, 
	real *a, integer *lda, integer *iseed, real *x, integer *info);
extern /* Subroutine */ int slarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, real *c__, real *s, real *a, integer *lda, real *xleft, 
	real *xright);
extern /* Subroutine */ int slatm1_(integer *mode, real *cond, integer *irsign, 
	integer *idist, integer *iseed, real *d__, integer *n, integer *info);
extern doublereal slatm2_(integer *m, integer *n, integer *i__, integer *j, integer *
	kl, integer *ku, integer *idist, integer *iseed, real *d__, integer *
	igrade, real *dl, real *dr, integer *ipvtng, integer *iwork, real *
	sparse);
extern doublereal slatm3_(integer *m, integer *n, integer *i__, integer *j, integer *
	isub, integer *jsub, integer *kl, integer *ku, integer *idist, 
	integer *iseed, real *d__, integer *igrade, real *dl, real *dr, 
	integer *ipvtng, integer *iwork, real *sparse);
extern /* Subroutine */ int slatm5_(integer *prtype, integer *m, integer *n, real *a, 
	 integer *lda, real *b, integer *ldb, real *c__, integer *ldc, real *
	d__, integer *ldd, real *e, integer *lde, real *f, integer *ldf, real 
	*r__, integer *ldr, real *l, integer *ldl, real *alpha, integer *
	qblcka, integer *qblckb);
extern /* Subroutine */ int slatm6_(integer *type__, integer *n, real *a, integer *
	lda, real *b, real *x, integer *ldx, real *y, integer *ldy, real *
	alpha, real *beta, real *wx, real *wy, real *s, real *dif);
extern /* Subroutine */ int slatm7_(integer *mode, real *cond, integer *irsign, 
	integer *idist, integer *iseed, real *d__, integer *n, integer *rank, 
	integer *info);
extern /* Subroutine */ int slatme_(integer *n, char *dist, integer *iseed, real *
	d__, integer *mode, real *cond, real *dmax__, char *ei, char *rsign, 
	char *upper, char *sim, real *ds, integer *modes, real *conds, 
	integer *kl, integer *ku, real *anorm, real *a, integer *lda, real *
	work, integer *info);
extern /* Subroutine */ int slatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	char *rsign, char *grade, real *dl, integer *model, real *condl, real 
	*dr, integer *moder, real *condr, char *pivtng, integer *ipivot, 
	integer *kl, integer *ku, real *sparse, real *anorm, char *pack, real 
	*a, integer *lda, integer *iwork, integer *info);
extern /* Subroutine */ int slatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *kl, integer *ku, char *pack, real *a, integer *lda, real *
	work, integer *info);
extern /* Subroutine */ int slatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *rank, integer *kl, integer *ku, char *pack, real *a, integer 
	*lda, real *work, integer *info);
extern /* Subroutine */ int zlagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *d__, doublecomplex *a, integer *lda, integer *iseed, 
	doublecomplex *work, integer *info);
extern /* Subroutine */ int zlaghe_(integer *n, integer *k, doublereal *d__, 
	doublecomplex *a, integer *lda, integer *iseed, doublecomplex *work, 
	integer *info);
extern /* Subroutine */ int zlagsy_(integer *n, integer *k, doublereal *d__, 
	doublecomplex *a, integer *lda, integer *iseed, doublecomplex *work, 
	integer *info);
extern /* Subroutine */ int zlahilb_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *work, integer *info, char *path);
extern /* Subroutine */ int zlakf2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, doublecomplex *d__, doublecomplex *e, 
	doublecomplex *z__, integer *ldz);
extern /* Subroutine */ int zlarge_(integer *n, doublecomplex *a, integer *lda, 
	integer *iseed, doublecomplex *work, integer *info);
extern /* Double Complex */ void zlarnd_(doublecomplex * ret_val, integer *idist, 
	integer *iseed);
extern /* Subroutine */ int zlaror_(char *side, char *init, integer *m, integer *n, 
	doublecomplex *a, integer *lda, integer *iseed, doublecomplex *x, 
	integer *info);
extern /* Subroutine */ int zlarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, doublecomplex *c__, doublecomplex *s, doublecomplex *a, 
	integer *lda, doublecomplex *xleft, doublecomplex *xright);
extern /* Subroutine */ int zlatm1_(integer *mode, doublereal *cond, integer *irsign, 
	 integer *idist, integer *iseed, doublecomplex *d__, integer *n, 
	integer *info);
extern /* Double Complex */ void zlatm2_(doublecomplex * ret_val, integer *m, 
	integer *n, integer *i__, integer *j, integer *kl, integer *ku, 
	integer *idist, integer *iseed, doublecomplex *d__, integer *igrade, 
	doublecomplex *dl, doublecomplex *dr, integer *ipvtng, integer *iwork, 
	 doublereal *sparse);
extern /* Double Complex */ void zlatm3_(doublecomplex * ret_val, integer *m, 
	integer *n, integer *i__, integer *j, integer *isub, integer *jsub, 
	integer *kl, integer *ku, integer *idist, integer *iseed, 
	doublecomplex *d__, integer *igrade, doublecomplex *dl, doublecomplex 
	*dr, integer *ipvtng, integer *iwork, doublereal *sparse);
extern /* Subroutine */ int zlatm5_(integer *prtype, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublecomplex *r__, integer *ldr, doublecomplex *l, integer *ldl, 
	doublereal *alpha, integer *qblcka, integer *qblckb);
extern /* Subroutine */ int zlatm6_(integer *type__, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, doublecomplex *x, integer *ldx, 
	doublecomplex *y, integer *ldy, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *wx, doublecomplex *wy, doublereal *s, doublereal 
	*dif);
extern /* Subroutine */ int zlatme_(integer *n, char *dist, integer *iseed, 
	doublecomplex *d__, integer *mode, doublereal *cond, doublecomplex *
	dmax__, char *ei, char *rsign, char *upper, char *sim, doublereal *ds, 
	 integer *modes, doublereal *conds, integer *kl, integer *ku, 
	doublereal *anorm, doublecomplex *a, integer *lda, doublecomplex *
	work, integer *info);
extern /* Subroutine */ int zlatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublecomplex *d__, integer *mode, doublereal *cond, 
	 doublecomplex *dmax__, char *rsign, char *grade, doublecomplex *dl, 
	integer *model, doublereal *condl, doublecomplex *dr, integer *moder, 
	doublereal *condr, char *pivtng, integer *ipivot, integer *kl, 
	integer *ku, doublereal *sparse, doublereal *anorm, char *pack, 
	doublecomplex *a, integer *lda, integer *iwork, integer *info);
extern /* Subroutine */ int zlatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *kl, integer *ku, char *pack, 
	doublecomplex *a, integer *lda, doublecomplex *work, integer *info);
extern /* Subroutine */ int zlatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *rank, integer *kl, integer *ku, char *
	pack, doublecomplex *a, integer *lda, doublecomplex *work, integer *
	info);
#endif
