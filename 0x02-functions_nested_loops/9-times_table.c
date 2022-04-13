#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * times_table - print the last digit of a number.
 * 
 * Return: nothing
 */
void times_table(void)
{
	int i=0;
	
	while(i <= 9)
	{
		int j=0;
		
		for(j <= 9)
		{
			int res = i * j;
			char mult = res + '0';
			
			if (sizeof(mult) == 1)
			{
				mult = strcat(' ',mult);
			}
			printf("%c\,",mult);
			j++;
		}
		printf("\n");
		i++;
	}
}
