#include "main.h"

/**
 *print_digonal - Entry point
 *Description: prints '\' n times
 *Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i, j;

	int i = 0;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
