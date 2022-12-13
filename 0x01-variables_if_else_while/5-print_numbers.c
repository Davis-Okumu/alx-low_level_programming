#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int n = 0;

	do
	{
		printf("%d",n);
		n++;
	}
	while(n < 10);
	printf("\n");
	return (0);
}
