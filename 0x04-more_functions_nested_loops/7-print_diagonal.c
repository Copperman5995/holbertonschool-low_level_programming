#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *@n: int value
 *Return: returns nothing
 */

void print_diagonal(int n)
{

	if (n > 0)
	{
		for (int i = 0 ; i < n; i++)

		{
			for (int j = 0; j < i; j++)
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
