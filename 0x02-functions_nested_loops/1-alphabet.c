#include "main.h"

/**
 *print_alphabet - Entry point
 *Description: A function that writes all lowercase letter to standard output
 *Return: Always 0 (succes)
 */

void print_alphabet()
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
