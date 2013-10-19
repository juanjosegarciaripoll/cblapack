/*
 * cblas_icamax.c
 *
 * The program is a C interface to icamax.
 * It calls the fortran wrapper before calling icamax.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
CBLAS_INDEX cblas_icamax( const int N, const void *X, const int incX)
{
   int iamax;
   #define F77_N N
   #define F77_incX incX
   icamax_sub_( &F77_N, X, &F77_incX, &iamax);
   return iamax ? iamax-1 : 0;
}
