/*
 * cblas_drot.c
 *
 * The program is a C interface to drot.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_drot(const int N, double *X, const int incX,
   double *Y, const int incY, const double c, const double s)
{
   #define F77_N N 
   #define F77_incX incX 
   #define F77_incY incY 
   drot_(&F77_N, X, &F77_incX, Y, &F77_incY, &c, &s);
   return;
}
