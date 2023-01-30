#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n in 98
 * @n: is starting int
 * Return: returns 0
 */
void print_to_98(int n)
{
	
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	_putchar('\n');
}
