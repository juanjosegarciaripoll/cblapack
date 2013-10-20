/*
 * cblas_dnrm2.c
 *
 * The program is a C interface to dnrm2.
 * It calls the fortranwrapper before calling dnrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
double cblas_dnrm2( const integer N, const double *X, const integer incX) 
{
   #define F77_N N
   #define F77_incX incX
   return dnrm2_( &F77_N, X, &F77_incX );
}
