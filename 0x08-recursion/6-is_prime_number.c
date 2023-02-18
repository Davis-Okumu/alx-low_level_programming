#include "main.h"

/**
 * pm_check- checks if a number is a prime number
 * @a: int
 * @b:int
 * Return:an integer
 */
int pm_check(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (pm_check(a + 1, b));
	}
}

/**
 * is_prime_number - finds a prime number
 * @n: int
 * Return: AN integer
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (pm_check(2, n));
}
