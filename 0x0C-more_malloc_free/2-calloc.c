#include "main.h"
#include <stdlib.h>

/**
 *  _calloc - function that allocates memory for an array.
 * @nmemb: array to be allocated memory
 * @size: size in bytes.
 *
 * Return: if nmemb = 0, size = 0, or the func fails - NULL.
 *        a pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (mem);

}
