#include <stdlib.h>
#include "main.h"
/**
 * *string_toupper - checks for uppercase character.
 * @c: accept input  parameter c of type int
 * Return:  upper,0 otherwise.
 */
char *string_toupper(char *c)
{
	int i;
	
	for(i = 0; c[i] != '\0'; i++)
	{ 
		if ((c[i] <= 122) && (c[i] >= 97))
		{
			c[i] = c[i]-32;
		}
	}
	return c;
}
