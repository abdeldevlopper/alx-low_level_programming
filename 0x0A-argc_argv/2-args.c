#include <stdio.h>

/**
 * main - This program prints all the arguments it receives in a new line
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i = 0;

	/* Use a while loop to iterate over all the arguments */
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
