#include "main.h"
#include <stddef.h>

/**
 * _printf - does formatted printing of text
 * @format: string use to format text
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, j, len, count;
	int get_format = 0;
	format_t f_t[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_int},
		{'\0', NULL}
	};
	
	len = count = 0;
	while(format[len])
		len++;
	
	va_start(arg, format);
	for(i = 0; i < len; i++)
	{
		if (get_format)
		{
			for (j = 0; f_t[j].format; j++)
			{
				if (format[i] == f_t[j].format)
					count += f_t[j].func(arg);
			}
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

