#include <stdio.h>
#include "dog.h"

/**
 * init_dog - inizialize a variable type struct dog
 *@d: new dog
 *@name: of the dog
 *@age: of the dog
 *@owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
