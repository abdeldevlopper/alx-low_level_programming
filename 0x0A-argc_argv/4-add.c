#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc < 2) /* check if arguments are provided */
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++) /* iterate through each argument */
	{
		for (j = 0; argv[i][j]; j++) /* check if each character is a digit */
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]); /* add the number to the sum */
	}

	printf("%d\n", sum); /* print the sum */
	return (0);
}
