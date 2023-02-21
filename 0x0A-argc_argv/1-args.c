#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
        printf("%d\n", argc - 1);

        return (0);
}
