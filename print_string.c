#include "main.h"

/**
 * print_string - prints string to stdout
 * @s: string to print
 * @flag: flag
 * Return: character count
 */

int print_string(va_list s, flag_t *flag)
{
	int i, count, len, width;
	char *str = va_arg(s, char *);

	count = len = 0;
	if (str == NULL)
		str = ("(null)");
	while (str[len])
		len++;
	width = len;
	if (!flag->minus)
	{
		for (i = 0; i < flag->width - width; i++)
			count += _putchar(' ');
	}
	for (i = 0; i < len; i++)
	{
		count += _putchar(str[i]);
	}
	if (flag->minus)
	{
		for (i = 0; i < flag->width - width; i++)
			count += _putchar(' ');
	}
	return (count);
}
