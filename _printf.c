#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - The Printf function
 * @format: format.
 * Return: The printed chars.
 */
int _printf(const char *format, ...)
{
	int i, prntd = 0, prnt_chars = 0;
	int flg, w, prsn, s, i_buf = 0;
	va_list list;
	char buffer[BUF_SZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[i_buf++] = format[i];
			if (i_buf == BUF_SZE)
				b_print(buffer, &i_buf);

			/* write(1, &format[i], 1); */
			prnt_chars++;
		}
		else
		{
			b_print(buffer, &i_buf);
			flg = get_flags(format, &i);
			w = get_width(format, &i, list);
			prsn = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			prntd = handle_print(format, &i, list, buffer,
				flg, w, prsn, s);
			if (prntd == -1)
				return (-1);
			prnt_chars += prntd;
		}
	}

	b_print(b, &i_buf);

	va_end(list);

	return (prnt_chars);
}

/**
 * b_print - A function that prints the contents of a buffer if the buffer exist
 * @b: An array of chars
 * @i_buf: Index to add next char, represents the length.
 */
void b_print(char b[], int *i_buf)
{
	if (*i_buf > 0)
		write(1, &b[0], *i_buf);

	*i_buf = 0;
}
