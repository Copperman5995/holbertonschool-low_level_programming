#include "main.h"
/**
 *print_rev - gggggggggggggg
 *@s: ggggggggggggggg
 *Return: ggggggggggggggggggggg
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}

