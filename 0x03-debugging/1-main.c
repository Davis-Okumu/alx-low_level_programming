#include <stdio.h>
#include <stdlib.h>

/**
main - causes an infinate loop
Return: Always 0 (success)
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
/**
 *      while (i < 10 )
 *      {
 *              putchar(i);
 *      }
 */
	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
