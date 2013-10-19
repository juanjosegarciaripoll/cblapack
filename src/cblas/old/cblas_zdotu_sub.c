/*
 * cblas_zdotu_sub.c
 *
 * The program is a C interface to zdotu.
 * It calls the fortran wrapper before calling zdotu.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_zdotu_sub( const int N, const void *X, const int incX,
                      const void *Y, const int incY, void *dotu)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   return zdotu_sub_( dotu, &F77_N, X, &F77_incX, Y, &F77_incY);
}
