#include "main.h"

/**
 * handle_int - Handles and prints an integer
 * @args: Lists of arguments (integers to be printed)
 *
 * Return: Count of integers printed.
 */

int handle_int(va_list args)
{
	int number = va_arg(args, int);
	int count = 0;
	int rev_num = 0;

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
			rev_num = rev_num * 10 + number % 10;
			number /= 10;
		}
		while (rev_num > 0)
		{
			_putchar(rev_num % 10 + '0');
			count++;
			rev_num /= 10;
		}
	}
	return (count);
}
