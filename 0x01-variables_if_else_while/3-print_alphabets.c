#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * use putchar
 * Return: 0 if success
 */

int main(void)
{
int lw = 'a';
int up = 'A';
while (lw <= 'z')
{
putchar(lw);
lw += 1;
}
while (up <= 'Z')
{
putchar(up);
up += 1;
}
putchar('\n');
return (0);
}
