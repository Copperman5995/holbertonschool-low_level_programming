#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: string that is being printed
 * Return: returns nothing
 */

void _puts_recursion(char *s)
{
	int index = 0;

	while (s[index])
	{
		printf("%d", s[index]);
		index++;
	}
}
