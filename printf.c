#include "header.h"
/**
 * _printf - My very own printf function
 * @format: First stirng
 * Return: ALways 0
 */

int _printf(const char *format, ...)
{
	int i;
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
			char c;

			c = va_arg(arg, int);
			_putchar(c);
			i += 1;
		}
		else if (format[i + 1] == 'd')
		{
			int d;

			d = va_arg(arg, int);
			if (d < 0)
			{
				_putchar('-');
				d = -1 * d;
			}
			_putchar(d + '0');
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
