#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Start
 * @argc: size
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
