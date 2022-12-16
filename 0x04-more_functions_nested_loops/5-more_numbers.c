#include "main.h"

/**
 *more_numbers - prints numbers 0 to 14 ten times
 *Return: Always 0 (success)
 */
void more_numbers(void)
{
	int n, i;

	for (n = 1; n < 11; n++)
	{
		int ch;

		for (ch = 0; ch < 15; ch++)
		{
			i = ch;
			if (ch > 9)
			{
				_putchar(1 + '0');
				i = ch % 10;
			}
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
