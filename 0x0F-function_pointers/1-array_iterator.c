#include "function_pointers.h"
/**
 * array_iterator - prints that valus of an array
 * @array: the array that will be printed
 * @size: is the size of the array
 * @action: the function that will be pointed to print the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}


