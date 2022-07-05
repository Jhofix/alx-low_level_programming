#include <stdio.h>
#include "dog.h"


/**
 * print_dog - structure definition
 * @d: structure arguement
 *
 * Description: description
 */

void print_dog(struct dog *d)
{
	char *dnm = d->name, *down = d->owner;
	float dag = d->age;

	if (d == NULL)
	{
		return;
	}
	if (dnm == NULL)
	{
		dnm = "(nil)";
		printf("Name: %s\n", dnm);
	}
	else
	{
		printf("Name: %s\n", dnm);
	}
		if ((dag) == 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.1f\n", dag);
	}
	if (down == NULL)
	{
		down = "(nil)";
		printf("Owner: %s\n", down);
	}
	else
	{
		printf("Owner: %s\n", down);
	}
}
