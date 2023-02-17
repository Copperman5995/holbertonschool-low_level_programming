#include "main.h"
/**
 * _strncat - akldfbggk;ladjdgjdf
 * @dest: skdfgjhadkjsfagahl
 * @src: jkdfghdhfgjjdf
 * @n: jsdfgkjhdsjfhghskjdf
 * Return: dkfgjdsjfgjkd
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = _strlen(dest);
	int srclen = _strlen(src);
	int i = 0;
	int c = 0;

	if (n < srclen)
	{
		srclen = n;
	}
	while (i < srclen)
	{
		dest[destlen] = src[c];
		i++;
		c++;
		destlen++;
	}
	if (n < srclen)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}





/**
 * _strlen - kdfgldfkjghlsdfhg
 * @s: dknfgdjfnghkd
 * Return: sdjfgkjdf
 */



int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
