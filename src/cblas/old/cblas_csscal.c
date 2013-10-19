/*
 * cblas_csscal.c
 *
 * The program is a C interface to csscal.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_csscal( const int N, const float alpha, void *X,
                       const int incX)
{
   #define F77_N N
   #define F77_incX incX
   csscal_( &F77_N, &alpha, X, &F77_incX);
}
