#include "holberton.h"
/**
 * cap_string - changes lowercse letter to uppercase
 * @str: akdsfgkldfg
 * Return: ksjdgkldkjf
 */

char *cap_string(char *str)
{
    int len = 0;

<<<<<<< HEAD
	while (str[len])
	{
		if (!(str[len] >= 'a' && str[len] <= 'z') || (str[len] >= 'A' && str[len] <= 'Z'))
		{
			str[len + 1] = str[len + 1] - 32;
		}
		len++;
	}
	return (str);
=======
    while (str[len])
    {
        if (!(str[len] >= 'a' && str[len] <= 'z' || str[len] >= 'A' && str[len] <= 'Z'))
        {
            if (!(str[len + 1] >= 'a' && str[len] <= 'z' || str[len] >= 'A' && str[len] <= 'Z'))
            {
            }
            else
            {
                str[len + 1] = str[len + 1] - 32;
            }
        }
        len++;
    }
    return (str);
>>>>>>> 16b8dce46ff3d4777339fb99d1f2f07ce1c2d4eb
}
