/* clagge.c */
F2CSUB clagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *d__, complex *a, integer *lda, integer *iseed, complex *work, 
	integer *info);

/* claghe.c */
F2CSUB claghe_(integer *n, integer *k, real *d__, complex *a, 
	integer *lda, integer *iseed, complex *work, integer *info);

/* clagsy.c */
F2CSUB clagsy_(integer *n, integer *k, real *d__, complex *a, 
	integer *lda, integer *iseed, complex *work, integer *info);

/* clahilb.c */
F2CSUB clahilb_(integer *n, integer *nrhs, complex *a, integer *
	lda, complex *x, integer *ldx, complex *b, integer *ldb, real *work, 
	integer *info, char *path);

/* clakf2.c */
F2CSUB clakf2_(integer *m, integer *n, complex *a, integer *lda, 
	 complex *b, complex *d__, complex *e, complex *z__, integer *ldz);

/* clarge.c */
F2CSUB clarge_(integer *n, complex *a, integer *lda, integer *
	iseed, complex *work, integer *info);

/* clarnd.c */
void clarnd_(complex * ret_val, integer *idist, integer *iseed);

/* claror.c */
F2CSUB claror_(char *side, char *init, integer *m, integer *n, 
	complex *a, integer *lda, integer *iseed, complex *x, integer *info);

/* clarot.c */
F2CSUB clarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, complex *c__, complex *s, complex *a, integer *lda, 
	complex *xleft, complex *xright);

/* clatm1.c */
F2CSUB clatm1_(integer *mode, real *cond, integer *irsign, 
	integer *idist, integer *iseed, complex *d__, integer *n, integer *
	info);

/* clatm2.c */
void clatm2_(complex * ret_val, integer *m, integer *n, integer 
	*i__, integer *j, integer *kl, integer *ku, integer *idist, integer *
	iseed, complex *d__, integer *igrade, complex *dl, complex *dr, 
	integer *ipvtng, integer *iwork, real *sparse);

/* clatm3.c */
void clatm3_(complex * ret_val, integer *m, integer *n, integer 
	*i__, integer *j, integer *isub, integer *jsub, integer *kl, integer *
	ku, integer *idist, integer *iseed, complex *d__, integer *igrade, 
	complex *dl, complex *dr, integer *ipvtng, integer *iwork, real *
	sparse);

/* clatm5.c */
F2CSUB clatm5_(integer *prtype, integer *m, integer *n, complex 
	*a, integer *lda, complex *b, integer *ldb, complex *c__, integer *
	ldc, complex *d__, integer *ldd, complex *e, integer *lde, complex *f, 
	 integer *ldf, complex *r__, integer *ldr, complex *l, integer *ldl, 
	real *alpha, integer *qblcka, integer *qblckb);

/* clatm6.c */
F2CSUB clatm6_(integer *type__, integer *n, complex *a, integer 
	*lda, complex *b, complex *x, integer *ldx, complex *y, integer *ldy, 
	complex *alpha, complex *beta, complex *wx, complex *wy, real *s, 
	real *dif);

/* clatme.c */
F2CSUB clatme_(integer *n, char *dist, integer *iseed, complex *
	d__, integer *mode, real *cond, complex *dmax__, char *ei, char *
	rsign, char *upper, char *sim, real *ds, integer *modes, real *conds, 
	integer *kl, integer *ku, real *anorm, complex *a, integer *lda, 
	complex *work, integer *info);

/* clatmr.c */
F2CSUB clatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, complex *d__, integer *mode, real *cond, complex *
	dmax__, char *rsign, char *grade, complex *dl, integer *model, real *
	condl, complex *dr, integer *moder, real *condr, char *pivtng, 
	integer *ipivot, integer *kl, integer *ku, real *sparse, real *anorm, 
	char *pack, complex *a, integer *lda, integer *iwork, integer *info);

/* clatms.c */
F2CSUB clatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *kl, integer *ku, char *pack, complex *a, integer *lda, 
	complex *work, integer *info);

/* clatmt.c */
F2CSUB clatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *rank, integer *kl, integer *ku, char *pack, complex *a, 
	integer *lda, complex *work, integer *info);

/* dlagge.c */
F2CSUB dlagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *d__, doublereal *a, integer *lda, integer *iseed, 
	doublereal *work, integer *info);

/* dlagsy.c */
F2CSUB dlagsy_(integer *n, integer *k, doublereal *d__, 
	doublereal *a, integer *lda, integer *iseed, doublereal *work, 
	integer *info);

/* dlahilb.c */
F2CSUB dlahilb_(integer *n, integer *nrhs, doublereal *a, 
	integer *lda, doublereal *x, integer *ldx, doublereal *b, integer *
	ldb, doublereal *work, integer *info);

/* dlakf2.c */
F2CSUB dlakf2_(integer *m, integer *n, doublereal *a, integer *
	lda, doublereal *b, doublereal *d__, doublereal *e, doublereal *z__, 
	integer *ldz);

/* dlaran.c */
doublereal dlaran_(integer *iseed);

/* dlarge.c */
F2CSUB dlarge_(integer *n, doublereal *a, integer *lda, integer 
	*iseed, doublereal *work, integer *info);

/* dlarnd.c */
doublereal dlarnd_(integer *idist, integer *iseed);

/* dlaror.c */
F2CSUB dlaror_(char *side, char *init, integer *m, integer *n, 
	doublereal *a, integer *lda, integer *iseed, doublereal *x, integer *
	info);

/* dlarot.c */
F2CSUB dlarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, doublereal *c__, doublereal *s, doublereal *a, integer *
	lda, doublereal *xleft, doublereal *xright);

/* dlatm1.c */
F2CSUB dlatm1_(integer *mode, doublereal *cond, integer *irsign, 
	 integer *idist, integer *iseed, doublereal *d__, integer *n, integer 
	*info);

/* dlatm2.c */
doublereal dlatm2_(integer *m, integer *n, integer *i__, integer *j, integer *
	kl, integer *ku, integer *idist, integer *iseed, doublereal *d__, 
	integer *igrade, doublereal *dl, doublereal *dr, integer *ipvtng, 
	integer *iwork, doublereal *sparse);

/* dlatm3.c */
doublereal dlatm3_(integer *m, integer *n, integer *i__, integer *j, integer *
	isub, integer *jsub, integer *kl, integer *ku, integer *idist, 
	integer *iseed, doublereal *d__, integer *igrade, doublereal *dl, 
	doublereal *dr, integer *ipvtng, integer *iwork, doublereal *sparse);

/* dlatm5.c */
F2CSUB dlatm5_(integer *prtype, integer *m, integer *n, 
	doublereal *a, integer *lda, doublereal *b, integer *ldb, doublereal *
	c__, integer *ldc, doublereal *d__, integer *ldd, doublereal *e, 
	integer *lde, doublereal *f, integer *ldf, doublereal *r__, integer *
	ldr, doublereal *l, integer *ldl, doublereal *alpha, integer *qblcka, 
	integer *qblckb);

/* dlatm6.c */
F2CSUB dlatm6_(integer *type__, integer *n, doublereal *a, 
	integer *lda, doublereal *b, doublereal *x, integer *ldx, doublereal *
	y, integer *ldy, doublereal *alpha, doublereal *beta, doublereal *wx, 
	doublereal *wy, doublereal *s, doublereal *dif);

/* dlatm7.c */
F2CSUB dlatm7_(integer *mode, doublereal *cond, integer *irsign, 
	 integer *idist, integer *iseed, doublereal *d__, integer *n, integer 
	*rank, integer *info);

/* dlatme.c */
F2CSUB dlatme_(integer *n, char *dist, integer *iseed, 
	doublereal *d__, integer *mode, doublereal *cond, doublereal *dmax__, 
	char *ei, char *rsign, char *upper, char *sim, doublereal *ds, 
	integer *modes, doublereal *conds, integer *kl, integer *ku, 
	doublereal *anorm, doublereal *a, integer *lda, doublereal *work, 
	integer *info);

/* dlatmr.c */
F2CSUB dlatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, char *rsign, char *grade, doublereal *dl, integer 
	*model, doublereal *condl, doublereal *dr, integer *moder, doublereal 
	*condr, char *pivtng, integer *ipivot, integer *kl, integer *ku, 
	doublereal *sparse, doublereal *anorm, char *pack, doublereal *a, 
	integer *lda, integer *iwork, integer *info);

/* dlatms.c */
F2CSUB dlatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *kl, integer *ku, char *pack, doublereal *
	a, integer *lda, doublereal *work, integer *info);

/* dlatmt.c */
F2CSUB dlatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *rank, integer *kl, integer *ku, char *
	pack, doublereal *a, integer *lda, doublereal *work, integer *info);

/* slagge.c */
F2CSUB slagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 real *d__, real *a, integer *lda, integer *iseed, real *work, 
	integer *info);

/* slagsy.c */
F2CSUB slagsy_(integer *n, integer *k, real *d__, real *a, 
	integer *lda, integer *iseed, real *work, integer *info);

/* slahilb.c */
F2CSUB slahilb_(integer *n, integer *nrhs, real *a, integer *
	lda, real *x, integer *ldx, real *b, integer *ldb, real *work, 
	integer *info);

/* slakf2.c */
F2CSUB slakf2_(integer *m, integer *n, real *a, integer *lda, 
	real *b, real *d__, real *e, real *z__, integer *ldz);

/* slaran.c */
doublereal slaran_(integer *iseed);

/* slarge.c */
F2CSUB slarge_(integer *n, real *a, integer *lda, integer *
	iseed, real *work, integer *info);

/* slarnd.c */
doublereal slarnd_(integer *idist, integer *iseed);

/* slaror.c */
F2CSUB slaror_(char *side, char *init, integer *m, integer *n, 
	real *a, integer *lda, integer *iseed, real *x, integer *info);

/* slarot.c */
F2CSUB slarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, real *c__, real *s, real *a, integer *lda, real *xleft, 
	real *xright);

/* slatm1.c */
F2CSUB slatm1_(integer *mode, real *cond, integer *irsign, 
	integer *idist, integer *iseed, real *d__, integer *n, integer *info);

/* slatm2.c */
doublereal slatm2_(integer *m, integer *n, integer *i__, integer *j, integer *
	kl, integer *ku, integer *idist, integer *iseed, real *d__, integer *
	igrade, real *dl, real *dr, integer *ipvtng, integer *iwork, real *
	sparse);

/* slatm3.c */
doublereal slatm3_(integer *m, integer *n, integer *i__, integer *j, integer *
	isub, integer *jsub, integer *kl, integer *ku, integer *idist, 
	integer *iseed, real *d__, integer *igrade, real *dl, real *dr, 
	integer *ipvtng, integer *iwork, real *sparse);

/* slatm5.c */
F2CSUB slatm5_(integer *prtype, integer *m, integer *n, real *a, 
	 integer *lda, real *b, integer *ldb, real *c__, integer *ldc, real *
	d__, integer *ldd, real *e, integer *lde, real *f, integer *ldf, real 
	*r__, integer *ldr, real *l, integer *ldl, real *alpha, integer *
	qblcka, integer *qblckb);

/* slatm6.c */
F2CSUB slatm6_(integer *type__, integer *n, real *a, integer *
	lda, real *b, real *x, integer *ldx, real *y, integer *ldy, real *
	alpha, real *beta, real *wx, real *wy, real *s, real *dif);

/* slatm7.c */
F2CSUB slatm7_(integer *mode, real *cond, integer *irsign, 
	integer *idist, integer *iseed, real *d__, integer *n, integer *rank, 
	integer *info);

/* slatme.c */
F2CSUB slatme_(integer *n, char *dist, integer *iseed, real *
	d__, integer *mode, real *cond, real *dmax__, char *ei, char *rsign, 
	char *upper, char *sim, real *ds, integer *modes, real *conds, 
	integer *kl, integer *ku, real *anorm, real *a, integer *lda, real *
	work, integer *info);

/* slatmr.c */
F2CSUB slatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	char *rsign, char *grade, real *dl, integer *model, real *condl, real 
	*dr, integer *moder, real *condr, char *pivtng, integer *ipivot, 
	integer *kl, integer *ku, real *sparse, real *anorm, char *pack, real 
	*a, integer *lda, integer *iwork, integer *info);

/* slatms.c */
F2CSUB slatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *kl, integer *ku, char *pack, real *a, integer *lda, real *
	work, integer *info);

/* slatmt.c */
F2CSUB slatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, real *d__, integer *mode, real *cond, real *dmax__, 
	integer *rank, integer *kl, integer *ku, char *pack, real *a, integer 
	*lda, real *work, integer *info);

/* zlagge.c */
F2CSUB zlagge_(integer *m, integer *n, integer *kl, integer *ku, 
	 doublereal *d__, doublecomplex *a, integer *lda, integer *iseed, 
	doublecomplex *work, integer *info);

/* zlaghe.c */
F2CSUB zlaghe_(integer *n, integer *k, doublereal *d__, 
	doublecomplex *a, integer *lda, integer *iseed, doublecomplex *work, 
	integer *info);

/* zlagsy.c */
F2CSUB zlagsy_(integer *n, integer *k, doublereal *d__, 
	doublecomplex *a, integer *lda, integer *iseed, doublecomplex *work, 
	integer *info);

/* zlahilb.c */
F2CSUB zlahilb_(integer *n, integer *nrhs, doublecomplex *a, 
	integer *lda, doublecomplex *x, integer *ldx, doublecomplex *b, 
	integer *ldb, doublereal *work, integer *info, char *path);

/* zlakf2.c */
F2CSUB zlakf2_(integer *m, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, doublecomplex *d__, doublecomplex *e, 
	doublecomplex *z__, integer *ldz);

/* zlarge.c */
F2CSUB zlarge_(integer *n, doublecomplex *a, integer *lda, 
	integer *iseed, doublecomplex *work, integer *info);

/* zlarnd.c */
/* Double Complex */ void zlarnd_(doublecomplex * ret_val, integer *idist, 
	integer *iseed);

/* zlaror.c */
F2CSUB zlaror_(char *side, char *init, integer *m, integer *n, 
	doublecomplex *a, integer *lda, integer *iseed, doublecomplex *x, 
	integer *info);

/* zlarot.c */
F2CSUB zlarot_(logical *lrows, logical *lleft, logical *lright, 
	integer *nl, doublecomplex *c__, doublecomplex *s, doublecomplex *a, 
	integer *lda, doublecomplex *xleft, doublecomplex *xright);

/* zlatm1.c */
F2CSUB zlatm1_(integer *mode, doublereal *cond, integer *irsign, 
	 integer *idist, integer *iseed, doublecomplex *d__, integer *n, 
	integer *info);

/* zlatm2.c */
/* Double Complex */ void zlatm2_(doublecomplex * ret_val, integer *m, 
	integer *n, integer *i__, integer *j, integer *kl, integer *ku, 
	integer *idist, integer *iseed, doublecomplex *d__, integer *igrade, 
	doublecomplex *dl, doublecomplex *dr, integer *ipvtng, integer *iwork, 
	 doublereal *sparse);

/* zlatm3.c */
/* Double Complex */ void zlatm3_(doublecomplex * ret_val, integer *m, 
	integer *n, integer *i__, integer *j, integer *isub, integer *jsub, 
	integer *kl, integer *ku, integer *idist, integer *iseed, 
	doublecomplex *d__, integer *igrade, doublecomplex *dl, doublecomplex 
	*dr, integer *ipvtng, integer *iwork, doublereal *sparse);

/* zlatm5.c */
F2CSUB zlatm5_(integer *prtype, integer *m, integer *n, 
	doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, 
	doublecomplex *c__, integer *ldc, doublecomplex *d__, integer *ldd, 
	doublecomplex *e, integer *lde, doublecomplex *f, integer *ldf, 
	doublecomplex *r__, integer *ldr, doublecomplex *l, integer *ldl, 
	doublereal *alpha, integer *qblcka, integer *qblckb);

/* zlatm6.c */
F2CSUB zlatm6_(integer *type__, integer *n, doublecomplex *a, 
	integer *lda, doublecomplex *b, doublecomplex *x, integer *ldx, 
	doublecomplex *y, integer *ldy, doublecomplex *alpha, doublecomplex *
	beta, doublecomplex *wx, doublecomplex *wy, doublereal *s, doublereal 
	*dif);

/* zlatme.c */
F2CSUB zlatme_(integer *n, char *dist, integer *iseed, 
	doublecomplex *d__, integer *mode, doublereal *cond, doublecomplex *
	dmax__, char *ei, char *rsign, char *upper, char *sim, doublereal *ds, 
	 integer *modes, doublereal *conds, integer *kl, integer *ku, 
	doublereal *anorm, doublecomplex *a, integer *lda, doublecomplex *
	work, integer *info);

/* zlatmr.c */
F2CSUB zlatmr_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublecomplex *d__, integer *mode, doublereal *cond, 
	 doublecomplex *dmax__, char *rsign, char *grade, doublecomplex *dl, 
	integer *model, doublereal *condl, doublecomplex *dr, integer *moder, 
	doublereal *condr, char *pivtng, integer *ipivot, integer *kl, 
	integer *ku, doublereal *sparse, doublereal *anorm, char *pack, 
	doublecomplex *a, integer *lda, integer *iwork, integer *info);

/* zlatms.c */
F2CSUB zlatms_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *kl, integer *ku, char *pack, 
	doublecomplex *a, integer *lda, doublecomplex *work, integer *info);

/* zlatmt.c */
F2CSUB zlatmt_(integer *m, integer *n, char *dist, integer *
	iseed, char *sym, doublereal *d__, integer *mode, doublereal *cond, 
	doublereal *dmax__, integer *rank, integer *kl, integer *ku, char *
	pack, doublecomplex *a, integer *lda, doublecomplex *work, integer *
	info);

