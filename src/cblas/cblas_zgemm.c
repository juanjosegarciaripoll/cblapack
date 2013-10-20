/*
 *
 * cblas_zgemm.c
 * This program is a C interface to zgemm.
 * Written by Keita Teranishi
 * 4/8/1998
 *
 */

#include "cblapack.h"
void cblas_zgemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const integer M, const integer N,
                 const integer K, const void *alpha, const void  *A,
                 const integer lda, const void  *B, const integer ldb,
                 const void *beta, void  *C, const integer ldc)
{
   char TA, TB;   
#ifdef F77_CHAR
   F77_CHAR F77_TA, F77_TB;
#else
   #define F77_TA &TA  
   #define F77_TB &TB  
#endif

   #define F77_M M
   #define F77_N N
   #define F77_K K
   #define F77_lda lda
   #define F77_ldb ldb
   #define F77_ldc ldc

   extern integer CBLAS_CallFromC;
   extern integer RowMajorStrg;
   RowMajorStrg = 0;
   CBLAS_CallFromC = 1;

   if( Order == CblasColMajor )
   {
      if(TransA == CblasTrans) TA='T';
      else if ( TransA == CblasConjTrans ) TA='C';
      else if ( TransA == CblasNoTrans )   TA='N';
      else 
      {
         cblas_xerbla(2, "cblas_zgemm","Illegal TransA setting, %d\n", TransA);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      if(TransB == CblasTrans) TB='T';
      else if ( TransB == CblasConjTrans ) TB='C';
      else if ( TransB == CblasNoTrans )   TB='N';
      else 
      {
         cblas_xerbla(3, "cblas_zgemm","Illegal TransB setting, %d\n", TransB);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }

      #ifdef F77_CHAR
         F77_TA = C2F_CHAR(&TA);
         F77_TB = C2F_CHAR(&TB);
      #endif

      zgemm_(F77_TA, F77_TB, &F77_M, &F77_N, &F77_K, alpha, A,
                     &F77_lda, B, &F77_ldb, beta, C, &F77_ldc);
   } else if (Order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      if(TransA == CblasTrans) TB='T';
      else if ( TransA == CblasConjTrans ) TB='C';
      else if ( TransA == CblasNoTrans )   TB='N';
      else 
      {
         cblas_xerbla(2, "cblas_zgemm","Illegal TransA setting, %d\n", TransA);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      if(TransB == CblasTrans) TA='T';
      else if ( TransB == CblasConjTrans ) TA='C';
      else if ( TransB == CblasNoTrans )   TA='N';
      else 
      {
         cblas_xerbla(2, "cblas_zgemm","Illegal TransB setting, %d\n", TransB);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_TA = C2F_CHAR(&TA);
         F77_TB = C2F_CHAR(&TB);
      #endif

      zgemm_(F77_TA, F77_TB, &F77_N, &F77_M, &F77_K, alpha, B,
                  &F77_ldb, A, &F77_lda, beta, C, &F77_ldc);
   } 
   else  cblas_xerbla(1, "cblas_zgemm", "Illegal Order setting, %d\n", Order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
