/*
 * cblas_dzasum.c
 *
 * The program is a C interface to dzasum.
 * It calls the fortran wrapper before calling dzasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
double cblas_dzasum( const integer N, const void *X, const integer incX) 
{
   #define F77_N N
   #define F77_incX incX
   return dzasum_( &F77_N, X, &F77_incX );
}
