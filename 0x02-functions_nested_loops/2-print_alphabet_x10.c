#include "main.h"
#include <stdio.h>
/**
*  prints 10 times the alphabe
*
*/
void print_alphabet_x10(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int j;
size_t i;
for (j = 0 ; j < 10 ; j++)
{
for (i = 0; i < sizeof(alphabet) - 1; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
}
}
