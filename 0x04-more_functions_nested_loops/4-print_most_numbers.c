#include "main.h"

/**
 *print_most_numbers - Entry point
 *Description: Prints numbers from 0 to 9 excluding 2 & 4
 *Reurn: Always 0 (success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4'4)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
