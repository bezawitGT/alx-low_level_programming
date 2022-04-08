#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char alp[]="abcdefghijklmnopqrstuvwxyz";
	for(i = -1; i > -27; i-- )
	{
		putchar(alp[i]);
	}
	putchar("\n");
	return (0);
}
