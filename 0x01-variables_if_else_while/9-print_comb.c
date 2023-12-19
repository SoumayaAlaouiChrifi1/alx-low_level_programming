#include <ctype.h>
#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
