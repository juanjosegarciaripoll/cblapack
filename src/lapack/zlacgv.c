/* zlacgv.f -- translated by f2c (version 20061008).
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

/* Subroutine */ int zlacgv_(integer *n, doublecomplex *x, integer *incx)
{
    /* System generated locals */
    integer i__1, i__2;
    doublecomplex z__1;

    /* Local variables */
    integer i__, ioff;

/*  -- LAPACK auxiliary routine (version 3.2) -- */
/*     November 2006 */

/*  Purpose */
/*  ======= */

/*  ZLACGV conjugates a complex vector of length N. */

/*  Arguments */
/*  ========= */

/*  N       (input) INTEGER */
/*          The length of the vector X.  N >= 0. */

/*  X       (input/output) COMPLEX*16 array, dimension */
/*                         (1+(N-1)*abs(INCX)) */
/*          On entry, the vector of length N to be conjugated. */
/*          On exit, X is overwritten with conjg(X). */

/*  INCX    (input) INTEGER */
/*          The spacing between successive elements of X. */

/* ===================================================================== */

    /* Parameter adjustments */
    --x;

    /* Function Body */
    if (*incx == 1) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = i__;
	    d_cnjg(&z__1, &x[i__]);
	    x[i__2].r = z__1.r, x[i__2].i = z__1.i;
	}
    } else {
	ioff = 1;
	if (*incx < 0) {
	    ioff = 1 - (*n - 1) * *incx;
	}
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = ioff;
	    d_cnjg(&z__1, &x[ioff]);
	    x[i__2].r = z__1.r, x[i__2].i = z__1.i;
	    ioff += *incx;
	}
    }
    return 0;

/*     End of ZLACGV */

} /* zlacgv_ */
