#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a given function on each element of an array
 * @array: pointer to the array to be iterated
 * @size: size of the array
 * @action: pointer to the function to be executed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
