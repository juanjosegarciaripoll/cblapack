/*
 * cblas_zdscal.c
 *
 * The program is a C interface to zdscal.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_zdscal( const int N, const double alpha, void  *X,
                       const int incX)
{
   #define F77_N N
   #define F77_incX incX
   zdscal_( &F77_N, &alpha, X, &F77_incX);
}
