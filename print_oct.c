#include "main.h"

/**
 * prt_loct - print binary
 * @num: number
 * Return: character count
 */

int prt_loct(unsigned long int num)
{
	int count = 0;

	if ((num / 8) > 0)
		count += prt_loct(num / 8);
	count += _bputchar((num % 8) + '0');
	return (count);
}

/**
 * prt_hoct - print binary
 * @num: number
 * Return: character count
 */

int prt_hoct(unsigned short int num)
{
	int count = 0;

	if ((num / 8) > 0)
		count += prt_hoct(num / 8);
	count += _bputchar((num % 8) + '0');
	return (count);
}

/**
 * prt_oct - print binary
 * @num: number
 * Return: character count
 */

int prt_oct(unsigned int num)
{
	int count = 0;

	if ((num / 8) > 0)
		count += prt_oct(num / 8);
	count += _bputchar((num % 8) + '0');
	return (count);
}

/**
 * print_oct - prints binary
 * @num: number
 * Return: int
 */

int print_oct(va_list num, flag_t *flag)
{
	int count = 0, width, i;
	int n = va_arg(num, unsigned int);

	if (flag->hash && n != 0)
	{
		count += _bputchar('0');
		flag->hash = 0;
	}

	if (flag->lon)
		count += prt_loct(n);
	else if (flag->sht)
		count += prt_hoct(n);
	else
		count += prt_oct(n);
	/*if (flag->minus)
		_putchar(-1);*/
	width = count;
	for (i = 0; i < flag->width - width; i++)
		count += _putchar(' ');
	/*if (!flag->minus)*/
	_bputchar(-1);
	return (count);
}
