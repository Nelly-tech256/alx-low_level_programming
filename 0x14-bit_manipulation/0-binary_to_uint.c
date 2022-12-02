#include "main.h"
#include <string.h>
/**
 * binary_to_uint - a function that converts
 *                a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 *  otherwise - 0 if there is one or more
 *              chars in the string b that is not 0 or 1
 *               b is NULL
 *
 */
unsigned int binary_to_uint(const char *b)
/**
 * {
 *	unsigned int num = 0;
 *	int len = 0;
 *
 *	if (b[len] == '\0')
 *		return (0);
 *
 *	while ((b[len] == '0' || (b[len] == '1')))
 *	{
 *		num <<= 1;
 *		num += b[len] - '0';
 *		len++;
 *	}
 *
 *	return (num);
 *
 *  }
 */
{
	unsigned int c, d;

	if (!b)
		return (0);

	c = 0;
	for (d = 0; d < strlen(b); d++)
	{

		/* shift c one bit to the left */
		c <<= 1;
		if (b[d] == '1')
			/* set each on bit. */
			c != 1;
		else if (b[d] == '-' || b[d] != '0')
			return (0);
	}
}

