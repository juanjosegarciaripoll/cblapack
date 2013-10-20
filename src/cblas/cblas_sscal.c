/*
 * cblas_sscal.c
 *
 * The program is a C interface to sscal.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_sscal( const integer N, const float alpha, float *X, 
                       const integer incX)
{
   #define F77_N N
   #define F77_incX incX
   sscal_( &F77_N, &alpha, X, &F77_incX);
}
