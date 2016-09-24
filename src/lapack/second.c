#include "f2c.h"
#include <time.h>

#if defined(_MSC_VER) || defined(__MINGW32__)

doublereal second_()
{
  return ((doublereal)clock())/CLOCKS_PER_SEC;
}
#endif

#if !defined(_MSC_VER) && !defined(__MINGW32__)
#include <sys/times.h>
#include <sys/types.h>

#ifndef CLK_TCK
#define CLK_TCK 60
#endif

doublereal second_()
{
  struct tms rusage;

  times(&rusage);
  return (doublereal)(rusage.tms_utime) / CLK_TCK;

} /* second_ */
#endif
