#include "holberton.h"
/**
 * cap_string - changes lowercse letter to uppercase
 * @str: akdsfgkldfg
 * Return: ksjdgkldkjf
 */

char *cap_string(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] == ' ')
		{
			len++;
			if (str[len] >= 'a' && str[len] <= 'z')
			{
				str[len] = str[len] - 32;
			}

		}
		len++;
	}
	return (str);
}
