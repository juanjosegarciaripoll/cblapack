/*
 * cblas_zhbmv.c
 * The program is a C interface to zhbmv
 * 
 * Keita Teranishi  5/18/98
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "cblapack.h"
void cblas_zhbmv(const enum CBLAS_ORDER order,
                 const enum CBLAS_UPLO Uplo,const integer N,const integer K,
                 const void *alpha, const void  *A, const integer lda,
                 const void  *X, const integer incX, const void *beta,
                 void  *Y, const integer incY)
{
   char UL;
   #define F77_UL &UL
   #define F77_N N
   #define F77_K K
   #define F77_lda lda
   #define F77_incX incx
   #define F77_incY incY
   integer n, i=0, incx=incX;
   const double *xx= (double *)X, *alp= (double *)alpha, *bet = (double *)beta;
   double ALPHA[2],BETA[2];
   integer tincY, tincx;
   double *x=(double *)X, *y=(double *)Y, *st=0, *tx;
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
         cblas_xerbla(2, "cblas_zhbmv","Illegal Uplo setting, %d\n",Uplo );
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      zhbmv_(F77_UL, &F77_N, &F77_K, alpha, A, &F77_lda, X,  
	     &F77_incX, beta, Y, &F77_incY);
   }
   else if (order == CblasRowMajor)
   {
      RowMajorStrg = 1;
      ALPHA[0]= *alp;
      ALPHA[1]= -alp[1];
      BETA[0]= *bet;
      BETA[1]= -bet[1];

      if (N > 0)
      {
         n = N << 1;
         x = malloc(n*sizeof(double));
 
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


	 incx = 1;
 
         if(incY > 0)
           tincY = incY;
         else
           tincY = -incY;
         y++;

         i = tincY << 1;
         n = i * N ;
         st = y + n;
         do {
            *y = -(*y);
            y += i;
         } while(y != st);
         y -= n;
      }  else
         x = (double *) X; 

      if (Uplo == CblasUpper) UL = 'L';
      else if (Uplo == CblasLower) UL = 'U';
      else 
      {
         cblas_xerbla(2, "cblas_zhbmv","Illegal Uplo setting, %d\n", Uplo);
         CBLAS_CallFromC = 0;
         RowMajorStrg = 0;
         return;
      }
      zhbmv_(F77_UL, &F77_N, &F77_K, (void*)ALPHA, 
	     A ,&F77_lda, (void*)x, &F77_incX, (void*)BETA, Y, &F77_incY);
   }
   else 
   {
      cblas_xerbla(1, "cblas_zhbmv","Illegal Order setting, %d\n", order);
      CBLAS_CallFromC = 0;
      RowMajorStrg = 0;
      return;
   }
   if ( order == CblasRowMajor )
   {
      RowMajorStrg = 1;
      if (X!=x)
         free(x);
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
   CBLAS_CallFromC = 0;
   RowMajorStrg = 0;
   return;
}
