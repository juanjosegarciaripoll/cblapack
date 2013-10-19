#include <stdio.h>
#include <ctype.h>
#include "cblas.h"
#include "blaswrap.h"

#define XerblaStrLen 6
#define XerblaStrLen1 7

void xerbla_(char *srname, void *vinfo)
{
   char rout[] = {'c','b','l','a','s','_','\0','\0','\0','\0','\0','\0','\0'};

   integer *info=vinfo;
   integer i;

   extern integer CBLAS_CallFromC;

   if (CBLAS_CallFromC)
   {
      for(i=0; i != XerblaStrLen; i++) rout[i+6] = tolower(srname[i]);
      rout[XerblaStrLen+6] = '\0';
      cblas_xerbla(*info+1,rout,"");
   }
   else
   {
      fprintf(stderr, "Parameter %d to routine %s was incorrect\n",
              *info, srname);
   }
}
