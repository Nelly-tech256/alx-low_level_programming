#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that multiplies two numbers
 * @argc: number of command line ae arguments.
 * @argv:array that contains the program command line arguments.
 * Return: 0 -success.
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		prinf("%s\n", Error);
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n" result);
	return (0);
}

