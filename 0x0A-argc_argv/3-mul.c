#include <stdio.h>
/**
 * main - Multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc < 2)
	{
		return (1);
	}
	else
	{
		sum = argv[1] * argv[2];
		printf("%d \n", sum);
	}

	return (0);
}
