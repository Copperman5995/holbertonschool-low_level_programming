#include "main.h"
#include <stdlib.h>
/**
 * _strdup - sdfgdsfg
 * @str: dsfgdsfg
 * Return: dfgsdfgdsf
 */

char *_strdup(char *str)
{
	char *new_array;
	int index1 = 0;
	int index2 = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[index1])
	{
		index1++;
	}
	new_array = malloc(index1 * sizeof(char) + 1);
	if (new_array == NULL)
	{
		return (NULL);
	}

	while (index2 <= index1)
	{
		new_array[index2] = str[index2];
		index2++;
	}
	return (new_array);
}
