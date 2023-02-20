#include "main.h"
#include <stdlib.h>
/**
 * str_concat - sdfgsadgdaf
 * @s1: dfgdsf
 * @s2: sdfgfd
 * Return: sdfgdsfg
 */ 

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int index = 0;
	char *new_array;


	if ( s1 != NULL)
	{
		while (s1[len1])
		{
			len1++;
			index++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len2])
		{
			len2++;
			index++;
		}
	}

	new_array = malloc(index * sizeof(char) + 1);

	if (new_array == NULL)
	{
		return (NULL);
	}

	len1 = 0;
	len2 = 0;
	index = 0;
	if (s1 != NULL)
	{
		while (s1[len1])
		{
			new_array[index] = s1[len1];
			len1++;
			index++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2])
		{
			new_array[index] = s2[len2];
			len2++;
			index++;
		}
	}
	return (new_array);
}


