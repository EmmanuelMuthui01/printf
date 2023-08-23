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

	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
				i++;
			i++;
			if (format[i] == '\0' || format[i] == ' ')
				return (-1);
			if (format[i] == 'c')
				count += handle_char(args);
			else if (format[i] == 's')
				count += handle_string(args);
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 'd' || format[i] == 'i')
				count += handle_int(args);
			else
			{
				i--;
				count += _putchar(format[i]);
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
