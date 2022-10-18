#include "main.h"

/**
 * prt_lhex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_lhex(unsigned long int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += prt_lhex(num / 16);
	if (num % 16 == 10)
		count += _bputchar('A');
	else if (num % 16 == 11)
		count += _bputchar('B');
	else if (num % 16 == 12)
		count += _bputchar('C');
	else if (num % 16 == 13)
		count += _bputchar('D');
	else if (num % 16 == 14)
		count += _bputchar('E');
	else if (num % 16 == 15)
		count += _bputchar('F');
	else
		count += _bputchar((num % 16) + '0');
	return (count);
}

/**
 * prt_hhex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_hhex(unsigned short int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += prt_hhex(num / 16);
	if (num % 16 == 10)
		count += _bputchar('A');
	else if (num % 16 == 11)
		count += _bputchar('B');
	else if (num % 16 == 12)
		count += _bputchar('C');
	else if (num % 16 == 13)
		count += _bputchar('D');
	else if (num % 16 == 14)
		count += _bputchar('E');
	else if (num % 16 == 15)
		count += _bputchar('F');
	else
		count += _bputchar((num % 16) + '0');
	return (count);
}

/**
 * prt_hex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_hex(unsigned int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += prt_hex(num / 16);
	if (num % 16 == 10)
		count += _bputchar('A');
	else if (num % 16 == 11)
		count += _bputchar('B');
	else if (num % 16 == 12)
		count += _bputchar('C');
	else if (num % 16 == 13)
		count += _bputchar('D');
	else if (num % 16 == 14)
		count += _bputchar('E');
	else if (num % 16 == 15)
		count += _bputchar('F');
	else
		count += _bputchar((num % 16) + '0');
	return (count);
}

/**
 * print_hex - prints hexadecimal
 * @num: number
 * Return: int
 */

int print_hex(va_list num, flag_t *flag)
{
	int count = 0, width, i;
	int n = va_arg(num, unsigned int);
	
	if (flag->hash && n != 0)
	{
		count += _bputchar('0');
		count += _bputchar('X');
		flag->hash = 0;
	}

	if (flag->lon)
		count += prt_lhex(n);
	else if (flag->sht)
		count += prt_hhex(n);
	else
		count += prt_hex(n);
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
