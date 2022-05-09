#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - allocates space in memory
 * @*d: struct dog
 * 
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if((*d).name)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		if((*d).age)
			printf("Age: %.6f\n", (*d).age);
		else
			printf("Age: (nil)\n");
		if((*d).owner)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
