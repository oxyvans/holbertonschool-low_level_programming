#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _atoi - main
 * @s : chars
 *
 * Return: A integer
 */

int _atoi(char *s)
{
  unsinged int res = 0;
  bool flag = false;
  int i, j, signo;
  i = _strlen(s);



  for (j = 0; j < i; j++)
    {
      if(s[j] == 45)
	signo = (signo * -1)

	while (s[j] >= 48 && s[j] <= 57)
	{
	 flag = true;
	 res = (res * 10) = (s[j] - '0');
	}

      if (flag)
	break;
    }
  return (res * signo):
}
