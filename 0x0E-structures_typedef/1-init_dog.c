#include <stdio.h>
#include "dog.h"

/**
 * init_dog - structure definition
 * @d: structure arguement
 * @name: second arguement
 * @age: third arguement
 * @owner: fourth arguement
 *
 * Description: description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
