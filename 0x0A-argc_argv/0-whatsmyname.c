#include <stdio.h>
#include "main.h"

/**
 * main - My name
 * @argc: size of argv
 * @argv: array of arguments
 * Return: return 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc == 0)
		return (1);
	printf("%s\n", *argv);
	return (0);
}
