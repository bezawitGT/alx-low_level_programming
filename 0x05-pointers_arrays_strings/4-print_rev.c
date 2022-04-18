#include <stdlib.h>
#include "main.h"
/**
 * print_rev -  function that swaps the values of two integers.
 * @s: accept input  parameter c of type int
 * Return: nothing
 */
void print_rev(char *s)
{
	int left, len, i;

	len = 0;
	left = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	for (; len >= left; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
