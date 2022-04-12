#include "main.h"
void times_table(void)
{
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			int res=i*j;
			char mult=res+'0';
			if(sizeof(mult)==1)
			{
				mult=strcat(' ',mult);
			}
			printf("%c\,",mult);
		}
		printf("\n");
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}