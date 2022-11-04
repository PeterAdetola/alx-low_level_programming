#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Check if a number is divisible
 * @num: number integer
 * @div: the divisor
 *
 * Return: if num is divisible - 0.
 * if the num is not divisible - 1
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}
