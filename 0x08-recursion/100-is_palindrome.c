#include "main.h"
#include "2-strlen_recursion.c"

/**
 * aux - main
 * @size : int
 * @i : int
 * @ss : int
 * @s : char;
 * Return: int
 */

int aux(int size, int ss, int i, char *s)
{
if (i > ss / 2)
	return (1);
if (s[i] == s[size])
{
	return (aux(size - 1, i + 1, s));
}
return (0);
}

/**
 * is_palindrome - main
 * @s : char
 * Return: int
 */

int is_palindrome(char *s)
{
int size = _strlen_recursion(s) - 1;
if (size == 0 || size == 1)
	return (1);
return (aux(size, size, 0, s));


}
