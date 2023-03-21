#include "main.h"
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
		return (0);
	}

	while (b[i])
	{
		if (b[i] == '1')
		{
			dec = ((2 * dec) + 1);
		}
		else if (b[i] == '0')
		{
			dec = dec * 2;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (dec);
}
