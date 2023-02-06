#include "main.h"
/**
 * puts-half - dgshhdfsjnsdkjbltrs
 * @str: jdfgkjhdjfhgkjdhkjth
 * Return: dkjnfgkjhsdlfhgj
 */

void puts_half(char *str)
{
	int i, half;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	half = i / 2;
	if ((half % 2) != 0)
	{
		half = half + 1;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
