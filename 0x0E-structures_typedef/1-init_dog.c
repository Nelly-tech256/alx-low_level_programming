#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializea variable of type struct dog
 * @d: the dog to be initialized.
 * @name: the name of the dog.
 * @age: the age of the dog
 * @owner: the owen of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
