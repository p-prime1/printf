#include "main.h"

/**
 * _printf - function to print different data types
 * @format: char array
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i, count, k;
	va_list arg;

	va_start(arg, *format);
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);

		}

		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i += 1;
		}

		else if (format[i + 1] == 'c')
		{
			print_char(va_arg(arg, int));
			i += 1;

		}

		else if (format[i + 1] == 's')
		{
			k = print_string(va_arg(arg, char*));
			i += 1;
			count += (k - 1);
		}
		else if (format[i + 1] == 'd')
		{
			print_int(va_arg(arg, int));
			i += 1;
		}
		count++;
	}
	va_end(arg);
	return (count);
}
