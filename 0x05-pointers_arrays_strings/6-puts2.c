#include <stdlib.h>
#include "main.h"
/**
 * puts2 -  function that swaps the values of two integers.
 * @str: accept input  parameter c of type int
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; ++i)
	{
		if(i%2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
