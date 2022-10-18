#include "main.h"

/**
 * _prt_hex - print hexadecimal
 * @num: number
 * Return: character count
 */

int _prt_hex(unsigned long int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += _prt_hex(num / 16);
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
 * print_ptr - prints a pointer
 * @a: the address to print
 * @flag: flag
 * Return: character count
 */

int print_ptr(va_list a, flag_t *flag)
{
	unsigned long int arg;
	unsigned int count, i;
	int width, j;
	char *null = ("(nil)");

	count = 0;
	arg = va_arg(a, unsigned long int);
	if (!arg)
	{
		for (i = 0; null[i]; i++)
			count += _bputchar(null[i]);
	}
	else
	{
		_bputchar('0');
		_bputchar('x');
		count += 2;
		count += _prt_hex(arg);
	}
	width = count;
	for (j = 0; j < flag->width - width; j++)
	{
		if (flag->zero)
			count += _putchar('0');
		else
			count += _putchar(' ');
	}
	_bputchar(-1);
	return (count);
}
