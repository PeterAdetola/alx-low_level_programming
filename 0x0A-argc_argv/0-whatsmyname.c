#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number o arguments passed to the function
 * @argv: argument vector of pointrs to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
