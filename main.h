#ifndef MAIN_H
#define MAIN_H

/**
 * struct ft - struct
 * @format: format
 * @func: function
 * Description: contains the type and the format to print.
 */
typedef struct format
{
	char format;
	int (*func)();
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);

#endif /* MAIN_H */
