#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  char *p = 0;
  *p = 42;
  exit(0);
}