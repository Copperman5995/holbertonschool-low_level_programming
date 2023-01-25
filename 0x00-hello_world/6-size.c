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
printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
printf("Size of an int: %zu byte(s)\n", sizeof(intSize));
printf("Size of a long int: %zu byte(s)\n", sizeof(intSize));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longSize));
printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));
return (0);
}
