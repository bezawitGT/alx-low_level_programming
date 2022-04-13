#include "main.h"
/**
 * print_alphabet 10 times- prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
