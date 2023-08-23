#include "main.h"

/**
 * print_string - prints the string to the std output.
 * @str: pinter to the string.
 * Return: number of characters.
 */

int print_string(char *str)
{
	int count;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		count = strlen(str);
		write(1, str, count);
		return (count);
	}
}


/**
 * handle_string - handles strings conversion specifier.
 * @args: variadic arguments.
 *
 * Return: 1 on success.
 */

int handle_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		return (print_string("(null)"));
	}
	else
	{
		return (print_string(str));
	}
}
