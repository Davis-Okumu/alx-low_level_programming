#include "main.h"
/**
 * checksqrt - checks for square root
 * @a: int
 * @b: int
 * Return: int or -1
 */
int checksqrt(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (checksqrt(a + 1, b));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number
 * Return: -1 if n doesn@t have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (checksqrt(1, n));
}
