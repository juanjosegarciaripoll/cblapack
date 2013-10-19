/*
 *
 * cblas_sspr.c
 * This program is a C interface to sspr.
 * Written by Keita Teranishi
 * 4/6/1998
 *
 */

#include "cblas.h"
#include "blaswrap.h"
void cblas_sspr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                const integer N, const  float alpha, const float *X,
                const integer incX, float *Ap)
{
   char UL;
#ifdef F77_CHAR
   F77_CHAR F77_UL;
#else
   #define F77_UL &UL
#endif

   #define F77_N N
   #define F77_incX incX

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
         cblas_xerbla(2, "cblas_sspr","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif

      sspr_(F77_UL, &F77_N, &alpha, X, &F77_incX, Ap);

   }  else if (order == CblasRowMajor) 
   {
      RowMajorStrg = 1;
      if (Uplo == CblasLower) UL = 'U';
      else if (Uplo == CblasUpper) UL = 'L';
      else 
      {
         cblas_xerbla(2, "cblas_sspr","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif  
      sspr_(F77_UL, &F77_N, &alpha, X, &F77_incX, Ap); 
   } else cblas_xerbla(1, "cblas_sspr", "Illegal Order setting, %d\n", order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
