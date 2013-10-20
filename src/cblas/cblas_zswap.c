/*
 * cblas_zswap.c
 *
 * The program is a C interface to zswap.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_zswap( const integer N, void  *X, const integer incX, void  *Y,
                       const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   zswap_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
