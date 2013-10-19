/*
 * cblas_sdot.c
 *
 * The program is a C interface to sdot.
 * It calls the fortran wrapper before calling sdot.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
float cblas_sdot( const int N, const float *X,
                      const int incX, const float *Y, const int incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   return sdot_( &F77_N, X, &F77_incX, Y, &F77_incY );
}   
