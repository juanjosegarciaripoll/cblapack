/*
 * cblas_chpr.c
 * The program is a C interface to chpr.
 * 
 * Keita Teranishi  3/23/98
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "cblas.h"
#include "blaswrap.h"
void cblas_chpr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                const integer N, const float alpha, const void *X,
                const integer incX, void *A)
{
   char UL;
#ifdef F77_CHAR
   F77_CHAR F77_UL;
#else
   #define F77_UL &UL
#endif

   #define F77_N N
   #define F77_incX incx
   integer n, i, tincx, incx=incX;
   float *x=(float *)X, *xx=(float *)X, *tx, *st;

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
         cblas_xerbla(2, "cblas_chpr","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif

      chpr_(F77_UL, &F77_N, &alpha, X, &F77_incX, A);

   }  else if (order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      if (Uplo == CblasUpper) UL = 'L';
      else if (Uplo == CblasLower) UL = 'U';
      else 
      {
         cblas_xerbla(2, "cblas_chpr","Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif
      if (N > 0)
      {
         n = N << 1;
         x = malloc(n*sizeof(float));
         tx = x;
         if( incX > 0 ) {
            i = incX << 1;
            tincx = 2;
            st= x+n;
         } else { 
            i = incX *(-2);
            tincx = -2;
            st = x-2; 
            x +=(n-2); 
         }
         do
         {
            *x = *xx;
            x[1] = -xx[1];
            x += tincx ;
            xx += i;
         }
         while (x != st);
         x=tx;
            incx = 1;
      }
      else x = (float *) X;

      chpr_(F77_UL, &F77_N, &alpha, x, &F77_incX, A);

   } else 
   {
      cblas_xerbla(1, "cblas_chpr","Illegal Order setting, %d\n", order);
      CBLAS_CallFromC = 0;
      RowMajorStrg = 0;
      return;
   }
   if(X!=x)
     free(x);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
