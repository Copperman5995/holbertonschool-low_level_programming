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
	if (separatorn == NULL)
	{
		return;
	}

	va_start(yeet, n);

	while (i < n - 1)
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
		i++;
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
