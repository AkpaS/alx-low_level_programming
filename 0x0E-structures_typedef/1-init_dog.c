#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A func that initialize a variable of type struct dog
 *
 * @d: the struct dog
 * @name: the string for name
 * @age: the int for age
 * @owner: the string for owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
