#include <stdlib.h>
#include "main.h"
/**
 * *cap_string - capitalize a sting.
 * @c: accept input  parameter c of type int
 * Return:  char
 */
char *cap_string(char *c)
{
	int i,j,k;
	char pre=' ';
	char separators[]= {',',';','.','!','?','\"','(',')','{','}','\n','\t',' ','\0'};
	
	for(i = 0; c[i] != '\0'; i++)
	{
			for(j = 0; separators[j] != '\0';j++)
			{
				if(pre == separators[j])
				{
					k = 1;
				}
				else
				{
					k = 0;
				}
			}
			if((k == 1 ) && (((c[i] <= 122) && (c[i] >= 97)) || ((c[i] <= 65 ) && (c[i] >= 65))))
			{
				c[i] = c[i]-32;
			}
			pre=c[i];

		}
	return c;
}
