/**
 * print_sign - determisn if c is pos or neg then returns sing
 * @n: is a int
 * Return: returns 1 and if n > than 0, returns 0 if n = 0, returns -1 if n < 0 
 */
#include "main.h"
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
