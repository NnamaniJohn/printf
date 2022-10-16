#include "main.h"

/**
 * p_hex - hex
 * @num: num
 * Return: character count
 */

int p_hex(int num)
{
	int count = 0;

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
