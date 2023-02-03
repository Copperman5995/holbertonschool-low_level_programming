#include "main.h"
/**
 * print_triangle - prints diagonal line
 *@n: int value
 *Return: returns nothing
 */

void print_triangle(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)

		{
			for (j = 0; j > i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}
