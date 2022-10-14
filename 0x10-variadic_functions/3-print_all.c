#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print char
 * @ap: argument paramenter
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - print int
 * @ap: argument paramenter
 */
void print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_f - print float
 * @ap: argument paramenter
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - print string
 * @ap: argument paramenter
 */
void print_s(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints all arguments
 * @format: number and types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char valid[4] = {'c', 'i', 'f', 's'};
	va_list ap;
	char *sep = "";
	char *update = ", ";

	void (*func_list[4])(va_list) = {print_c, print_i, print_f, print_s};

	va_start(ap, format);
	while (format && format[i])
	{
		while (j < 4)
		{
			if (valid[j] == format[i])
			{
				printf("%s", sep);
				func_list[j](ap);
				sep = update;
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(ap);
	printf("\n");
}
