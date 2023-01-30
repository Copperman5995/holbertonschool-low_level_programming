#include "main.h"
/**
 * times_table - displays times table 0-9
 *
 * Return: always 0
 */
void times_table(void)
{
	int row = 0;
	int column = 0;
	long int x;

	while (row < 10)
	{
		while (column < 10)
		{
			x = row * column;
			if (x >= 10)
			{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(x + '0');
			}
			if (column < 10)
			{
				if (x >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
			column++;
		}
		column = 0;
		_putchar('\n');
		row++;
	}
}
