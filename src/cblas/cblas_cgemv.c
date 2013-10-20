/*
 * cblas_cgemv.c
 * The program is a C interface of cgemv
 * 
 * Keita Teranishi  5/20/98
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "cblapack.h"
void cblas_cgemv(const enum CBLAS_ORDER order,
                 const enum CBLAS_TRANSPOSE TransA, const integer M, const integer N,
                 const void *alpha, const void  *A, const integer lda,
                 const void  *X, const integer incX, const void *beta,
                 void  *Y, const integer incY)
{
   char TA;
#ifdef F77_CHAR
   F77_CHAR F77_TA;
#else
   #define F77_TA &TA   
#endif
   #define F77_M M
   #define F77_N N
   #define F77_lda lda
   #define F77_incX incx
   #define F77_incY incY

   integer n=0, i=0, incx=incX;
   const float *xx= (const float *)X;
   float ALPHA[2],BETA[2];
   integer tincY, tincx;
   float *x=(float *)X, *y=(float *)Y, *st=0, *tx=0;
   const float *stx = x;
   extern integer CBLAS_CallFromC;
   extern integer RowMajorStrg;
   RowMajorStrg = 0;

   CBLAS_CallFromC = 1;

   if (order == CblasColMajor)
   {
      if (TransA == CblasNoTrans) TA = 'N';
      else if (TransA == CblasTrans) TA = 'T';
      else if (TransA == CblasConjTrans) TA = 'C';
      else 
      {
         cblas_xerbla(2, "cblas_cgemv","Illegal TransA setting, %d\n", TransA);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_TA = C2F_CHAR(&TA);
      #endif
      cgemv_(F77_TA, &F77_M, &F77_N, alpha, A, &F77_lda, X, &F77_incX, 
                beta, Y, &F77_incY);
   }
   else if (order == CblasRowMajor)
   {
      RowMajorStrg = 1;
         
      if (TransA == CblasNoTrans) TA = 'T';
      else if (TransA == CblasTrans) TA = 'N';
      else if (TransA == CblasConjTrans)
      {
         ALPHA[0]=    *( (const float *)  alpha    );
         ALPHA[1]= -( *( (const float *)  alpha+1) );
         BETA[0]=     *( (const float *)  beta     );
         BETA[1]= -(  *( (const float *)  beta+1 ) );
         TA = 'N';
         if (M > 0)
         {
            n = M << 1;
            x = malloc(n*sizeof(float));
            tx = x;
            if( incX > 0 ) {
               i = incX << 1 ;
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

            F77_incX = 1;

            if(incY > 0)
               tincY = incY; 
            else
               tincY = -incY; 

            y++;

            if (N > 0)
            {
               i = tincY << 1;
               n = i * N ;
               st = y + n;
               do {
                  *y = -(*y);
                  y += i;
               } while(y != st); 
               y -= n;
            }
            stx = x;
         }
         else stx = (const float *)X;
      }
      else 
      {
         cblas_xerbla(2, "cblas_cgemv","Illegal TransA setting, %d\n", TransA);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      #ifdef F77_CHAR
         F77_TA = C2F_CHAR(&TA);
      #endif
      if (TransA == CblasConjTrans)
         cgemv_(F77_TA, &F77_N, &F77_M, ALPHA, A, &F77_lda, stx,
                &F77_incX, BETA, Y, &F77_incY);
      else
         cgemv_(F77_TA, &F77_N, &F77_M, alpha, A, &F77_lda, x,
                &F77_incX, beta, Y, &F77_incY);

      if (TransA == CblasConjTrans)
      {
         if (x != (const float *)X) free(x);
         if (N > 0)
         {
            do
            {
               *y = -(*y);
               y += i;
            }
            while (y != st);
         }
      }
   }
   else cblas_xerbla(1, "cblas_cgemv", "Illegal Order setting, %d\n", order);
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
