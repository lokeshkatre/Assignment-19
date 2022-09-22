#include <stdio.h>
#include <string.h>

int factNum(int n)
{
    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int mark=-1;
    char username[10];
    char string[6][10] = {"Lokesh", "Mukesh", "Raju", "Lucifer", "Thomas", "Itachi"};
    printf("Enter username:");
    scanf("%s", username);
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(string[i], username) == 0)
        {
            int num, factorial;
            printf("Enter the number to find factorial:");
            scanf("%d", &num);
            factorial = factNum(num);
            printf("%d!=%d", num, factorial);
            mark=1;
            break;
        }
    }
    if(mark==-1)
    printf("ERROR! invalide username!");
    return 0;
}