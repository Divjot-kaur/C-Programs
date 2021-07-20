//letter search in string
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50],b;
    int i,flag = 0;
    printf("enter a word/sentence : ");
    gets(a);
    printf("letter you want to search : ");
    scanf("%c",&b);
    for(i=0;i<(strlen(a));i++)
    {
        if(a[i] == b)
            {
                flag = 1;
            }
    }
    if(flag == 1)
        printf("\nletter found \n");
    else
        printf("\nletter NOT found \n");
}
