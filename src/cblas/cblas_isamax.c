/*
 * cblas_isamax.c
 *
 * The program is a C interface to isamax.
 * It calls the fortran wrapper before calling isamax.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
CBLAS_INDEX cblas_isamax( const int N, const float *X, const int incX)
{
   int iamax;
   #define F77_N N
   #define F77_incX incX
   isamax_sub_( &F77_N, X, &F77_incX, &iamax);
   return iamax ? iamax-1 : 0;
}
