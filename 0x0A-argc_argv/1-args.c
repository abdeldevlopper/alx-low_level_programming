#include <stdio.h>

/**
 * main - This program prints the number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 if success
*/
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return  (0);
}
