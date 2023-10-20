#include "main.h"

/**
 * _printf - function to print different data types
 * @format: char array
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i,count,k;
	/**long int d;*/
	char c;
	va_list arg;

	va_start(arg, *format);
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count += 1;
		}

		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i += 1;
			count += 1;
		}

		else if (format[i + 1] == 'c')
		{
			c = va_arg(arg, int);
			_putchar(c);
			i += 1;
			count += 1;
		}

/**		else if (format[i + 1] == 'd')
		{
			d = va_arg(arg, int);

			if (d < 0)
			{
				_putchar('-');
				d = (-1) * d;
			}
			write(1, &d, 8);
			i += 1;
			count += 1;

		}
**/
		else if (format[i + 1] == 's')
		{
			k = print_string(va_arg(arg, char*));
			i += 1;
			count += (k - 1);
		}
	}

	va_end(arg);
	return (count);
}
