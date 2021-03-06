/* derrac.f -- translated by f2c (version 20061008).
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
    integer infot, nout;
    logical ok, lerr;
} infoc_;

#define infoc_1 infoc_

struct {
    char srnamt[32];
} srnamc_;

#define srnamc_1 srnamc_

/* Table of constant values */

static integer c__0 = 0;
static integer c__1 = 1;
static integer c_n1 = -1;
static integer c__2 = 2;

/* Subroutine */ int derrac_(integer *nunit)
{
    /* Format strings */
    static char fmt_9999[] = "(1x,a6,\002 drivers passed the tests of the er"
	    "ror exits\002)";
    static char fmt_9998[] = "(\002 *** \002,a6,\002 drivers failed the test"
	    "s of the error \002,\002exits ***\002)";

    /* Local variables */
    doublereal a[16]	/* was [4][4] */, b[4], c__[4];
    integer i__, j;
    doublereal r__[4], w[8], x[4], r1[4], r2[4], af[16]	/* was [4][4] */;
    integer info, iter;
    doublereal work[16];
    real swork[16];

    /* Fortran I/O blocks */
    static cilist io___1 = { 0, 0, 0, 0, 0 };
    static cilist io___17 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___18 = { 0, 0, 0, fmt_9998, 0 };



/*  -- LAPACK test routine (version 3.1.2) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     May 2007 */

/*     .. Scalar Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  DERRAC tests the error exits for DSPOSV. */

/*  Arguments */
/*  ========= */

/*  NUNIT   (input) INTEGER */
/*          The unit number for output. */

/*  ===================================================================== */

/*     .. Parameters .. */
/*     .. */
/*     .. Local Scalars .. */
/*     .. */
/*     .. Local Arrays .. */
/*     .. */
/*     .. External Subroutines .. */
/*     .. */
/*     .. Scalars in Common .. */
/*     .. */
/*     .. Common blocks .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
/*     .. Executable Statements .. */

    infoc_1.nout = *nunit;
    io___1.ciunit = infoc_1.nout;
    s_wsle(&io___1);
    e_wsle();

/*     Set the variables to innocuous values. */

    for (j = 1; j <= 4; ++j) {
	for (i__ = 1; i__ <= 4; ++i__) {
	    a[i__ + (j << 2) - 5] = 1. / (doublereal) (i__ + j);
	    af[i__ + (j << 2) - 5] = 1. / (doublereal) (i__ + j);
/* L10: */
	}
	b[j - 1] = 0.;
	r1[j - 1] = 0.;
	r2[j - 1] = 0.;
	w[j - 1] = 0.;
	x[j - 1] = 0.;
	c__[j - 1] = 0.;
	r__[j - 1] = 0.;
/* L20: */
    }
    infoc_1.ok = TRUE_;

    s_copy(srnamc_1.srnamt, "DSPOSV", (ftnlen)32, (ftnlen)6);
    infoc_1.infot = 1;
    dsposv_("/", &c__0, &c__0, a, &c__1, b, &c__1, x, &c__1, work, swork, &
	    iter, &info);
    chkxer_("DSPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 2;
    dsposv_("U", &c_n1, &c__0, a, &c__1, b, &c__1, x, &c__1, work, swork, &
	    iter, &info);
    chkxer_("DSPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 3;
    dsposv_("U", &c__0, &c_n1, a, &c__1, b, &c__1, x, &c__1, work, swork, &
	    iter, &info);
    chkxer_("DSPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 5;
    dsposv_("U", &c__2, &c__1, a, &c__1, b, &c__2, x, &c__2, work, swork, &
	    iter, &info);
    chkxer_("DSPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 7;
    dsposv_("U", &c__2, &c__1, a, &c__2, b, &c__1, x, &c__2, work, swork, &
	    iter, &info);
    chkxer_("DSPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 9;
    dsposv_("U", &c__2, &c__1, a, &c__2, b, &c__2, x, &c__1, work, swork, &
	    iter, &info);
    chkxer_("DSPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);

/*     Print a summary line. */

    if (infoc_1.ok) {
	io___17.ciunit = infoc_1.nout;
	s_wsfe(&io___17);
	do_fio(&c__1, "DSPOSV", (ftnlen)6);
	e_wsfe();
    } else {
	io___18.ciunit = infoc_1.nout;
	s_wsfe(&io___18);
	do_fio(&c__1, "DSPOSV", (ftnlen)6);
	e_wsfe();
    }


    return 0;

/*     End of DERRAC */

} /* derrac_ */
