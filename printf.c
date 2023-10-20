#include "main.h"

/**
 * _printf - function to print different data types
 * @format: char array
 * Return: int
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	long unsigned int d;
	char c;
	va_list arg;

	va_start(arg, *format);

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
			c = va_arg(arg, int);
			_putchar(c);
			i += 1;
		}

		else if (format[i + 1] == 'd')
		{
			d = va_arg(arg, int);

			if (d < 0)
			{
				_putchar('-');
				d = (-1) * d;
			}
			write(1, &d, sizeof(&d));
			i += 1;
		}

		else if (format[i + 1] == 's')
		{
			print_string(va_arg(arg, char*));
			i += 1;
		}
	}

	va_end(arg);

	return (0);
}
