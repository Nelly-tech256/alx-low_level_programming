#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *           returns the index of the first element
 * @size: is the number of elements in the array, array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: is the array to be used
 *
 * Return: if no element matches return -1
 *         else size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);

}

