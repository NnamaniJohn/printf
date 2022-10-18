#include "main.h"

/**
 * prt_lshex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_lshex(unsigned long int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += prt_lshex(num / 16);
	if (num % 16 == 10)
		count += _bputchar('a');
	else if (num % 16 == 11)
		count += _bputchar('b');
	else if (num % 16 == 12)
		count += _bputchar('c');
	else if (num % 16 == 13)
		count += _bputchar('d');
	else if (num % 16 == 14)
		count += _bputchar('e');
	else if (num % 16 == 15)
		count += _bputchar('f');
	else
		count += _bputchar((num % 16) + '0');
	return (count);
}

/**
 * prt_hshex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_hshex(unsigned short int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += prt_hshex(num / 16);
	if (num % 16 == 10)
		count += _bputchar('a');
	else if (num % 16 == 11)
		count += _bputchar('b');
	else if (num % 16 == 12)
		count += _bputchar('c');
	else if (num % 16 == 13)
		count += _bputchar('d');
	else if (num % 16 == 14)
		count += _bputchar('e');
	else if (num % 16 == 15)
		count += _bputchar('f');
	else
		count += _bputchar((num % 16) + '0');
	return (count);
}

/**
 * prt_shex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_shex(unsigned int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += prt_shex(num / 16);
	if (num % 16 == 10)
		count += _bputchar('a');
	else if (num % 16 == 11)
		count += _bputchar('b');
	else if (num % 16 == 12)
		count += _bputchar('c');
	else if (num % 16 == 13)
		count += _bputchar('d');
	else if (num % 16 == 14)
		count += _bputchar('e');
	else if (num % 16 == 15)
		count += _bputchar('f');
	else
		count += _bputchar((num % 16) + '0');
	return (count);
}

/**
 * print_shex - prints hexadecimal
 * @num: number
 * Return: int
 */

int print_shex(va_list num, flag_t *flag)
{
	int count = 0, width, i;
	int n = va_arg(num, unsigned int);
	
	if (flag->hash && n != 0)
	{
		count += _bputchar('0');
		count += _bputchar('x');
		flag->hash = 0;
	}
	if (flag->lon)
		count += prt_lshex(n);
	else if (flag->sht)
		count += prt_hshex(n);
	else
		count += prt_shex(n);
	if (flag->minus)
		_bputchar(-1);
	width = count;
	for (i = 0; i < flag->width - width; i++)
	{
		if (flag->zero)
			count += _putchar('0');
		else
			count += _putchar(' ');
	}
	if (!flag->minus)
		_bputchar(-1);
	return (count);
}
