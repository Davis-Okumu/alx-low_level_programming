#include <stdio.h>
#include <stdlib.h>

/**
 *print_alphabet
 *Return: no return
 */
void print_alphabet()
{
	int ch;

	for(ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
}

/**
 *
 *Main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	void print_alphabet();
	return (0);
}
