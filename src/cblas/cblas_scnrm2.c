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
float cblas_scnrm2( const integer N, const void *X, const integer incX) 
{
   #define F77_N N
   #define F77_incX incX
   return scnrm2_( &F77_N, X, &F77_incX );
}
