#include <stdlib.h>
/**
 * *argstostr - returns char
 * @ac: int
 * @av: char array array
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int size;
	int i;
	int j;
	int x = 0;
	char *a;

	if (ac < 1 || av == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
		size++;
	}
	a = malloc(++size);
	if (!a)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			a[x++] = av[i][j];
		a[x++] = '\n';
	}
	a[x] = '\0';
	return (a);
}
