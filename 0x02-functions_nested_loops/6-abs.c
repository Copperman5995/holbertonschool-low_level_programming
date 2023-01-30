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
		_putchar(n);
	}
	else
	{
		n = n * -1;
		_putchar(n);
	}
	return (0);
}
