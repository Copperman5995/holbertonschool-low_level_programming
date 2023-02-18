#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - sdjkhfjsdf
 * @argc: dsfgd
 * @argv: kjfsdghjkdf
 * Return: dfgsd
 */

int main(int argc, char *argv[])
{
	int pro;
	int m1;
	int m2;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);

	pro = m1 * m2;
	printf("%d", pro);
	printf("\n");
	return (0);
}

