//occurrence of a letter in a string
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50],b;
    int i,first,last=0;
    printf("enter a word/sentence : ");
    gets(a);
    printf("letter you want to search : ");
    scanf("%c",&b);
    for(i=0;i<(strlen(a));i++)
    {
        if(a[i] == b)
            {
               last = i+1;
            }
    }
    for(i=(strlen(a)-1);i>=0;i--)
    {
        if(a[i] == b)
            {
               first = i+1;
            }
    }
        printf("%d\n",first);
        printf("%d",last);
}
