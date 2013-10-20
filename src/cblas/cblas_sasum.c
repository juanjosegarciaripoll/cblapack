/*
 * cblas_sasum.c
 *
 * The program is a C interface to sasum.
 * It calls the fortran wrapper before calling sasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
float cblas_sasum( const integer N, const float *X, const integer incX) 
{
   #define F77_N N
   #define F77_incX incX
   return sasum_( &F77_N, X, &F77_incX );
}
