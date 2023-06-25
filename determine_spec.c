#include "main.h"
int determine_function(char format, va_list arg)
{
    int (*operation)(va_list ptr);
    int (*op_c)(char c);
    if (format == 'c' || format == '%')
    {
        op_c = get_specifier_char_per(format);
        op_c(va_arg(arg, int));
    }
    else if (format == 'i' || format == 'd' || format == 's')
    {
        operation = get_specifier_string_int(format);
        operation(arg);
    }
    else
    {
        return (-1);
    }
   return (0);
}
