#include "main.h"
int (*get_specifier_string_int(char s))(va_list arg)
{
    int i;

    sd_format specifiers[] = {
        {'s', _string_format_handler_},
        {'i', print_int},
        {'d', print_int},
        {'\0', NULL}
    };

    i = 0;
    while (i < 3)
    {
        if (specifiers[i].spec == s)
            return (specifiers[i].function);
        i++;
    }
    return (NULL);
}
