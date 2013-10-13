/* zslect.f -- translated by f2c (version 20061008).
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

/* Common Block Declarations */

struct {
    integer selopt, seldim;
    logical selval[20];
    doublereal selwr[20], selwi[20];
} sslct_;

#define sslct_1 sslct_

logical zslect_(doublecomplex *z__)
{
    /* System generated locals */
    integer i__1, i__2, i__3;
    doublecomplex z__1, z__2;
    logical ret_val;

    /* Local variables */
    integer i__;
    doublereal x, rmin;


/*  -- LAPACK test routine (version 3.1.1) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     February 2007 */

/*     .. Scalar Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  ZSLECT returns .TRUE. if the eigenvalue Z is to be selected, */
/*  otherwise it returns .FALSE. */
/*  It is used by ZCHK41 to test if ZGEES succesfully sorts eigenvalues, */
/*  and by ZCHK43 to test if ZGEESX succesfully sorts eigenvalues. */

/*  The common block /SSLCT/ controls how eigenvalues are selected. */
/*  If SELOPT = 0, then ZSLECT return .TRUE. when real(Z) is less than */
/*  zero, and .FALSE. otherwise. */
/*  If SELOPT is at least 1, ZSLECT returns SELVAL(SELOPT) and adds 1 */
/*  to SELOPT, cycling back to 1 at SELMAX. */

/*  Arguments */
/*  ========= */

/*  Z       (input) COMPLEX*16 */
/*          The eigenvalue Z. */

/*  ===================================================================== */

/*     .. Parameters .. */
/*     .. */
/*     .. Local Scalars .. */
/*     .. */
/*     .. Scalars in Common .. */
/*     .. */
/*     .. Arrays in Common .. */
/*     .. */
/*     .. Common blocks .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
/*     .. Executable Statements .. */

    if (sslct_1.selopt == 0) {
	ret_val = z__->r < 0.;
    } else {
	z__2.r = sslct_1.selwr[0], z__2.i = sslct_1.selwi[0];
	z__1.r = z__->r - z__2.r, z__1.i = z__->i - z__2.i;
	rmin = z_abs(&z__1);
	ret_val = sslct_1.selval[0];
	i__1 = sslct_1.seldim;
	for (i__ = 2; i__ <= i__1; ++i__) {
	    i__2 = i__ - 1;
	    i__3 = i__ - 1;
	    z__2.r = sslct_1.selwr[i__2], z__2.i = sslct_1.selwi[i__3];
	    z__1.r = z__->r - z__2.r, z__1.i = z__->i - z__2.i;
	    x = z_abs(&z__1);
	    if (x <= rmin) {
		rmin = x;
		ret_val = sslct_1.selval[i__ - 1];
	    }
/* L10: */
	}
    }
    return ret_val;

/*     End of ZSLECT */

} /* zslect_ */
