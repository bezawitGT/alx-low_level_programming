#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - allocates space in memory
 * @*d: struct dog
 * @name: char 
 * @age: float
 * @owner: char
 * 
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
