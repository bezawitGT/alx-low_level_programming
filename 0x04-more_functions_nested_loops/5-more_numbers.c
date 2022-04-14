#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints the numbers from 1-14.
 * Return: Nothing.
 */
void more_numbers(void)
{
	int j;
	
	for (j=0; j <= 9; j++)
	{
	int c;

	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
		{
			_putchar('1');
			_putchar((c%10) + '0');
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
	}
}
