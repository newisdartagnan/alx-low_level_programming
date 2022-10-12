#ifndef DOG
#define DOG
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <math.h>


/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
typedef struct dog dog;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
