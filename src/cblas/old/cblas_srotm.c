/*
 * cblas_srotm.c
 *
 * The program is a C interface to srotm.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_srotm( const int N, float *X, const int incX, float *Y, 
                       const int incY, const float *P)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   srotm_( &F77_N, X, &F77_incX, Y, &F77_incY, P);
}   
