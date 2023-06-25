#include "main.h"
int is_specifier_or_not(char s)
{
    int i;
    char array[5] = {'c', 's', '%', 'd', 'i'};
    for (i = 0; i < 5; i++)
    {
        if (s == array[i])
        {
            return (1);
        }
    }
    return (0);
}
