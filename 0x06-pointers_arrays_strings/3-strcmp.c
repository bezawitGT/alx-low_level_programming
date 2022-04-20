#include "main.h"

/**
 * _strcmp - print array
 * @s1: character pointer
 * @s2: character source
 * 
 * Description: compaire two strings
 * Return: return pointer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return 0;
}