#include "main.c"
/**
 * get_bit - sdfgdfg
 * @n: sdfgdf
 * @index: sdfgdfg
 * Return: sdfgdfg
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n <= 1)
	{
		return (n % 2);
	}

	while (n >= 1)
	{
		if (i >= index)
		{
			break;
		}
		n /= 2;
		i++;
	}

	if (index > i && index < sizeof(long int) * 8)
	{
		return (0);
	}
	if (index > sizeof(long int) * 8)
	{
		return (-1);
	}

	return (n % 2);
}

