/*
 * cblas_dswap.c
 *
 * The program is a C interface to dswap.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_dswap( const int N, double *X, const int incX, double *Y,
                       const int incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   dswap_( &F77_N, X, &F77_incX, Y, &F77_incY);
}