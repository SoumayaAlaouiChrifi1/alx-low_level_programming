#include"main.h"
#include<stdio.h>
#include<ctype.h>
/**
* print_sign - that prints the sign of a number n
* @n: character to be checked
*
* Return: 1 if n is positif, 0 if n is zero , -1 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
