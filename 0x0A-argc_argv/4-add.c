#include <stdio.h>
#include <stdlib.h>
/**
 * main - sdfsdf
 * @argc: fdgsd
 * @argv: dsfgd
 * Return: sdfgdfgs
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int index = 1;

	if (argc <= 1)
	{
		printf("%d", sum);
		return (0);
	}
	while (argv[index])
	{
		if (!(argv[index] >= 'a' && argv[index] <= 'z'))
		{
			if (!(argv[index] >= 'A' && argv[index] <= 'Z'))
			{
				sum = sum + atoi(argv[index);
			}
		}
		else
		{
			printf("Error");
			return (1);
		}
		index++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

