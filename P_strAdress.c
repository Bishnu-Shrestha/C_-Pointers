// Program to diaplay adress of strings...
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World!";
    char *p[20];
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        p[i] = &str[i];
    }

    for (i = 0; i < strlen(str); i++)
    {
        printf("Address of %c: %p\n", str[i], p[i]);
    }

    return 0;
}
