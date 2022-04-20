#include <stdlib.h>
#include "main.h"
/**
 * reverse_array -  function that swaps the values of two integers.
 * @a: accept input  parameter c of type int
 * @n: number of elements
 *
 * Description: reverse array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int left, right,  tmp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
