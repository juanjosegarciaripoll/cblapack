extern /* Main program */ int MAIN__(void);
extern /* Subroutine */ int cchk1_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	nalf, complex *alf, integer *nbet, complex *bet, integer *ninc, 
	integer *inc, integer *nmax, integer *incmax, complex *a, complex *aa,
	 complex *as, complex *x, complex *xx, complex *xs, complex *y, 
	complex *yy, complex *ys, complex *yt, real *g, ftnlen sname_len);
extern /* Subroutine */ int cchk2_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	nalf, complex *alf, integer *nbet, complex *bet, integer *ninc, 
	integer *inc, integer *nmax, integer *incmax, complex *a, complex *aa,
	 complex *as, complex *x, complex *xx, complex *xs, complex *y, 
	complex *yy, complex *ys, complex *yt, real *g, ftnlen sname_len);
extern /* Subroutine */ int cchk3_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *xt, real *g, complex *z__, ftnlen sname_len);
extern /* Subroutine */ int cchk4_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *y, complex *yy, complex *ys, complex *yt, real *g, complex *
	z__, ftnlen sname_len);
extern /* Subroutine */ int cchk5_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *y, complex *yy, complex *ys, complex *yt, real *g, complex *
	z__, ftnlen sname_len);
extern /* Subroutine */ int cchk6_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *y, complex *yy, complex *ys, complex *yt, real *g, complex *
	z__, ftnlen sname_len);
extern /* Subroutine */ int cchke_(integer *isnum, char *srnamt, integer *nout, 
	ftnlen srnamt_len);
extern /* Subroutine */ int cmake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, complex *a, integer *nmax, complex *aa, integer *lda, 
	integer *kl, integer *ku, logical *reset, complex *transl, ftnlen 
	type_len, ftnlen uplo_len, ftnlen diag_len);
extern /* Subroutine */ int cmvch_(char *trans, integer *m, integer *n, complex *
	alpha, complex *a, integer *nmax, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy, complex *yt, real *g, complex *yy, 
	real *eps, real *err, logical *fatal, integer *nout, logical *mv, 
	ftnlen trans_len);
extern logical lce_(complex *ri, complex *rj, integer *lr);
extern logical lceres_(char *type__, char *uplo, integer *m, integer *n, complex *aa,
	 complex *as, integer *lda, ftnlen type_len, ftnlen uplo_len);
extern /* Complex */ void cbeg_(complex * ret_val, logical *reset);
extern doublereal sdiff_(real *x, real *y);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int this_xerbla_(char *srname, integer *info);
