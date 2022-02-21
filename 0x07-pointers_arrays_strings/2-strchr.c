#include "main.h"
/**
 * _strchr - n 
 * @s : pointer
 * @c : char
 * Return: char
 */
char *_strchr(char *s, char c)
{
if (s != NULL)
while (*s)
{
	if (*s == c)
		return s;
	else
		s++;
}
return NULL;
}
