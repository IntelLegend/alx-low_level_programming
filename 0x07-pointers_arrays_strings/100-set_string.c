#include "main.h"
#include <strdio.h>

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: pointer to pointer
 * @to: point to a string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
