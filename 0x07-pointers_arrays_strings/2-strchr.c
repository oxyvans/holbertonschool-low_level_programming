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
while (*s)
{
	if (s == NULL)
		return (0);
	if (*s == c)
		return (s);
	else
		s++;
}
return (s);
}
