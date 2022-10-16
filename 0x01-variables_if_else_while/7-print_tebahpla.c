#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print alphabet in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
		putchar('\n');
	}

	return (0);
}

