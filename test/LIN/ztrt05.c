/* ztrt05.f -- translated by f2c (version 20061008).
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

static integer c__1 = 1;

/* Subroutine */ int ztrt05_(char *uplo, char *trans, char *diag, integer *n, 
	integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, 
	integer *ldb, doublecomplex *x, integer *ldx, doublecomplex *xact, 
	integer *ldxact, doublereal *ferr, doublereal *berr, doublereal *
	reslts)
{
    /* System generated locals */
    integer a_dim1, a_offset, b_dim1, b_offset, x_dim1, x_offset, xact_dim1, 
	    xact_offset, i__1, i__2, i__3, i__4, i__5;
    doublereal d__1, d__2, d__3, d__4;
    doublecomplex z__1, z__2;

    /* Local variables */
    integer i__, j, k, ifu;
    doublereal eps, tmp, diff, axbi;
    integer imax;
    doublereal unfl, ovfl;
    logical unit;
    logical upper;
    doublereal xnorm;
    doublereal errbnd;
    logical notran;


/*  -- LAPACK test routine (version 3.1) -- */
/*     Univ. of Tennessee, Univ. of California Berkeley and NAG Ltd.. */
/*     November 2006 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  ZTRT05 tests the error bounds from iterative refinement for the */
/*  computed solution to a system of equations A*X = B, where A is a */
/*  triangular n by n matrix. */

/*  RESLTS(1) = test of the error bound */
/*            = norm(X - XACT) / ( norm(X) * FERR ) */

/*  A large value is returned if this ratio is not less than one. */

/*  RESLTS(2) = residual from the iterative refinement routine */
/*            = the maximum of BERR / ( (n+1)*EPS + (*) ), where */
/*              (*) = (n+1)*UNFL / (min_i (abs(A)*abs(X) +abs(b))_i ) */

/*  Arguments */
/*  ========= */

/*  UPLO    (input) CHARACTER*1 */
/*          Specifies whether the matrix A is upper or lower triangular. */
/*          = 'U':  Upper triangular */
/*          = 'L':  Lower triangular */

/*  TRANS   (input) CHARACTER*1 */
/*          Specifies the form of the system of equations. */
/*          = 'N':  A * X = B  (No transpose) */
/*          = 'T':  A'* X = B  (Transpose) */
/*          = 'C':  A'* X = B  (Conjugate transpose = Transpose) */

/*  DIAG    (input) CHARACTER*1 */
/*          Specifies whether or not the matrix A is unit triangular. */
/*          = 'N':  Non-unit triangular */
/*          = 'U':  Unit triangular */

/*  N       (input) INTEGER */
/*          The number of rows of the matrices X, B, and XACT, and the */
/*          order of the matrix A.  N >= 0. */

/*  NRHS    (input) INTEGER */
/*          The number of columns of the matrices X, B, and XACT. */
/*          NRHS >= 0. */

/*  A       (input) COMPLEX*16 array, dimension (LDA,N) */
/*          The triangular matrix A.  If UPLO = 'U', the leading n by n */
/*          upper triangular part of the array A contains the upper */
/*          triangular matrix, and the strictly lower triangular part of */
/*          A is not referenced.  If UPLO = 'L', the leading n by n lower */
/*          triangular part of the array A contains the lower triangular */
/*          matrix, and the strictly upper triangular part of A is not */
/*          referenced.  If DIAG = 'U', the diagonal elements of A are */
/*          also not referenced and are assumed to be 1. */

/*  LDA     (input) INTEGER */
/*          The leading dimension of the array A.  LDA >= max(1,N). */

/*  B       (input) COMPLEX*16 array, dimension (LDB,NRHS) */
/*          The right hand side vectors for the system of linear */
/*          equations. */

/*  LDB     (input) INTEGER */
/*          The leading dimension of the array B.  LDB >= max(1,N). */

/*  X       (input) COMPLEX*16 array, dimension (LDX,NRHS) */
/*          The computed solution vectors.  Each vector is stored as a */
/*          column of the matrix X. */

/*  LDX     (input) INTEGER */
/*          The leading dimension of the array X.  LDX >= max(1,N). */

/*  XACT    (input) COMPLEX*16 array, dimension (LDX,NRHS) */
/*          The exact solution vectors.  Each vector is stored as a */
/*          column of the matrix XACT. */

/*  LDXACT  (input) INTEGER */
/*          The leading dimension of the array XACT.  LDXACT >= max(1,N). */

/*  FERR    (input) DOUBLE PRECISION array, dimension (NRHS) */
/*          The estimated forward error bounds for each solution vector */
/*          X.  If XTRUE is the true solution, FERR bounds the magnitude */
/*          of the largest entry in (X - XTRUE) divided by the magnitude */
/*          of the largest entry in X. */

/*  BERR    (input) DOUBLE PRECISION array, dimension (NRHS) */
/*          The componentwise relative backward error of each solution */
/*          vector (i.e., the smallest relative change in any entry of A */
/*          or B that makes X an exact solution). */

/*  RESLTS  (output) DOUBLE PRECISION array, dimension (2) */
/*          The maximum over the NRHS solution vectors of the ratios: */
/*          RESLTS(1) = norm(X - XACT) / ( norm(X) * FERR ) */
/*          RESLTS(2) = BERR / ( (n+1)*EPS + (*) ) */

/*  ===================================================================== */

/*     .. Parameters .. */
/*     .. */
/*     .. Local Scalars .. */
/*     .. */
/*     .. External Functions .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
/*     .. Statement Functions .. */
/*     .. */
/*     .. Statement Function definitions .. */
/*     .. */
/*     .. Executable Statements .. */

/*     Quick exit if N = 0 or NRHS = 0. */

    /* Parameter adjustments */
    a_dim1 = *lda;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    b_dim1 = *ldb;
    b_offset = 1 + b_dim1;
    b -= b_offset;
    x_dim1 = *ldx;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    xact_dim1 = *ldxact;
    xact_offset = 1 + xact_dim1;
    xact -= xact_offset;
    --ferr;
    --berr;
    --reslts;

    /* Function Body */
    if (*n <= 0 || *nrhs <= 0) {
	reslts[1] = 0.;
	reslts[2] = 0.;
	return 0;
    }

    eps = dlamch_("Epsilon");
    unfl = dlamch_("Safe minimum");
    ovfl = 1. / unfl;
    upper = lsame_(uplo, "U");
    notran = lsame_(trans, "N");
    unit = lsame_(diag, "U");

/*     Test 1:  Compute the maximum of */
/*        norm(X - XACT) / ( norm(X) * FERR ) */
/*     over all the vectors X and XACT using the infinity-norm. */

    errbnd = 0.;
    i__1 = *nrhs;
    for (j = 1; j <= i__1; ++j) {
	imax = izamax_(n, &x[j * x_dim1 + 1], &c__1);
/* Computing MAX */
	i__2 = imax + j * x_dim1;
	d__3 = (d__1 = x[i__2].r, abs(d__1)) + (d__2 = d_imag(&x[imax + j * 
		x_dim1]), abs(d__2));
	xnorm = max(d__3,unfl);
	diff = 0.;
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    i__3 = i__ + j * x_dim1;
	    i__4 = i__ + j * xact_dim1;
	    z__2.r = x[i__3].r - xact[i__4].r, z__2.i = x[i__3].i - xact[i__4]
		    .i;
	    z__1.r = z__2.r, z__1.i = z__2.i;
/* Computing MAX */
	    d__3 = diff, d__4 = (d__1 = z__1.r, abs(d__1)) + (d__2 = d_imag(&
		    z__1), abs(d__2));
	    diff = max(d__3,d__4);
/* L10: */
	}

	if (xnorm > 1.) {
	    goto L20;
	} else if (diff <= ovfl * xnorm) {
	    goto L20;
	} else {
	    errbnd = 1. / eps;
	    goto L30;
	}

L20:
	if (diff / xnorm <= ferr[j]) {
/* Computing MAX */
	    d__1 = errbnd, d__2 = diff / xnorm / ferr[j];
	    errbnd = max(d__1,d__2);
	} else {
	    errbnd = 1. / eps;
	}
L30:
	;
    }
    reslts[1] = errbnd;

/*     Test 2:  Compute the maximum of BERR / ( (n+1)*EPS + (*) ), where */
/*     (*) = (n+1)*UNFL / (min_i (abs(A)*abs(X) +abs(b))_i ) */

    ifu = 0;
    if (unit) {
	ifu = 1;
    }
    i__1 = *nrhs;
    for (k = 1; k <= i__1; ++k) {
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    i__3 = i__ + k * b_dim1;
	    tmp = (d__1 = b[i__3].r, abs(d__1)) + (d__2 = d_imag(&b[i__ + k * 
		    b_dim1]), abs(d__2));
	    if (upper) {
		if (! notran) {
		    i__3 = i__ - ifu;
		    for (j = 1; j <= i__3; ++j) {
			i__4 = j + i__ * a_dim1;
			i__5 = j + k * x_dim1;
			tmp += ((d__1 = a[i__4].r, abs(d__1)) + (d__2 = 
				d_imag(&a[j + i__ * a_dim1]), abs(d__2))) * ((
				d__3 = x[i__5].r, abs(d__3)) + (d__4 = d_imag(
				&x[j + k * x_dim1]), abs(d__4)));
/* L40: */
		    }
		    if (unit) {
			i__3 = i__ + k * x_dim1;
			tmp += (d__1 = x[i__3].r, abs(d__1)) + (d__2 = d_imag(
				&x[i__ + k * x_dim1]), abs(d__2));
		    }
		} else {
		    if (unit) {
			i__3 = i__ + k * x_dim1;
			tmp += (d__1 = x[i__3].r, abs(d__1)) + (d__2 = d_imag(
				&x[i__ + k * x_dim1]), abs(d__2));
		    }
		    i__3 = *n;
		    for (j = i__ + ifu; j <= i__3; ++j) {
			i__4 = i__ + j * a_dim1;
			i__5 = j + k * x_dim1;
			tmp += ((d__1 = a[i__4].r, abs(d__1)) + (d__2 = 
				d_imag(&a[i__ + j * a_dim1]), abs(d__2))) * ((
				d__3 = x[i__5].r, abs(d__3)) + (d__4 = d_imag(
				&x[j + k * x_dim1]), abs(d__4)));
/* L50: */
		    }
		}
	    } else {
		if (notran) {
		    i__3 = i__ - ifu;
		    for (j = 1; j <= i__3; ++j) {
			i__4 = i__ + j * a_dim1;
			i__5 = j + k * x_dim1;
			tmp += ((d__1 = a[i__4].r, abs(d__1)) + (d__2 = 
				d_imag(&a[i__ + j * a_dim1]), abs(d__2))) * ((
				d__3 = x[i__5].r, abs(d__3)) + (d__4 = d_imag(
				&x[j + k * x_dim1]), abs(d__4)));
/* L60: */
		    }
		    if (unit) {
			i__3 = i__ + k * x_dim1;
			tmp += (d__1 = x[i__3].r, abs(d__1)) + (d__2 = d_imag(
				&x[i__ + k * x_dim1]), abs(d__2));
		    }
		} else {
		    if (unit) {
			i__3 = i__ + k * x_dim1;
			tmp += (d__1 = x[i__3].r, abs(d__1)) + (d__2 = d_imag(
				&x[i__ + k * x_dim1]), abs(d__2));
		    }
		    i__3 = *n;
		    for (j = i__ + ifu; j <= i__3; ++j) {
			i__4 = j + i__ * a_dim1;
			i__5 = j + k * x_dim1;
			tmp += ((d__1 = a[i__4].r, abs(d__1)) + (d__2 = 
				d_imag(&a[j + i__ * a_dim1]), abs(d__2))) * ((
				d__3 = x[i__5].r, abs(d__3)) + (d__4 = d_imag(
				&x[j + k * x_dim1]), abs(d__4)));
/* L70: */
		    }
		}
	    }
	    if (i__ == 1) {
		axbi = tmp;
	    } else {
		axbi = min(axbi,tmp);
	    }
/* L80: */
	}
/* Computing MAX */
	d__1 = axbi, d__2 = (*n + 1) * unfl;
	tmp = berr[k] / ((*n + 1) * eps + (*n + 1) * unfl / max(d__1,d__2));
	if (k == 1) {
	    reslts[2] = tmp;
	} else {
	    reslts[2] = max(reslts[2],tmp);
	}
/* L90: */
    }

    return 0;

/*     End of ZTRT05 */

} /* ztrt05_ */
