/*
 *
 * cblas_zher2k.c
 * This program is a C interface to zher2k.
 * Written by Keita Teranishi
 * 4/8/1998
 *
 */

#include "cblas.h"
#include "blaswrap.h"
void cblas_zher2k(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE Trans, const int N, const int K,
                  const void *alpha, const void *A, const int lda,
                  const void *B, const int ldb, const double beta,
                  void *C, const int ldc)
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
   #define F77_ldb ldb
   #define F77_ldc ldc

   extern int CBLAS_CallFromC;
   extern int RowMajorStrg;
   double ALPHA[2]; 
   const double *alp=(double *)alpha;

   CBLAS_CallFromC = 1;
   RowMajorStrg = 0;

   if( Order == CblasColMajor )
   {

      if( Uplo == CblasUpper) UL='U';
      else if ( Uplo == CblasLower ) UL='L';
      else 
      {
         cblas_xerbla(2, "cblas_zher2k", "Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      if( Trans == CblasTrans) TR ='T';
      else if ( Trans == CblasConjTrans ) TR='C';
      else if ( Trans == CblasNoTrans )   TR='N';
      else 
      {
         cblas_xerbla(3, "cblas_zher2k", "Illegal Trans setting, %d\n", Trans);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
         F77_TR = C2F_CHAR(&TR);
      #endif

      zher2k_(F77_UL, F77_TR, &F77_N, &F77_K, alpha, A, &F77_lda, B, &F77_ldb, &beta, C, &F77_ldc);
   } else if (Order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      
      if( Uplo == CblasUpper) UL='L';
      else if ( Uplo == CblasLower ) UL='U';
      else 
      {
         cblas_xerbla(2, "cblas_zher2k", "Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      if( Trans == CblasTrans) TR ='N';
      else if ( Trans == CblasConjTrans ) TR='N';
      else if ( Trans == CblasNoTrans )   TR='C';
      else 
      {
         cblas_xerbla(3, "cblas_zher2k", "Illegal Trans setting, %d\n", Trans);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
         F77_TR = C2F_CHAR(&TR);
      #endif

      ALPHA[0]= *alp;
      ALPHA[1]= -alp[1];
      zher2k_(F77_UL,F77_TR, &F77_N, &F77_K, ALPHA, A, &F77_lda, B, &F77_ldb, &beta, C, &F77_ldc);
   } else  cblas_xerbla(1, "cblas_zher2k", "Illegal Order setting, %d\n", Order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}