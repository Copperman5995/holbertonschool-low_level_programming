#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *@n: int value
 *Return: returns nothing
 */

void print_diagonal(int n)
{
	/*int i = 0;
	int j = 0;*/

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
				/*j++;*/
			}
			/*i++;*/
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}
