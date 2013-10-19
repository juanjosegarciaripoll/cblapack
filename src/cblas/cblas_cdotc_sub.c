/*
 * cblas_cdotc_sub.c
 *
 * The program is a C interface to cdotc.
 * It calls the fortran wrapper before calling cdotc.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_cdotc_sub( const integer N, const void *X, const integer incX,
                    const void *Y, const integer incY,void *dotc)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   cdotc_sub_(dotc, &F77_N, X, &F77_incX, Y, &F77_incY);
}
