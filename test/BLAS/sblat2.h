extern /* Main program */ int MAIN__(void);
extern /* Subroutine */ int schk1_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	nalf, real *alf, integer *nbet, real *bet, integer *ninc, integer *
	inc, integer *nmax, integer *incmax, real *a, real *aa, real *as, 
	real *x, real *xx, real *xs, real *y, real *yy, real *ys, real *yt, 
	real *g, ftnlen sname_len);
extern /* Subroutine */ int schk2_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	nalf, real *alf, integer *nbet, real *bet, integer *ninc, integer *
	inc, integer *nmax, integer *incmax, real *a, real *aa, real *as, 
	real *x, real *xx, real *xs, real *y, real *yy, real *ys, real *yt, 
	real *g, ftnlen sname_len);
extern /* Subroutine */ int schk3_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, real *a, real *aa,
	 real *as, real *x, real *xx, real *xs, real *xt, real *g, real *z__, 
	ftnlen sname_len);
extern /* Subroutine */ int schk4_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, real *a, real *aa,
	 real *as, real *x, real *xx, real *xs, real *y, real *yy, real *ys, 
	real *yt, real *g, real *z__, ftnlen sname_len);
extern /* Subroutine */ int schk5_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, real *a, real *aa,
	 real *as, real *x, real *xx, real *xs, real *y, real *yy, real *ys, 
	real *yt, real *g, real *z__, ftnlen sname_len);
extern /* Subroutine */ int schk6_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, real *a, real *aa,
	 real *as, real *x, real *xx, real *xs, real *y, real *yy, real *ys, 
	real *yt, real *g, real *z__, ftnlen sname_len);
extern /* Subroutine */ int schke_(integer *isnum, char *srnamt, integer *nout, 
	ftnlen srnamt_len);
extern /* Subroutine */ int smake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, real *a, integer *nmax, real *aa, integer *lda, integer *
	kl, integer *ku, logical *reset, real *transl, ftnlen type_len, 
	ftnlen uplo_len, ftnlen diag_len);
extern /* Subroutine */ int smvch_(char *trans, integer *m, integer *n, real *alpha, 
	real *a, integer *nmax, real *x, integer *incx, real *beta, real *y, 
	integer *incy, real *yt, real *g, real *yy, real *eps, real *err, 
	logical *fatal, integer *nout, logical *mv, ftnlen trans_len);
extern logical lse_(real *ri, real *rj, integer *lr);
extern logical lseres_(char *type__, char *uplo, integer *m, integer *n, real *aa, 
	real *as, integer *lda, ftnlen type_len, ftnlen uplo_len);
extern doublereal sbeg_(logical *reset);
extern doublereal sdiff_(real *x, real *y);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int this_xerbla_(char *srname, integer *info);
