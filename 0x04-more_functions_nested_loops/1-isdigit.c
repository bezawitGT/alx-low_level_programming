#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for digit.
 * @c: accept input  parameter c of type int
 * Return: 1 if c is a digit 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
