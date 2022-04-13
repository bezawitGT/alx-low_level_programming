#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
void print_alphabet_x10(void)
{
	int j = 0;

	while(j < 10)
	{
		char i = 'a';

		while(i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
