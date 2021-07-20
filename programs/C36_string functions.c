/*
WAP to perform to perform the following operations without using string defined functions
1. to find the length of the string
2. To concatenate two string
3. To find reverse of a string
4. To copy one string to another string.
*/
#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

int length(char a[50])     //function to find length of string
{
    int i=0;
    while(a[i] != '\0')
    {
        i++;
    }
    return i;
}

int concat(char a[50],char b[50])       //function to concatenate 2 strings
{
    int i=0,j=0;
    char c[50];
    while (a[i] != '\0')
    {
        c[j] = a[i];
        i++;
        j++;
    }
    i = 0;
    while (b[i] != '\0')
     {
        c[j] = b[i];
        i++;
        j++;
    }
    c[j] = '\0';
    printf("\nConcatenate of two string : ");
    puts(c);
}

int rev(char a[50])         //function to reverse string
{
    int i,j;
    char b[50];
    j = length(a)-1;
    for(i=0;i<length(a);i++)
    {
        b[i] = a[j];
        j--;
    }
    b[i] = '\0';
    printf("\nString : ");
    puts(a);
    printf("\nReverse of string : ");
    puts(b);
}

int copy(char a[50],char b[50])     //function to copy one string to another string
{
    int i,j;
    for(i=0;i<length(a);i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("\nCopied string : ");
    puts(b);
}

int main()
{
    int op;
    char ans;
    char a[50],b[50];
    do
    {
        printf("\n--------------MENU--------------");
        printf("\n1. to find the length of the string");
        printf("\n2. To concatenate two string");
        printf("\n3. To find reverse of a string");
        printf("\n4. To copy one string to another string.");
        printf("\nEnter your Choice: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1 : printf("\nEnter a word/sentence : ");
                     //scanf("%s",a);
                     //getchar();
                     gets(a);
                     printf("\nLenght of string = %d\n",length(a));
                     break;
            case 2 : printf("\nEnter a word/sentence : ");
                     scanf("%s",a);
                     printf("\nEnter a another word/sentence : ");
                     scanf("%s",b);
                     concat(a,b);
                     break;
            case 3 : printf("\nEnter a word/sentence : ");
                     scanf("%s",a);
                     rev(a);
                     break;
            case 4 : printf("\nEnter a word/sentence : ");
                     scanf("%s",a);
                     copy(a,b);
                     break;
            default: printf("\nInvalid input \n");
                     break;
        }
        printf("\nDo you want to continue : ");
        scanf("%s",&ans);
    }while(ans == 'y' || ans == 'Y');
}
