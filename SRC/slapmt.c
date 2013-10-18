/* slapmt.f -- translated by f2c (version 20061008).
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

/* Subroutine */ int slapmt_(logical *forwrd, integer *m, integer *n, real *x, 
	 integer *ldx, integer *k)
{
    /* System generated locals */
    integer x_dim1, x_offset, i__1, i__2;

    /* Local variables */
    integer i__, j, ii, in;
    real temp;

/*  -- LAPACK auxiliary routine (version 3.2) -- */
/*     November 2006 */

/*  Purpose */
/*  ======= */

/*  SLAPMT rearranges the columns of the M by N matrix X as specified */
/*  If FORWRD = .TRUE.,  forward permutation: */

/*  If FORWRD = .FALSE., backward permutation: */

/*  Arguments */
/*  ========= */

/*  FORWRD  (input) LOGICAL */
/*          = .TRUE., forward permutation */
/*          = .FALSE., backward permutation */

/*  M       (input) INTEGER */
/*          The number of rows of the matrix X. M >= 0. */

/*  N       (input) INTEGER */
/*          The number of columns of the matrix X. N >= 0. */

/*  X       (input/output) REAL array, dimension (LDX,N) */
/*          On entry, the M by N matrix X. */
/*          On exit, X contains the permuted matrix X. */

/*  LDX     (input) INTEGER */
/*          The leading dimension of the array X, LDX >= MAX(1,M). */

/*  K       (input/output) INTEGER array, dimension (N) */
/*          On entry, K contains the permutation vector. K is used as */
/*          internal workspace, but reset to its original value on */
/*          output. */

/*  ===================================================================== */

    /* Parameter adjustments */
    x_dim1 = *ldx;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --k;

    /* Function Body */
    if (*n <= 1) {
	return 0;
    }

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	k[i__] = -k[i__];
    }

    if (*forwrd) {

/*        Forward permutation */

	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {

	    if (k[i__] > 0) {
		goto L40;
	    }

	    j = i__;
	    k[j] = -k[j];
	    in = k[j];

L20:
	    if (k[in] > 0) {
		goto L40;
	    }

	    i__2 = *m;
	    for (ii = 1; ii <= i__2; ++ii) {
		temp = x[ii + j * x_dim1];
		x[ii + j * x_dim1] = x[ii + in * x_dim1];
		x[ii + in * x_dim1] = temp;
	    }

	    k[in] = -k[in];
	    j = in;
	    in = k[in];
	    goto L20;

L40:

	    ;
	}

    } else {

/*        Backward permutation */

	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {

	    if (k[i__] > 0) {
		goto L100;
	    }

	    k[i__] = -k[i__];
	    j = k[i__];
L80:
	    if (j == i__) {
		goto L100;
	    }

	    i__2 = *m;
	    for (ii = 1; ii <= i__2; ++ii) {
		temp = x[ii + i__ * x_dim1];
		x[ii + i__ * x_dim1] = x[ii + j * x_dim1];
		x[ii + j * x_dim1] = temp;
	    }

	    k[j] = -k[j];
	    j = k[j];
	    goto L80;

L100:
	    ;
	}

    }

    return 0;

/*     End of SLAPMT */

} /* slapmt_ */
