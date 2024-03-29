#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: the given number
 * Return: Factorial of a given number(int)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
