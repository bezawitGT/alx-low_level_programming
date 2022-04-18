#include <stdlib.h>
#include <stdio.h>
/**
 * swap_int -  function that swaps the values of two integers.
 * @a: accept input  parameter c of type int
 * @b: accept input  parameter c of type int
 * Return: 98.
 */
void swap_int(int *a, int *b)
{
	 int tmp;
	 
	 tmp = *a;
	 *a = *b;
	 *b = tmp;
	 return;
}
