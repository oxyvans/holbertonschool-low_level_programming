#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - main
 * @str : chars
 * Return:
 */

void puts_half(char *str)
{
int i;
for ((i = ((_strlen(str) - 1) / 2)); i < _strlen(str) - 1 ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
