#include "main.h"
/**
 * more_numbers - jfdjaergidfgiarjgig
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int c = 0;
	int i = 0;

	while (c < 10)
	{
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			i++;
		}
		_putchar('\n');
		i = 0;
		c++;
	}
}
