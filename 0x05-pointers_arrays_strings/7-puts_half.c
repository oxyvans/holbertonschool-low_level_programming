#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - main
 * @str : chars
 * Return:
 */

void puts_half(char *str)
{
int i, j;
 
if (_strlen(str) % 2 == 0)
j = _strlen(str);
else
j = _strlen(str) - 1;
for (i = j / 2; i < _strlen(str); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}