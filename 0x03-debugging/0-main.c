#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;
		char c;

        i = 0;
        c=positive_or_negative(i);
		_putchar(c + '0');
		
        return (0);
}