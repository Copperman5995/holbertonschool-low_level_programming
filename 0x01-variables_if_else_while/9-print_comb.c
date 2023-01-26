/**
*main - dsgadfgadfgdgdfd
*Return: returns 0
*/
#include<stdio.h>
int main(void)
{
int p;
for (p = 0; p <= 10; p++)
{
putchar('0' + p);
if (p <= 8)
{
putchar(',');
putchar(' ');
}
else if (p == 9)
{
break;
}
}
putchar('\n');
return (0);
}
