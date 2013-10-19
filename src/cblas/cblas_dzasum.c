/*
 * cblas_dzasum.c
 *
 * The program is a C interface to dzasum.
 * It calls the fortran wrapper before calling dzasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
double cblas_dzasum( const int N, const void *X, const int incX) 
{
   double asum;
   #define F77_N N
   #define F77_incX incX
   dzasum_sub_( &F77_N, X, &F77_incX, &asum);
   return asum;
}
