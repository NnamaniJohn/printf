#include "main.h"

/**
 * get_flag - set flags
 * @format: flag format
 * @flg: flag to set
 * Return: int
 */

int get_flag(char format, flag_t *flg)
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
	else
		return (0);
}
