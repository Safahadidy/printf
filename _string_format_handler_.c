#include "main.h"
/**
 * _string_format_handler_  - produces output according to a format
 * @arg : pointer
 * Return: count;
*/
void _string_format_handler_(va_list arg)
{
int j;

char *str = va_arg(arg, char *);
char *new_str = malloc(strlen(str) + 1);
if (new_str == NULL)
	free(new_str);
strcpy(new_str, str);
for (j = 0; new_str[j] != '\0'; j++)
{
	if (!scan_for_escape(new_str[j]))
		write(1, &new_str[j], 1);
	else
		print_escape(new_str[j]);
}
free(new_str);
}
