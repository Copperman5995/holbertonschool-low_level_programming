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
	int len1, len2, index;
	char *new_array;

	if ( s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	new_array = malloc((len1 + len2) * sizeof(char) + 1);
	if (new_array == NULL)
	{
		return (NULL);
	}
	len1 = 0;
	len2 = 0;
	index = 0;
	while (s1[len1])
	{
		new_array[index] = s1[len1];
		len1++;
		index++;
	}
	while (s2[len2])
	{
		new_array[index] = s2[len2];
		len2++;
		index++;
	}
	
	return (new_array);
}


