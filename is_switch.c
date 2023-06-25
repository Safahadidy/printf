#include "main.h"
/**
 * is_switch - imp
 * @s: the char to be checked as a specefier.
 * @ptr: the argument to match the speci
 * Return: the wanted result as printf would print
 */
int is_switch(va_list ptr, char s)
{
switch (s)
{
case 's':
	_string_format_handler_(ptr);
        break;
case 'c':
	print_char(va_arg(ptr, int));
	break;
case '%':
	print_per();
	break;
case 'd':
	print_int(ptr);
	break;
case 'i':
	print_int(ptr);
	break;
default :
	print_unformatted(s);
}
return (0);
}
