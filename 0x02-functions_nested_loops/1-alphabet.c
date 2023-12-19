#include "main.h"
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print all alphabets
 *
*/
void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
size_t i;
for (i = 0 ; i < sizeof(alphabet) - 1 ; i++)
{
putchar(alphabet[i]);
}
putchar('\n');
}
