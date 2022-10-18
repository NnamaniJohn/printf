#include "main.h"


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
