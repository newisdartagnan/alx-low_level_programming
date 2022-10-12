#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Short description
 * @d: First member
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("nil\n");
	if (d == NULL)
		printf("\n");
}
