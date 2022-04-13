#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - checks for alphabetic character.
 * @n: accept input  parameter n of type int
 * Return: 1 and prints + if n is greater than zero
 */
int _abs(int n)
{
	if (n > 0){
		return (n);
	}else if (n == 0)
	{
		return (0);
	}
	return ((-1*n));
	}
