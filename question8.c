#include<stdio.h>
#include<string.h>
int main()
{
    int diff,min=1000;
    char string[4][10]={"bottle","make","food","phone"};
    char word1[10] , word2[10];
    printf("Enter first word: ");
    scanf("%s",word1);
    printf("Enter second word: ");
    scanf("%s",word2);
    int mark1=-1,mark2=-1;
    for(int i=0;i<4;i++)
    {
        if(strcmp(string[i],word1)==0)
        mark1=i;
        if(strcmp(string[i],word2)==0)
        mark2=i;
        if(mark1!=-1 && mark2!=-1)
        diff=abs(mark1-mark2)-1;
        if(diff<min)
        min=diff;
    }
    printf("%d",min);
    return 0;
}