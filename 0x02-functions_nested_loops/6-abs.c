#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@n: is a interager
 *
 * Return: alwasy returns 0
 */
int _abs(int n)
{
	if (n >= 0) 
	{
		_putchar('0' + n);
	}
	else
	{
		n = n * -1;
		_putchar('0' + n);
	}
	return (0);
}
