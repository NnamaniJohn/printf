#include "main.h"

/**
 * p_hex - hex
 * @num: num
 * Return: int
 */

int p_hex(int num)
{
	int c = 0;

	if (num % 16 == 10)
		c += _putchar('A');
	else if (num % 16 == 11)
		c += _putchar('B');
	else if (num % 16 == 12)
		c += _putchar('C');
	else if (num % 16 == 13)
		c += _putchar('D');
	else if (num % 16 == 14)
		c += _putchar('E');
	else if (num % 16 == 15)
		c += _putchar('F');
	else
		c += _putchar((num % 16) + '0');
	return (c);
}

/**
 * print_sstring - prints string to stdout
 * @s: string to print
 * Return: count of character
 */

int print_sstring(va_list s)
{
	int i, count, len;
	char *str = va_arg(s, char *);

	count = len = 0;
	if (str == NULL)
		str = ("(null)");
	while (str[len])
		len++;
	for (i = 0; i < len; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += p_hex(str[i] / 16);
			count += p_hex(str[i] % 16);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
