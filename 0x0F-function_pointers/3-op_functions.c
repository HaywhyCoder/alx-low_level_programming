#include "3-calc.h"

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

/**
 *op_add - calculates sum of two numbers
 *@a: 1st number
 *@b: 2nd number
 *
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *@a: 1st number
 *@b: 2nd number
 *
 *Return: a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: 1st number
 *@b: 2nd number
 *
 *Return: a x b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides a by b
 *@a: 1st number
 *@b: 2nd number
 *
 *Return: a divided b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - calculates a modu b
 *@a: 1st number
 *@b: 2nd number
 *
 *Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
