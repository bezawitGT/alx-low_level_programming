#include <stdlib.h>
#include "main.h"
/**
 * rev_string -  function that swaps the values of two integers.
 * @s: accept input  parameter c of type int
 * Return: nothing
 */
void rev_string(char *s)
{
	int left, i, temp;

	left = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > left)
	{
		temp = s[i];
		s[i--] = s[left];
		s[left++] = temp;
	}
}
