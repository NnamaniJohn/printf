#include "main.h"

/**
 * print_rot13 - prints a string in rot13
 * @r: argument list
 * Return: character count
 */

int print_rot13(va_list r)
{
	unsigned int i, j, count;
	char *str;
	char prev_char[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char hash_char[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(r, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; prev_char[j]; j++)
		{
			if (str[i] == prev_char[j])
			{
				count += _putchar(hash_char[j]);
				break;
			}
		}
		for (j = 0; prev_char[j]; j++)
		{
			if (str[i] != prev_char[j])
				count += _putchar(str[j]);
		}
	}
	return (count);
}
