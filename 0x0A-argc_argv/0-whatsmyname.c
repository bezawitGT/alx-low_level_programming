#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of elements passed to cmd
 * @argv: array that holds char
 *
 * Description: a program that prints its name
 * Return: Always 0.
 */
 
int main(int argc,char* argv[])
{
	if(argc > 0)
	{
		printf("%s\n",argv[0]);
	}
    return (0);
}
