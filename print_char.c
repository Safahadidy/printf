#include "main.h"
/**
 * print_char - print char
 * @c: char
 * Return: 1
*/
void print_char(char c)
{
	write(1, &c, 1);
}
