/*
 *
 * cblas_csymm.c
 * This program is a C interface to csymm.
 * Written by Keita Teranishi
 * 4/8/1998
 *
 */

#include "cblapack.h"
void cblas_csymm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                 const enum CBLAS_UPLO Uplo, const integer M, const integer N,
                 const void *alpha, const void  *A, const integer lda,
                 const void  *B, const integer ldb, const void *beta,
                 void  *C, const integer ldc)
{
   char SD, UL;   
#ifdef F77_CHAR
   F77_CHAR F77_SD, F77_UL;
#else
   #define F77_SD &SD  
   #define F77_UL &UL  
#endif

   #define F77_M M
   #define F77_N N
   #define F77_lda lda
   #define F77_ldb ldb
   #define F77_ldc ldc

   extern integer CBLAS_CallFromC;
   extern integer RowMajorStrg;
   RowMajorStrg = 0;
   CBLAS_CallFromC = 1;

   if( Order == CblasColMajor )
   {
      if( Side == CblasRight) SD='R';
      else if ( Side == CblasLeft ) SD='L';
      else 
      {
         cblas_xerbla(2, "cblas_csymm", "Illegal Side setting, %d\n", Side);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      if( Uplo == CblasUpper) UL='U';
      else if ( Uplo == CblasLower ) UL='L';
      else 
      {
         cblas_xerbla(3, "cblas_csymm", "Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
         F77_SD = C2F_CHAR(&SD);
      #endif

      csymm_(F77_SD, F77_UL, &F77_M, &F77_N, alpha, A, &F77_lda,
                      B, &F77_ldb, beta, C, &F77_ldc);
   } else if (Order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      if( Side == CblasRight) SD='L';
      else if ( Side == CblasLeft ) SD='R';
      else 
      {
         cblas_xerbla(2, "cblas_csymm", "Illegal Side setting, %d\n", Side);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      if( Uplo == CblasUpper) UL='L';
      else if ( Uplo == CblasLower ) UL='U';
      else 
      {
         cblas_xerbla(3, "cblas_csymm", "Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
         F77_SD = C2F_CHAR(&SD);
      #endif

      csymm_(F77_SD, F77_UL, &F77_N, &F77_M, alpha, A, &F77_lda,
                     B, &F77_ldb, beta, C, &F77_ldc);
   } 
   else cblas_xerbla(1, "cblas_csymm", "Illegal Order setting, %d\n", Order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
} 
