#include <stdio.h>

/**
 * main - puts funcion
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
if ((ch == 'e') || (ch == 'q'))
ch++;
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
