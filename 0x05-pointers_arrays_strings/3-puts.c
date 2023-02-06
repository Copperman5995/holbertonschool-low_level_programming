#include "main.h"
/**
 *_puts - gggggggggggggg
 *@str: ggggggggggggggg
 *Retur: ggggggggggggggggggggg
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}


