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
		if (b[i] == '1')
		{
			dec = ((2 * sum) + 1);
		}
		else if (b[i] == '0')
		{
			sum = sum * 2;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (dec);
}
