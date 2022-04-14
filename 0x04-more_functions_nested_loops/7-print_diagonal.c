#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints the numbers from 1-14.
 * @n: parameter 
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
