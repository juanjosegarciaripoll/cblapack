/*
 * cblas_dnrm2.c
 *
 * The program is a C interface to dnrm2.
 * It calls the fortranwrapper before calling dnrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
double cblas_dnrm2( const int N, const double *X, const int incX) 
{
   double nrm2;
   #define F77_N N
   #define F77_incX incX
   dnrm2_sub_( &F77_N, X, &F77_incX, &nrm2);
   return nrm2;
}
