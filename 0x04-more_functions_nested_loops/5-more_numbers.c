#include "main.h"

/**
 *more_numbers - Entry point
 *Description: prints numbers 0 to 14 ten times
 *Return: Always o (success)
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		int ch;

		for (ch = "0"; ch <= "14"; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
