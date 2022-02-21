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
	if (*s == c)
	{
		return (s);
	}
	else
	{
	if (*s == '\0')
	{
		return (0);
	}
	}
	s++;
}
return (s);
}
