/*
 * cblas_dcopy.c
 *
 * The program is a C interface to dcopy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_dcopy( const integer N, const double *X,
                      const integer incX, double *Y, const integer incY)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   dcopy_( &F77_N, X, &F77_incX, Y, &F77_incY);
}
