#include "main.h"

/**
 * _printf - does formatted printing of text
 * @format: string use to format text
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, len = 0, count = 0;
	int get_format = 0, get_width = 0, get_flg = 0;
	flag_t flags = {0, 0, 0, 0, 0, 0};

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[len])
		len++;
	va_start(arg, format);
	for (i = 0; i < len; i++)
	{
		if (get_format)
		{
			if (!get_width)
				get_flg = _get_flg(format[i], &flags);
			get_width = _get_width(format[i], &flags);
			if (!get_flg && !get_width)	
			{
				count += get_ft(format[i], arg, &flags);
				get_format = 0;
				get_width = 0;
				get_flg = 0;
			}
		}
		else
		{
			if (format[i] == '%')
				get_format = 1;
			else
				count += _putchar(format[i]);
		}
	}
	va_end(arg);
	_putchar(-1);
	return (count);
}
