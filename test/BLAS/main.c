#include <f2c.h>
#include "main.h"


int main(int argc, char **argv)
{
  int n;
  libf2c_init(argc, argv);
  n = MAIN__();
  libf2c_close();
  return n;
}
