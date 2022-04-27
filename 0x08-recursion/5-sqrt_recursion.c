#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - checks the input number from n to the base
 * @x: number is squared and compared against y
 * @y: y number to check
 * Return: natural square root of number y
 */
int _pow_recursion(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (_pow_recursion(x + 1, y));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (_pow_recursion(1, n));
}
