#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');

	do {
		putchar(CH);
		CH++;
	} while (ch <= 'Z');
	putchar('\n');
	return (0);
}
