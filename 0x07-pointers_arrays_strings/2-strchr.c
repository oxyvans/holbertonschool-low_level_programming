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
while (*s != c && *s != '\0')
s++;
if (c != '\0' && *s == '\0')
return ('\0');
else
return (s);
}
