#include "main.h"
#include <assert.h>
/**
 * _strchr - n
 * @s : pointer
 * @c : char
 * Return: char
 */
char *_strchr(char *s, char c)
{
assert(s != NULL);
while (*s)
{
	if (*s == c)
		return (s);
	else
		s++;
}
return (0);
}
