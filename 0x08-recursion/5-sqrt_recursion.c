#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - sdfgsdfg
 * @n: sdfgsdfg
 * Return: sdfgsdfg
 */

int _sqrt_recursion(int n)
{
	return(_sqrt(n, 1));
}

/**
 * _sqrt - sdfgsdfg
 * @n: dfgsd
 * @i: dfgsdfg
 * Return: sdfgsdf
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n )
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

