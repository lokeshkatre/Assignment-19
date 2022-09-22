#include <stdio.h>
int main()
{
    char str[20][30];
    int n;
    printf("Enter number of strings:");
    scanf("%d", &n);
    printf("\nEnter strings:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    printf("\nstrings are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}