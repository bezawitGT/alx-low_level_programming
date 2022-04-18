#include <stdlib.h>
#include "main.h"
/**
 * _puts -  function that swaps the values of two integers.
 * @str: accept input  parameter c of type int
 * Return: nothing
 */
void _puts(char *str)
{
	
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	 return;
}
