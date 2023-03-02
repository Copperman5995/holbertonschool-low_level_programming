#ifndef DOG_H
#define DOG_H
/**
 * struct dog - sdfgdsg
 * @name: asdfgasdf
 * @age: asdfef
 * @owner: asdfasdf
 * Description: asdfasdfdsa
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
