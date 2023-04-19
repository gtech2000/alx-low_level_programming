#include <stdlid.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type to dog
 * @s: pointer to dog struct to be initialized
 * @n: name of dog initialize
 * @a: age of dog initialize
 * @o: owner of the dog initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
