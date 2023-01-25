/**
 *main - prints out the sizes of differnt variables
 *Return: main returns 0
 */
#include<stdio.h>
int main(void)
{
char charSize;
int intSize;
float floatSize;
long longSize;
long long int llSize;
printf("Size of a char: %d byte(s)\n", sizeof(charSize));
printf("Size of an int: %d byte(s)\n", sizeof(intSize));
printf("Size of a long int: %ld byte(s)\n", sizeof(longSize));
printf("Size of a long long int: %ld byte(s)\n", sizeof(llSize));
printf("Size of a float: %d byte(s)\n", sizeof(floatSize));
return (0);
}
