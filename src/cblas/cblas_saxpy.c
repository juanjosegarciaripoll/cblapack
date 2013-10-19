/*
 * cblas_saxpy.c
 *
 * The program is a C interface to saxpy.
 * It calls the fortran wrapper before calling saxpy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_saxpy( const integer N, const float alpha, const float *X,
                       const integer incX, float *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   saxpy_( &F77_N, &alpha, X, &F77_incX, Y, &F77_incY);
} 
