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
	int f = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[f] != '\0')
	{
		f++;
	}
	while (i <= n)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
