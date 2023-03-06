#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds int a and int b
 * @a: first int
 * @b: second int
 * Return: returns that sum of a and b
 */
int op_add(int a, int b)
{
	int i = a + b;

	return (i);
}
/**
 * op_sub - subtracts a from b
 * @a: first int
 * @b: second int
 * Return: retruns difference of a and b
 */
int op_sub(int a, int b)
{
	int i = a - b;

	return (i);
}
/**
 * op_mul - multiplys a by b
 * @a: first int
 * @b: second int
 * Return: retruns product of a and b
 */
int op_mul(int a, int b)
{
	int i = a * b;

	return (i);
}
/**
 * op_div - subtracts a from b
 * @a: first int
 * @b: second int
 * Return: retruns result of a divided by b
 */
int op_div(int a, int b)
{
	int i = a / b;

	return (i);
}
/**
 * op_mod - finds the remainder of a divided by b
 * @a: first int
 * @b: second int
 * Return: retruns the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	int i = a % b;

	return (i);
}
