#include <string.h>
#include <stdio.h>
int main()
{
    char str[3][15] = {"123.43.23.2", "12.234.345", "1.2.3.4"};
    
    for (int i = 0; i < 3; i++)
    {
        int flag = 1, count = 0;
        char *a = strtok(str[i], ".");
        while (a != NULL)
        {
            int x = atoi(a);
            count++;
            if (x >= 0 && x <= 255)
                flag = 1;
            else
            {
                flag = -1;
                break;
            }
            a=strtok(NULL,".");
        }
        if(flag==1&& count==4)
        printf("valid\n");
        else
        printf("invalid\n");
    }
    return 0;
}