#include "3-calc.h"
/**
 * main - does main things
 * @argc: counts the arguments
 * @argv: stroes the arguments
 * Return: the end reslut mabye
 */

int main (int argc, char *argv[])
{
	int a;
	int b;
	char *optype;
	int (*oppassed)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	optype = argv[2];
	oppassed = get-op_func(optype);

	if (oppassed == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	

