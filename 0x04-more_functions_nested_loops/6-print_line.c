#include "main.h"
/**
 * print_line - prints line
 *@n: int value
 *Return: returns nothing
 */

void print_line(int n)
{
	int c = 0;

	if (n <= 0)
	{
	}
	else
	{
		while (c < n)
		{
			_putchar('_');
			c++;
		}
	}
	_putchar('\n');
}
