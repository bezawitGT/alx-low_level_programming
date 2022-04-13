#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		printf("%c", c);
	}
	printf("\n");
}
