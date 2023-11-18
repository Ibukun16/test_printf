#include "main.h"

/**
 * _printf - A function that mimic the standard printf function
 * @format: format specifier
 *
 * Return: The character or string
 */

int _printf(const char *format, ...)
{
	unsigned int prnt, i = 0, bytes = 0;

	va_list args_list;

	if (!format || (format[i] == '%' && !format[i++]))
		return (-1);
	if (format[i] == '%' && format[i++] == ' ')
		return (-1);

	va_start(args_list, format);
	while (format && format[i])
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			if (format[i + 1] == 'c')
			{
				i++;
				_putchar(va_arg(args_list, int));
			}
			if (format[i + 1] == 's')
			{
				prnt = putts(va_arg(args_list, char *));
				i++;
				bytes += (prnt - 1);
			}
			else if (format[i + 1] == '%')
				write(1, &format[i + 1], 1);
		}
		bytes++;
		i++;
	}
	va_end(args_list);
	return (bytes);
}
