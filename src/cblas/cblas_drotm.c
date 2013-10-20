#include "cblapack.h"
void cblas_drotm( const integer N, double *X, const integer incX, double *Y, 
                       const integer incY, const double *P)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   drotm_( &F77_N, X, &F77_incX, Y, &F77_incY, P);
}   
