#include "main.h"
/**
 * set_bit - sdfgdfsgd
 * @n: sdfgdfg
 * @index: sdfgdfg
 * Return: sdfgdsfg
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(long) * 8)
	{
		return (-1);
	}

	*n = (1 << (unsigned long)index) | *n;

	return (1);
}
