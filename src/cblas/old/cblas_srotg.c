/*
 * cblas_srotg.c
 *
 * The program is a C interface to srotg.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_srotg(  float *a, float *b, float *c, float *s)
{
   srotg_(a,b,c,s);    
}
