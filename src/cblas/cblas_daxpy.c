/*
 * cblas_daxpy.c
 *
 * The program is a C interface to daxpy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_daxpy( const integer N, const double alpha, const double *X,
                       const integer incX, double *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   daxpy_( &F77_N, &alpha, X, &F77_incX, Y, &F77_incY);
} 
