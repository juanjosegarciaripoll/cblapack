/*
 * cblas_zcopy.c
 *
 * The program is a C interface to zcopy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_zcopy( const integer N, const void *X,
                      const integer incX, void *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   zcopy_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
