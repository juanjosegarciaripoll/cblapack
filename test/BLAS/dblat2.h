extern /* Main program */ int MAIN__(void);
extern /* Subroutine */ int dchk1_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *nalf, doublereal *alf, integer *nbet, doublereal *bet, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, ftnlen sname_len);
extern /* Subroutine */ int dchk2_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *nalf, doublereal *alf, integer *nbet, doublereal *bet, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, ftnlen sname_len);
extern /* Subroutine */ int dchk3_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *xt, doublereal *g, 
	doublereal *z__, ftnlen sname_len);
extern /* Subroutine */ int dchk4_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublereal *alf, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, doublereal *z__, 
	ftnlen sname_len);
extern /* Subroutine */ int dchk5_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublereal *alf, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, doublereal *z__, 
	ftnlen sname_len);
extern /* Subroutine */ int dchk6_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublereal *alf, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, doublereal *z__, 
	ftnlen sname_len);
extern /* Subroutine */ int dchke_(integer *isnum, char *srnamt, integer *nout, 
	ftnlen srnamt_len);
extern /* Subroutine */ int dmake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, doublereal *a, integer *nmax, doublereal *aa, integer *
	lda, integer *kl, integer *ku, logical *reset, doublereal *transl, 
	ftnlen type_len, ftnlen uplo_len, ftnlen diag_len);
extern /* Subroutine */ int dmvch_(char *trans, integer *m, integer *n, doublereal *
	alpha, doublereal *a, integer *nmax, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy, doublereal *yt, 
	doublereal *g, doublereal *yy, doublereal *eps, doublereal *err, 
	logical *fatal, integer *nout, logical *mv, ftnlen trans_len);
extern logical lde_(doublereal *ri, doublereal *rj, integer *lr);
extern logical lderes_(char *type__, char *uplo, integer *m, integer *n, doublereal *
	aa, doublereal *as, integer *lda, ftnlen type_len, ftnlen uplo_len);
extern doublereal dbeg_(logical *reset);
extern doublereal ddiff_(doublereal *x, doublereal *y);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int this_xerbla_(char *srname, integer *info);
