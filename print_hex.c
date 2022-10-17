#include "main.h"

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
		count += _putchar('A');
	else if (num % 16 == 11)
		count += _putchar('B');
	else if (num % 16 == 12)
		count += _putchar('C');
	else if (num % 16 == 13)
		count += _putchar('D');
	else if (num % 16 == 14)
		count += _putchar('E');
	else if (num % 16 == 15)
		count += _putchar('F');
	else
		count += _putchar((num % 16) + '0');
	return (count);
}

/**
 * print_hex - prints hexadecimal
 * @num: number
 * Return: int
 */

int print_hex(va_list num, flag_t *flag)
{
	int count = 0;
	int n = va_arg(num, unsigned int);
	
	if (flag->hash && n != 0)
	{
		count += _putchar('0');
		count += _putchar('X');
		flag->hash = 0;
	}

	count += prt_hex(n);
	return (count);
}
