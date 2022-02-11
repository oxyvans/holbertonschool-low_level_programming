#include "main.h"

/**
 * print_rev - main
 * @s : char
 * Return: 0
 */

void print_rev(char *s)
{
int i;
int c;
for (i = 0; s[i] != '\0'; i++)
{
}
for (c = i - 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
