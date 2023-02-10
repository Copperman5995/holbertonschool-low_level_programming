#include "holberton.h"
/**
 * cap_string - changes lowercse letter to uppercase
 * @str: akdsfgkldfg
 * Return: ksjdgkldkjf
 */

char *cap_string(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (!(str[len] >= 'a' && str[len] <= 'z') || (str[len] >= 'A' && str[len] <= 'Z'))
		{
			str[len + 1] = str[len + 1] - 32;
		}
		len++;
	}
	return (str);
}
