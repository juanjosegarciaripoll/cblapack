/*
 * cblas_zscal.c
 *
 * The program is a C interface to zscal.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_zscal( const integer N, const void *alpha, void *X, 
                       const integer incX)
{
   #define F77_N N
   #define F77_incX incX
   zscal_( &F77_N, alpha, X, &F77_incX);
}
