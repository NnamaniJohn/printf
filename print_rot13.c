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
	/*int printed;*/
	/*char prev_char[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char hash_char[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";*/
	char *prev_char, *hash_char;
	str = va_arg(r, char *);


	/*for (i = 0; str[i]; i++)
	{
		printed = 0;
		for (j = 0; prev_char[j]; j++)
		{
			if (str[i] == prev_char[j])
			{
				count += _putchar(hash_char[j]);
				printed = 1;
				break;
			}
			else if (str[i] != prev_char[j] && (printed == 0 || !prev_char[j]))
				count += _putchar(str[i]);

		}
		//if (printed == 0 || !prev_char[j])
		//	count += _putchar(str[i]);
	}*/
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
