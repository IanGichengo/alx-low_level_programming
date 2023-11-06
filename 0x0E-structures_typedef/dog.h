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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
