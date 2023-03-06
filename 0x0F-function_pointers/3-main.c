#include "3-calc.h"
/**
 * main - does main things
 * @argc: counts the arguments
 * @argv: stroes the arguments
 * Return: returns 0
 */

int main (int argc, char *argv[])
{
	int a;
	int b;
	char *optype;
	int (*equation)(int, int);

	if (argc != 4)
	{
		printf("Error 1\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	optype = argv[2];
	equation = get_op_func(optype);

	if (equation == NULL)
	{
		printf("Error 2\n");
		exit(99);
	}

	if ((strcmp(optype, "/") == 0 || strcmp(optype, "%") == 0) && b == 0)
	{
		printf("Error 3\n");
		exit(100);
	}

	printf("%d\n", equation(a, b));
	return (0);
}


	

