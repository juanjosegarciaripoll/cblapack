/*
 * cblas_cscal.c
 *
 * The program is a C interface to cscal.f.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_cscal( const integer N, const void *alpha, void *X, 
                       const integer incX)
{
   #define F77_N N
   #define F77_incX incX
   cscal_( &F77_N, alpha, X, &F77_incX);
}
