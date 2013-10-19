/*
 *
 * cblas_cherk.c
 * This program is a C interface to cherk.
 * Written by Keita Teranishi
 * 4/8/1998
 *
 */

#include "cblas.h"
#include "blaswrap.h"
void cblas_cherk(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                 const enum CBLAS_TRANSPOSE Trans, const integer N, const integer K,
                 const float alpha, const void *A, const integer lda,
                 const float beta, void *C, const integer ldc)
{
   char UL, TR;   
#ifdef F77_CHAR
   F77_CHAR F77_TR, F77_UL;
#else
   #define F77_TR &TR  
   #define F77_UL &UL  
#endif

   #define F77_N N
   #define F77_K K
   #define F77_lda lda
   #define F77_ldc ldc

   extern integer CBLAS_CallFromC;
   extern integer RowMajorStrg;
   RowMajorStrg = 0;
   CBLAS_CallFromC = 1;

   if( Order == CblasColMajor )
   {
      if( Uplo == CblasUpper) UL='U';
      else if ( Uplo == CblasLower ) UL='L';
      else 
      {
         cblas_xerbla(2, "cblas_cherk", "Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      if( Trans == CblasTrans) TR ='T';
      else if ( Trans == CblasConjTrans ) TR='C';
      else if ( Trans == CblasNoTrans )   TR='N';
      else 
      {
         cblas_xerbla(3, "cblas_cherk", "Illegal Trans setting, %d\n", Trans);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
         F77_TR = C2F_CHAR(&TR);
      #endif

      cherk_(F77_UL, F77_TR, &F77_N, &F77_K, &alpha, A, &F77_lda,
                     &beta, C, &F77_ldc);
   } else if (Order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      if( Uplo == CblasUpper) UL='L';
      else if ( Uplo == CblasLower ) UL='U';
      else 
      {
         cblas_xerbla(3, "cblas_cherk", "Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      if( Trans == CblasTrans) TR ='N';
      else if ( Trans == CblasConjTrans ) TR='N';
      else if ( Trans == CblasNoTrans )   TR='C';
      else 
      {
         cblas_xerbla(3, "cblas_cherk", "Illegal Trans setting, %d\n", Trans);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
         F77_SD = C2F_CHAR(&SD);
      #endif

      cherk_(F77_UL, F77_TR, &F77_N, &F77_K, &alpha, A, &F77_lda,
                &beta, C, &F77_ldc);
   } 
   else  cblas_xerbla(1, "cblas_cherk", "Illegal Order setting, %d\n", Order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
