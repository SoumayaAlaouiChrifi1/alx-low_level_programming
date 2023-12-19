#include <ctype.h>
#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
for (i = 0 ; i < 10 ; i++)
{
putchar('0' + i);
}
for (i = 0 ; alpha[i] != '\0' ; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
