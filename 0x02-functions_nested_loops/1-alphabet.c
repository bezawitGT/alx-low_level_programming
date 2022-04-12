#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
void print_alphabet(void)
{
	for(char i = 'a'; i <= 'z'; i++ )
	{
		putchar(i);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
    return (0);
}
