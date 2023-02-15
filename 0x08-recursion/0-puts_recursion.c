#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string using recursion
 * @s: string that is being printed
 * Return: returns nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s - 1);
		printf("%c", *s);
	}
}
