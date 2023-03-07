#include "variadic_functions.h"
/**
 * print_strings - prints words
 * @separator: sdfsdf
 * @n: sdfgsdfg
 * Return: sdfger
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list yeet;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(yeet, n);

	while (i < n)
	{
		s = va_arg(yeet, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	s = va_arg(yeet, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s\n", s);
	}
}
