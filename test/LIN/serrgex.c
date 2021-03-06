/* serrgex.f -- translated by f2c (version 20061008).
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

static integer c__2 = 2;
static integer c_n1 = -1;
static integer c__0 = 0;
static integer c__1 = 1;
static integer c__12 = 12;
static integer c__3 = 3;
static integer c__4 = 4;
static integer c__5 = 5;

/* Subroutine */ int serrge_(char *path, integer *nunit)
{
    /* Local variables */
    real a[16]	/* was [4][4] */, b[4], c__[4];
    integer i__, j;
    real r__[4], w[12], x[4];
    char c2[2];
    real r1[4], r2[4], af[16]	/* was [4][4] */;
    char eq[1];
    integer ip[4], iw[4];
    real err_bnds_c__[12]	/* was [4][3] */;
    integer n_err_bnds__;
    real err_bnds_n__[12]	/* was [4][3] */, berr;
    integer info;
    real anrm, ccond, rcond;
    real params[1];
    integer nparams;

    /* Fortran I/O blocks */
    static cilist io___1 = { 0, 0, 0, 0, 0 };



/*  -- LAPACK test routine (version 3.1) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     November 2006 */

/*     .. Scalar Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  SERRGE tests the error exits for the REAL routines */
/*  for general matrices. */

/*  Note that this file is used only when the XBLAS are available, */
/*  otherwise serrge.f defines this subroutine. */

/*  Arguments */
/*  ========= */

/*  PATH    (input) CHARACTER*3 */
/*          The LAPACK path name for the routines to be tested. */

/*  NUNIT   (input) INTEGER */
/*          The unit number for output. */

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
    s_copy(c2, path + 1, (ftnlen)2, (ftnlen)2);

/*     Set the variables to innocuous values. */

    for (j = 1; j <= 4; ++j) {
	for (i__ = 1; i__ <= 4; ++i__) {
	    a[i__ + (j << 2) - 5] = 1.f / (real) (i__ + j);
	    af[i__ + (j << 2) - 5] = 1.f / (real) (i__ + j);
/* L10: */
	}
	b[j - 1] = 0.f;
	r1[j - 1] = 0.f;
	r2[j - 1] = 0.f;
	w[j - 1] = 0.f;
	x[j - 1] = 0.f;
	c__[j - 1] = 0.f;
	r__[j - 1] = 0.f;
	ip[j - 1] = j;
	iw[j - 1] = j;
/* L20: */
    }
    infoc_1.ok = TRUE_;

    if (lsamen_(&c__2, c2, "GE")) {

/*        Test error exits of the routines that use the LU decomposition */
/*        of a general matrix. */

/*        SGETRF */

	s_copy(srnamc_1.srnamt, "SGETRF", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgetrf_(&c_n1, &c__0, a, &c__1, ip, &info);
	chkxer_("SGETRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgetrf_(&c__0, &c_n1, a, &c__1, ip, &info);
	chkxer_("SGETRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgetrf_(&c__2, &c__1, a, &c__1, ip, &info);
	chkxer_("SGETRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGETF2 */

	s_copy(srnamc_1.srnamt, "SGETF2", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgetf2_(&c_n1, &c__0, a, &c__1, ip, &info);
	chkxer_("SGETF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgetf2_(&c__0, &c_n1, a, &c__1, ip, &info);
	chkxer_("SGETF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgetf2_(&c__2, &c__1, a, &c__1, ip, &info);
	chkxer_("SGETF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGETRI */

	s_copy(srnamc_1.srnamt, "SGETRI", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgetri_(&c_n1, a, &c__1, ip, w, &c__12, &info);
	chkxer_("SGETRI", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgetri_(&c__2, a, &c__1, ip, w, &c__12, &info);
	chkxer_("SGETRI", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGETRS */

	s_copy(srnamc_1.srnamt, "SGETRS", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgetrs_("/", &c__0, &c__0, a, &c__1, ip, b, &c__1, &info);
	chkxer_("SGETRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgetrs_("N", &c_n1, &c__0, a, &c__1, ip, b, &c__1, &info);
	chkxer_("SGETRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgetrs_("N", &c__0, &c_n1, a, &c__1, ip, b, &c__1, &info);
	chkxer_("SGETRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 5;
	sgetrs_("N", &c__2, &c__1, a, &c__1, ip, b, &c__2, &info);
	chkxer_("SGETRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 8;
	sgetrs_("N", &c__2, &c__1, a, &c__2, ip, b, &c__1, &info);
	chkxer_("SGETRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGERFS */

	s_copy(srnamc_1.srnamt, "SGERFS", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgerfs_("/", &c__0, &c__0, a, &c__1, af, &c__1, ip, b, &c__1, x, &
		c__1, r1, r2, w, iw, &info);
	chkxer_("SGERFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgerfs_("N", &c_n1, &c__0, a, &c__1, af, &c__1, ip, b, &c__1, x, &
		c__1, r1, r2, w, iw, &info);
	chkxer_("SGERFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgerfs_("N", &c__0, &c_n1, a, &c__1, af, &c__1, ip, b, &c__1, x, &
		c__1, r1, r2, w, iw, &info);
	chkxer_("SGERFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 5;
	sgerfs_("N", &c__2, &c__1, a, &c__1, af, &c__2, ip, b, &c__2, x, &
		c__2, r1, r2, w, iw, &info);
	chkxer_("SGERFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 7;
	sgerfs_("N", &c__2, &c__1, a, &c__2, af, &c__1, ip, b, &c__2, x, &
		c__2, r1, r2, w, iw, &info);
	chkxer_("SGERFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 10;
	sgerfs_("N", &c__2, &c__1, a, &c__2, af, &c__2, ip, b, &c__1, x, &
		c__2, r1, r2, w, iw, &info);
	chkxer_("SGERFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 12;
	sgerfs_("N", &c__2, &c__1, a, &c__2, af, &c__2, ip, b, &c__2, x, &
		c__1, r1, r2, w, iw, &info);
	chkxer_("SGERFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGERFSX */

	n_err_bnds__ = 3;
	nparams = 0;
	s_copy(srnamc_1.srnamt, "SGERFSX", (ftnlen)32, (ftnlen)7);
	infoc_1.infot = 1;
	sgerfsx_("/", eq, &c__0, &c__0, a, &c__1, af, &c__1, ip, r__, c__, b, 
		&c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	*(unsigned char *)eq = '/';
	sgerfsx_("N", eq, &c__2, &c__1, a, &c__1, af, &c__2, ip, r__, c__, b, 
		&c__2, x, &c__2, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	*(unsigned char *)eq = 'R';
	sgerfsx_("N", eq, &c_n1, &c__0, a, &c__1, af, &c__1, ip, r__, c__, b, 
		&c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgerfsx_("N", eq, &c__0, &c_n1, a, &c__1, af, &c__1, ip, r__, c__, b, 
		&c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 6;
	sgerfsx_("N", eq, &c__2, &c__1, a, &c__1, af, &c__2, ip, r__, c__, b, 
		&c__2, x, &c__2, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 8;
	sgerfsx_("N", eq, &c__2, &c__1, a, &c__2, af, &c__1, ip, r__, c__, b, 
		&c__2, x, &c__2, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 13;
	*(unsigned char *)eq = 'C';
	sgerfsx_("N", eq, &c__2, &c__1, a, &c__2, af, &c__2, ip, r__, c__, b, 
		&c__1, x, &c__2, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 15;
	sgerfsx_("N", eq, &c__2, &c__1, a, &c__2, af, &c__2, ip, r__, c__, b, 
		&c__2, x, &c__1, &rcond, &berr, &n_err_bnds__, err_bnds_n__, 
		err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGERFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGECON */

	s_copy(srnamc_1.srnamt, "SGECON", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgecon_("/", &c__0, a, &c__1, &anrm, &rcond, w, iw, &info);
	chkxer_("SGECON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgecon_("1", &c_n1, a, &c__1, &anrm, &rcond, w, iw, &info);
	chkxer_("SGECON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgecon_("1", &c__2, a, &c__1, &anrm, &rcond, w, iw, &info);
	chkxer_("SGECON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGEEQU */

	s_copy(srnamc_1.srnamt, "SGEEQU", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgeequ_(&c_n1, &c__0, a, &c__1, r1, r2, &rcond, &ccond, &anrm, &info);
	chkxer_("SGEEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgeequ_(&c__0, &c_n1, a, &c__1, r1, r2, &rcond, &ccond, &anrm, &info);
	chkxer_("SGEEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgeequ_(&c__2, &c__2, a, &c__1, r1, r2, &rcond, &ccond, &anrm, &info);
	chkxer_("SGEEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGEEQUB */

	s_copy(srnamc_1.srnamt, "SGEEQUB", (ftnlen)32, (ftnlen)7);
	infoc_1.infot = 1;
	sgeequb_(&c_n1, &c__0, a, &c__1, r1, r2, &rcond, &ccond, &anrm, &info)
		;
	chkxer_("SGEEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgeequb_(&c__0, &c_n1, a, &c__1, r1, r2, &rcond, &ccond, &anrm, &info)
		;
	chkxer_("SGEEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgeequb_(&c__2, &c__2, a, &c__1, r1, r2, &rcond, &ccond, &anrm, &info)
		;
	chkxer_("SGEEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

    } else if (lsamen_(&c__2, c2, "GB")) {

/*        Test error exits of the routines that use the LU decomposition */
/*        of a general band matrix. */

/*        SGBTRF */

	s_copy(srnamc_1.srnamt, "SGBTRF", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgbtrf_(&c_n1, &c__0, &c__0, &c__0, a, &c__1, ip, &info);
	chkxer_("SGBTRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgbtrf_(&c__0, &c_n1, &c__0, &c__0, a, &c__1, ip, &info);
	chkxer_("SGBTRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgbtrf_(&c__1, &c__1, &c_n1, &c__0, a, &c__1, ip, &info);
	chkxer_("SGBTRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgbtrf_(&c__1, &c__1, &c__0, &c_n1, a, &c__1, ip, &info);
	chkxer_("SGBTRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 6;
	sgbtrf_(&c__2, &c__2, &c__1, &c__1, a, &c__3, ip, &info);
	chkxer_("SGBTRF", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGBTF2 */

	s_copy(srnamc_1.srnamt, "SGBTF2", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgbtf2_(&c_n1, &c__0, &c__0, &c__0, a, &c__1, ip, &info);
	chkxer_("SGBTF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgbtf2_(&c__0, &c_n1, &c__0, &c__0, a, &c__1, ip, &info);
	chkxer_("SGBTF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgbtf2_(&c__1, &c__1, &c_n1, &c__0, a, &c__1, ip, &info);
	chkxer_("SGBTF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgbtf2_(&c__1, &c__1, &c__0, &c_n1, a, &c__1, ip, &info);
	chkxer_("SGBTF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 6;
	sgbtf2_(&c__2, &c__2, &c__1, &c__1, a, &c__3, ip, &info);
	chkxer_("SGBTF2", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGBTRS */

	s_copy(srnamc_1.srnamt, "SGBTRS", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgbtrs_("/", &c__0, &c__0, &c__0, &c__1, a, &c__1, ip, b, &c__1, &
		info);
	chkxer_("SGBTRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgbtrs_("N", &c_n1, &c__0, &c__0, &c__1, a, &c__1, ip, b, &c__1, &
		info);
	chkxer_("SGBTRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgbtrs_("N", &c__1, &c_n1, &c__0, &c__1, a, &c__1, ip, b, &c__1, &
		info);
	chkxer_("SGBTRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgbtrs_("N", &c__1, &c__0, &c_n1, &c__1, a, &c__1, ip, b, &c__1, &
		info);
	chkxer_("SGBTRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 5;
	sgbtrs_("N", &c__1, &c__0, &c__0, &c_n1, a, &c__1, ip, b, &c__1, &
		info);
	chkxer_("SGBTRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 7;
	sgbtrs_("N", &c__2, &c__1, &c__1, &c__1, a, &c__3, ip, b, &c__2, &
		info);
	chkxer_("SGBTRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 10;
	sgbtrs_("N", &c__2, &c__0, &c__0, &c__1, a, &c__1, ip, b, &c__1, &
		info);
	chkxer_("SGBTRS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGBRFS */

	s_copy(srnamc_1.srnamt, "SGBRFS", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgbrfs_("/", &c__0, &c__0, &c__0, &c__0, a, &c__1, af, &c__1, ip, b, &
		c__1, x, &c__1, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgbrfs_("N", &c_n1, &c__0, &c__0, &c__0, a, &c__1, af, &c__1, ip, b, &
		c__1, x, &c__1, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgbrfs_("N", &c__1, &c_n1, &c__0, &c__0, a, &c__1, af, &c__1, ip, b, &
		c__1, x, &c__1, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgbrfs_("N", &c__1, &c__0, &c_n1, &c__0, a, &c__1, af, &c__1, ip, b, &
		c__1, x, &c__1, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 5;
	sgbrfs_("N", &c__1, &c__0, &c__0, &c_n1, a, &c__1, af, &c__1, ip, b, &
		c__1, x, &c__1, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 7;
	sgbrfs_("N", &c__2, &c__1, &c__1, &c__1, a, &c__2, af, &c__4, ip, b, &
		c__2, x, &c__2, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 9;
	sgbrfs_("N", &c__2, &c__1, &c__1, &c__1, a, &c__3, af, &c__3, ip, b, &
		c__2, x, &c__2, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 12;
	sgbrfs_("N", &c__2, &c__0, &c__0, &c__1, a, &c__1, af, &c__1, ip, b, &
		c__1, x, &c__2, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 14;
	sgbrfs_("N", &c__2, &c__0, &c__0, &c__1, a, &c__1, af, &c__1, ip, b, &
		c__2, x, &c__1, r1, r2, w, iw, &info);
	chkxer_("SGBRFS", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGBRFSX */

	n_err_bnds__ = 3;
	nparams = 0;
	s_copy(srnamc_1.srnamt, "SGBRFSX", (ftnlen)32, (ftnlen)7);
	infoc_1.infot = 1;
	sgbrfsx_("/", eq, &c__0, &c__0, &c__0, &c__0, a, &c__1, af, &c__1, ip, 
		 r__, c__, b, &c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	*(unsigned char *)eq = '/';
	sgbrfsx_("N", eq, &c__2, &c__1, &c__1, &c__1, a, &c__1, af, &c__2, ip, 
		 r__, c__, b, &c__2, x, &c__2, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	*(unsigned char *)eq = 'R';
	sgbrfsx_("N", eq, &c_n1, &c__1, &c__1, &c__0, a, &c__1, af, &c__1, ip, 
		 r__, c__, b, &c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	*(unsigned char *)eq = 'R';
	sgbrfsx_("N", eq, &c__2, &c_n1, &c__1, &c__1, a, &c__3, af, &c__4, ip, 
		 r__, c__, b, &c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 5;
	*(unsigned char *)eq = 'R';
	sgbrfsx_("N", eq, &c__2, &c__1, &c_n1, &c__1, a, &c__3, af, &c__4, ip, 
		 r__, c__, b, &c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 6;
	sgbrfsx_("N", eq, &c__0, &c__0, &c__0, &c_n1, a, &c__1, af, &c__1, ip, 
		 r__, c__, b, &c__1, x, &c__1, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 8;
	sgbrfsx_("N", eq, &c__2, &c__1, &c__1, &c__1, a, &c__1, af, &c__2, ip, 
		 r__, c__, b, &c__2, x, &c__2, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 10;
	sgbrfsx_("N", eq, &c__2, &c__1, &c__1, &c__1, a, &c__3, af, &c__3, ip, 
		 r__, c__, b, &c__2, x, &c__2, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 13;
	*(unsigned char *)eq = 'C';
	sgbrfsx_("N", eq, &c__2, &c__1, &c__1, &c__1, a, &c__3, af, &c__5, ip, 
		 r__, c__, b, &c__1, x, &c__2, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 15;
	sgbrfsx_("N", eq, &c__2, &c__1, &c__1, &c__1, a, &c__3, af, &c__5, ip, 
		 r__, c__, b, &c__2, x, &c__1, &rcond, &berr, &n_err_bnds__, 
		err_bnds_n__, err_bnds_c__, &nparams, params, w, iw, &info);
	chkxer_("SGBRFSX", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGBCON */

	s_copy(srnamc_1.srnamt, "SGBCON", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgbcon_("/", &c__0, &c__0, &c__0, a, &c__1, ip, &anrm, &rcond, w, iw, 
		&info);
	chkxer_("SGBCON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgbcon_("1", &c_n1, &c__0, &c__0, a, &c__1, ip, &anrm, &rcond, w, iw, 
		&info);
	chkxer_("SGBCON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgbcon_("1", &c__1, &c_n1, &c__0, a, &c__1, ip, &anrm, &rcond, w, iw, 
		&info);
	chkxer_("SGBCON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgbcon_("1", &c__1, &c__0, &c_n1, a, &c__1, ip, &anrm, &rcond, w, iw, 
		&info);
	chkxer_("SGBCON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 6;
	sgbcon_("1", &c__2, &c__1, &c__1, a, &c__3, ip, &anrm, &rcond, w, iw, 
		&info);
	chkxer_("SGBCON", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGBEQU */

	s_copy(srnamc_1.srnamt, "SGBEQU", (ftnlen)32, (ftnlen)6);
	infoc_1.infot = 1;
	sgbequ_(&c_n1, &c__0, &c__0, &c__0, a, &c__1, r1, r2, &rcond, &ccond, 
		&anrm, &info);
	chkxer_("SGBEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgbequ_(&c__0, &c_n1, &c__0, &c__0, a, &c__1, r1, r2, &rcond, &ccond, 
		&anrm, &info);
	chkxer_("SGBEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgbequ_(&c__1, &c__1, &c_n1, &c__0, a, &c__1, r1, r2, &rcond, &ccond, 
		&anrm, &info);
	chkxer_("SGBEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgbequ_(&c__1, &c__1, &c__0, &c_n1, a, &c__1, r1, r2, &rcond, &ccond, 
		&anrm, &info);
	chkxer_("SGBEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 6;
	sgbequ_(&c__2, &c__2, &c__1, &c__1, a, &c__2, r1, r2, &rcond, &ccond, 
		&anrm, &info);
	chkxer_("SGBEQU", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);

/*        SGBEQUB */

	s_copy(srnamc_1.srnamt, "SGBEQUB", (ftnlen)32, (ftnlen)7);
	infoc_1.infot = 1;
	sgbequb_(&c_n1, &c__0, &c__0, &c__0, a, &c__1, r1, r2, &rcond, &ccond, 
		 &anrm, &info);
	chkxer_("SGBEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 2;
	sgbequb_(&c__0, &c_n1, &c__0, &c__0, a, &c__1, r1, r2, &rcond, &ccond, 
		 &anrm, &info);
	chkxer_("SGBEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 3;
	sgbequb_(&c__1, &c__1, &c_n1, &c__0, a, &c__1, r1, r2, &rcond, &ccond, 
		 &anrm, &info);
	chkxer_("SGBEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 4;
	sgbequb_(&c__1, &c__1, &c__0, &c_n1, a, &c__1, r1, r2, &rcond, &ccond, 
		 &anrm, &info);
	chkxer_("SGBEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
	infoc_1.infot = 6;
	sgbequb_(&c__2, &c__2, &c__1, &c__1, a, &c__2, r1, r2, &rcond, &ccond, 
		 &anrm, &info);
	chkxer_("SGBEQUB", &infoc_1.infot, &infoc_1.nout, &infoc_1.lerr, &
		infoc_1.ok);
    }

/*     Print a summary line. */

    alaesm_(path, &infoc_1.ok, &infoc_1.nout);

    return 0;

/*     End of SERRGE */

} /* serrge_ */
