#include <f2c.h>

extern int MAIN__(void);

int main(int argc, char **argv)
{
  int n;
  libf2c_init(argc, argv);
  n = MAIN__();
  libf2c_close();
  return n;
}
