#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the beginning of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp;
	size_t count = 0;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *) current, current->n);
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *) current, current->n);
			exit(98);
		}
	}

	return (count);
}
