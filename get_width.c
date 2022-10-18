#include "main.h"

/**
 * _get_width - get width
 * @format: format
 * @flag: flag
 * Return: 1 if field width is specified, 0 otherwise or
 * if specified field width has been read
 */

int _get_width(char format, flag_t *flag)
{
	if (flag->width == 0 && format > '0' && format <= '9')
	{
		flag->width = format - '0';
		return (1);
	}
	else if (flag->width > 0 && format >= '0' && format <= '9')
	{
		flag->width = (flag->width * 10) + (format - '0');
		return (1);
	}
	else
		return (0);
}
