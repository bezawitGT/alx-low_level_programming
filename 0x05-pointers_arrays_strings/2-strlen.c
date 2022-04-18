#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen -  function that swaps the values of two integers.
 * @a: accept input  parameter c of type int
 * @b: accept input  parameter c of type int
 * Return: 98.
 */
int _strlen(char *s)
{
	 int i=0;
	 int count=0;
	 
	 while(s[i] != '\0')
	 {
		 count++;
		 i++;
	 }
	 
	 return (count);
}
