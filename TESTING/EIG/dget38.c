/* dget38.f -- translated by f2c (version 20061008).
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

static integer c__3 = 3;
static integer c__1 = 1;
static integer c__5 = 5;
static integer c__20 = 20;
static integer c__1200 = 1200;
static integer c__400 = 400;

/* Subroutine */ int dget38_(doublereal *rmax, integer *lmax, integer *ninfo, 
	integer *knt, integer *nin)
{
    /* System generated locals */
    integer i__1, i__2;
    doublereal d__1, d__2;

    /* Local variables */
    integer i__, j, m, n;
    doublereal q[400]	/* was [20][20] */, s, t[400]	/* was [20][20] */, v,
	     wi[20], wr[20], val[3], eps, sep, sin__, tol, tmp[400]	/* 
	    was [20][20] */;
    integer ndim, iscl, info, kmin, itmp, ipnt[20];
    doublereal vmax, qsav[400]	/* was [20][20] */, tsav[400]	/* was [20][
	    20] */, tnrm, qtmp[400]	/* was [20][20] */, work[1200], stmp, 
	    vmul, ttmp[400]	/* was [20][20] */, tsav1[400]	/* was [20][
	    20] */;
    extern /* Subroutine */ int dscal_(integer *, doublereal *, doublereal *, 
	    integer *), dhst01_(integer *, integer *, integer *, doublereal *, 
	     integer *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, integer *, doublereal *);
    doublereal sepin;
    extern /* Subroutine */ int dcopy_(integer *, doublereal *, integer *, 
	    doublereal *, integer *);
    doublereal vimin, tolin, vrmin;
    integer iwork[400];
    doublereal witmp[20], wrtmp[20];
    extern /* Subroutine */ int dlabad_(doublereal *, doublereal *);
    extern doublereal dlamch_(char *), dlange_(char *, integer *, 
	    integer *, doublereal *, integer *, doublereal *);
    extern /* Subroutine */ int dgehrd_(integer *, integer *, integer *, 
	    doublereal *, integer *, doublereal *, doublereal *, integer *, 
	    integer *);
    integer iselec[20];
    extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
	    doublereal *, integer *, doublereal *, integer *);
    logical select[20];
    doublereal bignum;
    extern /* Subroutine */ int dorghr_(integer *, integer *, integer *, 
	    doublereal *, integer *, doublereal *, doublereal *, integer *, 
	    integer *), dhseqr_(char *, char *, integer *, integer *, integer 
	    *, doublereal *, integer *, doublereal *, doublereal *, 
	    doublereal *, integer *, doublereal *, integer *, integer *), dtrsen_(char *, char *, logical *, integer *, 
	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
	    doublereal *, integer *, doublereal *, doublereal *, doublereal *, 
	     integer *, integer *, integer *, integer *);
    doublereal septmp, smlnum, result[2];

    /* Fortran I/O blocks */
    static cilist io___5 = { 0, 0, 0, 0, 0 };
    static cilist io___8 = { 0, 0, 0, 0, 0 };
    static cilist io___11 = { 0, 0, 0, 0, 0 };
    static cilist io___14 = { 0, 0, 0, 0, 0 };



/*  -- LAPACK test routine (version 3.1) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     November 2006 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  DGET38 tests DTRSEN, a routine for estimating condition numbers of a */
/*  cluster of eigenvalues and/or its associated right invariant subspace */

/*  The test matrices are read from a file with logical unit number NIN. */

/*  Arguments */
/*  ========== */

/*  RMAX    (output) DOUBLE PRECISION array, dimension (3) */
/*          Values of the largest test ratios. */
/*          RMAX(1) = largest residuals from DHST01 or comparing */
/*                    different calls to DTRSEN */
/*          RMAX(2) = largest error in reciprocal condition */
/*                    numbers taking their conditioning into account */
/*          RMAX(3) = largest error in reciprocal condition */
/*                    numbers not taking their conditioning into */
/*                    account (may be larger than RMAX(2)) */

/*  LMAX    (output) INTEGER array, dimension (3) */
/*          LMAX(i) is example number where largest test ratio */
/*          RMAX(i) is achieved. Also: */
/*          If DGEHRD returns INFO nonzero on example i, LMAX(1)=i */
/*          If DHSEQR returns INFO nonzero on example i, LMAX(2)=i */
/*          If DTRSEN returns INFO nonzero on example i, LMAX(3)=i */

/*  NINFO   (output) INTEGER array, dimension (3) */
/*          NINFO(1) = No. of times DGEHRD returned INFO nonzero */
/*          NINFO(2) = No. of times DHSEQR returned INFO nonzero */
/*          NINFO(3) = No. of times DTRSEN returned INFO nonzero */

/*  KNT     (output) INTEGER */
/*          Total number of examples tested. */

/*  NIN     (input) INTEGER */
/*          Input logical unit number. */

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
    --ninfo;
    --lmax;
    --rmax;

    /* Function Body */
    eps = dlamch_("P");
    smlnum = dlamch_("S") / eps;
    bignum = 1. / smlnum;
    dlabad_(&smlnum, &bignum);

/*     EPSIN = 2**(-24) = precision to which input data computed */

    eps = max(eps,5.9605e-8);
    rmax[1] = 0.;
    rmax[2] = 0.;
    rmax[3] = 0.;
    lmax[1] = 0;
    lmax[2] = 0;
    lmax[3] = 0;
    *knt = 0;
    ninfo[1] = 0;
    ninfo[2] = 0;
    ninfo[3] = 0;

    val[0] = sqrt(smlnum);
    val[1] = 1.;
    val[2] = sqrt(sqrt(bignum));

/*     Read input data until N=0.  Assume input eigenvalues are sorted */
/*     lexicographically (increasing by real part, then decreasing by */
/*     imaginary part) */

L10:
    io___5.ciunit = *nin;
    s_rsle(&io___5);
    do_lio(&c__3, &c__1, (char *)&n, (ftnlen)sizeof(integer));
    do_lio(&c__3, &c__1, (char *)&ndim, (ftnlen)sizeof(integer));
    e_rsle();
    if (n == 0) {
	return 0;
    }
    io___8.ciunit = *nin;
    s_rsle(&io___8);
    i__1 = ndim;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_lio(&c__3, &c__1, (char *)&iselec[i__ - 1], (ftnlen)sizeof(integer)
		);
    }
    e_rsle();
    i__1 = n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	io___11.ciunit = *nin;
	s_rsle(&io___11);
	i__2 = n;
	for (j = 1; j <= i__2; ++j) {
	    do_lio(&c__5, &c__1, (char *)&tmp[i__ + j * 20 - 21], (ftnlen)
		    sizeof(doublereal));
	}
	e_rsle();
/* L20: */
    }
    io___14.ciunit = *nin;
    s_rsle(&io___14);
    do_lio(&c__5, &c__1, (char *)&sin__, (ftnlen)sizeof(doublereal));
    do_lio(&c__5, &c__1, (char *)&sepin, (ftnlen)sizeof(doublereal));
    e_rsle();

    tnrm = dlange_("M", &n, &n, tmp, &c__20, work);
    for (iscl = 1; iscl <= 3; ++iscl) {

/*        Scale input matrix */

	++(*knt);
	dlacpy_("F", &n, &n, tmp, &c__20, t, &c__20);
	vmul = val[iscl - 1];
	i__1 = n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    dscal_(&n, &vmul, &t[i__ * 20 - 20], &c__1);
/* L30: */
	}
	if (tnrm == 0.) {
	    vmul = 1.;
	}
	dlacpy_("F", &n, &n, t, &c__20, tsav, &c__20);

/*        Compute Schur form */

	i__1 = 1200 - n;
	dgehrd_(&n, &c__1, &n, t, &c__20, work, &work[n], &i__1, &info);
	if (info != 0) {
	    lmax[1] = *knt;
	    ++ninfo[1];
	    goto L160;
	}

/*        Generate orthogonal matrix */

	dlacpy_("L", &n, &n, t, &c__20, q, &c__20);
	i__1 = 1200 - n;
	dorghr_(&n, &c__1, &n, q, &c__20, work, &work[n], &i__1, &info);

/*        Compute Schur form */

	dhseqr_("S", "V", &n, &c__1, &n, t, &c__20, wr, wi, q, &c__20, work, &
		c__1200, &info);
	if (info != 0) {
	    lmax[2] = *knt;
	    ++ninfo[2];
	    goto L160;
	}

/*        Sort, select eigenvalues */

	i__1 = n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    ipnt[i__ - 1] = i__;
	    select[i__ - 1] = FALSE_;
/* L40: */
	}
	dcopy_(&n, wr, &c__1, wrtmp, &c__1);
	dcopy_(&n, wi, &c__1, witmp, &c__1);
	i__1 = n - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    kmin = i__;
	    vrmin = wrtmp[i__ - 1];
	    vimin = witmp[i__ - 1];
	    i__2 = n;
	    for (j = i__ + 1; j <= i__2; ++j) {
		if (wrtmp[j - 1] < vrmin) {
		    kmin = j;
		    vrmin = wrtmp[j - 1];
		    vimin = witmp[j - 1];
		}
/* L50: */
	    }
	    wrtmp[kmin - 1] = wrtmp[i__ - 1];
	    witmp[kmin - 1] = witmp[i__ - 1];
	    wrtmp[i__ - 1] = vrmin;
	    witmp[i__ - 1] = vimin;
	    itmp = ipnt[i__ - 1];
	    ipnt[i__ - 1] = ipnt[kmin - 1];
	    ipnt[kmin - 1] = itmp;
/* L60: */
	}
	i__1 = ndim;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    select[ipnt[iselec[i__ - 1] - 1] - 1] = TRUE_;
/* L70: */
	}

/*        Compute condition numbers */

	dlacpy_("F", &n, &n, q, &c__20, qsav, &c__20);
	dlacpy_("F", &n, &n, t, &c__20, tsav1, &c__20);
	dtrsen_("B", "V", select, &n, t, &c__20, q, &c__20, wrtmp, witmp, &m, 
		&s, &sep, work, &c__1200, iwork, &c__400, &info);
	if (info != 0) {
	    lmax[3] = *knt;
	    ++ninfo[3];
	    goto L160;
	}
	septmp = sep / vmul;
	stmp = s;

/*        Compute residuals */

	dhst01_(&n, &c__1, &n, tsav, &c__20, t, &c__20, q, &c__20, work, &
		c__1200, result);
	vmax = max(result[0],result[1]);
	if (vmax > rmax[1]) {
	    rmax[1] = vmax;
	    if (ninfo[1] == 0) {
		lmax[1] = *knt;
	    }
	}

/*        Compare condition number for eigenvalue cluster */
/*        taking its condition number into account */

/* Computing MAX */
	d__1 = (doublereal) n * 2. * eps * tnrm;
	v = max(d__1,smlnum);
	if (tnrm == 0.) {
	    v = 1.;
	}
	if (v > septmp) {
	    tol = 1.;
	} else {
	    tol = v / septmp;
	}
	if (v > sepin) {
	    tolin = 1.;
	} else {
	    tolin = v / sepin;
	}
/* Computing MAX */
	d__1 = tol, d__2 = smlnum / eps;
	tol = max(d__1,d__2);
/* Computing MAX */
	d__1 = tolin, d__2 = smlnum / eps;
	tolin = max(d__1,d__2);
	if (eps * (sin__ - tolin) > stmp + tol) {
	    vmax = 1. / eps;
	} else if (sin__ - tolin > stmp + tol) {
	    vmax = (sin__ - tolin) / (stmp + tol);
	} else if (sin__ + tolin < eps * (stmp - tol)) {
	    vmax = 1. / eps;
	} else if (sin__ + tolin < stmp - tol) {
	    vmax = (stmp - tol) / (sin__ + tolin);
	} else {
	    vmax = 1.;
	}
	if (vmax > rmax[2]) {
	    rmax[2] = vmax;
	    if (ninfo[2] == 0) {
		lmax[2] = *knt;
	    }
	}

/*        Compare condition numbers for invariant subspace */
/*        taking its condition number into account */

	if (v > septmp * stmp) {
	    tol = septmp;
	} else {
	    tol = v / stmp;
	}
	if (v > sepin * sin__) {
	    tolin = sepin;
	} else {
	    tolin = v / sin__;
	}
/* Computing MAX */
	d__1 = tol, d__2 = smlnum / eps;
	tol = max(d__1,d__2);
/* Computing MAX */
	d__1 = tolin, d__2 = smlnum / eps;
	tolin = max(d__1,d__2);
	if (eps * (sepin - tolin) > septmp + tol) {
	    vmax = 1. / eps;
	} else if (sepin - tolin > septmp + tol) {
	    vmax = (sepin - tolin) / (septmp + tol);
	} else if (sepin + tolin < eps * (septmp - tol)) {
	    vmax = 1. / eps;
	} else if (sepin + tolin < septmp - tol) {
	    vmax = (septmp - tol) / (sepin + tolin);
	} else {
	    vmax = 1.;
	}
	if (vmax > rmax[2]) {
	    rmax[2] = vmax;
	    if (ninfo[2] == 0) {
		lmax[2] = *knt;
	    }
	}

/*        Compare condition number for eigenvalue cluster */
/*        without taking its condition number into account */

	if (sin__ <= (doublereal) (n << 1) * eps && stmp <= (doublereal) (n <<
		 1) * eps) {
	    vmax = 1.;
	} else if (eps * sin__ > stmp) {
	    vmax = 1. / eps;
	} else if (sin__ > stmp) {
	    vmax = sin__ / stmp;
	} else if (sin__ < eps * stmp) {
	    vmax = 1. / eps;
	} else if (sin__ < stmp) {
	    vmax = stmp / sin__;
	} else {
	    vmax = 1.;
	}
	if (vmax > rmax[3]) {
	    rmax[3] = vmax;
	    if (ninfo[3] == 0) {
		lmax[3] = *knt;
	    }
	}

/*        Compare condition numbers for invariant subspace */
/*        without taking its condition number into account */

	if (sepin <= v && septmp <= v) {
	    vmax = 1.;
	} else if (eps * sepin > septmp) {
	    vmax = 1. / eps;
	} else if (sepin > septmp) {
	    vmax = sepin / septmp;
	} else if (sepin < eps * septmp) {
	    vmax = 1. / eps;
	} else if (sepin < septmp) {
	    vmax = septmp / sepin;
	} else {
	    vmax = 1.;
	}
	if (vmax > rmax[3]) {
	    rmax[3] = vmax;
	    if (ninfo[3] == 0) {
		lmax[3] = *knt;
	    }
	}

/*        Compute eigenvalue condition number only and compare */
/*        Update Q */

	vmax = 0.;
	dlacpy_("F", &n, &n, tsav1, &c__20, ttmp, &c__20);
	dlacpy_("F", &n, &n, qsav, &c__20, qtmp, &c__20);
	septmp = -1.;
	stmp = -1.;
	dtrsen_("E", "V", select, &n, ttmp, &c__20, qtmp, &c__20, wrtmp, 
		witmp, &m, &stmp, &septmp, work, &c__1200, iwork, &c__400, &
		info);
	if (info != 0) {
	    lmax[3] = *knt;
	    ++ninfo[3];
	    goto L160;
	}
	if (s != stmp) {
	    vmax = 1. / eps;
	}
	if (-1. != septmp) {
	    vmax = 1. / eps;
	}
	i__1 = n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = n;
	    for (j = 1; j <= i__2; ++j) {
		if (ttmp[i__ + j * 20 - 21] != t[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
		if (qtmp[i__ + j * 20 - 21] != q[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
/* L80: */
	    }
/* L90: */
	}

/*        Compute invariant subspace condition number only and compare */
/*        Update Q */

	dlacpy_("F", &n, &n, tsav1, &c__20, ttmp, &c__20);
	dlacpy_("F", &n, &n, qsav, &c__20, qtmp, &c__20);
	septmp = -1.;
	stmp = -1.;
	dtrsen_("V", "V", select, &n, ttmp, &c__20, qtmp, &c__20, wrtmp, 
		witmp, &m, &stmp, &septmp, work, &c__1200, iwork, &c__400, &
		info);
	if (info != 0) {
	    lmax[3] = *knt;
	    ++ninfo[3];
	    goto L160;
	}
	if (-1. != stmp) {
	    vmax = 1. / eps;
	}
	if (sep != septmp) {
	    vmax = 1. / eps;
	}
	i__1 = n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = n;
	    for (j = 1; j <= i__2; ++j) {
		if (ttmp[i__ + j * 20 - 21] != t[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
		if (qtmp[i__ + j * 20 - 21] != q[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
/* L100: */
	    }
/* L110: */
	}

/*        Compute eigenvalue condition number only and compare */
/*        Do not update Q */

	dlacpy_("F", &n, &n, tsav1, &c__20, ttmp, &c__20);
	dlacpy_("F", &n, &n, qsav, &c__20, qtmp, &c__20);
	septmp = -1.;
	stmp = -1.;
	dtrsen_("E", "N", select, &n, ttmp, &c__20, qtmp, &c__20, wrtmp, 
		witmp, &m, &stmp, &septmp, work, &c__1200, iwork, &c__400, &
		info);
	if (info != 0) {
	    lmax[3] = *knt;
	    ++ninfo[3];
	    goto L160;
	}
	if (s != stmp) {
	    vmax = 1. / eps;
	}
	if (-1. != septmp) {
	    vmax = 1. / eps;
	}
	i__1 = n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = n;
	    for (j = 1; j <= i__2; ++j) {
		if (ttmp[i__ + j * 20 - 21] != t[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
		if (qtmp[i__ + j * 20 - 21] != qsav[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
/* L120: */
	    }
/* L130: */
	}

/*        Compute invariant subspace condition number only and compare */
/*        Do not update Q */

	dlacpy_("F", &n, &n, tsav1, &c__20, ttmp, &c__20);
	dlacpy_("F", &n, &n, qsav, &c__20, qtmp, &c__20);
	septmp = -1.;
	stmp = -1.;
	dtrsen_("V", "N", select, &n, ttmp, &c__20, qtmp, &c__20, wrtmp, 
		witmp, &m, &stmp, &septmp, work, &c__1200, iwork, &c__400, &
		info);
	if (info != 0) {
	    lmax[3] = *knt;
	    ++ninfo[3];
	    goto L160;
	}
	if (-1. != stmp) {
	    vmax = 1. / eps;
	}
	if (sep != septmp) {
	    vmax = 1. / eps;
	}
	i__1 = n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = n;
	    for (j = 1; j <= i__2; ++j) {
		if (ttmp[i__ + j * 20 - 21] != t[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
		if (qtmp[i__ + j * 20 - 21] != qsav[i__ + j * 20 - 21]) {
		    vmax = 1. / eps;
		}
/* L140: */
	    }
/* L150: */
	}
	if (vmax > rmax[1]) {
	    rmax[1] = vmax;
	    if (ninfo[1] == 0) {
		lmax[1] = *knt;
	    }
	}
L160:
	;
    }
    goto L10;

/*     End of DGET38 */

} /* dget38_ */
