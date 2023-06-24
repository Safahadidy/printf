#include "main.h"
/**
 * scan_for_escape - scan_for_scape
 * @escape: symbol escape
 * Return: 0;
*/
int scan_for_escape(char escape)
{
if (escape != 'c' && escape != 's' && escape != '%')
{
	switch (escape)
	{
		case '\a':
			return (1);
		case '\n':
			return (1);
		case '\r':
			return (1);
		case '\t':
			return (1);
		case '\\':
			return (1);
		case '\'':
			return (1);
		case ' ':
			return (1);
		default:
		return (0);
	}
}
return (0);
}
