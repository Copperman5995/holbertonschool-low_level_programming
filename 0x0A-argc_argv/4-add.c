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
		if (argv[index] >= 'a' && argv[index] <= 'z')
		{
			printf("Error");
			return (1);
		}
		else
		{
			printf("Error");
			return (1);
		}
		sum = sum + atoi(argv[index]);
		index++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

