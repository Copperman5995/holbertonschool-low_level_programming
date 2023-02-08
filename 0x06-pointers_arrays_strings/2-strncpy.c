#include "holberton.h"
/**
 * _strncpy - sdjfgjdfjgsdh
 * @dest: djfgkdfgfgkjd
 * @src: dkfjgdjfkg
 * @n: odfjogjiseif
 */

char *_strncpy(char *dest, char *src, int n)
{
	//int destlen = _strlen(dest);//
	int c = 0;

	while (c <= n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);





}


/*int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}*/
