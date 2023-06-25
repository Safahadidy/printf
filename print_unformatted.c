#include "main.h"
/**
 * print_unformatted - prints unformatted text
 * @c: unformatted text
*/
void print_unformatted(char c)
{
	if (!scan_for_escape(c))
	{
		write(1, &c, 1);
		return;
	}
	print_escape(c);
}
