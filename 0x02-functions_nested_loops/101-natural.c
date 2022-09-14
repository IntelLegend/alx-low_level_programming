#include"main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - where code executiuon begins
 *
 * Description: ALX won kill me
 *
 * Return: returns 0 for a successful code
*/
int main(void)
{
	int i = 1;
	int total = 0;
		while (i < 1024)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;
		i++;
	}
	printf("%d\n", total);
	return (0);
}
