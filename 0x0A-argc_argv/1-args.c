#include <stdio.h>
#include "main.h"

/**
 * main - Args
 * @argc: size
 * @argv: array of arguments
 * Return: Return 0 for sucesss
 */
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}
