#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of elements passed to cmd
 * @argv: array that holds char
 * Return: Always 0.
 */
int main(int argc,char* argv[])
{
	if(argv[0])
	{
		printf("%d\n",argc);
	}
    return (0);
}
