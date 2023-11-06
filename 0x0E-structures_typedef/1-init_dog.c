#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct
 * @d: points to variable
 * @name: element of type char
 * @age: element of type float
 * @owner: element of type char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
