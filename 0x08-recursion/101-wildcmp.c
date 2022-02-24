#include "main.h"
#include "2-strlen_recursion.c"

/**
 * wildcmp - main
 * @s1 : char
 * @s2 : char
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == 0 && *s2 == 0)
	return (1);

if (*s1 == 0 && *s2 == '*')
	return (wildcmp(s1, s2 + 1));

if (*s1 == 0 || *s2 == 0)
	return (0);

if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*')
{
	if (*(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	if (wildcmp(s1, s2 + 1) == 1)
		return (1);
	return (wildcmp(s1 + 1, s2));
}
return (0);
}


