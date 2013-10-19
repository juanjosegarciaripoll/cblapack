/*
 * cblas_dscal.c
 *
 * The program is a C interface to dscal.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_dscal( const int N, const double alpha, double *X, 
                       const int incX)
{
   #define F77_N N
   #define F77_incX incX
   dscal_( &F77_N, &alpha, X, &F77_incX);
}
