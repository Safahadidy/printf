#include "main.h"
/**
 * print_escape - scan_for_scape
 * @escape: symbol scape
*/
void print_escape(char escape)
{
if (escape != 'c' && escape != 's' && escape != '%')
{
switch (escape)
{
case '\a':
	write(1, &escape, 1);
	break;
case '\n':
	write(1, &escape, 1);
	break;
case '\r':
	write(1, &escape, 1);
	break;
case '\t':
	write(1, &escape, 1);
	break;
case '\\':
	write(1, &escape, 1);
	break;
case '\'':
	write(1, &escape, 1);
	break;
case ' ':
	write(1, &escape, 1);
	break;
default:
	break;
}
}
}
