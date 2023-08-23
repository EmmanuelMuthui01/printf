#include "main.h"

/**
 * handle_int - Handles and prints an integer
 * @args: Lists of arguments (integers to be printed)
 *
 * Return: Count of integers printed.
 */

int handle_int(va_list args)
{
	long number = va_arg(args, long);
	int count = 0;
	int reverse_n = 0;

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}
	if (number == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (number > 0)
		{
			reverse_n = reverse_n * 10 + number % 10;
			number /= 10;
		}
		while (reverse_n > 0)
		{
			_putchar(reverse_n % 10 + '0');
			count++;
			reverse_n /= 10;
		}
	}
	return (count);
}
