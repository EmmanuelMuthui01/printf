#include "main.h"

/**
 * handle_char - handles character conversion specifiers.
 * @args: variadic arguments
 *
 * Return: count of characters printed.
 */

int handle_char(va_list args)
{
	int count = 0;
	char ch;

	ch = va_arg(args, int);
	_putchar(ch);
	count++;
	return (count);
}
