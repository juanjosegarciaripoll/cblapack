/*
 * cblas_dsdot.c
 *
 * The program is a C interface to dsdot.
 * It calls fthe fortran wrapper before calling dsdot.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
double  cblas_dsdot( const integer N, const float *X,
                      const integer incX, const float *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   return dsdot_( &F77_N, X, &F77_incX, Y, &F77_incY );
}   
