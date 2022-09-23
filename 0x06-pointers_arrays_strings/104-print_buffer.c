#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints characters from a buffer in specific format
 * @b: pointer to content to be printed
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int offset = 0;
	int offset_hex = 0;
	int offset_char = 0;
	int count = 0;
	int c;

	while (size > offset)
	{
		printf("%08x: ", offset);
		for (count = 1; count <= 15; count++)
		{
			c = b[offset_hex];
			if (count % 3 == 0)
			{
				putchar(' ');
				continue;
			}
			if (offset_hex >= size)
				printf("  ");
			else
				printf("%02x", c);
			offset_hex++;
		}
		for (count = 0; count < 10; count++)
		{
			c = b[offset_char];
			if (offset_char >= size)
				break;
			else if (c > 31 && c < 127)
				putchar(b[offset_char]);
			else
				putchar('.');
			offset_char++;
		}
		putchar('\n');
		offset += 10;
	}
	if (size <= 0)
		putchar('\n');
}
