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
CBLAS_INDEX cblas_icamax( const integer N, const void *X, const integer incX)
{
   integer iamax;
   #define F77_N N
   #define F77_incX incX
   iamax = icamax_( &F77_N, X, &F77_incX );
   return iamax ? iamax-1 : 0;
}
