#include "main.h"
#include <stddef.h>

/**
 * get_ft - get format
 * @format: format
 * @arg: arg
 * Return: count
 */

int get_ft(char format, va_list arg)
{
	int j, is_format = 0, count = 0;
	format_t f_t[] = {{'c', print_char}, {'s', print_string}, {'%', print_perc},
		{'d', print_int}, {'i', print_int}, {'b', print_bin}, {'u', print_uint},
		{'o', print_oct}, {'x', print_shex}, {'X', print_hex}, {'\0', NULL}
	};

	for (j = 0; f_t[j].format; j++)
	{
		if (format == f_t[j].format)
		{
			count += f_t[j].func(arg);
			is_format = 1;
			break;
		}
	}
	if (!is_format)
	{
		count += _putchar('%');
		count += _putchar(format);
	}
	return (count);
}

/**
 * _printf - does formatted printing of text
 * @format: string use to format text
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, len = 0, count = 0;
	int get_format = 0;
	
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
			count += get_ft(format[i], arg);
			get_format = 0;
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
	return (count);
}
