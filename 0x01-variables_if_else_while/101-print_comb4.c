#include <stdio.h>

/**
 * main - print possible combinations of three digits
 *
 * Return: Always 0
 */

int main(void);
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds < '9'; hundreds++)
	{
		for (tens = '0'; tens < '9'; tens++)
		{
			for (ones = '0'; ones < '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) || 
							(tens > ones) || (hundred > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);

					if (!(hundreds == '7' && tens == '8' && ones == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
