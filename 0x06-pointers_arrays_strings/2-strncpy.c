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

	if (srclen < n)
	{
		while (c <= destlen)
		{
			if (c < n)
			{ 
				dest[c] = src[c];
			}
			else if (c >= n)
			{
				dest[c] = '\0';
			}
			c++;
		}
	}
	else
	{
		while (c < n)
		{
			dest[c] = src[c];
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
