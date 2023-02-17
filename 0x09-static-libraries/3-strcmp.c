#include "holberton.h"
/**
 * _strcmp - ksdflkgkdfjgjf
 * @s1: kdfkgkjdfgdfjgdj
 * @s2: jsdfghkjdfshgjhdfkjbhhjdf
 * Return: sdhfjghsdkfhkhj
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
