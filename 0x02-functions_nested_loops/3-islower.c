#include <stdlib.h>
#include <stdio.h>
/**
 * islower - checks for lowercase character.
 * Return: 1 if c is lowercase,0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}else
	{
		return (0);
	}
}