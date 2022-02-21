#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest : pointer
 * @src : pointer
 * @n : int
 * Return: src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for ( i = 0; i < n; i++)
{
 src[i] = dest[i];
}
return (src);
}
