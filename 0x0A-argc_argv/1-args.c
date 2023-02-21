#include <stdio.h>
/**
 * main - Program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on EXIT_SUCCESS
 */
int main (int argc, char *argv)
{
        int count;
	count = argc;

        printf("%d \n", count);

        return 0;
}
