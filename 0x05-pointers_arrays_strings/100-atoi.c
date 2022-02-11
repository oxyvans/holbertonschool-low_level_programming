#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
#include <stdbool.h>
/**
 * _atoi - main
 * @s : chars
 *
 * Return: A integer
 */

int _atoi(char *s)
{
unsigned int res = 0;
bool flag = false;
int i, j, signo;
i = _strlen(s);
signo = 1;
for (j = 0; j < i; j++)
{
if (s[j] == '-')
{
signo = (signo * -1);
}
while (s[j] >= '0' && s[j] <= '9')
{
flag = true;
res = (res * 10) + (s[j] - '0');
j++;
}
if (flag)
{
break;
}
}
return (res *signo);
}
