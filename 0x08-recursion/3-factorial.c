#include "main.h"

/**
 * _strlen_recursion - return string len
 * @s: input string
 *
 * Description: returns the length of a string
 * Return: returns string len
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
