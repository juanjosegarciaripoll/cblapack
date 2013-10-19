extern /* Main program */ int MAIN__(void);
extern /* Subroutine */ int zchk1_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *nbet, doublecomplex *bet, integer *nmax, doublecomplex *
	a, doublecomplex *aa, doublecomplex *as, doublecomplex *b, 
	doublecomplex *bb, doublecomplex *bs, doublecomplex *c__, 
	doublecomplex *cc, doublecomplex *cs, doublecomplex *ct, doublereal *
	g, ftnlen sname_len);
extern /* Subroutine */ int zchk2_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *nbet, doublecomplex *bet, integer *nmax, doublecomplex *
	a, doublecomplex *aa, doublecomplex *as, doublecomplex *b, 
	doublecomplex *bb, doublecomplex *bs, doublecomplex *c__, 
	doublecomplex *cc, doublecomplex *cs, doublecomplex *ct, doublereal *
	g, ftnlen sname_len);
extern /* Subroutine */ int zchk3_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *nmax, doublecomplex *a, doublecomplex *aa, 
	doublecomplex *as, doublecomplex *b, doublecomplex *bb, doublecomplex 
	*bs, doublecomplex *ct, doublereal *g, doublecomplex *c__, ftnlen 
	sname_len);
extern /* Subroutine */ int zchk4_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *nbet, doublecomplex *bet, integer *nmax, doublecomplex *
	a, doublecomplex *aa, doublecomplex *as, doublecomplex *b, 
	doublecomplex *bb, doublecomplex *bs, doublecomplex *c__, 
	doublecomplex *cc, doublecomplex *cs, doublecomplex *ct, doublereal *
	g, ftnlen sname_len);
extern /* Subroutine */ int zchk5_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublecomplex *
	alf, integer *nbet, doublecomplex *bet, integer *nmax, doublecomplex *
	ab, doublecomplex *aa, doublecomplex *as, doublecomplex *bb, 
	doublecomplex *bs, doublecomplex *c__, doublecomplex *cc, 
	doublecomplex *cs, doublecomplex *ct, doublereal *g, doublecomplex *w,
	 ftnlen sname_len);
extern /* Subroutine */ int zchke_(integer *isnum, char *srnamt, integer *nout, 
	ftnlen srnamt_len);
extern /* Subroutine */ int zmake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, doublecomplex *a, integer *nmax, doublecomplex *aa, 
	integer *lda, logical *reset, doublecomplex *transl, ftnlen type_len, 
	ftnlen uplo_len, ftnlen diag_len);
extern /* Subroutine */ int zmmch_(char *transa, char *transb, integer *m, integer *
	n, integer *kk, doublecomplex *alpha, doublecomplex *a, integer *lda, 
	doublecomplex *b, integer *ldb, doublecomplex *beta, doublecomplex *
	c__, integer *ldc, doublecomplex *ct, doublereal *g, doublecomplex *
	cc, integer *ldcc, doublereal *eps, doublereal *err, logical *fatal, 
	integer *nout, logical *mv, ftnlen transa_len, ftnlen transb_len);
extern logical lze_(doublecomplex *ri, doublecomplex *rj, integer *lr);
extern logical lzeres_(char *type__, char *uplo, integer *m, integer *n, 
	doublecomplex *aa, doublecomplex *as, integer *lda, ftnlen type_len, 
	ftnlen uplo_len);
extern /* Double Complex */ void zbeg_(doublecomplex * ret_val, logical *reset);
extern doublereal ddiff_(doublereal *x, doublereal *y);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int this_xerbla_(char *srname, integer *info);
