#include <stdio.h>
#include "dog.h"
/**
 * init_dog - asdgfasdf
 * @d: asfgas
 * @name: asdfs
 * @age: asdfs
 * @owner: asdfsad
 * Return: asdfasd
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
