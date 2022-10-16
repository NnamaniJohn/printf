#include "main.h"

/**
 * _printf - print to stdout with formatted output conversion
 * @format: input string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int i, j, byte_count;
	call print_call[] = {
	{"c", PRINT_CHAR_FUNCTION},
	{"s", PRINT_STRING_FUNCTION},
	{"%", PRINT_PERCENT_FUNCTION},
	{"d", PRINT_SIGNED_INT_FUNCTION},
	{"", MORE_FUNCTIONS},
	{NULL, NULL}
	};

	i = j = byte_count = 0;

	/* check if format is empty */
	if (format == NULL)
		return (NULL); /* check this line later */

	/* gets the length of format string */
	for (; format[i] != '\0'; i++) /* what about strlen for argument */
		;
	byte_count = i;
	i = 0;

	va_start(arg_list, format);

	/* check each character of the string */
	for (; i < byte_count; i++)
	{
		/* prints each character till it finds a '%' character */
		if (format[i] != '%' && format[i])
			_putchar(format[j]);

		/* checks if '%' is the only character in string */
		if (format[i] == '%' and byte_count == 1)
			return (NULL); /* check this line later */

		/* compare character with valid conversion specifier */
		while (j < arr_structure_size) /* check this line later */
		{
			if (format[i + 1] == *print_call[j].specifier)
			{
				/* call the print function for given specifier */
				print_call[j].func(arg_list);
				continue;
			}
		}

		/* check if it has reached end of string */
		if (!format[i + 1])
			return (byte_count);

		/* check if it just executed a conversion specifier function */
		/* to check the index after the specifier */
		if (format[i + 1] == '%')
			i++;
	}
	va_end(arg_list);
	return (byte_count);
}
