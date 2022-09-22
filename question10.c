#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0;
    char string[4][2][10]={{"Lokesh","987"},{"Thomas","123"},{"Siraj","456"},{"Binod","111"}};
    char name[10],password[10];
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter Password:");
    scanf("%s",password);
    for(int i=0;i<4;i++)
    {
        if((strcmp(string[i][0],name)==0) && (strcmp(string[i][1],password)==0))
        flag=1;
    }
    if(flag==1)
    printf("Match found!");
    else
    printf("Invalide username and password!");
    return 0;
}