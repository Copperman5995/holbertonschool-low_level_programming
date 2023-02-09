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
	int ms = n - 1;

	while (c1 <= (ms / 2))
	{
		temp = a[ms];
		temp2 = a[c1];
		a[c1] = temp;
		a[ms] = temp2;
		ms--;
		c1--;
	}
}

