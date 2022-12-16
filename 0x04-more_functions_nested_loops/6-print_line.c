#include "main.h"

/**
 *print_line - Entry point
 *Descriprion: prints _ n times
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
