#include "main.h"

/**
 * _memcpy - a function the copies memory area
 * @dest : pointer to char parameter
 * @scr : pointer to char parameter
 * @n: number of bytes to be copied(size)
 * Return : string copied from source(*dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
