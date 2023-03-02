#include "function_pointers.h"
/**
 * array_iterator - prints that valus of an array
 * @array: the array that will be printed
 * @size: is the size of the array
 * @action: the function that will be pointed to print the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size < 0 || action == NULL)
		return;

	int i = 0;

	while( i <= size)
	{
		action(array[i]);
		i++;
	}
}


