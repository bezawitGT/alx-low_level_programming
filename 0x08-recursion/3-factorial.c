#include "main.h"

/**
 * factorial - return string len
 * @n: input string
 *
 * Description: returns the factorial of a numb
 * Return: returns int len
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
