/*
 * cblas_scasum.c
 *
 * The program is a C interface to scasum.
 * It calls the fortran wrapper before calling scasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
float cblas_scasum( const int N, const void *X, const int incX) 
{
   float asum;
   #define F77_N N
   #define F77_incX incX
   scasum_sub_( &F77_N, X, &F77_incX, &asum);
   return asum;
}
