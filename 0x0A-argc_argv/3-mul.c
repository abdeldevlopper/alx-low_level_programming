#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3) /* Check if the correct number of arguments is provided */
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* Convert the first argument to integer */
	num2 = atoi(argv[2]); /* Convert the second argument to integer */

	result = num1 * num2; /* Multiply the two numbers */

	printf("%d\n", result); /* Print the result */

	return (0);
}
