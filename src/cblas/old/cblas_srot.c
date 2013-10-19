/*
 * cblas_srot.c
 *
 * The program is a C interface to srot.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_srot( const int N, float *X, const int incX, float *Y, 
                      const int incY, const float  c, const float  s)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   srot_(&F77_N, X, &F77_incX, Y, &F77_incY, &c, &s);
}  
