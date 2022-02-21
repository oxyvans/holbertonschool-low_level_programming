#include "main.h"

/**
 * _memcpy - main
 * @dest : pointer
 * @src : pointer
 * @n : int
 * Return: src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
