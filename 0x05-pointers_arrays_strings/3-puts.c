#include "main.h"
#include <string.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 * return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
