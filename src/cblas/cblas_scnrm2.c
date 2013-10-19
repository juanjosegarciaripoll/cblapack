/*
 * cblas_scnrm2.c
 *
 * The program is a C interface to scnrm2.
 * It calls the fortran wrapper before calling scnrm2.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
float cblas_scnrm2( const int N, const void *X, const int incX) 
{
   float nrm2;
   #define F77_N N
   #define F77_incX incX
   scnrm2_sub_( &F77_N, X, &F77_incX, &nrm2);
   return nrm2;
}
