#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints the minimum number of coins to make change
 * for an amount of money.
 *
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Check the number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer */
	cents = atoi(argv[1]);

	/* Check if the number is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the number of coins */
	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	/* Print the number of coins */
	printf("%d\n", coins);

	return (0);
}
