#include "main.h"
/**
 * add - adds int a to int b 
 * @a: first int
 * @b: second int
 * Return: returns the result of int a plus int b
 */
int add(int a, int b)
{
	int r = a + b;
	if ( r >= 10)
	{
		_putchar((r / 10) + '0');
		_putchar((r % 10) + '0');
	}
	else
	{
		_putchar(r + '0');
	}
	return (r);
}
