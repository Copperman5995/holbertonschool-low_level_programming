#include "main.h"
#include <stdio.h>
/**
 * main - jfjjgjjgjgjgjjgjg
 *
 * Return: retursn nothing
 */

int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0 && (x % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((x % 3) != 0 && (x % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
		x++;
	}
	return (0);
}

