/*
 * cblas_sswap.c
 *
 * The program is a C interface to sswap.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_sswap( const integer N, float *X, const integer incX, float *Y,
                       const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   sswap_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
