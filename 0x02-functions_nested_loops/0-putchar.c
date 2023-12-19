#include <unistd.h>
#include <stdio.h>
/**
* main - print putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
char str[] = "_putchar\n";
write(STDOUT_FILENO, str, sizeof(str) - 1);
return (0);
}
