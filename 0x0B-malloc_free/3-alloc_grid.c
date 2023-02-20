#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - asdfgsdg
 * @width: sdfgr
 * @height: sdfgsdfg
 * Return: sdfgsdfg
 */

int **alloc_grid(int width, int height)
{
	int w = 0;
	int h = 0;
	int *new_array;

	while (w <= width)
	{
		while (h <= height)
		{
			new_array[w][h] = 0;
			h++;
		}
		h = 0;
		w++;
	}
	return (new_array);
}
