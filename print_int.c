#include "main.h"

/**
 * print_num - print number
 * @n: number to print
 * Return: character count
 */

int print_num(int num)
{
	int count = 0;

	if ((num / 10) > 0)
		count += print_num(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}

/**
 * print_lnum - print number
 * @n: number to print
 * Return: character count
 */

int print_lnum(long int num)
{
	int count = 0;

	if ((num / 10) > 0)
		count += print_num(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}

/**
 * print_num - print number
 * @n: number to print
 * Return: character count
 */

int print_hnum(short int num)
{
	int count = 0;

	if ((num / 10) > 0)
		count += print_num(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}

/**
 * print_int - prints int to stdout
 * @num: integer number
 * Return: character count
 */

int print_int(va_list ar, flag_t *flag)
{
	int n = va_arg(ar, int);
	unsigned int num = n;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	else if (flag->plus)
	{
		count += _putchar('+');
		flag->plus = 0;
	}
	else if (flag->space)
	{
		count += _putchar(' ');
		flag->space = 0;
	}
	if (flag->lon)
		count += print_lnum(num);
	else if (flag->sht)
		count += print_hnum(num);
	else
		count += print_num(num);

	return (count);
}
