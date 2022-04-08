#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	for(i = 0; i < 10; i++ )
	{
		putchar((i%10)+'0');
	}
	putchar('\n');
	return (0);
}
