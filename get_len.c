#include "main.h"

/**
 * get_len - set flags
 * @format: flag format
 * @flg: flag to set
 * Return: int
 */

int _get_len(char format, flag_t *flg)
{
	if (format == 'l')
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
