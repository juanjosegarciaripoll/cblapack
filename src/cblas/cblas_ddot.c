/*
 * cblas_ddot.c
 *
 * The program is a C interface to ddot.
 * It calls the fortran wrapper before calling ddot.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
double cblas_ddot( const int N, const double *X,
                      const int incX, const double *Y, const int incY)
{
   double dot;
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   ddot_sub_( &F77_N, X, &F77_incX, Y, &F77_incY, &dot);
   return dot;
}   
