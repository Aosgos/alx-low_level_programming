#include "dog.h"

/**
 * init_dog - initialize a variable of type 'struct dog'
 * @d: struct dog.
 * @name: name in char
 * @age: float for age in char
 * @owner: Dog owner in char
 * Return: nill
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
