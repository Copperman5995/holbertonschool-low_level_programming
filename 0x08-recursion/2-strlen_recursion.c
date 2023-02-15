#include "main.h"
/**
 * _strlen_recursion - returns lenghts of string using recusion
 * @s: the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
