#include <stdlib.h>
#include "main.h"
/**
 * puts_half -  function that swaps the values of two integers.
 * @str: accept input  parameter c of type int
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int diff;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		diff = (i + 1) / 2;

		while (str[diff] != '\0')
		{
			_putchar(str[diff]);
			diff++;
		}
	}
	else
	{
		diff = (i / 2);

		while (str[diff] != '\0')
		{
			_putchar(str[diff]);
			diff++;
		}
	}
	_putchar('\n');
}
