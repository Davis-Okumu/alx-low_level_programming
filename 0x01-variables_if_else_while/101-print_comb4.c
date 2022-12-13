#include <stdio.h>
/**
 *main -entry point
 *
 *return: always 0 (succes)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < 10; j++)
		{
			for (i = 0; i < 10; i++)
			{
				if ((k < j) && (j < i))
				{
					putchar(k + '0');
					putchar(j + '0');
					putchar(i + '0');
					if (k != 7)
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
