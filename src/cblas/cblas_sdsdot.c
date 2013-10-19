/*
 * cblas_sdsdot.c
 *
 * The program is a C interface to sdsdot.
 * It calls the fortran wrapper before calling sdsdot.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
float cblas_sdsdot( const int N, const float alpha, const float *X,
                      const int incX, const float *Y, const int incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   return sdsdot_( &F77_N, &alpha, X, &F77_incX, Y, &F77_incY );
}   
