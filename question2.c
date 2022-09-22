#include <stdio.h>
#include<string.h>
int main()
{
    char str[10][30],s[30];
    int arr[5];
    printf("Enter strings:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
    }
    printf("Sorted city names are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}