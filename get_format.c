#include "main.h"

/**
 * get_ft - get format
 * @format: format
 * @arg: arg
 * @flag: fkag
 * Return: character count
 */

int get_ft(char format, va_list arg, flag_t *flag)
{
	int j, is_format = 0, count = 0;
	format_t f_t[] = {{'c', print_char}, {'s', print_string}, {'%', print_perc},
		{'d', print_int}, {'i', print_int}, {'b', print_bin}, {'u', print_uint},
		{'o', print_oct}, {'x', print_shex}, {'X', print_hex}, {'S', print_sstring},
		{'p', print_ptr}, {'r', print_rev}, {'R', print_rot13}, {'\0', NULL}
	};

	for (j = 0; f_t[j].format; j++)
	{
		if (format == f_t[j].format)
		{
			count += f_t[j].func(arg, flag);
			is_format = 1;
			break;
		}
	}
	if (!is_format)
	{
		count += _putchar('%');
		if (flag->hash)
			count += _putchar('#');
		if (flag->plus)
			count += _putchar('+');
		if (flag->prec)
			count += _putchar('.');
		if (flag->width > 0)
		{
			count += print_num(flag->width);
			_bputchar(-1);
		}
		if (flag->lon)
			count += _putchar('l');
		if (flag->sht)
			count += _putchar('h');
		count += _putchar(format);
	}
	flag->hash = 0;
	flag->plus = 0;
	flag->space = 0;
	flag->lon = 0;
	flag->sht = 0;
	flag->width = 0;
	flag->zero = 0;
	flag->minus = 0;
	flag->prec = 0;
	return (count);
}
