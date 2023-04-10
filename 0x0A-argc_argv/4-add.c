#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of arguments if they are numbers.
 *
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* check if arguments are provided */
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	/* process the arguments */
	for (i = 1; i < argc; i++)
	{
		/* check if argument is a number */
		char *endptr;
		long int num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		/* add number to sum */
		sum += num;
	}

	/* print the sum */
	printf("%d\n", sum);

	return (0);
}
