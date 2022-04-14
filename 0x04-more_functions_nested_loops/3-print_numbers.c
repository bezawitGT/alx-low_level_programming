#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers from 1-9.
 * Return: Nothing.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
