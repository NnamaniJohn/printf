#include "main.h"

/**
 * print_unum - print number
 * @num: number to print
 * Return: character count
 */

int print_unum(unsigned int num)
{
	int count = 0;

	if ((num / 10) > 0)
		count += print_unum(num / 10);
	count += _bputchar((num % 10) + '0');
	return (count);
}

/**
 * print_ulnum - print number
 * @num: number to print
 * Return: character count
 */

int print_ulnum(unsigned long int num)
{
	int count = 0;

	if ((num / 10) > 0)
		count += print_ulnum(num / 10);
	count += _bputchar((num % 10) + '0');
	return (count);
}

/**
 * print_uhnum - print number
 * @num: number to print
 * Return: character count
 */

int print_uhnum(unsigned short int num)
{
	int count = 0;

	if ((num / 10) > 0)
		count += print_uhnum(num / 10);
	count += _bputchar((num % 10) + '0');
	return (count);
}

/**
 * print_uint - prints unsigned int to stdout
 * @num: unsigned integer number
 * Return: character count
 */

int print_uint(va_list num, flag_t *flag)
{
	int count = 0, width, i;

	if (flag->lon)
		count += print_ulnum(va_arg(num, unsigned long int));
	else if (flag->sht)
		count += print_uhnum(va_arg(num, unsigned int));
	else
		count += print_unum(va_arg(num, unsigned int));
	width = count;
	for (i = 0; i < flag->width - width; i++)
		count += _putchar(' ');
	_bputchar(-1);
	return (count);
}
