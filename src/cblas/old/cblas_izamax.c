/*
 * cblas_izamax.c
 *
 * The program is a C interface to izamax.
 * It calls the fortran wrapper before calling izamax.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
CBLAS_INDEX cblas_izamax( const int N, const void *X, const int incX)
{
   int iamax;
   #define F77_N N
   #define F77_incX incX
   iamax = izamax_sub_( &F77_N, X, &F77_incX );
   return (iamax ? iamax-1 : 0);
}