#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks for alphabetic character.
 * @n: accept input  parameter n of type int
 * Return: 1 if n is a letter, lowercase or uppercase  0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
	}
