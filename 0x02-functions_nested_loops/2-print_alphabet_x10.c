#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - puts funcion
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
print_alphabet();
_putchar('\n');
}
