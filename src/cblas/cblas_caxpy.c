/*
 * cblas_caxpy.c
 *
 * The program is a C interface to caxpy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_caxpy( const integer N, const void *alpha, const void *X,
                       const integer incX, void *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   caxpy_( &F77_N, alpha, X, &F77_incX, Y, &F77_incY);
} 
