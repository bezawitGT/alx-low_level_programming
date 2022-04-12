#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int digit1;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		putchar((digit1 % 10) + '0');
		if (digit1==9)
		{
		  continue;
		}else{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
