#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;
  int las;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  las = (n % 10);
  if (las > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, las);
    }
  else
    {
      if (las < 6)
	{
	  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, las);
	}
      else
	{
	  printf("Last digit of %d is %d and is 0\n", n, las);
	}
    }

  return (0);
}
