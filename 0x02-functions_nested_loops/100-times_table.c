#include "main.h"

/**
 * print_times_table - Entry point
 * @n : int
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
  if (n == 0)
    printf("%d\n", n);
  if (n > 0 && n <= 15)
    {
      int a, b, c;
      for (a = 0; a <= n; a++)
	{
	  for (b = 0; b <= n; b++)
	    {
	      c = a * b;
	      if (c < 10)
		{
		  if (b != 0)
		    printf("%s", "  ");
		  printf("%d", c);
		}
	      else
		  if (c >= 100)
		    printf("%d", c);
		  else
		    printf("%s %d", "", c);
	      if (b != n)
		printf("%s", ", ");
	    }
	  printf("\n");
	}
    }
}
