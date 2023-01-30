#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n in 98
 * @n: is starting int
 * Return: returns 0
 */
void print_to_98(int n)
{
	int to = n;
	
	if (n > 98)
	{
		while (to >= 98)
		{
			if (to >= 10)
			{
				_putchar((to / 10) + '0');
				_putchar((to % 10) + '0');
			}
			else
			{
				_putchar(to + '0');
			}
			_putchar(',');
			_putchar(' ');
			to--;
		}
	}
	else if (n < 98)
	{
		while (to <= 98)
		{
			if ( to >= 10)
			{
				_putchar((to / 10) + '0');
				_putchar((to % 10) + '0');
			}
			else
			{
				_putchar(to + '0');
			}
			_putchar(',');
			_putchar(' ');
			to++;
		}
	}
	else if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
