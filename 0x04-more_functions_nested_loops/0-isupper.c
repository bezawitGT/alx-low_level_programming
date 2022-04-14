#include <stdlib.h>
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @c: accept input  parameter c of type int
 * Return: 1 if c is upper,0 otherwise.
 */
int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
	{
		return (1);
	}
	return (0);
}
