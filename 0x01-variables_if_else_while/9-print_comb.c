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
if (p <= 9)
{
putchar('0' + p);
putchar(',');
putchar(' ');
else if (p == 9)
{
break;
}
}
}
putchar('\n');
return (0);
}
