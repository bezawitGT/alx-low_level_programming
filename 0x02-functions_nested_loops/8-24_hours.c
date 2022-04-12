#include "main.h"
void jack_bauer(void){
	for(int i=0;i<=23;i++)
	{
		for(int j=0;j<=59;j++)
		{
			if(i<10)
			{
				char hr='0'+i;
			}else{
				char hr=i;
			}
			if(j<10){
				char min='0'+j;
			}else{
				char min=j;
			}
			printf("%c:%c\n",hr,min);
		}
	}
	return;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}