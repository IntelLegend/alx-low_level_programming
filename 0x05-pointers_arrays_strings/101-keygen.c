#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates keygen.
 *
 * Return: 0 if succesful
*/
int main(void)
{
	int k = 0, g = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (g < 2772)
	{
		k = rand() % 128;
		if ((g + k) > 2772)
			break;
		g = g + k;
		printf("%c", k);
	}
	printf("%c\n", (2772 - g));
	return (0);
}
