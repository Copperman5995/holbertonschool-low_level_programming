#include <stdio.h>
#include "dog.h"
int main (void)
{
	struct dog my_dog;

	my_dog.name = "Poopy";
	my_dog.age = 3.5;
	my_dog.owner = "Boob";
	print_dog(&my_dog);
	return (0);
}
