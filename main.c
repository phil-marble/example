#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

int
main ()
{
  srand ((unsigned int) time (NULL) + getpid ());
  switch (rand () % 5)
    {
    case 0:
      printf ("hello world\n");
      break;
    case 1:
      printf ("howdy world\n");
      break;
    case 2:
      printf ("hola mundo\n");
      break;
    case 3:
      printf ("yo bro\n");
      break;
    case 4:
      printf ("yowza!\n");
      break;
    }
  return 0;
}
