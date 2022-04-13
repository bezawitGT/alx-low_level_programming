#include <stdlib.h>
#include <stdio.h>
/**
 * _islower - checks for lowercase character.
 * @c: accept input  parameter c of type int
 * Return: 1 if c is lowercase,0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	return (0);
}
