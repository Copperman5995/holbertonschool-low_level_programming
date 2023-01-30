#include "main.h"
/**
 * print_last_digit - pritns last digit of number
 *@c: c is a interager
 * Return: return the last digit of c
 */
int print_last_digit(int c)
{
	int ld = c % 10;
	char rld = ld + ld;

	return (rld);
}
