extern /* Main program */ int MAIN__(void);
extern /* Subroutine */ int zchk1_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *nalf, doublecomplex *alf, integer *nbet, doublecomplex *bet, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex 
	*x, doublecomplex *xx, doublecomplex *xs, doublecomplex *y, 
	doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *
	g, ftnlen sname_len);
extern /* Subroutine */ int zchk2_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *nalf, doublecomplex *alf, integer *nbet, doublecomplex *bet, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex 
	*x, doublecomplex *xx, doublecomplex *xs, doublecomplex *y, 
	doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *
	g, ftnlen sname_len);
extern /* Subroutine */ int zchk3_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex 
	*x, doublecomplex *xx, doublecomplex *xs, doublecomplex *xt, 
	doublereal *g, doublecomplex *z__, ftnlen sname_len);
extern /* Subroutine */ int zchk4_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex 
	*x, doublecomplex *xx, doublecomplex *xs, doublecomplex *y, 
	doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *
	g, doublecomplex *z__, ftnlen sname_len);
extern /* Subroutine */ int zchk5_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex 
	*x, doublecomplex *xx, doublecomplex *xs, doublecomplex *y, 
	doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *
	g, doublecomplex *z__, ftnlen sname_len);
extern /* Subroutine */ int zchk6_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex 
	*x, doublecomplex *xx, doublecomplex *xs, doublecomplex *y, 
	doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *
	g, doublecomplex *z__, ftnlen sname_len);
extern /* Subroutine */ int zchke_(integer *isnum, char *srnamt, integer *nout, 
	ftnlen srnamt_len);
extern /* Subroutine */ int zmake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, doublecomplex *a, integer *nmax, doublecomplex *aa, 
	integer *lda, integer *kl, integer *ku, logical *reset, doublecomplex 
	*transl, ftnlen type_len, ftnlen uplo_len, ftnlen diag_len);
extern /* Subroutine */ int zmvch_(char *trans, integer *m, integer *n, 
	doublecomplex *alpha, doublecomplex *a, integer *nmax, doublecomplex *
	x, integer *incx, doublecomplex *beta, doublecomplex *y, integer *
	incy, doublecomplex *yt, doublereal *g, doublecomplex *yy, doublereal 
	*eps, doublereal *err, logical *fatal, integer *nout, logical *mv, 
	ftnlen trans_len);
extern logical lze_(doublecomplex *ri, doublecomplex *rj, integer *lr);
extern logical lzeres_(char *type__, char *uplo, integer *m, integer *n, 
	doublecomplex *aa, doublecomplex *as, integer *lda, ftnlen type_len, 
	ftnlen uplo_len);
extern /* Double Complex */ void zbeg_(doublecomplex * ret_val, logical *reset);
extern doublereal ddiff_(doublereal *x, doublereal *y);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int this_xerbla_(char *srname, integer *info);
