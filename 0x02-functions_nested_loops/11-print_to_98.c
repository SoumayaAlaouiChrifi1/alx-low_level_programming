#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_last_digit - Prints all natural numbers from n to 98.
 * @n: The integer to be processed.
**/
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
printf("\n");
}
