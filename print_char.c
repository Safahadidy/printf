#include "main.h"
/**
 * print_char - print char
 * @c: char
 * Return: 1
*/
int print_char(char c)
{
    write(1, &c, 1);
    return (1);
}
