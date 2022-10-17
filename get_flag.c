#include "main.h"

/**
 * get_flag - set flags
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
	else if (format == 'l')
	{
		flg->lon = 1;
		return (1);
	}
	else if (format == 'h')
	{
		flg->sht = 1;
		return (1);
	}
	else
		return (0);
}
