#include "main.h"

/**
 *print_numbers - Entry point
 *Description: prints numbers 0 to 9 in standard output
 *Return: always 0 (success)
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
