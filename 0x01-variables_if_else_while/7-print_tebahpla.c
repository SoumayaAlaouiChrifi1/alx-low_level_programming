#include <ctype.h>
#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
char alphabet[] = {'a', 'b', 'c', 'd', 'e',
'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

for (i = sizeof(alphabet) - 1 ; i >= 0 ; i--)
{
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
