#include "3-calc.h"
/**
 * get_op_func - selects the correct function for the operation selected
 * @s: is the operator passed
 * Return: returns something
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = { 
		{"+", op_add}, 
		{"-", op_sub}, 
		{"*", op_mul}, 
		{"/", op_div}, 
		{"%", op_mod}, 
		{NULL, NULL} 
	};
	int i = 0;


	if (strlen(s) != 1)
		return (NULL);

	while (ops[i].op != NULL && ops[i].op != s)
	{
		i++;
	}

	return (ops[i].f);
}

