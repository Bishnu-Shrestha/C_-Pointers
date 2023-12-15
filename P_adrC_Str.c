#include <stdio.h>
#include <string.h>
int main()
{
    char ct[20], c;
    char *p;
    printf("Enter a name of city: ");
    scanf("%s", &ct);
    int i, n = strlen(ct);
    printf("Enter any char to sesrch its location: ");
    scanf(" %c", &c);
    for (i = 0; i <= n; i++)
    {
        if (ct[i] == c)
        {
            p = &ct[i];
        }
    }
    printf("The address of %c is %p", c, p);
    return 0;
}