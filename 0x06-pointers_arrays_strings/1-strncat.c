#include "holberton.h"
/**
 * _strncat - akldfbggk;ladjdgjdf
 * @dest: skdfgjhadkjsfagahl
 * @src: jkdfghdhfgjjdf
 * @n: jsdfgkjhdsjfhghskjdf
 * Return: dkfgjdsjfgjkd
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int f = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
		j++;
	}
	while (src[f] <= n)
	{
		if (src[f] == '\0')
		{
			break;
		}
		f++;
		j++;
	}

	while (i <= j)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	if (n < f)
	{
		dest[i] = '\0';
	}
	return (dest);
}
