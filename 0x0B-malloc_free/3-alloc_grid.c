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
	int **new_array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new_array = malloc(height * sizeof(int *));

	if (new_array == NULL)
	{
		return (NULL);
	}

	while (h <= height)
	{
		new_array = malloc(width * sizeof(int));
		if (new_array[h] == NULL)
		{
			for (w = h; w >= 0; w--)
			{
				free(new_array[w]);
			}
			free(new_array);
			return (NULL);
		}
	}
	h = 0;
	w = 0;

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
