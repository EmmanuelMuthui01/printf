#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 *
 * Return: the number of characters printed except null byte.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int i;
	char c;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				count += handle_char(args);
			}
			else if (format[i] == 's')
			{
				count += handle_string(args);
			}
			else if (format[i] = '%')
			{
				count += _putchar('%');
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
