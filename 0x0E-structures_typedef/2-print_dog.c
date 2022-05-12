#include "dog.h"
#include <stdio.h>
/**
 * print_dog - entry point.
 * @d: struct dog.
 * Return: none.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
{
	if (d->name == NULL)
		printf("Name: %p\n", (void *)d->name);
	else if (d->owner == NULL)
		printf("Owner: %p\n", (void *)d->owner);
else
printf("Name: %s\n",  d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
