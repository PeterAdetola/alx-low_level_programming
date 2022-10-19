#include <main.h>

/**
 * print_alphabet_x10 - print alphabet times 10
 */

void print_alphabet_x10(void)
{
	int ten_x;
	int alph;

	for (ten_x = 0; ten_x <= 9; ten_x++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
