#include "main.h"
/**
 * convert - converts number to an array of characters
 * @num: number
 * @buffer: empty string
 * Return: nothing
*/
char *convert(int num, char buffer[])
{
	sprintf(buffer, "%d", num);
	return (buffer);
}
