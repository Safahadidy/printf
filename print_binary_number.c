#include "main.h"
/**
 *_malloc: decimal to binary return char
 *@count:count
 *@b: number
 *Return: number of characters
 */
char *_malloc(int count, int b)
{
int i, rem;
char *new_num = malloc(count + 1);
if (new_num == NULL)
{
	return (NULL);
}
for (i = 0; i < count; i++)
{
rem = b % 2;
new_num[i] = 10 * rem + '0';
b /= 2;
}
new_num[count] = '\0';
return (new_num);
}
/**
 * print_binary_number: binary number
 * @arg:var
 * Return: number of characters
 */
int print_binary_number(va_list arg)
{
int count = 0,  b, temp, bin;
b = va_arg(arg, int);
if (b == 0 || b == 1)
{
char binary = b + '0';
write(1, &binary, 1);
return (1);
}
b = temp;
while (temp > 0)
{
	temp = temp / 2;
	count++;
}
char *new_num = *_malloc(count, b);
if (new_num != NULL)
bin = write(1, new_num, count);
return (-1);
bin = write(1, new_num, count);
free(new_num);
return (bin);
}

