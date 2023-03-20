#include "stdlib.h"
#include "main.h"
#include "dog.h"

/**
 * print_dog - displays all the details about the dog
 * @d: struct object dog inside file dog_h
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);

	printf("Name: %s\n"d->name);
	printf("Age: %f\n"d->age);
	printf("Owner: %s\n", d->owner);
}
