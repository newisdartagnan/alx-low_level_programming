#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Short description
 * @d: First member
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age >= 0 ? printf("Age: %6f\n", d->age) : printf("Age: (nil)\n");
	d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");

}
