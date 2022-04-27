#include "main.h"

/**
 * _pow_recursion - return string len
 * @x: input int
 * @y: input int
 * Description: returns the factorial of a numb
 * Return: returns int len
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x,y - 1));
}
