#include "main.h"
/**
 * print_triangle - prints diagonal line
 *@size: int value
 *Return: returns nothing
 */

void print_triangle(int size)
{
	int space = size;
	int p = 1;
	int i = 0;
	int j;

	if (size > 0)
	{
		while (i < size)

		{
			for (j = 1; j <= size; j++)
			{
				if (space > p)
				{
					_putchar(' ');
					space--;
				}
				else
				{
					_putchar('#');
					space--;
				}
			}
			_putchar('\n');
			i++;
			space = size - i;
		}
	}
	else
	{
		_putchar('\n');
	}




}
