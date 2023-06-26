#include "main.h"

int calculate_returned_value(const char *format, va_list ptr)
{
    int i, returned_value, num;

    char *str = va_arg(ptr, char *);
    char *new_str = malloc(strlen(str) + 1);

    num = va_arg(ptr, int);
    if (new_str == NULL)
	    free(new_str);
    strcpy(new_str, str);
    i = 0;
    returned_value = 0;

    while (format[i] != '\0')
    {
        returned_value++;
        i++;
    }
    while (format[i] != '\0')
    {
        if (format[i] == '%' && is_specifier_or_not(format[i + 1]))
        {
            returned_value--;
            if (format[i + 1] == 's' && new_str)
                returned_value += strlen(new_str);
            else if (format[i + 1] == 'c' || format[i + 1] == '%')
                returned_value += 1;
            else if (format[i + 1] == 'd' || format[i + 1] == 'i')
                returned_value += calculate_number_of_digits(num);
            i++;
        }
        returned_value++;
        i++;
    }
    free(new_str);
    return (returned_value);
}
