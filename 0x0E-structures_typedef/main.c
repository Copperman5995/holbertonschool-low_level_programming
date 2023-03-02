#include <stdio.h>
#include "dog.h"
int main (void)
{
	struct dog_t my_dog;

	my_dog.name = "poopy";
	my_dog.age = 3.5;
	my_dog.owner = "boob";
	printf("my name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
