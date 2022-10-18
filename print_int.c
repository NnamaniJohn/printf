#include "main.h"

/**
 * print_num - print number
 * @n: number to print
 * Return: character count
 */

int print_num(int n)
{
	unsigned int num = n;
	int count = 0;

	if (n < 0)
	{
		count += _bputchar('-');
		num = -num;
	}
	
	if ((num / 10) > 0)
		count += print_num(num / 10);
	count += _bputchar((num % 10) + '0');
	return (count);
}

/**
 * print_lnum - print number
 * @n: number to print
 * Return: character count
 */

int print_lnum(long int n)
{
	unsigned long int num = n;
	int count = 0;

	if (n < 0)
	{
		count += _bputchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		count += print_lnum(num / 10);
	count += _bputchar((num % 10) + '0');
	return (count);
}

/**
 * print_num - print number
 * @n: number to print
 * Return: character count
 */

int print_hnum(short int n)
{
	unsigned short int num = n;
	int count = 0;

	if (n < 0)
	{
		count += _bputchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		count += print_hnum(num / 10);
	count += _bputchar((num % 10) + '0');
	return (count);
}

/**
 * print_int - prints int to stdout
 * @num: integer number
 * Return: character count
 */

int print_int(va_list ar, flag_t *flag)
{
	long int n = va_arg(ar, long int);
	int count = 0, width, i;
	
	if (flag->plus && n >= 0)
	{
		count += _bputchar('+');
		flag->plus = 0;
	}
	else if (flag->space && n >= 0)
	{
		count += _bputchar(' ');
		flag->space = 0;
	}
	if (flag->lon)
		count += print_lnum(n);
	else if (flag->sht)
		count += print_hnum(n);
	else
		count += print_num(n);
	width = count;
	for (i = 0; i < flag->width - width; i++)
		count += _putchar(' ');
	_bputchar(-1);
	return (count);
}
