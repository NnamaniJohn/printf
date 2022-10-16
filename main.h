#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
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
int print_string(va_list s);
int print_num(int n);
int print_int(va_list num);
int print_perc();

#endif /* MAIN_H */
