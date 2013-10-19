/*
 * cblas_ccopy.c
 *
 * The program is a C interface to ccopy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_ccopy( const integer N, const void *X,
                      const integer incX, void *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   ccopy_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
