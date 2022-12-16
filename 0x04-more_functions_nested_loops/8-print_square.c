#include "main.h"

/**
 *print_square - Entry point
 *Description: prints a square using #
 *Return: Always 0 (success)
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
