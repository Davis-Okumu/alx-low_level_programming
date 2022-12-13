#include <stdio.h>
#include <stdlib.h>

/**
 *main -Entry point
 *
 *retutn: always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; i++)
		{
			if ((i < j) && (i != j))
			{
				putchar(i + '0');
				putchar(j+ '0');
				if ((i == 8) && (j == 9))
				{
					break;
				}
				putchar('\n');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return(0);
}
