#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: a comma and a space
 * @n: the numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ptr;

	va_start(ptr, n);

	while (i < n - 1)
	{
		printf("%d\n", va_arg(ptr, int));
		printf("%s", separator);
		i++;
	}
}
