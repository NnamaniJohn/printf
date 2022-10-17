#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct flags - flag
 * @plus: +
 * @space: space
 * @hash: #
 * Description: contains flags
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag_t;

/**
 * struct format - struct
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
int print_int(va_list num);
int print_perc(void);
int print_bin(va_list num);
int print_uint(va_list num);
int print_oct(va_list num);
int print_hex(va_list num);
int print_shex(va_list num);
int get_ft(char format, va_list arg);
int print_sstring(va_list s);
int print_ptr(va_list a);
int get_flags(char format, flag_t flg);

#endif /* MAIN_H */
