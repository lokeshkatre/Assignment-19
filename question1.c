#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][30];int arr[5];
    printf("Enter strings:\n");
    for(int i=0;i<5;i++)
    {
        
        scanf("%s",str[i]);
    }
    for(int i=0;i<5;i++)
    {
        int count=0;
        for(int j=0;str[i][j];j++)
        {
             if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
            count++;
        else if(str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
            count++;
        }
        arr[i]=count;
    }
    for(int i=0;i<5;i++)
    printf("%s :- %d vowels\n",str[i],arr[i]);
    
}