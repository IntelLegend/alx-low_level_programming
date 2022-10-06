#include <stdio.h>
#include "main.h"

/**
 * main - Args
 * @argc: size
 * @argv: array of arguments
 * Return: Return 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 0)
		return (1);

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
