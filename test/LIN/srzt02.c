/* srzt02.f -- translated by f2c (version 20061008).
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
static real c_b5 = 0.f;
static real c_b6 = 1.f;

doublereal srzt02_(integer *m, integer *n, real *af, integer *lda, real *tau, 
	real *work, integer *lwork)
{
    /* System generated locals */
    integer af_dim1, af_offset, i__1, i__2;
    real ret_val;

    /* Local variables */
    integer i__, info;
    real rwork[1];


/*  -- LAPACK test routine (version 3.1) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     November 2006 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  SRZT02 returns */
/*       || I - Q'*Q || / ( M * eps) */
/*  where the matrix Q is defined by the Householder transformations */
/*  generated by STZRZF. */

/*  Arguments */
/*  ========= */

/*  M       (input) INTEGER */
/*          The number of rows of the matrix AF. */

/*  N       (input) INTEGER */
/*          The number of columns of the matrix AF. */

/*  AF      (input) REAL array, dimension (LDA,N) */
/*          The output of STZRZF. */

/*  LDA     (input) INTEGER */
/*          The leading dimension of the array AF. */

/*  TAU     (input) REAL array, dimension (M) */
/*          Details of the Householder transformations as returned by */
/*          STZRZF. */

/*  WORK    (workspace) REAL array, dimension (LWORK) */

/*  LWORK   (input) INTEGER */
/*          length of WORK array. LWORK >= N*N+N*NB. */

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
    ret_val = 0.f;

    if (*lwork < *n * *n + *n) {
	this_xerbla_("SRZT02", &c__7);
	return ret_val;
    }

/*     Quick return if possible */

    if (*m <= 0 || *n <= 0) {
	return ret_val;
    }

/*     Q := I */

    slaset_("Full", n, n, &c_b5, &c_b6, &work[1], n);

/*     Q := P(1) * ... * P(m) * Q */

    i__1 = *n - *m;
    i__2 = *lwork - *n * *n;
    sormrz_("Left", "No transpose", n, n, m, &i__1, &af[af_offset], lda, &tau[
	    1], &work[1], n, &work[*n * *n + 1], &i__2, &info);

/*     Q := P(m) * ... * P(1) * Q */

    i__1 = *n - *m;
    i__2 = *lwork - *n * *n;
    sormrz_("Left", "Transpose", n, n, m, &i__1, &af[af_offset], lda, &tau[1], 
	     &work[1], n, &work[*n * *n + 1], &i__2, &info);

/*     Q := Q - I */

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	work[(i__ - 1) * *n + i__] += -1.f;
/* L10: */
    }

    ret_val = slange_("One-norm", n, n, &work[1], n, rwork) / (
	    slamch_("Epsilon") * (real) max(*m,*n));
    return ret_val;

/*     End of SRZT02 */

} /* srzt02_ */
