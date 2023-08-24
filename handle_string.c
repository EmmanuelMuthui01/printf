#include "main.h"

/**
 * handle_string - handles strings conversion specifier.
 * @args: variadic arguments.
 *
 * Return: length of the string, otherwise -1
 */

int handle_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	return (write(1, str, strlen(str)));
}
