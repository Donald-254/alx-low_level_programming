#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: answer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: answer
 */
int op_sub(int a, int b)
{
        return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: answer
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: answer
 */
int op_div(int a, int b)
{
        return (a / b);
}
/**
 * op_mod - remainder two numbers
 * @a: first number
 * @b: second number
 * Return: answer
 */
int op_mod(int a, int b)
{
        return (a % b);
}
