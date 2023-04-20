#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the remainder of the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * main - program that performs simple operations
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int ar1, ar2, result;
	char op;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(av[1]);
	ar2 = atoi(av[3]);

	func = get_op_func(av[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *av[2];

	if ((op == '/' || op == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(ar1, ar2);

	printf("%d\n", result);

	return (0);
}
