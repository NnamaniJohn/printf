#include "main.h"
#include <stdarg.h>

int print_char(va_list c)
{
    int count = 0;

    count += _putchar(va_arg(c, int));
    return (count);
}

int print_string(va_list s)
{
    int i, count, len;
    char *str = va_arg(s, char *);

    count = len = 0;
    while (str[len])
        len++;
    for (i = 0; i < len; i++)
    {
        count += _putchar(str[i]);
    }

    return (count);
}

int print_percent()
{
    return (_putchar('%'));
}

int print_num(int n)
{
    unsigned int num = n;
    int c = 0;
    
    if (n < 0)
    {
        c += _putchar('-');
        num = -num;
    }
    if ((num / 10) > 0)
        c += print_num(num / 10);
    c += _putchar((num % 10) + '0');
    return (c);
}

int print_integer(va_list num)
{
    return (print_num(va_arg(num, int)));
}

int _printf(const char *format, ...)
{
    va_list arg;
    int i, j, len, count;
    int get_format = 0;
    format_t f_t[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        {'d', print_integer}
    };

    len = 0;
    count = 0;
    while(format[len])
        len++;

    va_start(arg, format);
    for(i = 0; i < len; i++)
    {
        if (get_format)
        {
            for (j = 0; j < 4; j++)
            {
                if (format[i] == f_t[j].format)
                {
                    count += f_t[j].func(arg);
                }
            }
            get_format = 0;
        }
        else
        {
            if (format[i] == '%')
            {
                get_format = 1;
            }
            else
            {
                count += _putchar(format[i]);
            }
        }
    }
    va_end(arg);

    return (count);

}
