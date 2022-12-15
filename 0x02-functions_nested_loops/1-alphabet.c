#include <stdio.h>
#include <stdlib.h>
/**
 *
 *Main - entry point
 *Return: always 0 (success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 *print_alphabet
 *Return: 0 (success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
}
