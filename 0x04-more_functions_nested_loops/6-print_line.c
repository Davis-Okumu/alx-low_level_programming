#include "main.h"

/**
 *print_line - Draws a straight line
 *@n: line length
 *Return: Always 0 (success)
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
