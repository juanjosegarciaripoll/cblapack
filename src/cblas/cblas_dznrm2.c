/*
 * cblas_dznrm2.c
 *
 * The program is a C interface to dznrm2.
 * It calls the fortran wrapper before calling dznrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
double cblas_dznrm2( const int N, const void *X, const int incX) 
{
   double nrm2;
   #define F77_N N
   #define F77_incX incX
   dznrm2_sub_( &F77_N, X, &F77_incX, &nrm2);
   return nrm2;
}
