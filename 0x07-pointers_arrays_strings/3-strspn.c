#include "main.h"

/**
 * _strspn - number of bytes in the initial segment of s which consist only of bytes from accept
 * @s : pointer
 * @saccept : pointer
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, res = 0, flag = 0;
for ( i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			res++;
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag != 1)
		break;
}
return (res);
}
