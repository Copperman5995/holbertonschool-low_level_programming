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
	int sum;
	int index = 1;
	
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	while (argv[index])
	{
		sum = sum + atoi(argv[index]);
		index++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

