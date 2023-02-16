#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reverse printed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (strlen(*s))
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
