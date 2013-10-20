/*
 * cblas_scasum.c
 *
 * The program is a C interface to scasum.
 * It calls the fortran wrapper before calling scasum.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
float cblas_scasum( const integer N, const void *X, const integer incX) 
{
   #define F77_N N
   #define F77_incX incX
   return scasum_( &F77_N, X, &F77_incX );
}
