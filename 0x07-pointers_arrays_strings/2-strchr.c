#include "main.h"
/**
 * _strchr - pointer to the first occurrence of the character c in the string s, or NULL if the character is not found 
 * @s : pointer
 * @c : char
 * Return: char
 */
char *_strchr(char *s, char c)
{
while (*s)
{
	if (*s == c)
		return s;
	else
		s++;
}
return NULL;
}
