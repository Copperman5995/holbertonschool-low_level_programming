#include "main.h"
/**
 * print_square - prints diagonal line
 *@n: int value
 *Return: returns nothing
 */

void print_square(int size)
{
	int c = 0;
	int c2 = 0;

	if (size <= 0)
	{
	}
	else
	{
		while (c < size)
		{
			while (c2 < size)
			{				
				_putchar(' ');
				c2++;
			}
			_putchar('\n');
			c++;
		}
	}
	_putchar('\n');
}
