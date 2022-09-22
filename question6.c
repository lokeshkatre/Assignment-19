#include<string.h>
#include<stdio.h>
int main()
{
    char str[5][20]={"lokesh","manam","ritesh","sts","virat"};
    char string[10];
    for(int i=0;i<5;i++)
    {
        strcpy(string,str[i]);
        for(int j=0;j<strlen(str[i])/2;j++)
        {
            char temp=string[j];
            string[j]=string[strlen(str[i])-1-j];
            string[strlen(str[i])-1-j]=temp;
        }
        if(strcmp(str[i],string)==0)
        printf("%s\n",str[i]);
    }
    return 0;
}