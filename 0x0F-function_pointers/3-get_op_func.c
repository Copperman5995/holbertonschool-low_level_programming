#include "3-calc.h"
/**
 * slen - finds string lenght
 * @str: string
 * Return: returns the lenght of str
 */

int slen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * get_op_func - selects the correct function for the operation selected
 * @s: is the operator passed
 * Return: returns something
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = { {"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod} {NULL, NULL} };
	int i = 0;


	if (slen(s) != 1)
		return (NULL);

	while (ops[i] != NULL || ops[i] != s)
	{
		i++;
	}

	return (ops[i].f);
}

