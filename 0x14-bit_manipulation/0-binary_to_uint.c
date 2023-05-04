#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    /* Declare variables */
	unsigned int uint;
	int len, base_two;

	/* Check if input string is NULL */
	if (!b)
		return (0);

	/* Initialize unsigned int and calculate length of input string */
	uint = 0;
	for (len = 0; b[len] != '\0'; len++)
		;

	/* Convert binary string to unsigned int */
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			uint += base_two;
		}
	}

	return (uint);
}
