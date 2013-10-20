/*
 * cblas_dznrm2.c
 *
 * The program is a C interface to dznrm2.
 * It calls the fortran wrapper before calling dznrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
double cblas_dznrm2( const integer N, const void *X, const integer incX) 
{
   #define F77_N N
   #define F77_incX incX
   return dznrm2_( &F77_N, X, &F77_incX );
}
