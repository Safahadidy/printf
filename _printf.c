#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: result as printf would print
*/

int _printf(const char *format, ...)
{
int i, count;
va_list ptr;
if (format == NULL)
	return (-1);
va_start(ptr, format);
for (i = 0, count = 0; format[i]; i++)
{
if (format[i] != '%')
{
	print_unformatted(format[i]);
		count++;
}
else
{
	specifier = is_switch(ptr, format[i+1]);
	if (specifier =  -1)
		return (-1);
	else
		count++;
}
va_end(ptr);
return (count);
}
