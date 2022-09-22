#include <stdio.h>
#include<string.h>
int main()
{
    char str[7][10] = {"lokesh", "Ramesh", "good", "bad", "daredavil", "luffi", "minato"};
    int index;
    char s[40];
    printf("Enter string:");
    scanf("%s",s);
    printf("\n\n");
    for (int i = 0; i < 7 ; i++)
    {
        
        if(strcmp(s,str[i])==0)
        printf("%d no. string\n",i);
    }
    return 0;
}