#include "holberton.h"
/**
 * _strcat - afdgiadrlkjgntekjnbkjtnkjdet
 * @dest: kdjfgjsjdjtr
 * @src: sdklfngkjsdkljghkjdt
 * Return: kdfglsdjghjt
 */

char *_strcat(char *dest, char *src)
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
	while (src[f] != '\0')
	{
		f++;
		j++;
	}

	while (i <= j)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

