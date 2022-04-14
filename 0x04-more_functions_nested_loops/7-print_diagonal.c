#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints the numbers from 1-14.
 * @n: parameter 
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	while(n > 0)
	{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	_putchar('\n');
}
