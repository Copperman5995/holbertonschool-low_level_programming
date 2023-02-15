#include "main.h"
/**
 * _strlen_recusrion - returns lenghts of string using recusion
 * @s: the string
 * Returns the length of the string
 */

int _strlen_recusrion(char *s)
{
	static int len = 0;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(++s);
	}
	return (len);
}
	
