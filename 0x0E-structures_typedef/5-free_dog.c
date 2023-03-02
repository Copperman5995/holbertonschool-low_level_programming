#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - sdfgsdfg
 * @d: sdfgdf
 * Return: sdfgdsf
 */

void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
}
