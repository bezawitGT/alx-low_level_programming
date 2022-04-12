#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
int _abs(int n)
{
	if(n>0){
		return(n);
	}else if(n==0)
	{
		return(0);
	}else{
		return((-1*n));
	}
	}
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}