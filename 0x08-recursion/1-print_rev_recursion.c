#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string using recursion
 * @s: string that is being printed
 * Return: returns nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		printf("%c", *s);
		_print_rev_recursion(s + 1);
	}
	return;
}
