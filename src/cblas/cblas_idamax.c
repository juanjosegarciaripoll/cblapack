/*
 * cblas_idamax.c
 *
 * The program is a C interface to idamax.
 * It calls the fortran wrapper before calling idamax.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
CBLAS_INDEX cblas_idamax( const integer N, const double *X, const integer incX)
{
   integer iamax;
   #define F77_N N
   #define F77_incX incX
   iamax = idamax_( &F77_N, X, &F77_incX );
   return iamax ? iamax-1 : 0;
}
