#include <stdlib.h>
#include <stdio.h>
/**
 * checks for lowercase character.
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise.
 */
int _islower(int c)
{
	if (c>=97){
		return(1);
	}else{
		return(0);
	}
}