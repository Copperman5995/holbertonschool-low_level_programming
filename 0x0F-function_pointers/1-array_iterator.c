#include "function_pointers.h"
/**
 * array_iterator - prints that valus of an array
 * @array: the array that will be printed
 * @size: is the size of the array
 * @action: the function that will be pointed to print the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == NULL || action == NULL)
		return;

	int i;

	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}


