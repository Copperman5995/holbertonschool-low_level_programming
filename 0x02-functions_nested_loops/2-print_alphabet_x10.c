/**
 * print_alphabet - jbjzfm,kjdfskjEWNKJDSTBJOIGBJKL
 * Return: returns 0
 */
#include"main.h"
void print_alphabet_x10(void)
{
char ab = 'a';
int i;
for (i = 0; i <= 10; i++)
{
while (ab <= 'z')
{
_putchar(ab);
ab++;
}
ab = 'a';
_putchar('\n');
}
}
