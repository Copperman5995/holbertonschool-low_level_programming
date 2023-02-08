#include "holberton.h"
/**
 * _strncpy - sdjfgjdfjgsdh
 * @dest: djfgkdfgfgkjd
 * @src: dkfjgdjfkg
 * @n: odfjogjiseif
 * Return: dkfgkjdjfgjh
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = _strlen(src);
	int destlen = _strlen(dest);
	int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	if (srclen < n)
	{
		while (c <= destlen)
		{
			dest[c] = '\0';
			c++;
		}
	}
	return (dest);
}

/**
 * _strlen - sdkgjjfgifdsf
 * @s: dfkgkjdkfjg
 * Return: dkfgkjdfj
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
