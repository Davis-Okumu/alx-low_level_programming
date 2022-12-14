#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *Description: writes lower case alphabets ten time to the standard output
 *Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
