#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates space in memory
 * @b: unsigned int
 *
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

void *malloc_checked(unsigned int b)
{
	int *s;
	
	s = malloc(b);
	if(!s)
	{
		exit(98);
	}
	return (s);
}
