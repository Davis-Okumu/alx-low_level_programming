#include <unistd.h>

/**
 *_putchar - writes the charachter c to standard output
 *@c: the charachter to print
 *
 *Return: o succes 1. on error 0
 */
int _puthchar(char c)
{
	return (write(1, &c, 1));
}
