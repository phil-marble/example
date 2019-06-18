#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  if (rand () % 2 == 0)
    {
      printf ("hello world\n");
    }
  else
    {
      printf ("howdy world\n");
    }
  return 0;
}
