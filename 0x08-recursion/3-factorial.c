#include "main.h"
#include <stdio.h>
/**
 * factorial - prints the factorials
 * @n: n is the int
 * Return: returns the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

