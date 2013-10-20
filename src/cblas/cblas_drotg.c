/*
 * cblas_drotg.c
 *
 * The program is a C interface to drotg.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_drotg(  double *a, double *b, double *c, double *s)
{
   drotg_(a,b,c,s);    
}
