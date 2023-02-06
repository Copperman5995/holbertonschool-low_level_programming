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
	free(dest);
	src = dest;
	dest = NULL;
	src[i] = '\n';
	return (dest);
}
