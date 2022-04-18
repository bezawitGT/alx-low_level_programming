#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_array -  function that swaps the values of two integers.
 * @a: accept input  parameter a of type int
 * @n: accept input  parameter n of type int
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if(i == n-1)
		{
			printf("%d",a[i]);
		}
		else
		{
			printf("%d, ",a[i]);
		}
		
	}
	printf("\n");
}

