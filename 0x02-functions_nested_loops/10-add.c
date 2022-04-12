#include "main.h"
#include <stdio.h>
int add(int a, int b)
{
	int sum=a+b;
	return sum;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}