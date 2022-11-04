#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc : argc parameter
 * @argv : an array of a command listed
 * Return : 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);

}
