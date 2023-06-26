#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{ int l,m;

  l =  _printf("%d\n",12345);
  m =  printf("%d\n",12345);

  printf("Expected %d\n",m);
  _printf("mine %d\n",l);
_printf("_____________________________\n");
  l =  _printf("%d\n",-2147483647);
  m =  printf("%d\n",-2147483647);
    printf("%d\n",m);
  _printf("%d\n",l);
_printf("_____________________________\n");
   l =  _printf("%d\n",'A');
   m = printf("%d\n",'A');

     printf("%d\n",m);
  _printf("%d\n",l);
  _printf("_____________________________\n");

  l =  _printf("sfsdsdfw%s\n","sdfs");
  m =  printf("sfsdsdfw%s\n","sdfs");

  printf("Expected %d\n",m);
  _printf("mine %d\n",l);
_printf("_____________________________\n");
return (0);
}
