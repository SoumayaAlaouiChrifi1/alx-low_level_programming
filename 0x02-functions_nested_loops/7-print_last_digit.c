#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_last_digit - prints the last digit of an integer.
 * @n: The integer to be processed.
 *
 * Description: This function computes
 * the last digit of the integer 'n'
 * Return: The last digit of 'n'.
 *
*/
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar('0' + last_digit);
return (last_digit);
}
