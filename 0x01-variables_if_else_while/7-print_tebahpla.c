#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
