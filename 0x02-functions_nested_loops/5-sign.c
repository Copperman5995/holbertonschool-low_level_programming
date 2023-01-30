#include "main.h"
/**
 * print_sign - determisn if c is pos or neg then returns sing
 * @n: is a int
 * Return: returns 1 and prints + is n is grater than 0, returns 0 and prints 0 is n is 0, returns -1 and prints - if n is less than 0
 */
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
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
