/*
 * cblas_srotmg.c
 *
 * The program is a C interface to srotmg.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include "cblapack.h"
void cblas_srotmg( float *d1, float *d2, float *b1, 
                        const float b2, float *p)
{
   srotmg_(d1,d2,b1,&b2,p);
}
