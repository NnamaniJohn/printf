#include "main.h"

/**
 * _get_flg - set flags
 * @format: flag format
 * @flg: flag to set
 * Return: int
 */

int _get_flg(char format, flag_t *flg)
{
	if (format == '+')
	{
		flg->plus = 1;
		return (1);
	}
	else if (format == ' ')
	{
		flg->space = 1;
		return (1);
	}
	else if (format == '#')
	{
		flg->hash = 1;
		return (1);
	}
	else if (format == '0')
	{
		flg->zero = 1;
		return (1);
	}
	else if (format == '-')
	{
		flg->minus = 1;
		return (1);
	}
	else
		return (0);
}
