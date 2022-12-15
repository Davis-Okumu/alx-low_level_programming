#include <stdio.h>
#include <stdlib.h>

/**
 *print_alphabet_x10
 *no return
 */
void print_alphabet_x10()
{
	int n = 0;
	while (n < 11)
	{
		int ch = 'a';
		while (ch < 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		n++;
	}
}

/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
