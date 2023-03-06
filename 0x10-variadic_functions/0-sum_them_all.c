#include "main.h"
/**
 * sum_them_all - adds all the together
 * @n: is the number of ints that will be added
 * Return: returns the sum of the ints
 */

int sum_them_all (const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	va_list ptr;

	va_start(ptr, n);

	while (i <= n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	 
	return (sum);
}
