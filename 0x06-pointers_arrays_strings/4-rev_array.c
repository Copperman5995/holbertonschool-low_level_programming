#include "holberton.h"
/**
 * reverse_array - kdjfkgjdkfjg
 * @a: dfgjhdfkjdjfru
 * @n: ldfjgkdfijgdf
 * Return: aksdfgdjfkd
 */

void reverse_array(int *a, int n)
{
	int first;
	int last;
	int len = n - 1;

	while (len >= (n / 2))
	{
		first = a[len];
		last = a[n - 1 - len];
		a[n - 1 - len] = first;
		a[len] = last;
		len--;
	}
}

