#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
