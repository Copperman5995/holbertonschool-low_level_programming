#include "holberton.h"
#include <stdio.h>

int main(void)
{
	/*char str[] = "testing 6-cap_string, tesingt everthing thats not a letter. this cHecker is a stupidds\" ass;bitch!!!!!!!!!!! why This no work? (betty also a bitch) {testing everthingnow}\n";*/


	char str[] = "Get me, the fuck.\tout of here!\n{this is hell}(fml)yat yat yat yeet; is betty a bitch?\" yes \" test now";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
