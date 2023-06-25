#include "main.h"
int (*get_specifier_char_per(char s))(char c)
{
    int i;

    cp specifiers[] = {
        {'c', print_char},
        {'\0', NULL}
    };

    i = 0;
    while (i < 2)
    {
        if (specifiers[i].spec == s)
            return (specifiers[i].function);
        i++;
    }
    return (NULL);
}
