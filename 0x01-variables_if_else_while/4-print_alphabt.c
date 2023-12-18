#include <ctype.h>
#include <stdio.h>
/**
 * main - print alphabets except e and q
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
'v', 'w', 'x', 'y', 'z', '\0'};
for (i = 0; alphabet[i] != '\0'; i++)
{
if ((alphabet[i] == 'e') | (alphabet[i] == 'q'))
{
i++;
}
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
