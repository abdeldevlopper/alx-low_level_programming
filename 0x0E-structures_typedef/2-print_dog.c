#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints dog's identification
 * @d: struct dog to print the identification of
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name = (d->name == NULL) ? "(nil)" : d->name;
	d->owner = (d->owner == NULL) ? "(nil)" : d->owner;

	printf("Name: %s\nAge: %f\nOwner: %s\n\n", d->name, d->age, d->owner);
}
