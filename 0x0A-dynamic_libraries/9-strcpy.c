#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strcpy - djkfgjshdfjglk
 * @dest: jdfhgjhd
 * @src: kdfjgldjfg
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	return (dest);
}
