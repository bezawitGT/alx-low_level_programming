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
			char hr,min;
			
			if (i < 10)
			{
				hr = '0'+i;
			}
			else
			{
				hr = i;
			}
			if (j < 10)
			{
				min = '0'+j;
			}else
			{
				min = j;
			}
			printf("%c:%c\n",hr,min);
			j++;
		}
		i++;
	}
	return;
}
