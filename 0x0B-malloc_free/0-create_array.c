#include "main.h"
#include <stdlib.h>
/**
 * create_array - crates an array
 * @size: will be the size of the array
 * @c: will be the thing in the array
 * Return: returns 0 in sizde is null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_array;

	if (size == 0)
	{
		return ("NULL");
	}

	new_array = (char*)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}
	return (new_array);
}

