#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *@n: int value
 *Return: returns nothing
 */

void print_diagonal(int n)
{
	int c = 0;
	int c2 = 0;

	if (n <= 0)
	{
	}
	else
	{
		while (c < n)
		{
			while (c2 < n)
			{
				_putchar('');
				c2++;
			}
			_putchar('\n');
			c++;
		}
	}
	_putchar('\n');
}
