#include "main.h"
/**
 * is_prime_number - tell if a number is prime
 * @n: is number
 * Return: returns 1 if the n is a prime number
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	if (n % 1 == 0 && n % n == 0 && n % (n / 2) != 0)
	{
		return (1);
	}
	return (0);
}
