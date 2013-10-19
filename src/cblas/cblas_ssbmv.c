/*
 *
 * cblas_ssbmv.c
 * This program is a C interface to ssbmv.
 * Written by Keita Teranishi
 * 4/6/1998
 *
 */
#include "cblas.h"
#include "blaswrap.h"
void cblas_ssbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
           const int N, const int K, const float alpha, const float *A,
           const int lda, const float *X, const int incX,
           const float beta, float *Y, const int incY)
{
   char UL;
#ifdef F77_CHAR
   F77_CHAR F77_UL;
#else
   #define F77_UL &UL   
#endif

   #define F77_N N
   #define F77_K K
   #define F77_lda lda
   #define F77_incX incX
   #define F77_incY incY
   extern int CBLAS_CallFromC;
   extern int RowMajorStrg;
   RowMajorStrg = 0;

   CBLAS_CallFromC = 1;
   if (order == CblasColMajor)
   {
   
      if (Uplo == CblasUpper) UL = 'U';
      else if (Uplo == CblasLower) UL = 'L';
      else 
      {
         cblas_xerbla(2, "cblas_ssbmv","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif
      ssbmv_(F77_UL, &F77_N, &F77_K, &alpha, A, &F77_lda, X,
      &F77_incX, &beta, Y, &F77_incY);
   }else if (order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      if (Uplo == CblasUpper) UL = 'L';
      else if (Uplo == CblasLower) UL = 'U';
      else 
      {
         cblas_xerbla(2, "cblas_ssbmv","Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif
      ssbmv_(F77_UL, &F77_N, &F77_K, &alpha, A, &F77_lda, X,
      &F77_incX, &beta, Y, &F77_incY);
   }
   else cblas_xerbla(1, "cblas_ssbmv", "Illegal Order setting, %d\n", order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
