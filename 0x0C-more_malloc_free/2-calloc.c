#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates space in memory
 * @nmemb: unsigned int 
 * @size: unsigned int
 *
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (!pointer)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*(pointer + i) = 0;
	}
	return (pointer);
}
