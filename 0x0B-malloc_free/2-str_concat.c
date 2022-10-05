#include <stdlib.h>
/**
 * str_concat - returns concatination
 * @s1: char array
 * @s2: char array
 * Return: char array
 */
char *str_concat(char *s1, char *s2)
{
	char *s = "";
	char *u = "";
	int i, j, size = 0;
	char *a;

	if (s1 != 0)
		s = s1;
	if (s2 != 0)
		u = s2;
	for (i = 0; s[i]; i++)
		size++;
	for (j = 0; u[j]; j++)
		size++;
	a = malloc(size + 1);
	if (!a)
		return (0);
	for (i = 0; s[i]; i++)
		a[i] = s[i];
	for (j = 0; u[j]; j++, i++)
		a[i] = u[j];
	a[i] = '\0';
	return (a);
}
