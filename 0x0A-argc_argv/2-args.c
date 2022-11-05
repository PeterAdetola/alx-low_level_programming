#include <stdio.h>
#include "main.h"

/**
 * main -Print the name of the program
 * @argc: Count argument
 * @argv: Argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{
	/*WHILE - Print each arguments*/
	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	}
	return (0);
}
