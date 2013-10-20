/*
 * cblas_srotm.c
 *
 * The program is a C interface to srotm.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_srotm( const integer N, float *X, const integer incX, float *Y, 
                       const integer incY, const float *P)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   srotm_( &F77_N, X, &F77_incX, Y, &F77_incY, P);
}   
