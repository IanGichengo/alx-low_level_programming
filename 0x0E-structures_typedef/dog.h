#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type named dog
 * @name: element named name of type char
 * @age: element named age of type float
 * @owner: element named owner of type char
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
