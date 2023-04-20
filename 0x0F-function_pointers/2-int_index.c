#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to the function that will compare integers
 *
 * Return: returns the index of the first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);

		i++;
	}

	return (-1);
}
