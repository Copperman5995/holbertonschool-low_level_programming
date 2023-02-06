#include "main.h"
/**
 *rev_string - gggggggggggggg
 *@s: ggggggggggggggg
 *Return: ggggggggggggggggggggg
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	i--;
	_putchar('\n');
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}


