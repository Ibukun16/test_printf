#include "main.h"

/**
 * _strlen - A function that calculate length of a string
 * @s: The string to calculate its length
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _printf - A function that mimic the standard printf function
 * @format: format specifier
 *
 * Return: The character or string
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, l = 0, bytes = 0;
	char *str, c;
	va_list args_list;

	if (!format || (format[i] == '%' && !format[i++]))
		return (-1);
	if (format[i] == '%' && format[i++] == '\0')
		return (-1);
	va_start(args_list, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			bytes++;
		}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args_list, int);
				write(1, &c, 1);
				bytes++;
			}
			if (format[i] == 's')
			{
				str = va_arg(args_list, char*);
				l = _strlen(str);
				write(1, str, l);
				bytes += l;
			}
			else if (format[i] == '%')
				write(1, &format[i], 1);
		}
		bytes++;
		i++;
	}
	va_end(args_list);
	return (bytes);
}
