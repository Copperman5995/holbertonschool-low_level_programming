#include "holberton.h"
/**
 * reverse_array - kdjfkgjdkfjg
 * @a: dfgjhdfkjdjfru
 * @n: ldfjgkdfijgdf
 * Return: aksdfgdjfkd
 */

void reverse_array(int *a, int n)
{
	int temp;
	int temp2;
	int c1 = 0;
	int len = n - 1;

	while (c1 <= (n / 2))
	{
		temp = a[len];
		temp2 = a[c1];
		a[c1] = temp;
		a[len] = temp2;
		len--;
	}
}

