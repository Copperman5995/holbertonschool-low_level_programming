#include "main.h"
/**
 * print_binary - adfgsdfg
 * @n: sd gsdfg
 * Return: sdfgd
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	print_binary(n >> 1);

	_putchar(n - 2 * (n >> 1) + '0');
}
