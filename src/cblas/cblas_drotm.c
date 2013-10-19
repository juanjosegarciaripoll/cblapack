#include "cblas.h"
#include "blaswrap.h"
void cblas_drotm( const int N, double *X, const int incX, double *Y, 
                       const int incY, const double *P)
{
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   drotm_( &F77_N, X, &F77_incX, Y, &F77_incY, P);
}   
