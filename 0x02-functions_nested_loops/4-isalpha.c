#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * isalpha - checks for alphabetic character.
 * @c: accept input  parameter c of type int
 * Return: 1 if c is a letter, lowercase or uppercase  0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
