#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * jack_bauer  - print the last digit of a number.
 * 
 * Return: nothing
 */
void jack_bauer(void){
	int i=0;
	
	while(i <= 23)
	{
		int j=0;
		
		while(j <= 59)
		{
			if (i < 10)
			{
				char hr = '0'+i;
			}
			else
			{
				char hr = i;
			}
			if (j < 10)
			{
				char min = '0'+j;
			}else
			{
				char min = j;
			}
			printf("%c:%c\n",hr,min);
			j++;
		}
		i++;
	}
	return;
}
