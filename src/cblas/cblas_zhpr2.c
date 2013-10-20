/*
 * cblas_zhpr2.c
 * The program is a C interface to zhpr2.
 * 
 * Keita Teranishi  5/20/98
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "cblapack.h"
void cblas_zhpr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                      const integer N,const void *alpha, const void *X, 
                      const integer incX,const void *Y, const integer incY, void *Ap)

{
   char UL;
#ifdef F77_CHAR
   F77_CHAR F77_UL;
#else
   #define F77_UL &UL
#endif

   #define F77_N N
   #define F77_incX incx
   #define F77_incY incy
   integer n, i, j, incx=incX, incy=incY;
   double *x=(double *)X, *xx=(double *)X, *y=(double *)Y,
         *yy=(double *)Y, *stx, *sty;

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
         cblas_xerbla(2, "cblas_zhpr2","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_UL = C2F_CHAR(&UL);
      #endif

      zhpr2_(F77_UL, &F77_N, alpha, X, &F77_incX, Y, &F77_incY, Ap);

   }  else if (order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      if (Uplo == CblasUpper) UL = 'L';
      else if (Uplo == CblasLower) UL = 'U';
      else 
      {
         cblas_xerbla(2, "cblas_zhpr2","Illegal Uplo setting, %d\n", Uplo);
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
         x = malloc(n*sizeof(double));
         y = malloc(n*sizeof(double));         
         stx = x + n;
         sty = y + n;
         if( incX > 0 )
            i = incX << 1;
         else
            i = incX *(-2);
 
         if( incY > 0 )
            j = incY << 1;
         else
            j = incY *(-2);
         do
         {
            *x = *xx;
            x[1] = -xx[1];
            x += 2;
            xx += i;
         } while (x != stx);
         do
         {
            *y = *yy;
            y[1] = -yy[1];
            y += 2;
            yy += j;
         }
         while (y != sty);
         x -= n;
         y -= n;

            if(incX > 0 )
               incx = 1;
            else
               incx = -1;
 
            if(incY > 0 )
               incy = 1;
            else
               incy = -1;

      }  else 
      {
         x = (double *) X;
         y = (void  *) Y;
      }
      zhpr2_(F77_UL, &F77_N, alpha, y, &F77_incY, x, &F77_incX, Ap);
   } 
   else 
   {
      cblas_xerbla(1, "cblas_zhpr2","Illegal Order setting, %d\n", order);
      CBLAS_CallFromC = 0;
      RowMajorStrg = 0;
      return;
   }
   if(X!=x)
      free(x);
   if(Y!=y)
      free(y);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
