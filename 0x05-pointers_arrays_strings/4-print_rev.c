#include "main.h"
/**
 *print_rev - gggggggggggggg
 *@s: ggggggggggggggg
 *Return: ggggggggggggggggggggg
 */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; s[i] >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}


