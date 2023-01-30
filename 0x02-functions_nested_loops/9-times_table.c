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
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
			column++;
		}
		column = 0i;
		_putchar('\n');
		row++;
	}
}
