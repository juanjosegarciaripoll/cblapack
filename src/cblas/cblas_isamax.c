/*
 * cblas_isamax.c
 *
 * The program is a C interface to isamax.
 * It calls the fortran wrapper before calling isamax.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
CBLAS_INDEX cblas_isamax( const integer N, const float *X, const integer incX)
{
   integer iamax;
   #define F77_N N
   #define F77_incX incX
   iamax = isamax_( &F77_N, X, &F77_incX );
   return iamax ? iamax-1 : 0;
}
