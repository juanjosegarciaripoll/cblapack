/*
 * cblas_zdotc_sub.c
 *
 * The program is a C interface to zdotc.
 * It calls the fortran wrapper before calling zdotc.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_zdotc_sub( const integer N, const void *X, const integer incX,
		      const void *Y, const integer incY, void *dotc)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   zdotc_sub_( dotc, &F77_N, X, &F77_incX, Y, &F77_incY );
}
