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
	int l1;

	if (n <= 0)
	{
	}
	else
	{
		while (c < n)
		{
			l1 = n - 1;
			while (c2 < l1)
			{
				_putchar(' ');
				c2++;
			}
			_putchar('\n');
			c++;
			l1= l1 + 2;
			c++;
		}
	}
	_putchar('\n');
}
