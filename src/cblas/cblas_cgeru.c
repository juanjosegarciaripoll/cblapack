/*
 * cblas_cgeru.c
 * The program is a C interface to cgeru.
 * 
 * Keita Teranishi  5/20/98
 *
 */
#include "cblapack.h"
void cblas_cgeru(const enum CBLAS_ORDER order, const integer M, const integer N,
                 const void *alpha, const void *X, const integer incX,
                 const void *Y, const integer incY, void *A, const integer lda)
{
   #define F77_M M
   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   #define F77_lda lda

   extern integer CBLAS_CallFromC;
   extern integer RowMajorStrg;
   RowMajorStrg = 0;

   CBLAS_CallFromC = 1;

   if (order == CblasColMajor)
   {
      cgeru_( &F77_M, &F77_N, alpha, X, &F77_incX, Y, &F77_incY, A,
                      &F77_lda);
   }
   else if (order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      cgeru_( &F77_N, &F77_M, alpha, Y, &F77_incY, X, &F77_incX, A, 
                      &F77_lda);
   }
   else cblas_xerbla(1, "cblas_cgeru","Illegal Order setting, %d\n", order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
