extern /* Main program */ int MAIN__(void);
extern /* Subroutine */ int cchk1_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	nbet, complex *bet, integer *nmax, complex *a, complex *aa, complex *
	as, complex *b, complex *bb, complex *bs, complex *c__, complex *cc, 
	complex *cs, complex *ct, real *g, ftnlen sname_len);
extern /* Subroutine */ int cchk2_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	nbet, complex *bet, integer *nmax, complex *a, complex *aa, complex *
	as, complex *b, complex *bb, complex *bs, complex *c__, complex *cc, 
	complex *cs, complex *ct, real *g, ftnlen sname_len);
extern /* Subroutine */ int cchk3_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	nmax, complex *a, complex *aa, complex *as, complex *b, complex *bb, 
	complex *bs, complex *ct, real *g, complex *c__, ftnlen sname_len);
extern /* Subroutine */ int cchk4_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	nbet, complex *bet, integer *nmax, complex *a, complex *aa, complex *
	as, complex *b, complex *bb, complex *bs, complex *c__, complex *cc, 
	complex *cs, complex *ct, real *g, ftnlen sname_len);
extern /* Subroutine */ int cchk5_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	nbet, complex *bet, integer *nmax, complex *ab, complex *aa, complex *
	as, complex *bb, complex *bs, complex *c__, complex *cc, complex *cs, 
	complex *ct, real *g, complex *w, ftnlen sname_len);
extern /* Subroutine */ int cchke_(integer *isnum, char *srnamt, integer *nout, 
	ftnlen srnamt_len);
extern /* Subroutine */ int cmake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, complex *a, integer *nmax, complex *aa, integer *lda, 
	logical *reset, complex *transl, ftnlen type_len, ftnlen uplo_len, 
	ftnlen diag_len);
extern /* Subroutine */ int cmmch_(char *transa, char *transb, integer *m, integer *
	n, integer *kk, complex *alpha, complex *a, integer *lda, complex *b, 
	integer *ldb, complex *beta, complex *c__, integer *ldc, complex *ct, 
	real *g, complex *cc, integer *ldcc, real *eps, real *err, logical *
	fatal, integer *nout, logical *mv, ftnlen transa_len, ftnlen 
	transb_len);
extern logical lce_(complex *ri, complex *rj, integer *lr);
extern logical lceres_(char *type__, char *uplo, integer *m, integer *n, complex *aa,
	 complex *as, integer *lda, ftnlen type_len, ftnlen uplo_len);
extern /* Complex */ void cbeg_(complex * ret_val, logical *reset);
extern doublereal sdiff_(real *x, real *y);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int this_xerbla_(char *srname, integer *info);
