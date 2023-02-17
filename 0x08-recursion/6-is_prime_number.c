#include "main.h"
/**
 * is_prime_number - tell if a number is prime
 * @n: is number 
 * Return: returns 1 if the n is a prime number
 */

int is_prime_number(int n)
{
	int c;
	
	if (n == 0 || n == 1)
	{
		return (0);
	}

	for (c = 2; c <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
