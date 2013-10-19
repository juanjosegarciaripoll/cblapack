/*
 * cblas_daxpy.c
 *
 * The program is a C interface to daxpy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_daxpy( const int N, const double alpha, const double *X,
                       const int incX, double *Y, const int incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   daxpy_( &F77_N, &alpha, X, &F77_incX, Y, &F77_incY);
} 
