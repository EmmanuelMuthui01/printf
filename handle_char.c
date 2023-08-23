#include "main.h"

/**
 * handle_char - handles character conversion specifiers.
 * @args: variadic arguments
 *
 * Return: count of characters printed.
 */

int handle_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	_putchar(ch);
	return (_putchar(ch));
}
