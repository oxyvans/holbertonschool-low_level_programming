#include "main.h"
#include "2-strlen_recursion.c"

/**
 * aux - main
 * @
 * @
 * Return: int
 */

int aux(char *s1, char *s2)
{
if (*s1 == 0 && *s2 == 0)
	return (1);
if (*s1 == 0 && *s2 == '*')
	return (aux(s1, s2 + 1));
if (*s1 == 0 || *s2 == 0)
	return (0);
if (*s1 == *s2)
	return (aux(s1 + 1, s2 + 1));

}

/**
 * wildcmp - main
 * @n : int
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
int size_s1 = _strlen_recursion(s1);
int size_s2 = _strlen_recursion(s2);
if (size_s1 != size_s2)
	return (0);
return (aux(s1, s2);
}


