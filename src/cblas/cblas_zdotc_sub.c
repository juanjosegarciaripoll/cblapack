/*
 * cblas_zdotc_sub.c
 *
 * The program is a C interface to zdotc.
 * It calls the fortran wrapper before calling zdotc.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_zdotc_sub( const int N, const void *X, const int incX,
		      const void *Y, const int incY, void *dotc)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   return zdotc_sub_( dotc, &F77_N, X, &F77_incX, Y, &F77_incY );
}
