#include "main.h"

/**
 * _memset - main
 * @s : pointer
 * @b : pointer
 * @n : int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
