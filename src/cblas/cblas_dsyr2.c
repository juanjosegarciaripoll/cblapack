/*
 *
 * cblas_dsyr2.c
 * This program is a C interface to dsyr2.
 * Written by Keita Teranishi
 * 4/6/1998
 *
 */

#include "cblas.h"
#include "blaswrap.h"
void cblas_dsyr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                const integer N, const double  alpha, const double  *X,
                const integer incX, const double  *Y, const integer incY, double  *A,
                const integer lda)
{
   char UL;
#ifdef F77_CHAR
   F77_CHAR F77_UL;
#else
   #define F77_UL &UL
#endif

   #define F77_N N
   #define F77_incX incX
   #define F77_incY incY
   #define F77_lda  lda

   extern integer CBLAS_CallFromC;
   extern integer RowMajorStrg;
   RowMajorStrg = 0;
   CBLAS_CallFromC = 1;
   if (order == CblasColMajor)
   {
      if (Uplo == CblasLower) UL = 'L';
      else if (Uplo == CblasUpper) UL = 'U';
      else 
      {
         cblas_xerbla(2, "cblas_dsyr2","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif

      dsyr2_(F77_UL, &F77_N, &alpha, X, &F77_incX, Y, &F77_incY, A, 
                    &F77_lda);

   }  else if (order == CblasRowMajor) 
   {
      RowMajorStrg = 1;
      if (Uplo == CblasLower) UL = 'U';
      else if (Uplo == CblasUpper) UL = 'L';
      else 
      {
         cblas_xerbla(2, "cblas_dsyr2","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif  
      dsyr2_(F77_UL, &F77_N, &alpha, X, &F77_incX, Y, &F77_incY,  A, 
                    &F77_lda); 
   } else cblas_xerbla(1, "cblas_dsyr2", "Illegal Order setting, %d\n", order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
