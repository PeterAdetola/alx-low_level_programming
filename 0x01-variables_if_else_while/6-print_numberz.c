#include <stdio.h>

/**
 * main - entry
 *
 * Description: Print num in base 10 on new line
 *
 * Return: returns 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
