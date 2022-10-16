#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: Print alphabet except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}

	putchar('\n');

	return (0);
}
