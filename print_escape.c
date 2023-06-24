#include "main.h"
/**
 * print_escape - scan_for_scape
 * @escape: symbol scape
*/
void print_escape(char escape)
{
char es;
if (escape != 'c' && escape != 's' && escape != '%')
{
switch (escape)
{
case '\a':
	es = '\a';
	write(1, &es, 1);
	break;
case '\n':
	es = '\n';
	write(1, &es, 1);
	break;
case '\r':
	es = '\r';
	write(1, &es, 1);
	break;
case '\t':
	es = '\t';
	write(1, &es, 1);
	break;
case '\\':
	es = '\\';
	write(1, &es, 1);
	break;
case '\'':
	es = '\'';
	write(1, &es, 1);
	break;
case ' ':
	es = ' ';
	write(1, &es, 1);
	break;
default:
	break;
}
}
}
