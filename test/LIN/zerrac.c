/* zerrac.f -- translated by f2c (version 20061008).
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

/* Subroutine */ int zerrac_(integer *nunit)
{
    /* Format strings */
    static char fmt_9999[] = "(1x,a6,\002 drivers passed the tests of the er"
	    "ror exits\002)";
    static char fmt_9998[] = "(\002 *** \002,a6,\002 drivers failed the test"
	    "s of the error \002,\002exits ***\002)";

    /* System generated locals */
    integer i__1;
    doublereal d__1;

    /* Local variables */
    doublecomplex a[16]	/* was [4][4] */, b[4], c__[4];
    integer i__, j;
    doublecomplex r__[4], w[8], x[4], r1[4], r2[4], af[16]	/* was [4][4] 
	    */;
    integer info, iter;
    doublecomplex work[16];
    doublereal rwork[4];
    complex swork[16];

    /* Fortran I/O blocks */
    static cilist io___1 = { 0, 0, 0, 0, 0 };
    static cilist io___18 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___19 = { 0, 0, 0, fmt_9998, 0 };



/*  -- LAPACK test routine (version 3.1.2) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     May 2007 */

/*     .. Scalar Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  ZERRPX tests the error exits for ZCPOSV. */

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
	    i__1 = i__ + (j << 2) - 5;
	    d__1 = 1. / (doublereal) (i__ + j);
	    a[i__1].r = d__1, a[i__1].i = 0.;
	    i__1 = i__ + (j << 2) - 5;
	    d__1 = 1. / (doublereal) (i__ + j);
	    af[i__1].r = d__1, af[i__1].i = 0.;
/* L10: */
	}
	i__1 = j - 1;
	b[i__1].r = 0., b[i__1].i = 0.;
	i__1 = j - 1;
	r1[i__1].r = 0., r1[i__1].i = 0.;
	i__1 = j - 1;
	r2[i__1].r = 0., r2[i__1].i = 0.;
	i__1 = j - 1;
	w[i__1].r = 0., w[i__1].i = 0.;
	i__1 = j - 1;
	x[i__1].r = 0., x[i__1].i = 0.;
	i__1 = j - 1;
	c__[i__1].r = 0., c__[i__1].i = 0.;
	i__1 = j - 1;
	r__[i__1].r = 0., r__[i__1].i = 0.;
/* L20: */
    }
    infoc_1.ok = TRUE_;

    s_copy(srnamc_1.srnamt, "ZCPOSV", (ftnlen)32, (ftnlen)6);
    infoc_1.infot = 1;
    zcposv_("/", &c__0, &c__0, a, &c__1, b, &c__1, x, &c__1, work, swork, 
	    rwork, &iter, &info);
    chkxer_("ZCPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 2;
    zcposv_("U", &c_n1, &c__0, a, &c__1, b, &c__1, x, &c__1, work, swork, 
	    rwork, &iter, &info);
    chkxer_("ZCPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 3;
    zcposv_("U", &c__0, &c_n1, a, &c__1, b, &c__1, x, &c__1, work, swork, 
	    rwork, &iter, &info);
    chkxer_("ZCPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 5;
    zcposv_("U", &c__2, &c__1, a, &c__1, b, &c__2, x, &c__2, work, swork, 
	    rwork, &iter, &info);
    chkxer_("ZCPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 7;
    zcposv_("U", &c__2, &c__1, a, &c__2, b, &c__1, x, &c__2, work, swork, 
	    rwork, &iter, &info);
    chkxer_("ZCPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);
    infoc_1.infot = 9;
    zcposv_("U", &c__2, &c__1, a, &c__2, b, &c__2, x, &c__1, work, swork, 
	    rwork, &iter, &info);
    chkxer_("ZCPOSV", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
	    infoc_1.ok);

/*     Print a summary line. */

    if (infoc_1.ok) {
	io___18.ciunit = infoc_1.nout;
	s_wsfe(&io___18);
	do_fio(&c__1, "ZCPOSV", (ftnlen)6);
	e_wsfe();
    } else {
	io___19.ciunit = infoc_1.nout;
	s_wsfe(&io___19);
	do_fio(&c__1, "ZCPOSV", (ftnlen)6);
	e_wsfe();
    }


    return 0;

/*     End of ZERRAC */

} /* zerrac_ */
