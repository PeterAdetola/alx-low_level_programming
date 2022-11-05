#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number o arguments passed to the function
 * @argv: argument vector of pointrs to strings
 *
 * Return: always 0
 */
int main(int argc _attribute_((unused)). char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
