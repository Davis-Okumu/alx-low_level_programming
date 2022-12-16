#include "main.h"

/**
 *more_numbers - Entry point
 *Description: prints numbers 0 to 14 ten times
 *Return: Always o (success)
 */
void more_numbers(void)
{
	int n, i;

	for (n = 0; n <= 10; n++)
	{
		int ch;

		for (ch = 0; ch <= 14; ch++)
		{
			i = ch;
			if (ch > 9)
			{
				_putchar(1 + '0');
				i = ch % 10;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
