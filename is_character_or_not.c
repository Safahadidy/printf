#include "main.h"
int char_or_not(char c)
{
    int i;
    i = 0;
    while ((i >= 32 || i <= 47) ||
    (i >= 58 || i <= 64) || (i >= 65 || i <= 90) || (i >= 91 || i <= 126))
    {
        if ((int)c == i)
            return (1);
        i++;
    }   
    return (0);
}
