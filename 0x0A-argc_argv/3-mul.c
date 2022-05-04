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
	int mult;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult= atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
