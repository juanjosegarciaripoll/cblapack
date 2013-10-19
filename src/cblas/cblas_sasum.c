/*
 * cblas_sasum.c
 *
 * The program is a C interface to sasum.
 * It calls the fortran wrapper before calling sasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
float cblas_sasum( const int N, const float *X, const int incX) 
{
   #define F77_N N
   #define F77_incX incX
   return sasum_( &F77_N, X, &F77_incX );
}
