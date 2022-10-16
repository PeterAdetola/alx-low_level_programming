#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: Print in lowercase
 *
 * Return: Always return 0
 */

int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
		putchar("\n");
		return (0);
}
