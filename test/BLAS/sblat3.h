extern /* Main program */ int MAIN__(void);
extern /* Subroutine */ int schk1_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	nbet, real *bet, integer *nmax, real *a, real *aa, real *as, real *b, 
	real *bb, real *bs, real *c__, real *cc, real *cs, real *ct, real *g, 
	ftnlen sname_len);
extern /* Subroutine */ int schk2_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	nbet, real *bet, integer *nmax, real *a, real *aa, real *as, real *b, 
	real *bb, real *bs, real *c__, real *cc, real *cs, real *ct, real *g, 
	ftnlen sname_len);
extern /* Subroutine */ int schk3_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	nmax, real *a, real *aa, real *as, real *b, real *bb, real *bs, real *
	ct, real *g, real *c__, ftnlen sname_len);
extern /* Subroutine */ int schk4_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	nbet, real *bet, integer *nmax, real *a, real *aa, real *as, real *b, 
	real *bb, real *bs, real *c__, real *cc, real *cs, real *ct, real *g, 
	ftnlen sname_len);
extern /* Subroutine */ int schk5_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, real *alf, integer *
	nbet, real *bet, integer *nmax, real *ab, real *aa, real *as, real *
	bb, real *bs, real *c__, real *cc, real *cs, real *ct, real *g, real *
	w, ftnlen sname_len);
extern /* Subroutine */ int schke_(integer *isnum, char *srnamt, integer *nout, 
	ftnlen srnamt_len);
extern /* Subroutine */ int smake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, real *a, integer *nmax, real *aa, integer *lda, logical *
	reset, real *transl, ftnlen type_len, ftnlen uplo_len, ftnlen 
	diag_len);
extern /* Subroutine */ int smmch_(char *transa, char *transb, integer *m, integer *
	n, integer *kk, real *alpha, real *a, integer *lda, real *b, integer *
	ldb, real *beta, real *c__, integer *ldc, real *ct, real *g, real *cc,
	 integer *ldcc, real *eps, real *err, logical *fatal, integer *nout, 
	logical *mv, ftnlen transa_len, ftnlen transb_len);
extern logical lse_(real *ri, real *rj, integer *lr);
extern logical lseres_(char *type__, char *uplo, integer *m, integer *n, real *aa, 
	real *as, integer *lda, ftnlen type_len, ftnlen uplo_len);
extern doublereal sbeg_(logical *reset);
extern doublereal sdiff_(real *x, real *y);
extern /* Subroutine */ int chkxer_(char *srnamt, integer *infot, integer *nout, 
	logical *lerr, logical *ok);
extern /* Subroutine */ int this_xerbla_(char *srname, integer *info);
