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
		return ('\0');
	}
	else
	{
		new_array = malloc(size * sizeof(char));
	}

	if (s == NUL)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}
	return (new_array);
}

