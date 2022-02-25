#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc : size
 * @argv : char
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
*argv = *argv;
argc--;
printf("%d\n", argc);
return (0);
}
