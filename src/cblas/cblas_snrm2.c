/*
 * cblas_snrm2.c
 *
 * The program is a C interface to snrm2.
 * It calls the fortran wrapper before calling snrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
float cblas_snrm2( const int N, const float *X, const int incX) 
{
   float nrm2;
   #define F77_N N
   #define F77_incX incX
   snrm2_sub_( &F77_N, X, &F77_incX, &nrm2);
   return nrm2;
}
