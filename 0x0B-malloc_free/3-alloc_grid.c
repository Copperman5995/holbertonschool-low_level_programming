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
	int c, i;
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
		free(new_array);
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		new_array[c] = malloc(width * sizeof(int));
		if (new_array[c] == NULL)
		{
			for (i = c; i >= 0; i--)
			{
				free(new_array[i]);
			}
			free(new_array);
			return (NULL);
		}
	}
	while (h < height)
	{
		while (w < width)
		{
			new_array[h][w] = 0;
			w++;
		}
		w = 0;
		h++;
	}
	return (new_array);
}
