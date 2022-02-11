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
i = _strlen(str);
if (i % 2 != 0)
{
i = ((i / 2) + 1);
}
else
{
i = i / 2;
}
for (j = i; str[j] != '\0'; j++)
_putchar(str[j]);
_putchar('\n');
}
