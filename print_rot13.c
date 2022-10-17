#include "main.h"

/**
 * print_rot13 - prints a string in rot13
 * @r: argument list
 * Return: character count
 */

int print_rot13(va_list r)
{
	int i, count;
	char *str;

	str = va_arg(r, char *);

	for (i = 0; str[i]; i++)
	{
	if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
	{
		count += _putchar(str[i] + 13);
	}
	else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
	{
		count += _putchar(str[i] - 13);
	}
	else
		count += _putchar(str[i]);
	}
	return (count);
}
