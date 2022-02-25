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
int i = atoi(argv[1]), j = 0, c = 0;
int coins[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
	printf("%s\n", "Error");
	return (1);
}
if (i <= 0)
	printf("%d\n", 0);
else
{
	for (j = 0; j < 5; j++)
	{
		while ((i - coins[j]) >= 0)
		{
			i -= coins[j];
			c++;
		}
	}
}
printf("%d\n", c);
return (0);

}
