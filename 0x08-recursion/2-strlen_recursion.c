#include "main.h"
/**
 * _strlen_recursion - returns lenghts of string using recusion
 * @s: the string
 * Returns the length of the string
 */

int _strlen_recursion(char *s)
{
	static int len = 0;

	if (*s == '\0')
	{
	}
	return (1 + _strlen_recursion(s + 1);
}
	
