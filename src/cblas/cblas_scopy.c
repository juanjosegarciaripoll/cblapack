/*
 * cblas_scopy.c
 *
 * The program is a C interface to scopy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_scopy( const integer N, const float *X,
                      const integer incX, float *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   scopy_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
