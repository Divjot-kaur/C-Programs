//Write a program to shift every element of an array to circularly right. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],i,size;
    printf("Enter size of array : ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter a number in array : ");
        scanf("%d",&a[i]);
    }
    int t = a[size-1];
    for(i=(size-1);i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=t;
    printf("New array : ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}

