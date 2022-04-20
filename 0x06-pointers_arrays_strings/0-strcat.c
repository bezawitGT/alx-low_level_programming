#include <stdlib.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first input string
 * @src: second input string
 *
 * Description: appends the src string to the dest string
 * Return: dest
 */
 
char *_strcat(char *dest, char *src)
{
	int i,j;
	
	for (i = 0; dest[i] != '\0'; ++i)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; ++j,++i)
	{
		dest[i] = src[j];
	}
	dest[i] ='\0';
	return dest;
}
