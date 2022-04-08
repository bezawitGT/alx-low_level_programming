#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char alp[]="abcdefghijklmnopqrstuvwxyz";
	for(i = 0; i < 26; i++ )
	{
	if(alp[i]=='q' or alp[i]=='e')
	{
		continue; 
	}else
	{
		putchar(alp[i]);
	}
	}
	putchar("\n");
	return (0);
}
