#include "function_pointers.h"
/**
 * print_name - prints name using wich ever funtion is pointed to
 * @name: the name that will be printed
 * @f: the function that is pointed to to print name
 * Return: sdfgsdfg
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

