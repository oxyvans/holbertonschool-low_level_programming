#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - main
 * @a : int
 * @b : int
 * Return: op
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - main
 * @a : int
 * @b : int
 * Return: op
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - main
 * @a : int
 * @b : int
 * Return: op
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - main
 * @a : int
 * @b : int
 * Return: op
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - main
 * @a : int
 * @b : int
 * Return: op
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
