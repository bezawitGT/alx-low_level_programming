#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file name
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: a program that prints its name
 * Return: Always(0) Success
 */

int main(int argc, char **argv)
{
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);
}
