// Program to find reverse of string using pointer......
#include <stdio.h>
int main()
{
    char a[20], r[20];
    char *apt = a, *rpt = r;
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%s", a);
    // fgets(a, sizeof(a), stdin);
    while (*apt != '\0')
    {
        apt++;
        i++;
    }
    // printf("%d\n", i);
    while (i >= 0)
    {
        apt--;
        *rpt = *apt;
        rpt++;
        --i;
    }
    printf("reverse is %s..", r);

    return 0;
}