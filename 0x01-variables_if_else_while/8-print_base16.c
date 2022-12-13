#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return:always 0(success)
 */
int main(void)
{
	int n = '0';
	int ch = 'a';
	do {
		putchar(n);
		n++;
	} while (n <= '9');
	
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'f');
	putchar('\n');
	return (0);
}
