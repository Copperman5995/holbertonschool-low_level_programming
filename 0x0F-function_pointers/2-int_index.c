#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - sherches for an int in an array
 * @array: the array that is looked through
 * @size: is the size of the array
 * @cmp: points to the function that will be used to look for ints.
 * Return: sdfgdf
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}
