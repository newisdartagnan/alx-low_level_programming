#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Short description
 * @name: First member
 * @age: second member
 * @owner: third member
 * Description: Longer description
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));


	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	return (d);
}
