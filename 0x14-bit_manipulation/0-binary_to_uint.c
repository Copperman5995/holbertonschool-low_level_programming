#include "main.h"
#include "_pow.c"
#include <string.h>
/**
 * binary_to_uint - adsfgdsfg
 * @b: sdfgdsfg
 * Return: sdfgsdf
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int dec = 0;

	if (!b)
	{
		return(0);
	}

	while (b[i])
	{
		if (b[i] == '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			dec += _pow(2, strlen(b) - i - 1);
		}
		i++;
	}
	return (dec);
}
