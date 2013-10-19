/*
 * cblas_dasum.c
 *
 * The program is a C interface to dasum.
 * It calls the fortran wrapper before calling dasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
double cblas_dasum( const integer N, const double *X, const integer incX) 
{
   #define F77_N N
   #define F77_incX incX
   return dasum_( &F77_N, X, &F77_incX );
}
