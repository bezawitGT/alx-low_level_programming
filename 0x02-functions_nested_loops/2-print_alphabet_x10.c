#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
void print_alphabet_x10(void)
{
	int j=0;
	while(j<10)
	{
	for(char i = 'a'; i <= 'z'; i++ )
	{
		putchar(i);
	}
	putchar('\n');
	j++;
	}
}
int main(void)
{
	print_alphabet_x10();
    return (0);
}
