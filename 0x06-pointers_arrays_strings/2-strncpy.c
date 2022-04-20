#include "main.h"

/**
 * *_strcpy - print array
 * @dest: character pointer
 * @src: character source
 * @n: len of src
 * Description: copies string pointed to by src
 * Return: return pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}