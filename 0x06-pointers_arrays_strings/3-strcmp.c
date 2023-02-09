#include "holberton.h"
/**
 * _strcmp - ksdflkgkdfjgjf
 * @s1: kdfkgkjdfgdfjgdj
 * @s2: jsdfghkjdfshgjhdfkjbhhjdf
 * Return: sdhfjghsdkfhkhj
 */

int _strcmp(char *s1, char *s2)
{
	int c1 = 0;
	int c2 = 0;
	int t1;
	int t2;

	while (s1[c1] != '\0')
	{
		t1 = t1 + s1[c1];
		c1++;
	}

	while (s2[c2] != '\0')
	{
		t2 = t2 + s2[c2];
		c2++;
	}

	if (t1 < t2)
	{
		return (-1);
	}
	else if (t1 > t2)
	{
		return (1);
	}
	else if (t1 == t2)
	{
		return (0);
	}
}
