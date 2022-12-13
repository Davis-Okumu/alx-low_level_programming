#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';

	do
	{
		putchar(ch);
		ch++;
	}
	while(ch <= 'z');

	int CH = 'A';

	do
	{
		putchar(CH);
		CH++;
	}
	while(ch <= 'Z');
	putchar('\n');
	return (0);
}
