/* zrzt02.f -- translated by f2c (version 20061008).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"
#include "blaswrap.h"

/* Table of constant values */

static integer c__7 = 7;
static doublecomplex c_b5 = {0.,0.};
static doublecomplex c_b6 = {1.,0.};

doublereal zrzt02_(integer *m, integer *n, doublecomplex *af, integer *lda, 
	doublecomplex *tau, doublecomplex *work, integer *lwork)
{
    /* System generated locals */
    integer af_dim1, af_offset, i__1, i__2, i__3;
    doublereal ret_val;
    doublecomplex z__1;

    /* Local variables */
    integer i__, info;
    doublereal rwork[1];


/*  -- LAPACK test routine (version 3.1) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     November 2006 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  ZRZT02 returns */
/*       || I - Q'*Q || / ( M * eps) */
/*  where the matrix Q is defined by the Householder transformations */
/*  generated by ZTZRZF. */

/*  Arguments */
/*  ========= */

/*  M       (input) INTEGER */
/*          The number of rows of the matrix AF. */

/*  N       (input) INTEGER */
/*          The number of columns of the matrix AF. */

/*  AF      (input) COMPLEX*16 array, dimension (LDA,N) */
/*          The output of ZTZRZF. */

/*  LDA     (input) INTEGER */
/*          The leading dimension of the array AF. */

/*  TAU     (input) COMPLEX*16 array, dimension (M) */
/*          Details of the Householder transformations as returned by */
/*          ZTZRZF. */

/*  WORK    (workspace) COMPLEX*16 array, dimension (LWORK) */

/*  LWORK   (input) INTEGER */
/*          Length of WORK array. LWORK >= N*N+N. */

/*  ===================================================================== */

/*     .. Parameters .. */
/*     .. */
/*     .. Local Scalars .. */
/*     .. */
/*     .. Local Arrays .. */
/*     .. */
/*     .. External Functions .. */
/*     .. */
/*     .. External Subroutines .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
/*     .. Executable Statements .. */

    /* Parameter adjustments */
    af_dim1 = *lda;
    af_offset = 1 + af_dim1;
    af -= af_offset;
    --tau;
    --work;

    /* Function Body */
    ret_val = 0.;

    if (*lwork < *n * *n + *n) {
	this_xerbla_("ZRZT02", &c__7);
	return ret_val;
    }

/*     Quick return if possible */

    if (*m <= 0 || *n <= 0) {
	return ret_val;
    }

/*     Q := I */

    zlaset_("Full", n, n, &c_b5, &c_b6, &work[1], n);

/*     Q := P(1) * ... * P(m) * Q */

    i__1 = *n - *m;
    i__2 = *lwork - *n * *n;
    zunmrz_("Left", "No transpose", n, n, m, &i__1, &af[af_offset], lda, &tau[
	    1], &work[1], n, &work[*n * *n + 1], &i__2, &info);

/*     Q := P(m)' * ... * P(1)' * Q */

    i__1 = *n - *m;
    i__2 = *lwork - *n * *n;
    zunmrz_("Left", "Conjugate transpose", n, n, m, &i__1, &af[af_offset], 
	    lda, &tau[1], &work[1], n, &work[*n * *n + 1], &i__2, &info);

/*     Q := Q - I */

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = (i__ - 1) * *n + i__;
	i__3 = (i__ - 1) * *n + i__;
	z__1.r = work[i__3].r - 1., z__1.i = work[i__3].i;
	work[i__2].r = z__1.r, work[i__2].i = z__1.i;
/* L10: */
    }

    ret_val = zlange_("One-norm", n, n, &work[1], n, rwork) / (
	    dlamch_("Epsilon") * (doublereal) max(*m,*n));
    return ret_val;

/*     End of ZRZT02 */

} /* zrzt02_ */
