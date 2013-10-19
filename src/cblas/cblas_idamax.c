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
CBLAS_INDEX cblas_idamax( const int N, const double *X, const int incX)
{
   int iamax;
   #define F77_N N
   #define F77_incX incX
   idamax_sub_( &F77_N, X, &F77_incX, &iamax);
   return iamax ? iamax-1 : 0;
}
