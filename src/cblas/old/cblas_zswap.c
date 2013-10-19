/*
 * cblas_zswap.c
 *
 * The program is a C interface to zswap.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_zswap( const int N, void  *X, const int incX, void  *Y,
                       const int incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   zswap_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
