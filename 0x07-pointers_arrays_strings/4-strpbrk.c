#include "main.h"

/**
 * _strpbrk - main
 * @s : pointer
 * @accept : pointer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j, flag = 0;
while (*s)
{
	for (j = 0; accept[j] != '\0'; j++)
	if (s[i] == accept[j])
	{
		flag = 1;
		break;
	}
	else
	{
		flag = 0;
	}
	if (flag == 1)
	break;
s++;
}
if (flag == 1)
return (s);
else
return (0);
}

