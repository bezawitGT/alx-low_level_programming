#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char i;
	for(i = 'a'; i <='z'; i++ )
	{
	if((i=='q') || (i=='e'))
	{
		continue; 
	}else
	{
		putchar(i);
	}
	}
	putchar('\n');
	return (0);
}
