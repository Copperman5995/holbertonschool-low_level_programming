#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s;
    char *s2;
    char *s3;

    s = str_concat("Hello", NULL);
    s2 = str_concat(NULL, "Hello");
    s3 = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
