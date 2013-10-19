/* xerbla.f -- translated by f2c (version 20061008).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include <stdio.h>
#include <ctype.h>
#include "f2c.h"
#include "blaswrap.h"

/*  -- LAPACK auxiliary routine (preliminary version) -- */
/*     November 2006 */

/*  Purpose */
/*  ======= */

/*  XERBLA  is an error handler for the LAPACK routines. */
/*  It is called by an LAPACK routine if an input parameter has an */
/*  invalid value.  A message is printed and execution stops. */

/*  Installers may consider modifying the STOP statement in order to */
/*  call system-specific exception-handling facilities. */

/*  Arguments */
/*  ========= */

/*  SRNAME  (input) CHARACTER*(*) */
/*          The name of the routine which called XERBLA. */

/*  INFO    (input) INTEGER */
/*          The position of the invalid parameter in the parameter list */
/*          of the calling routine. */

/* ===================================================================== */
#define XerblaStrLen 6
#define XerblaStrLen1 7

void xerbla_(const const char *srname, const integer *info)
{
   char rout[] = {'c','b','l','a','s','_','\0','\0','\0','\0','\0','\0','\0'};

   extern integer CBLAS_CallFromC;

   if (CBLAS_CallFromC)
   {
      integer i;
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
