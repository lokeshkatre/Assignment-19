#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20]={"lokesh123@gmail.com","nikhil@gmail.com","patelgmail.com","avi@gmail.com","manikgmail.com"};
    for(int i=0;i<5;i++)
    {
        int flag=-1;
        int len=strlen(str[i]);
        for(int j=0;j<len;j++)
        {
            if(str[i][j]=='@')
            {
                flag=1;
                break;
            }
           
        }
        if(flag==-1)
        printf("\n%s ",str[i]);
 
    }
    return 0;
}