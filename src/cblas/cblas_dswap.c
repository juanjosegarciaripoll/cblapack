/*
 * cblas_dswap.c
 *
 * The program is a C interface to dswap.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_dswap( const integer N, double *X, const integer incX, double *Y,
                       const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   dswap_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
